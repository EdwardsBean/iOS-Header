//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetActionManager.h>

@class PUPhotoKitDataSourceManager;

@interface PUPhotoKitAssetActionManager : PUAssetActionManager
{
    _Bool _enableNavigateToPhotos;
    PUPhotoKitDataSourceManager *_dataSourceManager;
}

+ (Class)actionPerformerClassForActionType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool enableNavigateToPhotos; // @synthesize enableNavigateToPhotos=_enableNavigateToPhotos;
@property(retain, nonatomic) PUPhotoKitDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
- (_Bool)_actionTypeIsSimple:(unsigned long long)arg1;
- (id)_photoKitAssetsDataSource;
- (id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)arg1 withNewStillImageTime:(CDStruct_1b6d18a9)arg2;
- (id)actionPerformerForSettingFavoriteTo:(_Bool)arg1 onAssetsByAssetCollection:(id)arg2;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;
- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg1;
- (_Bool)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (_Bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;

@end

