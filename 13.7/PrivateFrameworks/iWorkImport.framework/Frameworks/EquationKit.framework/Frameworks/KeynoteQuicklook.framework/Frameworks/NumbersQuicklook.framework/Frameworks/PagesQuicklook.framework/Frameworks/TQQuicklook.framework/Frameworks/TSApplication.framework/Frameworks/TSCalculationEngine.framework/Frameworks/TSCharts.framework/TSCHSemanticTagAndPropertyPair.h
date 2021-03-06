//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/NSCopying-Protocol.h>

@class TSCHStyleSemanticTag;

@interface TSCHSemanticTagAndPropertyPair : NSObject <NSCopying>
{
    TSCHStyleSemanticTag *mSemanticTag;
    int mProperty;
}

+ (id)pairWithSemanticTag:(id)arg1 property:(int)arg2;
+ (id)semanticTagToSemanticUsagesMapForSemanticUsages:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (int)property;
- (id)semanticTag;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSemanticTag:(id)arg1 property:(int)arg2;

@end

