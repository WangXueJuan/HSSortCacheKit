//
//  NSObject+HSRuntimeAddtion.h
//  HSSortCacheKit
//
//  Created by 王雪娟 on 15/04/2020.
//  Copyright © 2020 花色. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (HSRuntimeAddtion)

+ (BOOL)h_protocol:(Protocol *)aProtocol containsSEL:(SEL)aSelector;

+ (BOOL)h_protocol:(Protocol *)aProtocol
        containsSEL:(SEL)aSelector
     requiredMethod:(BOOL)isRequired
     instanceMethod:(BOOL)isInstance;

@end
