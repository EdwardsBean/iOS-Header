//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/_UIFontCacheKey.h>

@interface _UIFontSystemCacheKey : _UIFontCacheKey
{
    _Bool _textLegibility;
    int _traits;
    double _pointSize;
}

@property(nonatomic) _Bool textLegibility; // @synthesize textLegibility=_textLegibility;
@property(nonatomic) double pointSize; // @synthesize pointSize=_pointSize;
@property(nonatomic) int traits; // @synthesize traits=_traits;
- (id)description;
- (_Bool)_isEqualToKey:(id)arg1;
- (unsigned long long)_hash;

@end

