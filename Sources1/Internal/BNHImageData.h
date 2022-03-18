//
//  BNHImageData.h
//  BinahAI
//
//  Created by Tal Lerman on 03/11/2021.
//  Copyright © 2021 binah.ai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BNHRoiData.h"

NS_ASSUME_NONNULL_BEGIN


@interface BNHImageData : NSObject

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) BNHRoiData *roiData;


- (instancetype)init NS_UNAVAILABLE;
- (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithImage:(UIImage *)image
                      roiData:(BNHRoiData *)roiData;

@end


NS_ASSUME_NONNULL_END
