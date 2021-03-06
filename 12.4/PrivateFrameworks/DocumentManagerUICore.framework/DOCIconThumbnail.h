//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentManagerUICore/DOCBaseThumbnail.h>

@class NSString;

@interface DOCIconThumbnail : DOCBaseThumbnail
{
    _Bool _folded;
    NSString *_contentType;
}

@property(nonatomic) _Bool folded; // @synthesize folded=_folded;
@property(readonly, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
- (id)createOperationWithSize:(struct CGSize)arg1 scale:(double)arg2 style:(unsigned long long)arg3 isInteractive:(_Bool)arg4;
- (id)initWithCache:(id)arg1 contentType:(id)arg2 size:(struct CGSize)arg3 scale:(double)arg4 fallback:(id)arg5 style:(unsigned long long)arg6 folded:(_Bool)arg7;

@end

