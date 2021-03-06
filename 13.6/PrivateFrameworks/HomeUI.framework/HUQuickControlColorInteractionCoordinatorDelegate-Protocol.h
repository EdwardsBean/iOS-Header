//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlInteractionCoordinatorDelegate-Protocol.h>

@class HFColorPalette, HUQuickControlColorInteractionCoordinator, NSIndexPath;

@protocol HUQuickControlColorInteractionCoordinatorDelegate <HUQuickControlInteractionCoordinatorDelegate>
- (void)interactionCoordinator:(HUQuickControlColorInteractionCoordinator *)arg1 didSelectColorAtIndexPath:(NSIndexPath *)arg2;
- (void)presentFullColorViewForInteractionCoordinator:(HUQuickControlColorInteractionCoordinator *)arg1 selectedColorIndexPath:(NSIndexPath *)arg2;
- (void)interactionCoordinator:(HUQuickControlColorInteractionCoordinator *)arg1 colorPaletteDidChange:(HFColorPalette *)arg2;
@end

