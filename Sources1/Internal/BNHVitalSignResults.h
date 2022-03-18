//
//  BNHVitalSignResults.h
//  BinahAI
//
//  Created by Tal Lerman on 30/11/2021.
//  Copyright © 2021 binah.ai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BNHVitalSignHeartRate.h"
#import "BNHVitalSignBreathingRate.h"
#import "BNHVitalSignOxygenSaturation.h"
#import "BNHVitalSignStressLevel.h"
#import "BNHVitalSignStressIndex.h"
#import "BNHVitalSignSDNN.h"
#import "BNHVitalSignBloodPressure.h"
#import "BNHVitalSignRRI.h"
#import "BNHVitalSignType.h"


NS_ASSUME_NONNULL_BEGIN

@interface BNHVitalSignResults : NSObject

@property (nonatomic, readonly) NSArray<BNHVitalSignType> *vitalSignTypes;
@property (nonatomic, readonly) NSArray<id<BNHVitalSign>> *vitalSigns;

- (id<BNHVitalSign>)getVitalSignOfType:(BNHVitalSignType)vitalSignType;


#pragma mark - Subscript
- (nullable id)objectForKeyedSubscript:(BNHVitalSignType)key;

@end

NS_ASSUME_NONNULL_END
