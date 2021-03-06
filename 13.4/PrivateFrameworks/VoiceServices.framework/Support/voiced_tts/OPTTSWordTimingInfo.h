//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <voiced_tts/FLTBFBufferAccessor-Protocol.h>
#import <voiced_tts/NSCopying-Protocol.h>

@class NSData, NSMutableDictionary, NSString;

@interface OPTTSWordTimingInfo : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct WordTimingInfo *_root;
}

+ (id)vs_wordTimingInfos:(id)arg1 withText:(id)arg2;
- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_79ee9959)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
@property(readonly, nonatomic) float timestamp;
@property(readonly, nonatomic) unsigned int length;
@property(readonly, nonatomic) unsigned int offset;
@property(readonly, nonatomic) unsigned int sample_idx;
@property(readonly, nonatomic) NSString *word;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct WordTimingInfo *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct WordTimingInfo *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

