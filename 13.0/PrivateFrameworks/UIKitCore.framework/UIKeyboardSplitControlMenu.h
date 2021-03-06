//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKeyboardMenuView.h>

#import <UIKitCore/_UIInputSwitcherSplitMenu-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView <_UIInputSwitcherSplitMenu>
{
    struct CGSize m_preferredSize;
    NSArray *_items;
    CDUnknownBlockType _finishSplitTransitionBlock;
}

+ (id)activeInstance;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType finishSplitTransitionBlock; // @synthesize finishSplitTransitionBlock=_finishSplitTransitionBlock;
- (void)didFinishSplitTransition;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (void)setSplitAndUndocked:(_Bool)arg1;
- (_Bool)usesDeviceLanguageForItemAtIndex:(unsigned long long)arg1;
- (id)titleForItemAtIndex:(unsigned long long)arg1;
- (int)visibleItemForIndex:(unsigned long long)arg1;
- (unsigned long long)defaultSelectedIndex;
- (struct CGSize)preferredSize;
- (unsigned long long)numberOfItems;
- (void)actionForItem:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

