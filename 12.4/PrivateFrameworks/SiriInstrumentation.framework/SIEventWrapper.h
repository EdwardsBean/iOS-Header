//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class SISchemaClientAnyEvent, SISchemaClientEventMetadata;

@interface SIEventWrapper : PBCodable
{
    SISchemaClientEventMetadata *_metadata;
    SISchemaClientAnyEvent *_wrappedEvent;
}

@property(retain, nonatomic) SISchemaClientAnyEvent *wrappedEvent; // @synthesize wrappedEvent=_wrappedEvent;
@property(retain, nonatomic) SISchemaClientEventMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithTimestamp:(long long)arg1 timestampReferenceID:(id)arg2 eventType:(int)arg3 eventBody:(id)arg4;

@end

