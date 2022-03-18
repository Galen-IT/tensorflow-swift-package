//
//  FaceSessionBuilder.h
//  BinahAI
//
//  Created by Tal Lerman on 06/10/2020.
//  Copyright © 2020 binah.ai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HealthMonitorSession.h"
#import "HealthMonitorFaceSessionListener.h"
#import "HealthMonitorSessionStateListener.h"
#import "BNHImageListener.h"
#import "BNHVitalSignsListener.h"
#import "BNHAlertsListener.h"


NS_ASSUME_NONNULL_BEGIN


@protocol FaceSessionBuilder <NSObject>

/*!
 Use to create and activate HealthMonitorSession object.
 @param error health monitor error
 */
- (id<HealthMonitorSession> _Nullable)buildWithError:(NSError *__autoreleasing  _Nullable * _Nullable)error;



/*!
 Set listener
 @param listener Default value is @b nil
 */
- (instancetype)listener:(id<HealthMonitorFaceSessionListener>)listener DEPRECATED_ATTRIBUTE;

/*!
 Set stateListener
 @param stateListener Default value is @b nil
 */
- (instancetype)stateListener:(id<HealthMonitorSessionStateListener>)stateListener;

/*!
 Set detectionAlwaysOn
 @param detectionAlwaysOn Default value is @b false
 */
- (instancetype)detectionAlwaysOn:(BOOL)detectionAlwaysOn NS_SWIFT_NAME(detectionAlwaysOn(_:));

/*!
 Set imageListener
 @param imageListener Default value is @b nil
 */
- (instancetype)imageListener:(id<BNHImageListener>)imageListener;

/*!
 Set vitalSignsListener
 @param vitalSignsListener Default value is @b nil
 */
- (instancetype)vitalSignsListener:(id<BNHVitalSignsListener>)vitalSignsListener;

/*!
 Set alertsListener
 @param alertsListener Default value is @b nil
 */
- (instancetype)alertsListener:(id<BNHAlertsListener>)alertsListener;

@end


NS_ASSUME_NONNULL_END

