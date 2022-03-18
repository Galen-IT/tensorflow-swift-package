//
//  BNHAlertsListener.h
//  BinahSDK
//
//  Created by Tal Lerman on 05/12/2021.
//  Copyright © 2021 binah.ai. All rights reserved.
//

#import "BNHAlertData.h"
#import "BNHErrorData.h"
#import "BNHWarningData.h"


#ifndef HealthMonitorAlertsListener_h
#define HealthMonitorAlertsListener_h

@protocol BNHAlertsListener <NSObject>

- (void)healthMonitorError:(BNHErrorData *)error;
- (void)healthMonitorWarning:(BNHWarningData *)warning;

@end

#endif /* HealthMonitorAlertsListener_h */
