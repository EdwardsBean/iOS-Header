//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>

@class BSObjCArgument, NSArray, NSString;

@interface BSObjCMethod : NSObject <BSDescriptionProviding>
{
    NSString *_name;
    NSString *_encoding;
    SEL _selector;
    NSArray *_arguments;
    BSObjCArgument *_returnValue;
    long long _required;
}

+ (id)methodWithSelector:(SEL)arg1 typeEncoding:(const char *)arg2;
+ (id)methodWithMethod:(struct objc_method *)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long required; // @synthesize required=_required;
@property(readonly, retain, nonatomic) BSObjCArgument *returnValue; // @synthesize returnValue=_returnValue;
@property(readonly, retain, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, copy, nonatomic) NSString *encoding; // @synthesize encoding=_encoding;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, retain, nonatomic) BSObjCArgument *lastArgument;
@property(readonly, retain, nonatomic) BSObjCArgument *firstArgument;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

