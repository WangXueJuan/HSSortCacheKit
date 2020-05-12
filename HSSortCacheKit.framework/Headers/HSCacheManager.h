//
//  HSCacheManager.h
//  HSSortCacheKit
//
//  Created by 王雪娟 on 2020/04/24.
//Copyright © 2020年 花色. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "HSEnumConstants.h"

@interface HSCacheManager : NSObject

+ (void)cacheObject:(id)object
             forKey:(NSString *)key
              group:(NSString *)group
          cacheType:(HSCacheType)cacheType;

+ (void)cacheBool:(BOOL)value
           forKey:(NSString *)key
            group:(NSString *)group
        cacheType:(HSCacheType)cacheType;

+ (void)cacheFloat:(CGFloat)value
            forKey:(NSString *)key
             group:(NSString *)group
         cacheType:(HSCacheType)cacheType;

+ (void)cacheInteger:(NSInteger)value
              forKey:(NSString *)key
               group:(NSString *)group
           cacheType:(HSCacheType)cacheType;


+ (id)objectCacheForKey:(NSString *)key
                  group:(NSString *)group
              cacheType:(HSCacheType)cacheType;

+ (BOOL)boolCacheForKey:(NSString *)key
                  group:(NSString *)group
              cacheType:(HSCacheType)cacheType;

+ (CGFloat)floatCacheForKey:(NSString *)key
                      group:(NSString *)group
                  cacheType:(HSCacheType)cacheType;

+ (NSInteger)integerCacheForKey:(NSString *)key
                          group:(NSString *)group
                      cacheType:(HSCacheType)cacheType;


+ (void)removeCacheObjectForKey:(NSString *)key
                          group:(NSString *)group
                      cacheType:(HSCacheType)cacheType;

+ (void)removeAllObjectsForGroup:(NSString *)group
                       cacheType:(HSCacheType)cacheType;



@end
