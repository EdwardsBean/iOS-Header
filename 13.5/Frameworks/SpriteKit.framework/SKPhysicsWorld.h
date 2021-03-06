//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;
@protocol SKPhysicsContactDelegate;

@interface SKPhysicsWorld : NSObject <NSSecureCoding>
{
    double speed;
    id <SKPhysicsContactDelegate> _contactDelegate;
    struct CGVector _gravity;
}

+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) id <SKPhysicsContactDelegate> contactDelegate; // @synthesize contactDelegate=_contactDelegate;
@property(nonatomic) struct CGVector gravity; // @synthesize gravity=_gravity;
@property(nonatomic) double speed; // @synthesize speed;
- (MISSING_TYPE *)sampleFieldsAt: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)sampleFields: /* Error: Ran out of types for this method. */;
- (id)bodyAlongRayStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2;
- (id)bodyInRect:(struct CGRect)arg1;
- (id)bodyAtPoint:(struct CGPoint)arg1;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateBodiesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateBodiesAtPoint:(struct CGPoint)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)hasFields;
- (void)removeAllJoints;
- (void)removeJoint:(id)arg1;
- (void)addJoint:(id)arg1;
- (id)fields;
- (id)bodies;
- (_Bool)hasBodies;
- (void)removeAllBodies;
- (void)removeBody:(id)arg1;
- (void)addBody:(id)arg1;
- (_Bool)stepWithTime:(double)arg1 velocityIterations:(unsigned long long)arg2 positionIterations:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

