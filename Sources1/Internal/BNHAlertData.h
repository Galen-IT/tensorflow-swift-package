//
//  BNHAlertData.h
//  BinahAI
//
//  Created by Tal Lerman on 05/12/2021.
//  Copyright © 2021 binah.ai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSError+HealthMonitor.h"
#import "BNHAlertDomain.h"


NS_ASSUME_NONNULL_BEGIN

@interface BNHAlertData : NSObject

@property (nonatomic, readonly) BNHAlertDomain domain;
@property (nonatomic, readonly) HealthMonitorCode code;
@property (nonatomic, readonly) NSDictionary *additionalInfo;


- (instancetype)init NS_UNAVAILABLE;
- (instancetype)new NS_UNAVAILABLE;

+ (instancetype)alertWithCode:(HealthMonitorCode)code;
+ (instancetype)alertWithCode:(HealthMonitorCode)code andDomain:(BNHAlertDomain)domain;
+ (instancetype)alertWithCode:(HealthMonitorCode)code domain:(BNHAlertDomain)domain andAdditionalInfo:(NSDictionary * _Nullable)additionalInfo;

@end

NS_ASSUME_NONNULL_END
