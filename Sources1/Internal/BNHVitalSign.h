//
//  BNHVitalSign.h
//  BinahAI
//
//  Created by Tal Lerman on 30/11/2021.
//  Copyright © 2021 binah.ai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BNHVitalSignType.h"


NS_ASSUME_NONNULL_BEGIN

@protocol BNHVitalSign

@property (nonatomic, readonly) BNHVitalSignType type;
@property (nonatomic, readonly) id value;

- (BNHVitalSignType)type;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithValue:(id)value;

@end

NS_ASSUME_NONNULL_END
