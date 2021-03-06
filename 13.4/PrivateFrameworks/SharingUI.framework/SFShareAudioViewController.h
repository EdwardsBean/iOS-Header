//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class NSBundle, SFShareAudioConnectingViewController, SFShareAudioSessionClient, UIStoryboard;

@interface SFShareAudioViewController : UINavigationController
{
    unsigned int _flags;
    CDUnknownBlockType _completion;
    SFShareAudioSessionClient *_shareAudioSession;
    NSBundle *_mainBundle;
    UIStoryboard *_mainStoryboard;
    SFShareAudioConnectingViewController *_vcConnecting;
}

+ (id)instantiateViewController;
- (void).cxx_destruct;
@property(retain, nonatomic) SFShareAudioConnectingViewController *vcConnecting; // @synthesize vcConnecting=_vcConnecting;
@property(retain, nonatomic) UIStoryboard *mainStoryboard; // @synthesize mainStoryboard=_mainStoryboard;
@property(retain, nonatomic) NSBundle *mainBundle; // @synthesize mainBundle=_mainBundle;
@property(retain, nonatomic) SFShareAudioSessionClient *shareAudioSession; // @synthesize shareAudioSession=_shareAudioSession;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)_transitionToViewController:(id)arg1 animate:(_Bool)arg2;
- (void)_showConnecting:(id)arg1;
- (void)_showPairInstructions:(id)arg1;
- (void)_showConfirm:(id)arg1;
- (void)_showError:(id)arg1;
- (void)_showBringClose;
- (void)_sessionProgressEvent:(int)arg1 info:(id)arg2;
- (void)_sessionStart;
- (void)reportUserCancelled;
- (void)reportError:(id)arg1;
- (void)_reportCompletion:(id)arg1 mediaRouteID:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;

@end

