#ifndef HealthMonitorLicenseInfoOfflineMeasurements_h
#define HealthMonitorLicenseInfoOfflineMeasurements_h

#import <Foundation/Foundation.h>

@interface HealthMonitorLicenseInfoOfflineMeasurements : NSObject

@property (nonatomic, readonly) int64_t offlineMeasurements;
@property (nonatomic, readonly) int64_t remainingMeasurements;
@property (nonatomic, readonly) int64_t measurementEndTimestampInSeconds;

- (instancetype)initWithOfflineMeasurements:(int64_t)offlineMeasurements
                   andRemainingMeasurements:(int64_t)remainingMeasurements
        andMeasurementEndTimestampInSeconds:(int64_t)measurementEndTimestampInSeconds;

@end

#endif /* HealthMonitorLicenseInfoOfflineMeasurements_h */
