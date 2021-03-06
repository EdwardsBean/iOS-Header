//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SFSharedWebCredentialsDatabaseEntry : NSObject
{
    _Bool _approved;
    NSString *_domain;
    NSString *_appID;
    long long _service;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isApproved) _Bool approved; // @synthesize approved=_approved;
@property(readonly, nonatomic) long long service; // @synthesize service=_service;
@property(readonly, copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (id)description;
- (id)_initWithDomain:(id)arg1 appID:(id)arg2 service:(long long)arg3 isApproved:(_Bool)arg4;
- (id)initWithServiceDetails:(id)arg1;

@end

