//
//  HealthMonitorManager.h
//  health_monitor_sdk
//
//  Created by Tal Lerman on 21/04/2020.
//  Copyright © 2020 binah.ai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVCaptureOutput.h>

#import "HealthMonitorSession.h"
#import "UserLicenseData.h"
#import "HealthMonitorFaceSessionListener.h"
#import "HealthMonitorFingerSessionListener.h"
#import "HealthMonitorSessionMode.h"
#import "HealthMonitorInfoCodes.h"
#import "FingerSessionBuilder.h"
#import "FaceSessionBuilder.h"
#import "HealthMonitorLicenseInfoOfflineMeasurements.h"
#import "HealthMonitorEnabledVitalSigns.h"


NS_ASSUME_NONNULL_BEGIN


#pragma mark -
@protocol HealthMonitorManagerListener <NSObject>

/*!
 Called when an HealthMonitorManager fully ready to work with.
 @discussion Before this call, the manager can create a session, but the session can not be started.
 */
- (void)healthMonitorManagerReady;

/*!
 Use to receive errors during create HealthMonitorManager.
 @param error health monitor error
 */
- (void)healthMonitorManagerError:(NSError *_Nonnull)error;


@optional

/*!
 Use to monitor session change state.
 @param session health monitor session object
 @param state health monitor session state
 @discussion Use only when create session with createAndActivateSession:withListener:andPreview:andAspectRatio:
 @discussion NOT needed when use createFingerSessionBuilder or createFaceSessionBuilder
 */
- (void)healthMonitorManagerSession:(id<HealthMonitorSession>)session
                        changeState:(HealthMonitorSessionState)state;

/*!
 Use to receive info of session.
 @param infoCode info code type
 @param info info object
 @discussion For the expected object type of the value parameter see HealthMonitorInfoCodes doc.
 */
- (void)healthMonitorManagerInfoWithCode:(HealthMonitorInfoCodes)infoCode
                                 andInfo:(NSObject *)info;

@end





#pragma mark -
@interface HealthMonitorManager : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)new NS_UNAVAILABLE;

/*!
 Initializes a new HealthMonitor.
 @discussion This is the designated initializer.
 @param UserLicenseData license data
 @param listener health monitor manager listener
 @param error health monitor error
 */
- (instancetype _Nullable)initWithLicenseData:(UserLicenseData *_Nonnull)userLicenseData
                                 withListener:(id<HealthMonitorManagerListener>)listener
                                     andError:(NSError *__autoreleasing  _Nullable * _Nullable)error API_AVAILABLE(ios(13));



/*!
 The number of sessoins that can be alive at once.
 @Discussion Currently @b only @b one session can be alive at once.
 */
- (int)getMaxSessions;

/*!
 Use to create finger session builder.
 @param processingTime session duration (in secound), valid range is 20-180.
 @param error health monitor error
 @Discussion After set all the needed parameters, call @b buildWithError: to get @b HealthMonitorSession object.
 */
- (id<FingerSessionBuilder> _Nullable)createFingerSessionBuilderWithProcessingTime:(NSNumber *_Nonnull)processingTime
                                                                          andError:(NSError *__autoreleasing  _Nullable * _Nullable)error NS_SWIFT_NAME(createFingerSessionBuilder(processingTime:));

/*!
 Use to create face session builder.
 @param processingTime session duration (in secound), valid range is 20-180.
 @param error health monitor error
 @Discussion After set all the needed parameters, call @b buildWithError: to get @b HealthMonitorSession object.
 */
- (id<FaceSessionBuilder> _Nullable)createFaceSessionBuilderWithProcessingTime:(NSNumber *_Nonnull)processingTime
                                                                      andError:(NSError *__autoreleasing  _Nullable * _Nullable)error NS_SWIFT_NAME(createFaceSessionBuilder(processingTime:));


@end

NS_ASSUME_NONNULL_END


