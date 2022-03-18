//
//  NSError+HealthMonitor.h
//  health_monitor_sdk
//
//  Created by Tal Lerman on 25/04/2020.
//  Copyright © 2020 binah.ai. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


#pragma mark -

/*!
 @enum HealthMonitorCode
 @discussion Enumerates the error types of HealthMonitor errors.
 */
typedef NS_ENUM(NSInteger, HealthMonitorCode) {
    
    // Device errors
    kHealthMonitorCode_Device_LowPowerModeEnabledError = 4,
    kHealthMonitorCode_Device_TorchUnavailableError = 6,
    kHealthMonitorCode_Device_TorchShutDownError = 7,
    kHealthMonitorCode_Device_MinimumIOSVersionError = 8,
    kHealthMonitorCode_Device_InternalError1 = 10,
    kHealthMonitorCode_Device_InternalError2 = 11,
    kHealthMonitorCode_Device_InternalError3 = 12,
    kHealthMonitorCode_Device_InternalError4 = 13,
    kHealthMonitorCode_Device_MinimumBatteryLevelError = 14,
    
    // Camera errors
    kHealthMonitorCode_Camera_NoCameraError = 1001,
    kHealthMonitorCode_Camera_CameraOpenError = 1002,
    kHealthMonitorCode_Camera_CameraMissingPermissionsError = 1005,
    
    // License errors
    kHealthMonitorCode_License_InternalError18 = 2001,
    kHealthMonitorCode_License_ActivationLimitReachedError = 2002,
    kHealthMonitorCode_License_MeterAttributeUsesLimitReachedError = 2003,
    kHealthMonitorCode_License_AuthenticationFailedError = 2004,
    kHealthMonitorCode_License_InternalError1 = 2006,
    kHealthMonitorCode_License_InvalidLicenseKeyError = 2007,
    kHealthMonitorCode_License_InternalError2 = 2008,
    kHealthMonitorCode_License_InternalError3 = 2009,
    kHealthMonitorCode_License_RevokedLicenseError = 2010,
    kHealthMonitorCode_License_InternalError4 = 2011,
    kHealthMonitorCode_License_InternalError5 = 2012,
    kHealthMonitorCode_License_InternalError7 = 2014,
    kHealthMonitorCode_License_InternalError8 = 2015,
    kHealthMonitorCode_License_InternalError9 = 2016,
    kHealthMonitorCode_License_LicenseExpiredError = 2017,
    kHealthMonitorCode_License_LicenseSuspendedError = 2018,
    kHealthMonitorCode_License_TokenExpiredError = 2020,
    kHealthMonitorCode_License_DeviceDeactivatedError = 2021,
    kHealthMonitorCode_License_InternalError10 = 2022,
    kHealthMonitorCode_License_InternalError11 = 2023,
    kHealthMonitorCode_License_NetworkIssuesError = 2024,
    kHealthMonitorCode_License_SslHandShakeError = 2025,
    kHealthMonitorCode_License_InternalError16 = 2030,
    kHealthMonitorCode_License_InputLicenseKeyEmptyError = 2032,
    kHealthMonitorCode_License_InputFingerprintEmptyError = 2033,
    kHealthMonitorCode_License_InputProductIdIllegalError = 2034,
    kHealthMonitorCode_License_CannotOpenFileForReadError = 2035,
    kHealthMonitorCode_License_MonthlyUsageTrackingRequiresSyncError = 2036,
    kHealthMonitorCode_License_SslHandShakeDeviceDateError = 2037,
    kHealthMonitorCode_License_SslHandShakeCertificateExpiredError = 2038,
    kHealthMonitorCode_License_MinSdkError = 2039,
    kHealthMonitorCode_License_SdkVersionMissingError = 2040,
    kHealthMonitorCode_License_ForbiddenLicenseTypeError = 2041,
    
    // Measurement errors
    kHealthMonitorCode_Measurement_MisdetectionDurationExceedsLimitError = 3003,
    kHealthMonitorCode_Measurement_InvalidRecentDetectionRateError = 3004,
    kHealthMonitorCode_Measurement_LicenseActivationFailedError = 3006,
    kHealthMonitorCode_Measurement_InvalidMeasurementAverageDetectionRateError = 3008,
    kHealthMonitorCode_Measurement_TooManyFramesInorderError = 3009,
    
    // Measurement warnings
    kHealthMonitorCode_Measurement_MisdetectionDurationExceedsLimitWarning = 3500,
    kHealthMonitorCode_Measurement_UnsupportedOrientationWarning = 3504,
    kHealthMonitorCode_Measurement_InvalidRecentFPSRateWarning = 3505,
    kHealthMonitorCode_Measurement_MisplacedFrameWarning = 3506,
    
    // Vital signs warnings
    
    // App errors
    kHealthMonitorCode_App_IllegalStartCallError = 6000,
    kHealthMonitorCode_App_IllegalStopCallError = 6001,
    kHealthMonitorCode_App_IllegalStartSessionCallError = 6002,
    
    // Initialization errors
    kHealthMonitorCode_Initialization_InternalError1 = 7001,
    kHealthMonitorCode_Initialization_InvalidProcessingTimeError = 7002,
    kHealthMonitorCode_Initialization_SessionListenersMismatch = 7003
    
};


#pragma mark -

typedef NSString *HealthMonitorDomain NS_TYPED_ENUM;
FOUNDATION_EXPORT HealthMonitorDomain const HealthMonitorDeviceDomain;
FOUNDATION_EXPORT HealthMonitorDomain const HealthMonitorCameraDomain;
FOUNDATION_EXPORT HealthMonitorDomain const HealthMonitorLicenseDomain;
FOUNDATION_EXPORT HealthMonitorDomain const HealthMonitorMeasurementDomain;
FOUNDATION_EXPORT HealthMonitorDomain const HealthMonitorVitalSignDomain;
FOUNDATION_EXPORT HealthMonitorDomain const HealthMonitorAppDomain;
FOUNDATION_EXPORT HealthMonitorDomain const HealthMonitorInitializationDomain;


/*!
 @category HealthMonitorCode
 @abstract A category on NSError that adds conveninece access to NSError objects created by HealthMonitorCode.
 */
@interface NSError (HealthMonitorCode)

+ (NSString *_Nonnull)healthMonitorDeviceDomain;
+ (NSString *_Nonnull)healthMonitorCameraDomain;
+ (NSString *_Nonnull)healthMonitorLicenseDomain;
+ (NSString *_Nonnull)healthMonitorMeasurementDomain;
+ (NSString *_Nonnull)healthMonitorVitalSignDomain;
+ (NSString *_Nonnull)healthMonitorAppDomain;
+ (NSString *_Nonnull)healthMonitorInitializationDomain;

/*!
 @abstract convenience accessor for the error-code of an NSError created by HealthMonitor.
 The code is pre-cast to HealthMonitorCode enumerator.
*/
@property (readonly) HealthMonitorCode healthMonitorCode;



typedef NSString *HealthMonitorErrorUserInfoKey;
// Key in userInfo. The value of this key should be an NSString.
FOUNDATION_EXPORT HealthMonitorErrorUserInfoKey const HealthMonitorSuberrorUserInfoKey;

@end


NS_ASSUME_NONNULL_END
