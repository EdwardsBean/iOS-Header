//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBApplication.h"

@interface SBCameraApplication : SBApplication
{
    _Bool _hasPreHeatInFlight;
}

@property(nonatomic) _Bool hasPreHeatInFlight; // @synthesize hasPreHeatInFlight=_hasPreHeatInFlight;
- (_Bool)transitionsToLiveWithoutAnimation;
- (void)_cancelPreheatForUserLaunchIfNecessary;
- (_Bool)icon:(id)arg1 launchFromLocation:(long long)arg2 context:(id)arg3 activationSettings:(id)arg4 actions:(id)arg5;
- (void)preHeatForUserLaunchIfNecessaryWithAbsoluteTime:(unsigned long long)arg1 andContinuousTime:(unsigned long long)arg2;

@end

