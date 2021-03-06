//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MessageProtection/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NGMPBInnerMessage : PBCodable <NSCopying>
{
    unsigned int _counter;
    NSData *_debugInfo;
    NSData *_message;
    struct {
        unsigned int counter:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *debugInfo; // @synthesize debugInfo=_debugInfo;
@property(nonatomic) unsigned int counter; // @synthesize counter=_counter;
@property(retain, nonatomic) NSData *message; // @synthesize message=_message;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDebugInfo;
@property(nonatomic) _Bool hasCounter;

@end

