//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class NSArray, SCNPhysicsBody;

@protocol SCNPhysicsVehicleJSExport <JSExport>
+ (id)vehicleWithChassisBody:(SCNPhysicsBody *)arg1 wheels:(NSArray *)arg2;
@property(readonly, nonatomic) SCNPhysicsBody *chassisBody;
@property(readonly, nonatomic) NSArray *wheels;
@property(readonly, nonatomic) double speedInKilometersPerHour;
- (void)applyBrakingForce:(double)arg1 forWheelAtIndex:(long long)arg2;
- (void)setSteeringAngle:(double)arg1 forWheelAtIndex:(long long)arg2;
- (void)applyEngineForce:(double)arg1 forWheelAtIndex:(long long)arg2;
@end

