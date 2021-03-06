//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>

@class HMFNetAddress, NSString;
@protocol HMFLocking, HMFNetMonitorDelegate;

@interface HMFNetMonitor : HMFObject <HMFLogging>
{
    id <HMFLocking> _lock;
    _Bool _reachable;
    id <HMFNetMonitorDelegate> _delegate;
    HMFNetAddress *_netAddress;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) HMFNetAddress *netAddress; // @synthesize netAddress=_netAddress;
@property __weak id <HMFNetMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) unsigned long long reachabilityPath;
@property(getter=isReachable) _Bool reachable;
- (id)initWithNetService:(id)arg1;
- (id)initWithNetAddress:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

