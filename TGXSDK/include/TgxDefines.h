//
//  TgxDefines.h
//  PushSdk4Oc
//
//  Created by zhuwh on 16/4/12.
//  Copyright © 2016年 mark. All rights reserved.
//

#import "TgxDebugDefines.h"

#define TGX_ERROR_MSG(error) [NSString stringWithFormat:@"%s%@",__func__,[error localizedDescription]]

typedef void (^API_CALLBACK)(BOOL isSuccess, id message);
typedef void (^LOGIN_CALLBACK)();

typedef struct _TgxArray {
    void* bytes;
    unsigned int length;
} TgxArray;

#define TgxArray_Init(bytes,length) {bytes,length}
#define TgxArray_Free(array) {\
if(array.bytes){\
free(array.bytes);\
array.bytes=nil;\
array.length = 0;\
}\
}