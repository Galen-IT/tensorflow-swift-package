#ifndef HealthMonitorEnabledVitalSigns_h
#define HealthMonitorEnabledVitalSigns_h

#import <Foundation/Foundation.h>

@interface HealthMonitorEnabledVitalSigns : NSObject

@property (nonatomic, readonly) bool heartRateEnabled;
@property (nonatomic, readonly) bool breathingRateEnabled;
@property (nonatomic, readonly) bool oxygenSaturationEnabled;
@property (nonatomic, readonly) bool sdnnEnabled;
@property (nonatomic, readonly) bool stressLevelEnabled;
@property (nonatomic, readonly) bool stressIndexEnabled;
@property (nonatomic, readonly) bool bloodPressureEnabled;
@property (nonatomic, readonly) bool rrIntervalEnabled;


- (instancetype)initWithEnabledVitalSigns:(bool)isHeartRateEnabled
                   andBreatingRateEnabled:(bool)isBreathingRateEnabled
               andOxygenSaturationEnabled:(bool)isOxygenSaturationEnabled
                           andSdnnEnabled:(bool)isSdnnEnabled
                    andStressLevelEnabled:(bool)isStressLevelEnabled
                    andStressIndexEnabled:(bool)isStressIndexEnabled
                  andBloodPressureEnabled:(bool)isBloodPressureEnabled
                     andRRIntervalEnabled:(bool)isRRIntervalEnabled;


@end

#endif /* HealthMonitorEnabledVitalSigns_h */
