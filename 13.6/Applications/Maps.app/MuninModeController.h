//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IOSStackedChromeModeController-Protocol.h"
#import "MapsScreenshotServiceDelegate-Protocol.h"
#import "MuninContainerViewControllerAnimationDelegate-Protocol.h"

@class IOSChromeViewController, MKMuninView, MuninContainerViewController, NSString, UIViewController, _MapViewState, _MuninViewState;
@protocol MapSelectionManagerDelegate, MuninActionCoordination;

__attribute__((visibility("hidden")))
@interface MuninModeController : NSObject <MuninContainerViewControllerAnimationDelegate, IOSStackedChromeModeController, MapsScreenshotServiceDelegate>
{
    MuninContainerViewController *_containerViewController;
    _MapViewState *_mapViewState;
    _MuninViewState *_muninViewState;
}

- (void).cxx_destruct;
- (id)viewsToRenderMapsScreenshotService:(id)arg1;
- (void)muninContainerViewControllerDidAnimateFromModeTransition:(id)arg1;
- (void)getCurrentSceneTitleWithCompletion:(CDUnknownBlockType)arg1;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)becomeCurrentModeAnimated:(_Bool)arg1 fromMode:(id)arg2;
@property(readonly, nonatomic) UIViewController *viewController;
@property(readonly, nonatomic) _Bool usesDefaultTransitions;
- (void)animateFromModeTransition:(id)arg1;
- (void)animateToModeTransition:(id)arg1;
- (id)transitionControllerForPopToMode:(id)arg1;
- (id)transitionControllerForPushFromMode:(id)arg1;
@property(readonly, nonatomic) _Bool showsMapView;
@property(readonly, nonatomic) _Bool shouldResetStateAfterResigning;
@property(readonly, nonatomic) id mapViewDelegate;
@property(readonly, nonatomic) MKMuninView *muninView;
@property(nonatomic) __weak IOSChromeViewController *chromeViewController;
@property(readonly, nonatomic) id <MuninActionCoordination> actionCoordinator;
- (_Bool)isDisplayingMuninPIP;
- (id)initWithEntryPoint:(id)arg1 muninView:(id)arg2 showsFullScreen:(_Bool)arg3 originFrame:(struct CGRect)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <MapSelectionManagerDelegate> mapSelectionManagerDelegate;
@property(readonly, nonatomic) _Bool navigationTransitionShouldOccurImmediately;
@property(readonly, nonatomic) _Bool showsMapViewForTransitions;
@property(readonly, nonatomic) _Bool showsNavigationBar;
@property(readonly) Class superclass;

@end

