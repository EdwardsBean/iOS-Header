//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BSTransactionObserver-Protocol.h"

@class FBApplicationProcess, FBApplicationProcessLaunchTransaction;

@protocol FBApplicationProcessLaunchTransactionObserver <BSTransactionObserver>

@optional
- (void)transaction:(FBApplicationProcessLaunchTransaction *)arg1 didLaunchProcess:(FBApplicationProcess *)arg2;
- (void)transaction:(FBApplicationProcessLaunchTransaction *)arg1 willLaunchProcess:(FBApplicationProcess *)arg2;
@end

