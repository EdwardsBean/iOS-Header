//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSDictionary;

@interface SKUIMetricsRequestInfo : NSObject <NSCopying>
{
    _Bool _responseWasCached;
    _Bool _hasResponseWasCachedValue;
    double _requestStartTime;
    double _responseStartTime;
    double _responseEndTime;
}

@property(nonatomic) _Bool hasResponseWasCachedValue; // @synthesize hasResponseWasCachedValue=_hasResponseWasCachedValue;
@property(nonatomic) _Bool responseWasCached; // @synthesize responseWasCached=_responseWasCached;
@property(nonatomic) double responseEndTime; // @synthesize responseEndTime=_responseEndTime;
@property(nonatomic) double responseStartTime; // @synthesize responseStartTime=_responseStartTime;
@property(nonatomic) double requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReportRequestTimesMessagePayload:(id)arg1;

@end

