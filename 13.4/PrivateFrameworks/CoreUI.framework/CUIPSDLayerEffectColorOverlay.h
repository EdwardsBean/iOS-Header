//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectColorOverlay : CUIPSDLayerEffectComponent
{
    int _blendMode;
    double _opacity;
    CUIColor *_color;
}

@property(retain) CUIColor *color; // @synthesize color=_color;
@property double opacity; // @synthesize opacity=_opacity;
@property int blendMode; // @synthesize blendMode=_blendMode;
- (void)dealloc;
- (id)description;
- (unsigned int)effectType;
- (id)init;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (_Bool)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;

@end

