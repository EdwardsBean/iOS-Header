//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSString, SBAppLayout, UIGestureRecognizer;

@interface SBFluidSwitcherGesture : NSObject <BSDescriptionProviding>
{
    CDUnknownBlockType _eventProvider;
    long long _state;
    SBAppLayout *_selectedAppLayout;
    UIGestureRecognizer *_gestureRecognizerForStudyLog;
    long long _type;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic, setter=_setGestureRecognizerForStudyLog:) UIGestureRecognizer *gestureRecognizerForStudyLog; // @synthesize gestureRecognizerForStudyLog=_gestureRecognizerForStudyLog;
@property(retain, nonatomic, setter=_setSelectedAppLayout:) SBAppLayout *selectedAppLayout; // @synthesize selectedAppLayout=_selectedAppLayout;
@property(nonatomic, setter=_setState:) long long state; // @synthesize state=_state;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)studyLogData;
- (id)gestureEvent;
- (id)initWithType:(long long)arg1 eventProvider:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

