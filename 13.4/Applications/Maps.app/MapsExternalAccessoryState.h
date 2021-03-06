//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsExternalState.h"

@class NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface MapsExternalAccessoryState : MapsExternalState
{
    _Bool _destinationHandoffEnabled;
    _Bool _lowRangeWarning;
    int _engineType;
    unsigned long long _connectionID;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_carName;
    NSString *_displayName;
    NSString *_mapsDisplayName;
    NSNumber *_range;
    NSDictionary *_engineStates;
}

+ (id)allKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *engineStates; // @synthesize engineStates=_engineStates;
@property(copy, nonatomic) NSNumber *range; // @synthesize range=_range;
@property(nonatomic) _Bool lowRangeWarning; // @synthesize lowRangeWarning=_lowRangeWarning;
@property(nonatomic) int engineType; // @synthesize engineType=_engineType;
@property(copy, nonatomic) NSString *mapsDisplayName; // @synthesize mapsDisplayName=_mapsDisplayName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) _Bool destinationHandoffEnabled; // @synthesize destinationHandoffEnabled=_destinationHandoffEnabled;
@property(copy, nonatomic) NSString *carName; // @synthesize carName=_carName;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(nonatomic) unsigned long long connectionID; // @synthesize connectionID=_connectionID;
- (_Bool)isEqualToState:(id)arg1;
@property(readonly, nonatomic) CDStruct_8024420c engineTypes;
- (void)updateWithInfo:(id)arg1;
- (id)_augmentVehicleInfo:(id)arg1;
- (void)_augmentMutableVehicleInfo:(id)arg1;
- (id)initWithAccessory:(id)arg1;
- (id)descriptionForKey:(id)arg1;

@end

