//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSOrderedSet, NSString;

@protocol FRPersistedBatchMetadata <NSObject, NSCopying>
@property(readonly, copy, nonatomic) NSOrderedSet *batchManifest;
@property(readonly, copy, nonatomic) NSString *batchID;
@end

