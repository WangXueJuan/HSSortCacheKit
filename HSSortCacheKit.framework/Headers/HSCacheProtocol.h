//
//  LFCacheProtocol.h
//  HSSortCacheKit
//
//  Created by 王雪娟 on 2020/04/18.
//  Copyright © 2020年 花色. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@protocol HSCacheProtocol <NSObject>

@optional
- (id)objectCacheForKey:(NSString *)key;

- (void)cacheObject:(id)object forKey:(NSString *)key;
- (void)removeObjectForkey:(NSString *)key;
- (void)removeAllCaches;
- (BOOL)isKeyExist:(NSString *)key;

- (void)cacheNumberWithBool:(BOOL)value forKey:(NSString *)key;
- (void)cacheNumberWithCGFloat:(CGFloat)value forKey:(NSString *)key;
- (void)cacheNumberWithInteger:(NSInteger)value forKey:(NSString *)key;

- (BOOL)boolCacheValueForKey:(NSString *)key;
- (CGFloat)floatCacheValueForKey:(NSString *)key;
- (NSInteger)integerCacheValueForKey:(NSString *)key;

@end
