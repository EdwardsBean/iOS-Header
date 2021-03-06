//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFTumblrAccessResource;

@interface WFTumblrBlogPickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;
    WFTumblrAccessResource *_tumblrAccessResource;
}

+ (id)referencedActionResourceClasses;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) WFTumblrAccessResource *tumblrAccessResource; // @synthesize tumblrAccessResource=_tumblrAccessResource;
- (id)localizedLabelForPossibleState:(id)arg1;
@property(readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;
- (id)defaultSerializedRepresentation;
- (_Bool)isHidden;
- (void)possibleStatesDidChange;
- (void)updateBlogs;
- (void)wasAddedToWorkflow;
- (void)setActionResources:(id)arg1;
- (Class)singleStateClass;

@end

