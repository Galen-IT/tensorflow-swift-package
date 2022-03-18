//
//  BloodPressureValue.h
//  BinahAI
//
//  Created by Tal Lerman on 09/08/2021.
//  Copyright © 2021 binah.ai. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

DEPRECATED_ATTRIBUTE
@interface BloodPressureValue : NSObject

@property (nonatomic, readonly) double systolic;
@property (nonatomic, readonly) double diastolic;


#pragma mark Object lifecycle

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithSystolic:(double)systolic
                    andDiastolic:(double)diastolic;

@end

NS_ASSUME_NONNULL_END
