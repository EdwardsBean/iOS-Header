//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "__DockContainerViewControllerAccessibility_super.h"

@interface DockContainerViewControllerAccessibility : __DockContainerViewControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_axDismissDraftElement;
- (struct CGRect)_axFrameForDismissDraftsElement;
- (void)_accessibilityUpdateDraftElements;
- (void)setActiveTiltedTabViewController:(id)arg1;
- (void)activateExposeModeAnimated:(_Bool)arg1;
- (void)_configureNewDockedView:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_axAddDraftsElementIfNecessaryUsingVC:(id)arg1;
- (id)_accessibilitySpeakThisViewController;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)initWithPersistence:(id)arg1 scene:(id)arg2 rootViewController:(id)arg3;
- (void)_axSetDraftsElementHeight:(double)arg1;
- (double)_axGetDraftsElementHeight;
- (void)_axSetViewContainingDraftsElement:(id)arg1;
- (id)_axViewContainingDraftsElement;

@end

