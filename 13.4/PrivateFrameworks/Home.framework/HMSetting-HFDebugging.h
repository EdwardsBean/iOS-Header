//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMSetting.h>

#import <Home/HFStateDumpBuildable-Protocol.h>

@class NSString;

@interface HMSetting (HFDebugging) <HFStateDumpBuildable>
+ (id)hf_debugDescriptionForValue:(id)arg1 keyPath:(id)arg2;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
@property(readonly, copy, nonatomic) NSString *hf_debugValueDescription;
@property(readonly, nonatomic) _Bool hf_isBooleanSetting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

