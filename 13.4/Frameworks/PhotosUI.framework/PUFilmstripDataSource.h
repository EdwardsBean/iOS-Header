//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUTilingDataSource.h>

@class AVAsset, NSArray, NSMapTable, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PUFilmstripDataSource : PUTilingDataSource
{
    NSMutableDictionary *_assetByIndexPath;
    NSMapTable *_indexPathByAsset;
    AVAsset *_asset;
    long long _numberOfIndexes;
    NSArray *_indicatorInfos;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *indicatorInfos; // @synthesize indicatorInfos=_indicatorInfos;
@property(readonly, nonatomic) long long numberOfIndexes; // @synthesize numberOfIndexes=_numberOfIndexes;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (id)indexPathForAsset:(id)arg1;
- (id)assetAtIndexPath:(id)arg1;
- (double)_normalizedTimeForIndexPath:(id)arg1;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)initWithAsset:(id)arg1 numberOfIndexes:(long long)arg2 indicatorInfos:(id)arg3;
- (id)init;

@end

