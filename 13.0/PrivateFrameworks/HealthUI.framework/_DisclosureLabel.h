//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@interface _DisclosureLabel : UILabel
{
    struct UIEdgeInsets _edgeInsets;
}

@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void)updateConstraints;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

