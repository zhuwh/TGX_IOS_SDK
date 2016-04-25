//
//  PushSdkAPI.h
//  PushSdk4Oc
//
//  Created by zhuwh on 16/4/12.
//  Copyright © 2016年 mark. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TgxDefines.h"
#import "TgxTagEntity.h"
#import "TgxPushDelegate.h"
#import <UIKit/UIKit.h>


@interface TgxPushSdkAPI : NSObject

+ (void) setAppTags:(NSArray<TgxTagEntity*> *)tags cb:(API_CALLBACK)cb;
+ (void) initSdk:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
+ (void) startWork:(id<TgxPushDelegate>) delegate;
+ (void) startWork;
+ (void) bindToken:(NSData *)deviceToken;
+ (void) didReceiveRemoteNotification:(NSDictionary *)userInfo;

@end
