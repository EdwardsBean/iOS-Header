//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class TSCH3DChartElementSceneObject, TSCH3DSceneRenderPipeline;

@protocol TSCH3DChartElementSceneObjectMainDelegate
- (struct ElementRenderPass)renderPassForSceneObject:(TSCH3DChartElementSceneObject *)arg1;
- (_Bool)renderPassDelayDisallowedForSceneObject:(TSCH3DChartElementSceneObject *)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2;
- (void)didEndProcessingSceneObject:(TSCH3DChartElementSceneObject *)arg1;
- (_Bool)willBeginProcessingSceneObject:(TSCH3DChartElementSceneObject *)arg1;
@end

