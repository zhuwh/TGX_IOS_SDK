//
//  TgxTagEntity.h
//  PushSdk4Oc
//
//  Created by zhuwh on 16/4/12.
//  Copyright © 2016年 mark. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TgxTagEntity : NSObject

- (instancetype)initWithIndex:(int)__index tag:(NSString*)__tag;
- (instancetype)initWithDictionary:(NSDictionary*)json;

@property(nonatomic,readonly) int index;
@property(nonatomic,strong,readonly) NSString* tag;

- (NSDictionary*) toJson;
@end
