//
//  HealthMonitorSessionListener.h
//  BinahSDK
//
//  Created by Tal Lerman on 24/08/2020.
//  Copyright © 2020 binah.ai. All rights reserved.
//

#ifndef HealthMonitorSessionListener_h
#define HealthMonitorSessionListener_h

NS_ASSUME_NONNULL_BEGIN

#pragma mark -

/*!
 @enum HealthMonitorMessageType
 @brief Define the message type of healthMonitorMessage:withValue:
 @discussion Use only as context of @b healthMonitorMessage:withValue:
 */
typedef NS_ENUM(NSInteger, HealthMonitorMessageType) {
    /// Expected @b NSNumber @b (Double)  value
    kHealthMonitorMessageType_HeartRate = 1,
    
    /// Expected @b NSNumber @b (Double) value
    kHealthMonitorMessageType_OxygenSaturation = 2,
    
    /// Expected @b NSNumber @b (Double) value
    kHealthMonitorMessageType_BreathingRate = 3,
    
    /// Expected @b NSNumber @b (Double) value
    kHealthMonitorMessageType_StandardDeviationNN = 4,
    
    /// Expected @b NSNumber @b (Int)  value
    kHealthMonitorMessageType_StressLevel = 5,
    
    /// Expected @b BloodPressureValue  value
    kHealthMonitorMessageType_BloodPressure = 6,

    /// Expected @b HealthMonitorReport  value
    kHealthMonitorMessageType_Report = 100,

} DEPRECATED_ATTRIBUTE;


#pragma mark -

DEPRECATED_ATTRIBUTE
@protocol HealthMonitorSessionListener <NSObject>

/*!
 Use to receive messages of health vital signs.
 @param messageType message type
 @param value message value
 @discussion For the expected object type of the value parameter see HealthMonitorMessageType doc.
 */
- (void)healthMonitorSessionMessage:(HealthMonitorMessageType)messageType withValue:(id)value DEPRECATED_ATTRIBUTE;

/*!
 Use to receive errors during health monitor session measuring.
 @param error health monitor error
 */
- (void)healthMonitorSessionError:(NSError *_Nonnull)error DEPRECATED_ATTRIBUTE;

@end


NS_ASSUME_NONNULL_END
#endif /* HealthMonitorSessionListener_h */

