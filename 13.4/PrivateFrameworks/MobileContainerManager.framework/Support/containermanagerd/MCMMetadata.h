//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCMConcreteContainerIdentity, MCMUserIdentity, NSDictionary, NSString, NSURL, NSUUID;

@interface MCMMetadata : NSObject
{
    _Bool _transient;
    _Bool _existed;
    unsigned long long _containerClass;
    MCMUserIdentity *_userIdentity;
    NSString *_identifier;
    NSUUID *_uuid;
    NSURL *_url;
    NSString *_userManagedAssetsDirName;
    NSDictionary *_info;
}

+ (id)readAndValidateMetadataAtFileUrl:(id)arg1 forUserIdentity:(id)arg2 checkClassPath:(_Bool)arg3 error:(id *)arg4;
+ (id)readAndValidateMetadataAtUrl:(id)arg1 forUserIdentity:(id)arg2 checkClassPath:(_Bool)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool existed; // @synthesize existed=_existed;
@property(nonatomic) _Bool transient; // @synthesize transient=_transient;
@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(retain, nonatomic) NSString *userManagedAssetsDirName; // @synthesize userManagedAssetsDirName=_userManagedAssetsDirName;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) MCMUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) unsigned long long containerClass; // @synthesize containerClass=_containerClass;
- (id)description;
@property(readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentity;
- (_Bool)writeMetadataToFileURL:(id)arg1 error:(id *)arg2;
- (_Bool)writeMetadataToDiskWithError:(id *)arg1;
- (id)initWithContainerIdentity:(id)arg1 info:(id)arg2 url:(id)arg3 userManagedAssetsDirName:(id)arg4;

@end

