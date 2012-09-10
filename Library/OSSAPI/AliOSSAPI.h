//
//  AliOSSAPI.h
//  CNDrive
//
//  Created by shitiven on 12-9-6.
//  Copyright (c) 2012年 shitiven. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFHTTPRequestOperation.h"
@interface AliOSSAPI : NSObject {
    NSInputStream *_inputStream;
}

@property (strong, nonatomic) AFHTTPRequestOperation *operation;
@property (strong, nonatomic) NSString *responseString;

- (id) initWithStream:(NSInputStream *)stream;

- (void) bucketOperation:(NSString *)method bucket:(NSString *)bucket headers:(NSDictionary *)headers params:(NSDictionary *)params success:(void (^)(AliOSSAPI *oss))success failure:(void (^)(AliOSSAPI *oss))failure;

+ (AliOSSAPI *) createBucket:(NSString *)bucket acl:(NSString *)acl headers:(NSDictionary *)headers success:(void (^)(AliOSSAPI *oss))success failure:(void (^)(AliOSSAPI *oss))failure;

+ (AliOSSAPI *) listBuckets:(void (^)(AliOSSAPI *oss))success failure:(void (^)(AliOSSAPI *oss))failure;

+ (AliOSSAPI *) getBucketAcl:(NSString *)bucket success:(void (^)(AliOSSAPI *oss))success failure:(void (^)(AliOSSAPI *oss))failure;

+ (AliOSSAPI *) deleteBucket:(NSString *)bucket success:(void (^)(AliOSSAPI *oss))success failure:(void (^)(AliOSSAPI *oss))failure;

+ (AliOSSAPI *) getObjectsFromBucket:(NSString *)bucket prefix:(NSString *)prefix marker:(NSString *)marker delimiter:(NSString *)delimiter maxkeys:(NSString *)maxkeys headers:(NSDictionary *)headers success:(void (^)(AliOSSAPI *oss))success failure:(void (^)(AliOSSAPI *oss))failure;

+ (AliOSSAPI *) putObjectFromFile:(NSString *)filename inBucket:(NSString *)bucket object:(NSString *)object headers:(NSDictionary *)headers success:(void (^)(AliOSSAPI *oss))success failure:(void (^)(AliOSSAPI *oss))failure;

@end
