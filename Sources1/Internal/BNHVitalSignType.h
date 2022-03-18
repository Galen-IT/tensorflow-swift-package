//
//  BNHVitalSignType.h
//  BinahAI
//
//  Created by Tal Lerman on 30/11/2021.
//  Copyright © 2021 binah.ai. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


typedef NSString *BNHVitalSignType NS_TYPED_ENUM;
FOUNDATION_EXPORT BNHVitalSignType const BNHVitalSignTypeHeartRate;
FOUNDATION_EXPORT BNHVitalSignType const BNHVitalSignTypeBreathingRate;
FOUNDATION_EXPORT BNHVitalSignType const BNHVitalSignTypeOxygenSaturation;
FOUNDATION_EXPORT BNHVitalSignType const BNHVitalSignTypeStressLevel;
FOUNDATION_EXPORT BNHVitalSignType const BNHVitalSignTypeStressIndex;
FOUNDATION_EXPORT BNHVitalSignType const BNHVitalSignTypeSDNN;
FOUNDATION_EXPORT BNHVitalSignType const BNHVitalSignTypeBloodPressure;
FOUNDATION_EXPORT BNHVitalSignType const BNHVitalSignTypeRRI;


NS_ASSUME_NONNULL_END
