//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGDefaultCollectionTitleGenerator.h>

@class NSString;

@interface PGMeaningfulEventTitleGenerator : PGDefaultCollectionTitleGenerator
{
    NSString *_meaningLabel;
    _Bool _meaningIsReliable;
}

- (void).cxx_destruct;
- (id)_timeTitle;
- (id)_meaningLabelForTitle;
- (id)_title;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithCollection:(id)arg1 meaningLabel:(id)arg2 meaningIsReliable:(_Bool)arg3;

@end

