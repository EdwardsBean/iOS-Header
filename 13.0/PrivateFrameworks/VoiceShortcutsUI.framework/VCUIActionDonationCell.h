//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView;
@protocol VCActionDonation;

@interface VCUIActionDonationCell : UITableViewCell
{
    _Bool _showAppName;
    _Bool _dimmingIneligibleForPrediction;
    id <VCActionDonation> _donation;
    UIView *_cardView;
}

+ (id)preferredReuseIdentifier;
@property(nonatomic) __weak UIView *cardView; // @synthesize cardView=_cardView;
@property(nonatomic) _Bool dimmingIneligibleForPrediction; // @synthesize dimmingIneligibleForPrediction=_dimmingIneligibleForPrediction;
@property(nonatomic) _Bool showAppName; // @synthesize showAppName=_showAppName;
@property(nonatomic) __weak id <VCActionDonation> donation; // @synthesize donation=_donation;
- (void).cxx_destruct;
- (_Bool)_donationHasSubtitle:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCardView;
- (void)configureWithDonation:(id)arg1 showingAppName:(_Bool)arg2 dimmingIneligibleForPrediction:(_Bool)arg3;
- (void)configureWithDonation:(id)arg1 showingAppName:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

