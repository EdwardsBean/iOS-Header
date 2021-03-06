//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DACalDAV/CalDAVCalendar-Protocol.h>

@class NSString, NSURL;

@protocol CalDAVSubscribedCalendar <CalDAVCalendar>
@property(nonatomic) double refreshInterval;
@property(nonatomic) _Bool hasTaskFilter;
@property(nonatomic) _Bool hasAttachmentFilter;
@property(nonatomic) _Bool hasAlarmFilter;
@property(retain, nonatomic) NSURL *subscriptionURL;

@optional
@property(retain, nonatomic) NSString *languageCode;
@property(retain, nonatomic) NSString *locationCode;
@property(nonatomic) _Bool autoprovisioned;
@end

