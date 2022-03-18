//
//  HealthMonitorFingerSessionListener.h
//  BinahSDK
//
//  Created by Tal Lerman on 24/08/2020.
//  Copyright © 2020 binah.ai. All rights reserved.
//

#import "HealthMonitorSessionListener.h"

#ifndef HealthMonitorFingerSessionListener_h
#define HealthMonitorFingerSessionListener_h


DEPRECATED_ATTRIBUTE
@protocol HealthMonitorFingerSessionListener <HealthMonitorSessionListener>

/*!
 Use to receive camera image.
 @param image UIImage taken by camera
 @param fingerDetected Indicator of finger object detected. Before call to start session this value is always FALSE.
 @discussion fingerDetected can always monitor finger detection (also before call to start session) by create session with detectionAlwaysOn to TRUE.
 */
- (void)newImage:(UIImage *)image withFinger:(BOOL)fingerDetected DEPRECATED_ATTRIBUTE;

@end


#endif /* HealthMonitorFingerSessionListener_h */
