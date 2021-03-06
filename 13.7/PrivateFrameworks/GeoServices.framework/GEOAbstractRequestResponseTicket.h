//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOAbstractTicket.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse;

@interface GEOAbstractRequestResponseTicket : GEOAbstractTicket
{
    GEOPDPlaceRequest *_request;
    GEOPDPlaceResponse *_response;
}

- (void).cxx_destruct;
- (CDStruct_d1a7ebee)dataRequestKind;
- (void)cancel;
- (void)performSubmitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(double)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (void)performSubmitWithHandler:(CDUnknownBlockType)arg1 timeout:(double)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (id)initWithRequest:(id)arg1 traits:(id)arg2;
- (id)initWithTraits:(id)arg1;

@end

