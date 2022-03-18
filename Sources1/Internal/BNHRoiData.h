//
//  BNHRoiData.h
//  BinahAI
//
//  Created by Tal Lerman on 17/11/2021.
//  Copyright © 2021 binah.ai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BNHRoiData : NSObject

@property (nonatomic, readonly) CGRect roi;     // region of interest
@property (nonatomic, readonly) BOOL isValid;


- (instancetype)init NS_UNAVAILABLE;
- (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithRoi:(CGRect)roi;

@end

NS_ASSUME_NONNULL_END
