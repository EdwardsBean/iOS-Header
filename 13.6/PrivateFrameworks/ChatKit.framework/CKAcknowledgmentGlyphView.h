//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface CKAcknowledgmentGlyphView : UIView
{
    double _animationDuration;
    UIColor *_glyphColor;
    struct CGPoint _glyphOffset;
}

+ (void)cacheGlyphView:(id)arg1;
+ (id)glyphViewForAcknowledgmentType:(long long)arg1 glyphColor:(BOOL)arg2;
+ (id)viewCache;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(readonly, nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(readonly, nonatomic) struct CGPoint glyphOffset; // @synthesize glyphOffset=_glyphOffset;
@property(readonly, nonatomic) long long acknowledgmentType; // @dynamic acknowledgmentType;
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1 color:(BOOL)arg2;

@end

