//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TabSnapshotContentProvider-Protocol.h"

@class NSString, UIColor, UIImage, UIView;

@interface ViewSnapshotContentProvider : NSObject <TabSnapshotContentProvider>
{
    UIView *_snapshotContentView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *snapshotContentView; // @synthesize snapshotContentView=_snapshotContentView;
@property(readonly, nonatomic) _Bool snapshotContentShouldUnderlapTopBackdrop;
- (struct CGRect)snapshotContentRectInBounds:(struct CGRect)arg1;
- (id)initWithContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIColor *snapshotBackgroundColor;
@property(readonly, nonatomic) UIImage *snapshotContentImage;
@property(readonly) Class superclass;

@end

