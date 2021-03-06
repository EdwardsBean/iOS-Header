//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDCoreRoutineDeletionGroupStats : PBCodable <NSCopying>
{
    unsigned int _itemType;
    unsigned int _oldestRecordAgeInDays;
    NSMutableArray *_records;
    struct {
        unsigned int itemType:1;
        unsigned int oldestRecordAgeInDays:1;
    } _has;
}

+ (Class)recordsType;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property(nonatomic) unsigned int oldestRecordAgeInDays; // @synthesize oldestRecordAgeInDays=_oldestRecordAgeInDays;
@property(nonatomic) unsigned int itemType; // @synthesize itemType=_itemType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)recordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordsCount;
- (void)addRecords:(id)arg1;
- (void)clearRecords;
@property(nonatomic) _Bool hasOldestRecordAgeInDays;
@property(nonatomic) _Bool hasItemType;
- (void)dealloc;

@end

