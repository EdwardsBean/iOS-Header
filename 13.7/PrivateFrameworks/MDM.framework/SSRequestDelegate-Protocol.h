//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MDM/NSObject-Protocol.h>

@class NSError, SSRequest;

@protocol SSRequestDelegate <NSObject>

@optional
- (void)requestDidFinish:(SSRequest *)arg1;
- (void)request:(SSRequest *)arg1 didFailWithError:(NSError *)arg2;
@end

