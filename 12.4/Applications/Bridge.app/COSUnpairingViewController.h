//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "COSSetupPageViewController.h"

@class NSString, UIActivityIndicatorView, UILabel;

@interface COSUnpairingViewController : COSSetupPageViewController
{
    NSString *_titleString;
    UILabel *_headerLabel;
    UILabel *_activityLabel;
    UIActivityIndicatorView *_activityIndicator;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void).cxx_destruct;
- (void)presentWithController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)init;

@end

