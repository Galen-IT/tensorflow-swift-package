//
//  HealthMonitorSessionMode.h
//  BinahSDK
//
//  Created by Tal Lerman on 06/10/2020.
//  Copyright © 2020 binah.ai. All rights reserved.
//

#ifndef HealthMonitorSessionMode_h
#define HealthMonitorSessionMode_h


/*!
 @enum HealthMonitorSessionMode
 @brief Define the session mode of createAndActivateSession:withListener:andPreview:andAspectRatio:
 @discussion Use only as context of @b createAndActivateSession:withListener:andPreview:andAspectRatio:
 */
typedef NS_ENUM(NSInteger, HealthMonitorSessionMode) {
    kHealthMonitorSessionMode_Face = 0,
    kHealthMonitorSessionMode_Finger = 1
};


#endif /* HealthMonitorSessionMode_h */
