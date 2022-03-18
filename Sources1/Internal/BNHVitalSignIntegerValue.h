//
//  BNHVitalSignIntegerValue.h
//  BinahAI
//
//  Created by Tal Lerman on 30/11/2021.
//  Copyright © 2021 binah.ai. All rights reserved.
//

#import "BNHVitalSign.h"

NS_ASSUME_NONNULL_BEGIN

@interface BNHVitalSignIntegerValue : NSObject <BNHVitalSign>

@property (nonatomic, readonly) NSInteger value;

- (instancetype)initWithValue:(NSInteger)value;
- (instancetype)initWithDoubleValue:(double)doubleValue;

@end

NS_ASSUME_NONNULL_END
