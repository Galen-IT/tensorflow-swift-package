//
//  HealthMonitorSession.h
//  health_monitor_sdk
//
//  Created by Tal Lerman on 22/04/2020.
//  Copyright © 2020 binah.ai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN



#pragma mark -
/*
   state change diagram

             <------------
             |           |
   --> 0 --> 1 --> 2 --> 3
             |
             --> 4
*/
/*!
 @enum HealthMonitorSessionState
 */
typedef NS_ENUM(NSInteger, HealthMonitorSessionState) {
    kHealthMonitorSessionState_Init = 0,        // in memory, but not ready to work
    kHealthMonitorSessionState_Active = 1,      // ready to 'measuring'
    kHealthMonitorSessionState_Measuring = 2,
    kHealthMonitorSessionState_Stopped = 3,     // stop 'measuring' (between 'measuring' to 'active')
    kHealthMonitorSessionState_Terminated = 4
};



#pragma mark -
@protocol HealthMonitorSession <NSObject>

/*!
 Start sesstion
 @param error health monitor error
 */
- (BOOL)startWithError:(NSError *__autoreleasing  _Nullable * _Nullable)error;

/*!
 Stop sesstion
 @param error health monitor error
 */
- (BOOL)stopWithError:(NSError *__autoreleasing  _Nullable * _Nullable)error;

/*!
 End sesstion
 */
- (void)terminate;

/*!
 Current session state
 */
- (HealthMonitorSessionState)state;

@end



NS_ASSUME_NONNULL_END
