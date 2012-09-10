//
//  AliOSSRequest.m
//  CNDrive
//
//  Created by shitiven on 12-9-7.
//  Copyright (c) 2012年 shitiven. All rights reserved.
//

#import "AliOSSRequest.h"
#import "NSData+HMAC.h"
#import "NSData+Base64.h"
#import "AFHTTPRequestOperation.h"
#import "AliOSSUtil.h"

@implementation AliOSSRequest
@synthesize method = _method, path = _path, operation = _operation;

+ (AliOSSRequest *) requestWithMethod:(NSString *)method resource:(NSString *)resource{
    static AliOSSRequest *_sharedClient = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedClient = [[[self class] alloc] initWithBaseURL:[NSURL URLWithString:OSS_HOST]];
    });
    _sharedClient.method = method;
    _sharedClient.path   = resource;
    return _sharedClient;
}

- (NSString *)createAndGetAuthorizationSign:(NSDictionary *)headers{
    NSString *contentMd5  = [self safeGetHeader:@"Content-Md5" headers:headers];
    NSString *contentType = [self safeGetHeader:@"Content-Type" headers:headers];
    NSString *date = [self safeGetHeader:@"Date" headers:headers];
    NSString *canonicalizedResource = _path;
    NSString *canonicalizedOssHeaders = nil;
    
    NSDictionary *tmpHeaders = [self formatHeaders:headers];
    if([tmpHeaders count] > 0){
        NSMutableArray *keyArray = [[NSMutableArray alloc] initWithCapacity:2];
        for (NSString *key in [headers keyEnumerator]) {
            [keyArray addObject:key];
        }
        NSArray *sortedArray = [keyArray sortedArrayUsingSelector:@selector(caseInsensitiveCompare:)];
        NSMutableArray *sortResult = [[NSMutableArray alloc] initWithCapacity:2];
        for (int i = 0; i < [sortedArray count]; i ++) {
            NSString *key   = [NSString stringWithString:[sortedArray objectAtIndex:i]];
            NSString *value = [NSString stringWithString:[tmpHeaders objectForKey:key]];
            if([key hasPrefix:@"x-oss-"]){
                [sortResult addObject:[NSString stringWithFormat:@"%@:%@", key, value]];
            }
        }
        if ([sortResult count] > 0){
            canonicalizedOssHeaders = [sortResult componentsJoinedByString:@"\n"];
        }
    }
    
    NSString *stringToSign = @"";
    if (canonicalizedOssHeaders) {
        stringToSign = [NSString stringWithFormat:@"%@\n%@\n%@\n%@\n%@\n%@", _method, contentMd5, contentType, date,canonicalizedOssHeaders, canonicalizedResource];
    }else{
        stringToSign = [NSString stringWithFormat:@"%@\n%@\n%@\n%@\n%@", _method, contentMd5, contentType, date,canonicalizedResource];
    }
    
    NSData *signData = [stringToSign dataUsingEncoding:NSUTF8StringEncoding];

    return [[signData sha1HashWithKey:[OSS_ACCESS_KEY_SECRET dataUsingEncoding:NSUTF8StringEncoding]] base64EncodedString];
}

- (NSDictionary *)formatHeaders:(NSDictionary *)headers{
    
    NSMutableDictionary *tmpHeaders = [[NSMutableDictionary alloc] initWithCapacity:2];
    for (NSString *key in [headers keyEnumerator]) {
        if ([[key lowercaseString] hasPrefix:@"x-oss-"]){
            [tmpHeaders setObject:[headers objectForKey:key] forKey:[key lowercaseString]];
        }else{
            [tmpHeaders setObject:[headers objectForKey:key] forKey:key];
        }
    }
    
    return tmpHeaders;
    
}

- (NSString *)safeGetHeader:(NSString *)key headers:(NSDictionary *)headers{
    if ([headers objectForKey:key]){
        return [headers objectForKey:key];
    }
    return @"";
}

- (NSDictionary *)addParam:(NSString *)key value:(id)value{
    [_params setObject:value forKey:key];
    return _params;
}

- (NSDictionary *)removeParam:(NSString *)key{
    [_params removeObjectForKey:key];
    return _params;
}

- (void)addHeader:(NSString *)key value:(NSString *)value{
    [self setDefaultHeader:key value:value];
}

- (void)setRequestHeaders:(NSDictionary *)headers{
    for (NSString *key in headers) {
        [self setDefaultHeader:key value:[headers objectForKey:key]];
    }
}

- (id)initWithBaseURL:(NSURL *)url {
    self = [super initWithBaseURL:url];
    if (!self) {
        return nil;
    }
    
    _params  = [[NSMutableDictionary alloc] initWithCapacity:2];
    
    [self registerHTTPOperationClass:[AFHTTPRequestOperation class]];
        
    return self;
}

- (NSMutableURLRequest *)getAndSetRequest{
    
    NSMutableURLRequest *theRequest   = [self requestWithMethod:self.method path:[self.path stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding] parameters:_params];
    
    NSString *authorizationHeader = [NSString stringWithFormat:@"OSS %@:%@", OSS_ACCESS_KEY_ID, [self createAndGetAuthorizationSign:[theRequest allHTTPHeaderFields]]];
    
    [theRequest setValue:authorizationHeader forHTTPHeaderField:@"Authorization"];
    
    return theRequest;
}

- (void)sendOperationWithRequest:(NSMutableURLRequest *)theRequest success:(void (^)(AFHTTPRequestOperation *operation))success failure:(void (^)(AFHTTPRequestOperation *operation))failure{

    AFHTTPRequestOperation *operation = [[AFHTTPRequestOperation alloc]initWithRequest:theRequest];
    
    [operation  setCompletionBlockWithSuccess:^(AFHTTPRequestOperation *operation, id responseObject) {
        
        success(operation);
        
    }failure:^(AFHTTPRequestOperation *operation, NSError *error) {
    
        failure(operation);

    }];
    
    self.operation = operation;
    
    NSOperationQueue *queue = [[NSOperationQueue alloc] init];
    [queue addOperation:operation];
}

- (void)sendRequest:(void (^)(AFHTTPRequestOperation *operation))success failure:(void (^)(AFHTTPRequestOperation *operation))failure{
    NSMutableURLRequest *theRequest = [self getAndSetRequest];
    [self sendOperationWithRequest:theRequest success:success failure:failure];
}

- (void)sendRequestWithStream:(NSInputStream *)stream success:(void (^)(AFHTTPRequestOperation *operation))success failure:(void (^)(AFHTTPRequestOperation *operation))failure{
    
    NSMutableURLRequest *theRequest = [self getAndSetRequest];
    [theRequest setHTTPBodyStream:stream];
    [self sendOperationWithRequest:theRequest success:success failure:failure];
        
}

@end
