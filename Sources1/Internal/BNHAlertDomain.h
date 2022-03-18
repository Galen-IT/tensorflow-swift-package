//
//  BNHAlertDomain.h
//  BinahAI
//
//  Created by Tal Lerman on 28/12/2021.
//  Copyright © 2021 binah.ai. All rights reserved.
//

#ifndef BNHAlertDomain_h
#define BNHAlertDomain_h

/*!
 @enum BNHAlertDomain
 */
typedef NS_ENUM(NSInteger, BNHAlertDomain) {
    BNHAlertDomain_Device = 0,
    BNHAlertDomain_Camera = 1000,
    BNHAlertDomain_License = 2000,
    BNHAlertDomain_Measurement = 3000,
    BNHAlertDomain_VitalSign = 4000,
    BNHAlertDomain_App = 6000,
    BNHAlertDomain_Initialization = 7000,
};

#endif /* BNHAlertDomain_h */
