//
//  ClipboardUtils.m
//  ClipboardUtils
//
//  Created by Pau on 01/04/2015.
//  Copyright (c) 2015 PabloAlejandro. All rights reserved.
//

#import "ClipboardUtils.h"
#import <UIKit/UIKit.h>

@implementation ClipboardUtils

+ (void)copyToClipboard:(NSString *)string completion:(void(^)(BOOL completed))block {
    
    UIPasteboard *pb = [UIPasteboard generalPasteboard];
    [pb setString:string];
    
    block(true);
}

@end
