//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSWPiOSCanvasViewController.h>

@class TSAInteractiveCanvasController, UIGestureRecognizer;

@interface TIACanvasViewController : TSWPiOSCanvasViewController
{
}

- (id)p_LocalGestureRecognizers;
@property(readonly, nonatomic) TSAInteractiveCanvasController *interactiveCanvasController;
- (_Bool)wantsHyperlinkGestureRecognizer;
@property UIGestureRecognizer *hyperlinkGestureRecognizer;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setUpGestureRecognizers;
- (id)commonGestureRecognizers;

@end

