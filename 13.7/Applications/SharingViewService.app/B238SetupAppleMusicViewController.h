//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "B238SetupBaseViewController.h"

#import "SKCloudServiceSetupViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SKCloudServiceSetupViewController, UIView;

@interface B238SetupAppleMusicViewController : B238SetupBaseViewController <SKCloudServiceSetupViewControllerDelegate, UIGestureRecognizerDelegate>
{
    UIView *_storeKitView;
    SKCloudServiceSetupViewController *_vcAppleMusic;
    NSString *_deviceGUID;
    NSString *_deviceSerialNumber;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *deviceSerialNumber; // @synthesize deviceSerialNumber=_deviceSerialNumber;
@property(copy, nonatomic) NSString *deviceGUID; // @synthesize deviceGUID=_deviceGUID;
- (void)cloudServiceSetupViewControllerDidDismiss:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (void)_hideAppleMusicViewController;
- (void)_showAppleMusicViewController;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

