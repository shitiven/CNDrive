//
//  AliOSSAPI.m
//  CNDrive
//
//  Created by shitiven on 12-9-6.
//  Copyright (c) 2012年 shitiven. All rights reserved.
//

#import "AliOSSAPI.h"
#import "AliOSSRequest.h"
#import "AFHTTPRequestOperation.h"
#import "AliOSSUtil.h"

@implementation AliOSSAPI

- (id) initWithStream:(NSInputStream *)stream{
    if (!(self = [super init])) {
        return nil;
    }
    
    _inputStream = stream;
    
    return self;
}

- (NSDictionary *) getDefaultHeaders{
    
    NSMutableDictionary *_requestHeaders = [[NSMutableDictionary alloc] initWithCapacity:2];
    
    [_requestHeaders setObject:[AliOSSUtil getGMT] forKey:@"Date"];
    [_requestHeaders setObject:[OSS_HOST stringByReplacingOccurrencesOfString:@"http://"
                                                                   withString:@""] forKey:@"Host"];
    
    return (NSDictionary *)_requestHeaders;
}

-(void) bucketOperation:(NSString *)method bucket:(NSString *)bucket headers:(NSDictionary *)headers params:(NSDictionary *)params success:(void (^)(AliOSSAPI *oss))success failure:(void (^)(AliOSSAPI *oss))failure{
    
    NSMutableDictionary *requestHeaders = [[NSMutableDictionary alloc] initWithDictionary:[self getDefaultHeaders]];
    
    for (NSString *key in headers) {
        [requestHeaders setObject:[headers objectForKey:key] forKey:key];
    }
    
    NSString *resource = nil;
    if ([params objectForKey:@"acl"]){
        resource = [NSString stringWithFormat:@"/%@/?acl", bucket];
    }else{
        resource = [NSString stringWithFormat:@"/%@/", bucket];
    }
    
    [self requestWithMethod:method resource:resource headers:headers success:success failure:failure];

}

+ (AliOSSAPI *) createBucket:(NSString *)bucket acl:(NSString *)acl headers:(NSDictionary *)headers success:(void (^)(AliOSSAPI *oss))success failure:(void (^)(AliOSSAPI *oss))failure{
    
    static AliOSSAPI *_sharedClient = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedClient = [[[self class] alloc] init];
    });
    
    if (headers == nil) {
        headers = [[NSDictionary alloc] init];
    }
    
    if (acl) {
        
        NSMutableDictionary *tmpHeaders = [headers mutableCopy];
        [tmpHeaders setValue:acl forKey:@"x-oss-acl"];
        headers = (NSDictionary *)tmpHeaders;

    }
    
    [_sharedClient bucketOperation:@"PUT" bucket:bucket headers:headers params:nil success:success failure:failure];
    
    return _sharedClient;
    
}

+ (AliOSSAPI *) listBuckets:(void (^)(AliOSSAPI *oss))success failure:(void (^)(AliOSSAPI *oss))failure{
    
    static AliOSSAPI *_sharedClient = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedClient = [[[self class] alloc] init];
    });
    
    [_sharedClient requestWithMethod:@"GET" resource:@"/" headers:nil success:success failure:failure];
    
    return _sharedClient;
    
}

+ (AliOSSAPI *) getBucketAcl:(NSString *)bucket success:(void (^)(AliOSSAPI *oss))success failure:(void (^)(AliOSSAPI *oss))failure{
    static AliOSSAPI *_sharedClient = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedClient = [[[self class] alloc] init];
    });
    
    NSDictionary *params = [NSDictionary dictionaryWithObject:@"" forKey:@"acl"];
    
    [_sharedClient bucketOperation:@"GET" bucket:bucket headers:nil params:params success:success failure:failure];
    
    return _sharedClient;
    
}

+ (AliOSSAPI *) deleteBucket:(NSString *)bucket success:(void (^)(AliOSSAPI *oss))success failure:(void (^)(AliOSSAPI *oss))failure{
    static AliOSSAPI *_sharedClient = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedClient = [[[self class] alloc] init];
    });
    
    [_sharedClient bucketOperation:@"DELETE" bucket:bucket headers:nil params:nil success:success failure:failure];
    
    return _sharedClient;
}

+ (AliOSSAPI *) getObjectsFromBucket:(NSString *)bucket prefix:(NSString *)prefix marker:(NSString *)marker delimiter:(NSString *)delimiter maxkeys:(NSString *)maxkeys headers:(NSDictionary *)headers success:(void (^)(AliOSSAPI *oss))success failure:(void (^)(AliOSSAPI *oss))failure{
    
    static AliOSSAPI *_sharedClient = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedClient = [[[self class] alloc] init];
    });
    
    NSDictionary *params = [NSDictionary dictionaryWithObjects:[NSArray arrayWithObjects:prefix,
                                                                marker,
                                                                delimiter,
                                                                maxkeys,nil] forKeys:[NSArray arrayWithObjects: @"prefix",
                                                                                      @"marker",
                                                                                      @"delimiter",
                                                                                      @"max-keys",nil]];
    
    
    [_sharedClient bucketOperation:@"GET" bucket:bucket headers:headers params:params success:success failure:failure];
    return _sharedClient;
    
}

+ (AliOSSAPI *) putObjectFromFile:(NSString *)filename inBucket:(NSString *)bucket object:(NSString *)object headers:(NSDictionary *)headers success:(void (^)(AliOSSAPI *oss))success failure:(void (^)(AliOSSAPI *oss))failure{
    
    NSInputStream *inputStream  = [[NSInputStream alloc] initWithFileAtPath:filename];
    
    NSString      *contentType  = [AliOSSUtil MIMETypeForExtension:[filename pathExtension]];
    int           contentLength = [[[[NSFileManager defaultManager] attributesOfItemAtPath:filename error:nil] valueForKey:NSFileSize] intValue];
    
    static AliOSSAPI *_sharedClient = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedClient = [[[self class] alloc] initWithStream:inputStream];
    });
    
    NSMutableDictionary *requestHeaders = [headers mutableCopy];
    if (requestHeaders == nil) {
        requestHeaders = [[NSMutableDictionary alloc] initWithCapacity:2];
    }
    
    [requestHeaders setObject:contentType forKey:@"Content-Type"];
    [requestHeaders setObject:[NSString stringWithFormat:@"%d",contentLength]  forKey:@"Content-Length"];
    [requestHeaders setObject:@"100-Continue"  forKey:@"Expect"];
    
    NSString *resource = [NSString stringWithFormat:@"/%@/%@", bucket, object];
        
    [_sharedClient requestWithMethod:@"PUT" resource:resource headers:requestHeaders success:success failure:failure];
    
    return _sharedClient;
}

- (void) requestWithMethod:(NSString *)method resource:(NSString *)resource headers:(NSDictionary *)headers success:(void (^)(AliOSSAPI *oss))success failure:(void (^)(AliOSSAPI *oss))failure{
    
    NSMutableDictionary *tmpHeaders = [[self getDefaultHeaders] mutableCopy];
    for (NSString *key in [headers keyEnumerator]) {
        [tmpHeaders setObject:[headers objectForKey:key] forKey:key];
    }
    
    AliOSSRequest *request = [AliOSSRequest requestWithMethod:method resource:resource];
    
    [request setRequestHeaders:(NSDictionary *)tmpHeaders];

    if (_inputStream) {
        
        [request sendRequestWithStream:_inputStream success:^(AFHTTPRequestOperation *operation){
            
            self.responseString = operation.responseString;
            self.operation      = operation;
            if (success) success(self);
            
        } failure:^(AFHTTPRequestOperation *operation){
            
            self.responseString = operation.responseString;
            self.operation      = operation;
            if (failure) failure(self);
            
        }];
        
        self.operation = request.operation;

        return;
    }
    
    [request sendRequest:^(AFHTTPRequestOperation *operation){
        
        self.responseString = operation.responseString;
        self.operation      = operation;
        if (success) success(self);
        
    } failure:^(AFHTTPRequestOperation *operation){
        
        self.responseString = operation.responseString;
        self.operation      = operation;
        if (failure) failure(self);
        
    }];
    
    self.operation = request.operation;

}

@end
