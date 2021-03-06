//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FIUIState, NSString;

@interface FIUITransition : NSObject
{
    NSString *_label;
    FIUIState *_toState;
    long long _event;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _gate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType gate; // @synthesize gate=_gate;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) long long event; // @synthesize event=_event;
@property(nonatomic) __weak FIUIState *toState; // @synthesize toState=_toState;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;

@end

