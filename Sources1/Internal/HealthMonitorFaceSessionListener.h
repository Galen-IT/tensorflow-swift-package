//
//  HealthMonitorFaceSessionListener.h
//  BinahSDK
//
//  Created by Tal Lerman on 24/08/2020.
//  Copyright © 2020 binah.ai. All rights reserved.
//

#import "HealthMonitorSessionListener.h"

#ifndef HealthMonitorFaceSessionListener_h
#define HealthMonitorFaceSessionListener_h


DEPRECATED_ATTRIBUTE
@protocol HealthMonitorFaceSessionListener <HealthMonitorSessionListener>

/*!
 Use to receive camera image.
 @param image UIImage taken by camera
 @param faceRect A rectangle of the detected face (according to the image size). Before call to start session this value is always CGRectZero
 @discussion faceRect can always monitor face detection (also before call to start session) by create session with detectionAlwaysOn to TRUE.
 */
- (void)newImage:(UIImage *)image withFaceAt:(CGRect)faceRect DEPRECATED_ATTRIBUTE;

@end


#endif /* HealthMonitorFaceSessionListener_h */
