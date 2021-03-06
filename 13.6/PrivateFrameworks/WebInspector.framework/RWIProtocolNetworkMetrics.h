//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders, RWIProtocolSecurityConnection;

@interface RWIProtocolNetworkMetrics : RWIProtocolJSONObject
{
}

@property(retain, nonatomic) RWIProtocolSecurityConnection *securityConnection;
@property(nonatomic) double responseBodyDecodedSize;
@property(nonatomic) double responseBodyBytesReceived;
@property(nonatomic) double responseHeaderBytesReceived;
@property(nonatomic) double requestBodyBytesSent;
@property(nonatomic) double requestHeaderBytesSent;
@property(retain, nonatomic) RWIProtocolNetworkHeaders *requestHeaders;
@property(copy, nonatomic) NSString *remoteAddress;
@property(copy, nonatomic) NSString *connectionIdentifier;
@property(nonatomic) long long priority;
@property(copy, nonatomic) NSString *protocol;

@end

