//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

#import <TSReading/TSDTapGesture-Protocol.h>

@class NSString, TSDRep;
@protocol TSDGestureDelegate, TSDGestureTarget;

@interface TSWPTapAndTouchGestureRecognizer : UIGestureRecognizer <TSDTapGesture>
{
    unsigned long long _numberOfTapsRequired;
}

@property(nonatomic) unsigned long long numberOfTapsRequired; // @synthesize numberOfTapsRequired=_numberOfTapsRequired;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)p_failBecauseFingerStayedUpTooLongAfterTap;

// Remaining properties
@property(retain, nonatomic) id <TSDGestureTarget> cachedGestureTarget; // @dynamic cachedGestureTarget;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) id <TSDGestureDelegate> gestureDelegate; // @dynamic gestureDelegate;
@property(retain, nonatomic) NSString *gestureKind; // @dynamic gestureKind;
@property(readonly, nonatomic) int gestureState; // @dynamic gestureState;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) TSDRep *targetRep; // @dynamic targetRep;

@end

