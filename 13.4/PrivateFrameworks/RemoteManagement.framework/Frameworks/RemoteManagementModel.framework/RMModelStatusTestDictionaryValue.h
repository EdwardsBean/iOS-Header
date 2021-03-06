//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteManagementModel/RMModelStatusBase.h>

@class NSString;

@interface RMModelStatusTestDictionaryValue : RMModelStatusBase
{
    NSString *_statusKey1;
    NSString *_statusKey2;
}

+ (id)buildRequiredOnlyWithKey1:(id)arg1;
+ (id)buildWithKey1:(id)arg1 key2:(id)arg2;
+ (id)allowedStatusKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *statusKey2; // @synthesize statusKey2=_statusKey2;
@property(copy, nonatomic) NSString *statusKey1; // @synthesize statusKey1=_statusKey1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithType:(short)arg1;
- (_Bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;

@end

