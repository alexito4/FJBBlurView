//
//  FJBBlur.h
//  FJBBlurView
//
//  Created by Fran_DEV on 23/02/14.
//  Copyright (c) 2014 FJBelchi. All rights reserved.
//

@import Foundation;
#import <GPUImage/GPUImage.h>

typedef NS_ENUM(NSInteger, FJBBlurStyle) {
    FJBBlurStyleGaussianBlur,
    FJBBlurStyleiOSBlur
};

@interface FJBBlurView : GPUImageView
@property (nonatomic, assign) CGFloat blurRadius;

- (instancetype) initWithView:(UIView *)view withBlurStyle:(FJBBlurStyle)blurStyle;
- (void)update;
- (void)blurAnimated:(BOOL)animated withDuration:(CGFloat)duration;
- (void)unBlurAnimated:(BOOL)animated withDuration:(CGFloat)duration;
@end
