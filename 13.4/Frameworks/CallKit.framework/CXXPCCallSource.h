//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallKit/CXCallSource.h>

@class NSSet, NSString, NSURL, NSXPCConnection;

@interface CXXPCCallSource : CXCallSource
{
    _Bool _hasVoIPBackgroundMode;
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSXPCConnection *_connection;
    NSString *_applicationIdentifier;
    NSSet *_capabilities;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasVoIPBackgroundMode; // @synthesize hasVoIPBackgroundMode=_hasVoIPBackgroundMode;
@property(copy, nonatomic) NSSet *capabilities; // @synthesize capabilities=_capabilities;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)vendorProtocolDelegate;
- (_Bool)isPermittedToUseBluetoothAccessories;
- (_Bool)isPermittedToUsePrivateAPI;
- (_Bool)isPermittedToUsePublicAPI;
- (int)processIdentifier;
- (id)identifier;
- (_Bool)isConnected;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (id)init;

@end

