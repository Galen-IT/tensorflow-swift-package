//
//  HealthMonitorSessionStateListener.h
//  BinahSDK
//
//  Created by Tal Lerman on 07/10/2020.
//  Copyright © 2020 binah.ai. All rights reserved.
//

#ifndef HealthMonitorSessionStateListener_h
#define HealthMonitorSessionStateListener_h


#pragma mark -

@protocol HealthMonitorSessionStateListener <NSObject>

/*!
 Use to monitor session change state.
 @param session health monitor session object
 @param state health monitor session state
 */
- (void)healthMonitorSession:(id<HealthMonitorSession>)session
                 changeState:(HealthMonitorSessionState)state;

@end


#endif /* HealthMonitorSessionStateListener_h */
