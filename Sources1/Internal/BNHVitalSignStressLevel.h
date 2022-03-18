//
//  BNHVitalSignStressLevel.h
//  BinahAI
//
//  Created by Tal Lerman on 30/11/2021.
//  Copyright © 2021 binah.ai. All rights reserved.
//

#import "BNHVitalSign.h"
#import "BNHStressLevelType.h"


NS_ASSUME_NONNULL_BEGIN

@interface BNHVitalSignStressLevel : NSObject <BNHVitalSign>

@property (nonatomic, readonly) BNHStressLevelType value;

- (instancetype)initWithValue:(BNHStressLevelType)value;

@end

NS_ASSUME_NONNULL_END
