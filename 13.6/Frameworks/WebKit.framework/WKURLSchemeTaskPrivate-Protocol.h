//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/WKURLSchemeTask-Protocol.h>

@class NSURLRequest, NSURLResponse;

@protocol WKURLSchemeTaskPrivate <WKURLSchemeTask>
@property(readonly, nonatomic) _Bool _requestOnlyIfCached;
- (void)_didPerformRedirection:(NSURLResponse *)arg1 newRequest:(NSURLRequest *)arg2;
@end

