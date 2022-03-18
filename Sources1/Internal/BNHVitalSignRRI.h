//
//  BNHVitalSignRRI.h
//  BinahAI
//
//  Created by Tal Lerman on 30/11/2021.
//  Copyright © 2021 binah.ai. All rights reserved.
//

#import "BNHVitalSign.h"
#import "BNHRriValue.h"

NS_ASSUME_NONNULL_BEGIN

@interface BNHVitalSignRRI : NSObject <BNHVitalSign>

@property (nonatomic, readonly) NSArray<BNHRriValue *> *value;

- (instancetype)initWithValue:(NSArray<BNHRriValue *> *)value;

@end

NS_ASSUME_NONNULL_END
