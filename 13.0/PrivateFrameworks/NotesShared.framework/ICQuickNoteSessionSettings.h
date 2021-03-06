//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICQuickNoteSessionSettings : NSObject
{
}

+ (long long)showOnLockScreenSettingValue;
+ (_Bool)hasAccountSupportingLockScreen;
+ (void)updateNotesOnLockScreenWhenAccountSupportingLockScreenAdded;
+ (void)disableNotesOnLockScreenIfNecessary;
+ (void)setSessionDuration:(long long)arg1;
+ (long long)sessionDuration;
+ (void)setShowOnLockScreen:(long long)arg1;
+ (long long)showOnLockScreen;
+ (void)initialize;

@end

