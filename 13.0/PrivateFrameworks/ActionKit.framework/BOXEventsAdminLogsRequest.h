//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/BOXEventsRequest.h>

@class NSDate, NSString;

@interface BOXEventsAdminLogsRequest : BOXEventsRequest
{
    unsigned long long streamType;
    NSString *_eventType;
    NSDate *_createdAfterDate;
    NSDate *_createdBeforeDate;
}

@property(retain, nonatomic) NSDate *createdBeforeDate; // @synthesize createdBeforeDate=_createdBeforeDate;
@property(retain, nonatomic) NSDate *createdAfterDate; // @synthesize createdAfterDate=_createdAfterDate;
@property(retain, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (void)setStreamType:(unsigned long long)arg1;
- (unsigned long long)streamType;
- (void).cxx_destruct;
- (id)createOperation;

@end

