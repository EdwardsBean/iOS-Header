//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSNumber, SRStarkGatekeeperContactView;

@interface SRStarkMessagesContactContainerView : UIView
{
    SRStarkGatekeeperContactView *_contactView;
    NSNumber *_yOffset;
}

- (void).cxx_destruct;
@property(nonatomic) NSNumber *yOffset; // @synthesize yOffset=_yOffset;
@property(readonly, nonatomic, getter=_contactView) SRStarkGatekeeperContactView *contactView; // @synthesize contactView=_contactView;
- (id)description;
- (void)layoutSubviews;
- (void)centerText;
- (void)setTextOffset:(double)arg1;
- (void)showContactView:(id)arg1;
- (void)_configureWithAceObject:(id)arg1;
- (void)updateWithAceObject:(id)arg1;
- (_Bool)isEquivalentTo:(id)arg1;
- (id)initWithAceObject:(id)arg1;
- (id)initWithRequestOptions:(id)arg1;

@end

