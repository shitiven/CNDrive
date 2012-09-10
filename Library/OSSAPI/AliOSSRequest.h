//
//  AliOSSRequest.h
//  CNDrive
//
//  Created by shitiven on 12-9-7.
//  Copyright (c) 2012年 shitiven. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFHTTPClient.h"
#import "AFHTTPRequestOperation.h"

@interface AliOSSRequest : AFHTTPClient{
    
    NSMutableDictionary *_params;
    NSMutableDictionary *_headers;
    NSString *_path;
    NSString *_method;
    AFHTTPRequestOperation *_operation;
    
}

@property (strong, nonatomic) NSString *path;
@property (strong, nonatomic) NSString *method;
@property (strong, nonatomic) AFHTTPRequestOperation *operation;

+ (AliOSSRequest *) requestWithMethod:(NSString *)method resource:(NSString *)resource;
- (NSDictionary *)addParam:(NSString *)key value:(id)value;
- (void)setRequestHeaders:(NSDictionary *)headers;
- (void)sendRequest:(void (^)(AFHTTPRequestOperation *operation))success failure:(void (^)(AFHTTPRequestOperation *operation))failure;
- (void)sendRequestWithStream:(NSInputStream *)stream success:(void (^)(AFHTTPRequestOperation *operation))success failure:(void (^)(AFHTTPRequestOperation *operation))failure;

@end
