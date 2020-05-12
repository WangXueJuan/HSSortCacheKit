//
//  HSCache.h
//  HSSortCacheKit
//
//  Created by 王雪娟 on 2020/04/29.
//Copyright © 2020年 花色. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "HSCacheProtocol.h"
#import "HSEnumConstants.h"

@interface HSCache : NSObject <HSCacheProtocol>

- (instancetype)initWithType:(HSCacheType)cacheType group:(NSString *)group;
+ (instancetype)cacheWithType:(HSCacheType)cacheType group:(NSString *)group;

@end
