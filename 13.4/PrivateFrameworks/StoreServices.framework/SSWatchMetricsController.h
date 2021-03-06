//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SSWatchMetricsConfiguration, SSXPCConnection;
@protocol OS_dispatch_queue;

@interface SSWatchMetricsController : NSObject
{
    SSXPCConnection *_connection;
    SSWatchMetricsConfiguration *_metricsConfiguration;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) SSWatchMetricsConfiguration *metricsConfiguration; // @synthesize metricsConfiguration=_metricsConfiguration;
- (_Bool)isEnabled;
- (id)_connection;
- (void)insertEvent:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

