//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

#import <CoreSpeech/BKDeviceDelegate-Protocol.h>

@class BKDevice, NSString;
@protocol CSBiometricMatchMonitorDelegate;

@interface CSBiometricMatchMonitor : CSEventMonitor <BKDeviceDelegate>
{
    id <CSBiometricMatchMonitorDelegate> _delegate;
    BKDevice *_biometricDevice;
}

+ (id)sharedInstance;
@property(retain, nonatomic) BKDevice *biometricDevice; // @synthesize biometricDevice=_biometricDevice;
@property(nonatomic) __weak id <CSBiometricMatchMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)device:(id)arg1 matchEventOccurred:(id)arg2;
- (_Bool)getLastBiometricMatchEvent:(_Bool *)arg1 atTime:(unsigned long long *)arg2;
- (void)startObserving;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

