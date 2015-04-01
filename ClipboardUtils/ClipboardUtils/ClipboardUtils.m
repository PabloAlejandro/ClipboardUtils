//
//  ClipboardUtils.m
//  ClipboardUtils
//
//  Created by PabloAlejandro on 01/04/2015.
//  Copyright (c) 2015 PabloAlejandro. All rights reserved.
//

#import "ClipboardUtils.h"

@implementation ClipboardUtils

+ (void)copyStringToClipboard:(NSString *)string completion:(void(^)(BOOL completed))block {
    
    UIPasteboard *pb = [UIPasteboard generalPasteboard];
    [pb setString:string];
    
    block(true);
}

+ (void)copyUrlToClipboard:(NSURL *)url completion:(void(^)(BOOL completed))block
{
    UIPasteboard *pb = [UIPasteboard generalPasteboard];
    [pb setURL:url];
    
    block(true);
}

+ (void)copyImageToClipboard:(UIImage *)image completion:(void(^)(BOOL completed))block
{
    UIPasteboard *pb = [UIPasteboard generalPasteboard];
    [pb setImage:image];
    
    block(true);
}

+ (void)copyColorToClipboard:(UIColor *)color completion:(void(^)(BOOL completed))block
{
    UIPasteboard *pb = [UIPasteboard generalPasteboard];
    [pb setColor:color];
    
    block(true);
}

@end
