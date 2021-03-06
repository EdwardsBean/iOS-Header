//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class NSArray, NSString, PXCMMAssetsProgressListener, PXCMMPeopleSuggestionsDataSourceManager, PXCMMPeopleSuggestionsMediaProvider, PXCMMPosterBannerView, PXCMMViewModel, UIView;
@protocol PXCMMBannerTileControllerDelegate, PXImportStatusManager;

@interface PXCMMBannerTileController : NSObject <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXUIViewBasicTile, PXReusableObject>
{
    unsigned long long _activityType;
    unsigned long long _sourceType;
    PXCMMViewModel *_viewModel;
    id <PXImportStatusManager> _importStatusManager;
    NSArray *_displayNames;
    PXCMMAssetsProgressListener *_assetsProgressListener;
    id <PXCMMBannerTileControllerDelegate> _delegate;
    PXCMMPosterBannerView *_bannerView;
    PXCMMPeopleSuggestionsDataSourceManager *_peopleSuggestionsDataSourceManager;
    PXCMMPeopleSuggestionsMediaProvider *_peopleSuggestionsMediaProvider;
}

+ (id)new;
@property(retain, nonatomic) PXCMMPeopleSuggestionsMediaProvider *peopleSuggestionsMediaProvider; // @synthesize peopleSuggestionsMediaProvider=_peopleSuggestionsMediaProvider;
@property(retain, nonatomic) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager; // @synthesize peopleSuggestionsDataSourceManager=_peopleSuggestionsDataSourceManager;
@property(retain, nonatomic) PXCMMPosterBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) __weak id <PXCMMBannerTileControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateDisplayNamesByViewModel;
- (void)_updatePeopleSuggestionNames;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
@property(readonly, nonatomic) UIView *view;
- (void)_updateContainsUnverifierPersons;
- (void)_configureBannerViewActionButtonWithTitle:(id)arg1;
- (void)_updateLoadingPeopleSuggestions;
- (void)_updateBannerActionButton;
- (void)_updateCounts;
- (void)setPeopleSuggestionDataSourceManager:(id)arg1 mediaProvider:(id)arg2;
- (id)initWithActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2 viewModel:(id)arg3 assetsProgressListener:(id)arg4 importStatusManager:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

