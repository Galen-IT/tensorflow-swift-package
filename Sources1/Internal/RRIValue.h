//
//  RRIValue.h
//  BinahSDK
//
//  Created by Erez Bursztyn on 09/06/2021.
//  Copyright © 2021 binah.ai. All rights reserved.
//

#ifndef RRIValue_h
#define RRIValue_h

#import <Foundation/Foundation.h>

DEPRECATED_ATTRIBUTE
@interface RRIValue : NSObject

@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) double interval;


#pragma mark Object lifecycle

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithTimestamp:(double)timestamp
                      andInterval:(double)interval;

@end


#endif /* RRIValue_h */
