//
//  BIDTestIP.h
//  郑大商城
//
//  Created by 赵恩生 on 14-4-22.
//  Copyright (c) 2014年 Ming. All rights reserved.
//

#import <Foundation/Foundation.h>
#define ISPHONE

#define IP @"172.27.35.1"

#ifdef ISPHONE
    #define filePath NSTemporaryDirectory()
#else
    #define filePath @"/Users/zhao/Desktop/"
#endif
