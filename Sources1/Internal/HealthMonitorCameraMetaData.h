//
//  HealthMonitorCameraMetaData.h
//  BinahAI
//
//  Created by Tal Lerman on 17/02/2021.
//  Copyright © 2021 binah.ai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface HealthMonitorCameraMetaData : NSObject

@property (nonatomic, readonly) CGSize frameSize;

@property (nonatomic, readonly) CMTime time;
@property (nonatomic, readonly) float iso;
@property (nonatomic, readonly) CMTime exposureDuration;
@property (nonatomic, readonly) float exposureTargetOffset;
@property (nonatomic, readonly) float exposureTargetBias;
@property (nonatomic, readonly) BOOL adjustingExposure;
@property (nonatomic, readonly) AVCaptureExposureMode exposureMode;
@property (nonatomic, readonly) AVCaptureWhiteBalanceMode whiteBalanceMode;
@property (nonatomic, readonly) BOOL adjustingWhiteBalance;
@property (nonatomic, readonly) AVCaptureWhiteBalanceGains deviceWhiteBalanceGains;
@property (nonatomic, readonly) CGFloat videoZoomFactor;
@property (nonatomic, readonly) AVCaptureFocusMode focusMode;
@property (nonatomic, readonly) CGPoint focusPointOfInterest;
@property (nonatomic, readonly) BOOL adjustingFocus;
@property (nonatomic, readonly) BOOL smoothAutoFocusEnabled;
@property (nonatomic, readonly) BOOL lowLightBoostEnabled;
@property (nonatomic, readonly) BOOL subjectAreaChangeMonitoringEnabled;
@property (nonatomic, readonly) float lensPosition;
@property (nonatomic, readonly) float lensAperture;
@property (nonatomic, readonly) CMTime activeVideoMinFrameDuration;
@property (nonatomic, readonly) CMTime activeVideoMaxFrameDuration;


- (instancetype)init NS_UNAVAILABLE;
- (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithTime:(CMTime)time
                   frameSize:(CGSize)frameSize
                         iso:(float)iso
            exposureDuration:(CMTime)exposureDuration
        exposureTargetOffset:(float)exposureTargetOffset
          exposureTargetBias:(float)exposureTargetBias
           adjustingExposure:(BOOL)adjustingExposure
                exposureMode:(AVCaptureExposureMode)exposureMode
            whiteBalanceMode:(AVCaptureWhiteBalanceMode)whiteBalanceMode
       adjustingWhiteBalance:(BOOL)adjustingWhiteBalance
     deviceWhiteBalanceGains:(AVCaptureWhiteBalanceGains)deviceWhiteBalanceGains
             videoZoomFactor:(CGFloat)videoZoomFactor
                   focusMode:(AVCaptureFocusMode)focusMode
        focusPointOfInterest:(CGPoint)focusPointOfInterest
              adjustingFocus:(BOOL)adjustingFocus
      smoothAutoFocusEnabled:(BOOL)smoothAutoFocusEnabled
        lowLightBoostEnabled:(BOOL)lowLightBoostEnabled
subjectAreaChangeMonitoringEnabled:(BOOL)subjectAreaChangeMonitoringEnabled
                lensPosition:(float)lensPosition
                lensAperture:(float)lensAperture
 activeVideoMinFrameDuration:(CMTime)activeVideoMinFrameDuration
 activeVideoMaxFrameDuration:(CMTime)activeVideoMaxFrameDuration;

- (NSString *)getString;

@end

NS_ASSUME_NONNULL_END
