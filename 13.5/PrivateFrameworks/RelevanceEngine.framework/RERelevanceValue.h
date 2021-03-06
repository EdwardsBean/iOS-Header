//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>
#import <RelevanceEngine/REAutomaticExportedInterface-Protocol.h>

@class RETaggedFeatureValueArray;

@interface RERelevanceValue : NSObject <NSCopying, REAutomaticExportedInterface>
{
    unsigned long long _hash;
    _Bool _historic;
    RETaggedFeatureValueArray *_values;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isHistoric) _Bool historic; // @synthesize historic=_historic;
@property(readonly, nonatomic) RETaggedFeatureValueArray *values; // @synthesize values=_values;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValues:(id)arg1 isHistoric:(_Bool)arg2;

@end

