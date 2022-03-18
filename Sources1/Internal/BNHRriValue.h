//
//  BNHRriValue.h
//  BinahAI
//
//  Created by Tal Lerman on 28/12/2021.
//  Copyright © 2021 binah.ai. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface BNHRriValue : NSObject

@property (nonatomic, readonly) double    timestamp;
@property (nonatomic, readonly) NSInteger interval;


#pragma mark Object lifecycle

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithTimestamp:(double)timestamp
                      andInterval:(double)interval;

@end

NS_ASSUME_NONNULL_END
