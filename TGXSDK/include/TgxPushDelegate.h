//
//  PushDelegate.h
//  PushSdk4Oc
//
//  Created by zhuwh on 16/4/12.
//  Copyright © 2016年 mark. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "TgxDelegate.h"

@protocol TgxPushDelegate<TgxDelegate>

-(void) pushDelegateReceived:(NSString*) message;

@end