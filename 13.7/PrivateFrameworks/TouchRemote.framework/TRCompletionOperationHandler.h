//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchRemote/TROperationHandler-Protocol.h>

@class NSString;

@interface TRCompletionOperationHandler : NSObject <TROperationHandler>
{
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_handleCompletionRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)registerMessageHandlersForSession:(id)arg1;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

