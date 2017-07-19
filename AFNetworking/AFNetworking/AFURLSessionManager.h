//
//  AFURLSessionManager.h
//  AFNetworking
//
//  Created by 董永胜 on 2017/7/19.
//  Copyright © 2017年 董永胜. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "AFURLResponseSerialization.h"
#import "AFURLRequestSerialization.h"
#import "AFSecurityPolicy.h"
#if !TARGET_OS_WATCH
#import "AFNetworkReachabilityManager.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface AFURLSessionManager : NSObject

@property(nonatomic, strong, readonly) NSURLSession *session;
@property(nonatomic, strong, readonly) NSOperationQueue *operationQueue;

@end

NS_ASSUME_NONNULL_END
