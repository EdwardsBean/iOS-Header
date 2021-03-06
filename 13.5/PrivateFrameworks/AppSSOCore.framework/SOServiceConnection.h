//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppSSOCore/SOServiceProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SOServiceConnection : NSObject <SOServiceProtocol>
{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)_doConnectWithOptions:(unsigned long long)arg1;
- (_Bool)_connectToService;
- (void)isExtensionProcessWithAuditToken:(CDStruct_6ad76789)arg1 completion:(CDUnknownBlockType)arg2;
- (void)debugHintsWithCompletion:(CDUnknownBlockType)arg1;
- (void)realmsWithCompletion:(CDUnknownBlockType)arg1;
- (void)configurationWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

