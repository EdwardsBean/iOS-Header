//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString;
@protocol CSApplicationInformationObserving;

@protocol CSApplicationInforming <NSObject>
- (void)removeApplicationInformationObserver:(id <CSApplicationInformationObserving>)arg1;
- (void)addApplicationInformationObserver:(id <CSApplicationInformationObserving>)arg1;
- (_Bool)shouldScreenTimeSuppressNotificationsForBundleIdentifier:(NSString *)arg1;
- (_Bool)isBundleIdentifierWallet:(NSString *)arg1;
- (_Bool)isBundleIdentifierClock:(NSString *)arg1;
@end

