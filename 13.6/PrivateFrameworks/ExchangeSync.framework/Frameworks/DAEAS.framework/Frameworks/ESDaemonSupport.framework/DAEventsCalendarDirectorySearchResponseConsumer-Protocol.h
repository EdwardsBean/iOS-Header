//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ESDaemonSupport/NSObject-Protocol.h>

@class NSDictionary, NSError;

@protocol DAEventsCalendarDirectorySearchResponseConsumer <NSObject>
- (void)calendarDirectorySearchFinishedWithError:(NSError *)arg1 exceededResultLimit:(_Bool)arg2;
- (void)calendarDirectorySearchReturnedResults:(NSDictionary *)arg1;
@end

