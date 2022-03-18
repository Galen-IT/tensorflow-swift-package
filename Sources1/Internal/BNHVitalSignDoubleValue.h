//
//  BNHVitalSignDoubleValue.h
//  BinahAI
//
//  Created by Tal Lerman on 30/11/2021.
//  Copyright © 2021 binah.ai. All rights reserved.
//

#import "BNHVitalSign.h"

NS_ASSUME_NONNULL_BEGIN

@interface BNHVitalSignDoubleValue : NSObject <BNHVitalSign>

@property (nonatomic, readonly) double value;

- (instancetype)initWithValue:(double)value;

@end

NS_ASSUME_NONNULL_END
