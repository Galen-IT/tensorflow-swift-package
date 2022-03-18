//
//  BNHImageListener.h
//  BinahSDK
//
//  Created by Tal Lerman on 03/11/2021.
//  Copyright © 2021 binah.ai. All rights reserved.
//

#ifndef HealthMonitorImageListener_h
#define HealthMonitorImageListener_h

#import "BNHImageData.h"


@protocol BNHImageListener <NSObject>

/*!
 Use to receive image data.
 @param imageData image taken by camera and other image data.
 */
- (void)newImageData:(BNHImageData *)imageData;

@end


#endif /* HealthMonitorImageListener_h */
