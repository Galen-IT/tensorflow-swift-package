//
//  BNHBloodPressureValue.h
//  BinahAI
//
//  Created by Tal Lerman on 28/12/2021.
//  Copyright © 2021 binah.ai. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface BNHBloodPressureValue : NSObject

@property (nonatomic, readonly) NSInteger systolic;
@property (nonatomic, readonly) NSInteger diastolic;


#pragma mark Object lifecycle

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithSystolic:(double)systolic
                    andDiastolic:(double)diastolic;

@end

NS_ASSUME_NONNULL_END
