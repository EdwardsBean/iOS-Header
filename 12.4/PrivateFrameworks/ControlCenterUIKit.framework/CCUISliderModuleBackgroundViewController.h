//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ControlCenterUIKit/CCUIContentModuleBackgroundViewController-Protocol.h>

@class CCUICAPackageView, NSString, UIImageView;

@interface CCUISliderModuleBackgroundViewController : UIViewController <CCUIContentModuleBackgroundViewController>
{
    UIImageView *_headerImageView;
    CCUICAPackageView *_packageView;
}

- (void).cxx_destruct;
- (struct CGPoint)_headerCenterForBounds:(struct CGRect)arg1;
- (struct CGRect)effectiveContentFrameForContainerFrame:(struct CGRect)arg1;
- (void)setGlyphState:(id)arg1;
- (void)setGlyphPackageDescription:(id)arg1;
- (void)setGlyphImage:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

