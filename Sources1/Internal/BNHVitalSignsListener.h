//
//  BNHVitalSignsListener.h
//  BinahSDK
//
//  Created by Tal Lerman on 30/11/2021.
//  Copyright © 2021 binah.ai. All rights reserved.
//

#import "BNHVitalSign.h"
#import "BNHVitalSignResults.h"

#ifndef HealthMonitorVitalSignsListener_h
#define HealthMonitorVitalSignsListener_h


@protocol BNHVitalSignsListener <NSObject>

/*!
 Use to receive VitalSign during measurement.
 @discussion support only VitalSigns: BNHVitalSignHeartRate, BNHVitalSignRespirationRate, BNHVitalSignOxygenSaturation
 */
- (void)newVitalSign:(id<BNHVitalSign>)vitalSign;

/*!
 Use to receive VitalSignResults at end of measurement.
 */
- (void)newFinalResults:(BNHVitalSignResults *)finalResults;

@end


#endif /* HealthMonitorVitalSignsListener_h */
