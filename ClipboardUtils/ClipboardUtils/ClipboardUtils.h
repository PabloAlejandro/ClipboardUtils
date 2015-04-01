//
//  ClipboardUtils.h
//  ClipboardUtils
//
//  Created by Pau on 01/04/2015.
//  Copyright (c) 2015 PabloAlejandro. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ClipboardUtils : NSObject

/**
 * copyToClipboard:
 *
 * Discussion:
 *   It copies a string to your device's clipboard
 *   Completion block returns whether it is completed or not
 */
+ (void)copyToClipboard:(NSString *)string completion:(void(^)(BOOL completed))block;

@end
