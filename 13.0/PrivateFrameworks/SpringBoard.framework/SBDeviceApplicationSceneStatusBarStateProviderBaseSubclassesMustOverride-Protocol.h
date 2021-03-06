//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSDictionary, NSString, SBDeviceApplicationSceneHandle;

@protocol SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride <NSObject>
- (long long)_fallbackInterfaceOrientation;
- (_Bool)_statusBarAppearsOutsideOfAJailedApp;
- (_Bool)_suppressInheritedPartStyles;
- (NSString *)statusBarSceneIdentifier;
- (SBDeviceApplicationSceneHandle *)statusBarControllingSceneHandle;
- (struct CGRect)statusBarAvoidanceFrame;
- (int)statusBarStyleOverridesToSuppress;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1;
- (_Bool)_statusBarHiddenGivenFallbackOrientation:(long long)arg1;
- (double)_statusBarAlpha;
- (long long)_statusBarStyleForPartWithIdentifier:(NSString *)arg1 suppressingInherited:(_Bool)arg2;
- (NSDictionary *)_statusBarPartStyles;
- (long long)_statusBarStyle;
@end

