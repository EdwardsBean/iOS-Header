//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NENetworkAgent.h>

@class NSData;

@interface NEProxyConfigurationNetworkAgent : NENetworkAgent
{
    NSData *_agentData;
}

+ (id)agentFromData:(id)arg1;
+ (id)agentType;
+ (id)agentDomain;
- (void).cxx_destruct;
@property(retain) NSData *agentData; // @synthesize agentData=_agentData;
- (id)copyAgentData;
- (id)initWithProxyConfiguration:(id)arg1;
- (id)agentDescription;

@end

