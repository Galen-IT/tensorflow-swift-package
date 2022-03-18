//
//  BNHVitalSignBloodPressure.h
//  BinahAI
//
//  Created by Tal Lerman on 30/11/2021.
//  Copyright © 2021 binah.ai. All rights reserved.
//

#import "BNHVitalSign.h"
#import "BNHBloodPressureValue.h"


NS_ASSUME_NONNULL_BEGIN

@interface BNHVitalSignBloodPressure : NSObject <BNHVitalSign>

@property (nonatomic, readonly) BNHBloodPressureValue *value;

- (instancetype)initWithValue:(BNHBloodPressureValue *)value;

@end

NS_ASSUME_NONNULL_END
