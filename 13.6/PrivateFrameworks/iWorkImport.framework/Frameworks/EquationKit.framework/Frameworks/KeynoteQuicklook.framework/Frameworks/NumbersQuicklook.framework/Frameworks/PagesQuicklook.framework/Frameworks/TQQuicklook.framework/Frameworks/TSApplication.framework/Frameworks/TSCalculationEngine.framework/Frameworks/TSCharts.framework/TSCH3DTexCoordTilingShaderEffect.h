//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DShaderEffect.h>

@interface TSCH3DTexCoordTilingShaderEffect : TSCH3DShaderEffect
{
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)effect;
+ (id)_singletonAlloc;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (void)injectCommonShaderInto:(id)arg1 context:(id)arg2;
- (id)transformedTexcoordBuffer:(id)arg1 effectsStates:(id)arg2;
- (void)addVariables:(id)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

