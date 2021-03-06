//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString, UNNotificationContent, UNNotificationRequest, UNNotificationSettings;
@protocol UNUserNotificationCenterDelegate;

@protocol CALNUNUserNotificationCenterProtocol <NSObject>
@property(nonatomic) __weak id <UNUserNotificationCenterDelegate> delegate;
- (NSDictionary *)notificationSettingsForTopics;
- (UNNotificationSettings *)notificationSettings;
- (void)setWantsNotificationResponsesDelivered;
- (void)removeAllDeliveredNotifications;
- (void)removeDeliveredNotificationsWithIdentifiers:(NSArray *)arg1;
- (NSArray *)deliveredNotifications;
- (_Bool)replaceContentForRequestWithIdentifier:(NSString *)arg1 replacementContent:(UNNotificationContent *)arg2 error:(id *)arg3;
- (_Bool)addNotificationRequest:(UNNotificationRequest *)arg1 error:(id *)arg2;
- (NSSet *)notificationCategories;
- (void)setNotificationCategories:(NSSet *)arg1;
@end

