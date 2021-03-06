//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFInstallAppRequest.h>

@class NSArray, NSDictionary, NSString;

@interface DMFMDMv1InstallAppRequest : DMFInstallAppRequest
{
    _Bool _manage;
    NSString *_redemptionCode;
    NSString *_originator;
    unsigned long long _managementOptions;
    NSString *_VPNUUIDString;
    NSArray *_associatedDomains;
    NSDictionary *_configuration;
    NSString *_personaID;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isPermittedOnUserConnection;
+ (_Bool)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) NSArray *associatedDomains; // @synthesize associatedDomains=_associatedDomains;
@property(copy, nonatomic) NSString *VPNUUIDString; // @synthesize VPNUUIDString=_VPNUUIDString;
@property(nonatomic) unsigned long long managementOptions; // @synthesize managementOptions=_managementOptions;
@property(nonatomic) _Bool manage; // @synthesize manage=_manage;
@property(copy, nonatomic) NSString *originator; // @synthesize originator=_originator;
@property(copy, nonatomic) NSString *redemptionCode; // @synthesize redemptionCode=_redemptionCode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

