//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTAgentNotification, NSArray;

@protocol MTAgentNotificationListener <NSObject>
- (void)handleNotification:(MTAgentNotification *)arg1;
- (_Bool)handlesNotification:(MTAgentNotification *)arg1;

@optional
- (NSArray *)handledLiveDarwinNotifications;
@end

