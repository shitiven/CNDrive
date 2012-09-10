//
//  AppDelegate.m
//  CNDrive
//
//  Created by shitiven on 12-9-6.
//  Copyright (c) 2012年 shitiven. All rights reserved.
//

#import "AppDelegate.h"
#import "NSData+HMAC.h"
#import "NSData+Base64.h"
#import "AliOSSAPI.h"
#import "AFHTTPRequestOperation.h"
#import "AliOSSRequest.h"

@implementation AppDelegate
@synthesize chooseButton;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification{
    
    /*[AliOSSAPI createBucket:@"test_shitiven" acl:@"private" headers:nil success:^(AliOSSAPI *oss) {
        NSLog(@"create bucket ok... \n");
    } failure:^(AliOSSAPI *oss) {
        NSLog(@"%@", oss.responseString);
    }];
    
    [AliOSSAPI listBuckets:^(AliOSSAPI *oss) {
        NSLog(@"list buckets: \n%@ \n", oss.responseString);
    } failure:nil];

    [AliOSSAPI getBucketAcl:@"shitiven" success:^(AliOSSAPI *oss) {
        NSLog(@"%@", oss.responseString);
    } failure:^(AliOSSAPI *oss) {
        NSLog(@"failure:::/n %@", oss.responseString);
    }];*/
    
    /*[AliOSSAPI deleteBucket:@"test_shitiven" success:^(AliOSSAPI *oss) {
        NSLog(@"delete ok \n%@", oss.responseString);
    } failure:^(AliOSSAPI *oss) {
        NSLog(@"delete fail \n %@", oss.responseString);
    }];*/
    
    /*[AliOSSAPI getObjectsFromBucket:@"test_shitiven" prefix:@"" marker:@"" delimiter:@"" maxkeys:@"" headers:nil success:^(AliOSSAPI *oss) {
        NSLog(@"objects::::\n%@", oss.responseString);
    } failure:^(AliOSSAPI *oss) {
        NSLog(@"get objects fail::::\n %@", oss.responseString);
    }];*/
    
    
    /*AliOSSAPI *oss = [AliOSSAPI putObjectFromFile:@"/Users/shitiven/Downloads/新建文件夹/21-IMGP0399.jpg" inBucket:@"test_shitiven" object:@"测试照片用的/21-IMGP0399.jpg" headers:nil success:^(AliOSSAPI *oss) {
        NSLog(@"success:%@", oss.responseString);
    } failure:^(AliOSSAPI *oss) {
         NSLog(@"failure:%@", oss.responseString);
    }];
    
    [oss.operation setUploadProgressBlock:^(NSUInteger bytesWritten, long long totalBytesWritten, long long totalBytesExpectedToWrite) {
        
        float hasWritten = (float)totalBytesWritten;
        float totalBytes = (float)totalBytesExpectedToWrite;
        NSLog(@"%f", hasWritten/totalBytes);
        
    }];*/
    
}


@end
