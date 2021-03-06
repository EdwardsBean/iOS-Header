//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVDateRangeMetadataGroup.h>

@class AVDateRangeMetadataGroupInternal, NSArray, NSDate;

@interface AVMutableDateRangeMetadataGroup : AVDateRangeMetadataGroup
{
    AVDateRangeMetadataGroupInternal *_mutablePriv;
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSArray *items;
@property(copy, nonatomic) NSDate *endDate;
@property(copy, nonatomic) NSDate *startDate;
- (id)_initWithTaggedRangeMetadataDictionary:(id)arg1 items:(id)arg2;

@end

