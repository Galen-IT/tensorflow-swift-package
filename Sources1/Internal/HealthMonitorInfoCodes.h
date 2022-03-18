//
//  HealthMonitorInfoCodes.h
//  BinahSDK
//
//  Created by ofer kuperman on 16/11/2020.
//  Copyright © 2020 binah.ai. All rights reserved.
//

#ifndef HealthMonitorInfoCodes_h
#define HealthMonitorInfoCodes_h

/*!
 @enum HealthMonitorInfoCodes
 @brief Define the message type of healthMonitorManagerInfoWithCode:andInfo:
 @discussion Use only as context of @b healthMonitorManagerInfoWithCode:andInfo:
 */

/* 51xxx - license */

typedef NS_ENUM(NSInteger, HealthMonitorInfoCodes) {
    /// Expected @b HealthMonitorLicenseInfoOfflineMeasurements  value
    kHealthMonitorInfoCode_MeasurementsCounting = 51000,
    /// Expected @b HealthMonitorEnabledVitalSigns  value
    kHealthMonitorInfoCode_EnabledVitalSigns = 51001
};

#endif /* HealthMonitorInfoCodes_h */
