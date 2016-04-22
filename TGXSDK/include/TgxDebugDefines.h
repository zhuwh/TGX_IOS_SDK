//
//  Header.h
//  PushSdk4Oc
//
//  Created by zhuwh on 16/4/7.
//  Copyright © 2016年 mark. All rights reserved.
//
#ifdef DEBUG

#define DEBUG_TRIGGER NSLog(@"%s",__func__);
#define TGX_LOG(format, ...) NSLog(format, ## __VA_ARGS__)
#define DEBUG_NO_SUPPER_TRIGGER NSLog(@"%s -> %@",__func__,@"NO_SUPPER");

#else

#define DEBUG_TRIGGER 
#define TGX_LOG(format, ...)
#define DEBUG_NO_SUPPER_TRIGGER

#endif

