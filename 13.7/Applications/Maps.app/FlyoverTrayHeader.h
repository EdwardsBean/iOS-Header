//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CardCloseButton, ShorteningLabel, UILabel;
@protocol TrayHeaderDelegate;

__attribute__((visibility("hidden")))
@interface FlyoverTrayHeader : UIView
{
    id <TrayHeaderDelegate> _delegate;
    UILabel *_titleLabel;
    ShorteningLabel *_subtitleLabel;
    CardCloseButton *_button;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CardCloseButton *button; // @synthesize button=_button;
@property(retain, nonatomic) ShorteningLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <TrayHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)trayHeaderDidReceiveTap:(id)arg1;
- (void)buttonDidTouchUpInside:(id)arg1;
- (void)setAttributedSubtitleAlternatives:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)_setupConstraints;
- (void)_setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

