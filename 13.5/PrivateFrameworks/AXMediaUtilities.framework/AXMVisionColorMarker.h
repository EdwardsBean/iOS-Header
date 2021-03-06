//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMVisionColor.h>

@class NSString;

@interface AXMVisionColorMarker : AXMVisionColor
{
    NSString *_localizedName;
}

+ (id)closestMarkerToColor:(id)arg1 withMaximumThreshold:(double)arg2;
+ (id)allColorMarkers;
+ (id)colorWithHueDegrees:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 localizedName:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (id)description;

@end

