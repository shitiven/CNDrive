//
//  AliOSSUtil.h
//  CNDrive
//
//  Created by shitiven on 12-9-8.
//  Copyright (c) 2012年 shitiven. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AliOSSUtil : NSObject

+(NSString *)MIMETypeForExtension:(NSString *)extension;

+(NSString *)urlEncode:(NSString *)input;

+(NSString *)getGMT;

@end
