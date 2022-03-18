//
//  HealthMonitorReport.h
//  health_monitor_sdk
//
//  Created by Tal Lerman on 26/04/2020.
//  Copyright © 2020 binah.ai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RRIValue.h"
#import "BloodPressureValue.h"
#import "StressLevelType.h"


@interface HealthMonitorReport : NSObject

@property (nonatomic, strong) NSNumber *_Nullable HeartRate;               // HR
@property (nonatomic, strong) NSNumber *_Nullable RespirationRate;         // RR
@property (nonatomic, strong) NSNumber *_Nullable OxygenSaturation;        // SpO2
@property (nonatomic, strong) NSNumber *_Nullable StandardDeviationNN;     // SDNN
@property (nonatomic) StressLevelType StressLevel;                         // SL
@property (nonatomic, strong) NSNumber *_Nullable StressIndex;             // SI
@property (nonatomic, strong) BloodPressureValue *_Nullable BloodPressure; // BP
@property (nonatomic, strong) NSArray<RRIValue*> *_Nullable RRInterval;    // RRi

- (BOOL)isEmpty;

@end

