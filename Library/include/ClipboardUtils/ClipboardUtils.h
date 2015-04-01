//
//  ClipboardUtils.h
//  ClipboardUtils
//
//  Created by PabloAlejandro on 01/04/2015.
//  Copyright (c) 2015 PabloAlejandro. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ClipboardUtils : NSObject

/**
 * copyStringToClipboard:
 *
 * Discussion:
 *   It copies a string to your device's clipboard
 *   Completion block returns whether it is completed or not
 */
+ (void)copyStringToClipboard:(NSString *)string completion:(void(^)(BOOL completed))block;


/**
 * copyUrlToClipboard:
 *
 * Discussion:
 *   It copies a url to your device's clipboard
 *   Completion block returns whether it is completed or not
 */
+ (void)copyUrlToClipboard:(NSURL *)url completion:(void(^)(BOOL completed))block;

/**
 * copyImageToClipboard:
 *
 * Discussion:
 *   It copies an image to your device's clipboard
 *   Completion block returns whether it is completed or not
 */
+ (void)copyImageToClipboard:(UIImage *)image completion:(void(^)(BOOL completed))block;

/**
 * copyToClipboard:
 *
 * Discussion:
 *   It copies a color to your device's clipboard
 *   Completion block returns whether it is completed or not
 */
+ (void)copyColorToClipboard:(UIColor *)color completion:(void(^)(BOOL completed))block;

@end
