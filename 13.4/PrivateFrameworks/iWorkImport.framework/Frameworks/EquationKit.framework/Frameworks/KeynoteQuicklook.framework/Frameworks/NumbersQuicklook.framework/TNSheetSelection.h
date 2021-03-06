//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSKit/TSKSelection.h>

@class TNSheet;

@interface TNSheetSelection : TSKSelection
{
    _Bool mIsPaginated;
    TNSheet *mSheet;
}

+ (id)selectionForSheet:(id)arg1 paginated:(_Bool)arg2;
+ (Class)archivedSelectionClass;
@property(readonly, nonatomic, getter=isPaginated) _Bool paginated; // @synthesize paginated=mIsPaginated;
@property(readonly, retain, nonatomic) TNSheet *sheet; // @synthesize sheet=mSheet;
- (id)UUIDDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSheet:(id)arg1 paginated:(_Bool)arg2;

@end

