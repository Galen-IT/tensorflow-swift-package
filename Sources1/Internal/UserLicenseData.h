//
//  LicenseData.h
//  health_monitor_sdk
//
//  Created by Tal Lerman on 30/04/2020.
//  Copyright © 2020 binah.ai. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UserLicenseData : NSObject

@property (nonatomic, strong) NSString *licenseKey;
@property (nonatomic, strong) NSString *_Nullable productID;

@end

NS_ASSUME_NONNULL_END
