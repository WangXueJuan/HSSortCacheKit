//
//  HSDefaultsCache.h
//  HSSortCacheKit
//
//  Created by 王雪娟 on 2020/04/18.
//Copyright © 2020年 花色. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HSCacheProtocol.h"

@interface HSDefaultsCache : NSObject <HSCacheProtocol>

- (instancetype)initWithGroup:(NSString *)group;
+ (instancetype)cacheWithGroup:(NSString *)group;

@end
