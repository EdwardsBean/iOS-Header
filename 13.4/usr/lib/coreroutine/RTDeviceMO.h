//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTCloudManagedObject.h>

@class NSSet, NSString;

@interface RTDeviceMO : RTCloudManagedObject
{
}

+ (id)managedObjectWithIdentifier:(id)arg1 deviceName:(id)arg2 deviceClass:(id)arg3 deviceModel:(id)arg4 creationDate:(id)arg5 inManagedObjectContext:(id)arg6;
+ (id)fetchRequest;
- (void)setDevice:(id)arg1;
@property(readonly, nonatomic) RTDeviceMO *device;

// Remaining properties
@property(retain, nonatomic) NSSet *addresses; // @dynamic addresses;
@property(retain, nonatomic) NSSet *deletionRequests; // @dynamic deletionRequests;
@property(copy, nonatomic) NSString *deviceClass; // @dynamic deviceClass;
@property(copy, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(copy, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(retain, nonatomic) NSSet *mapItems; // @dynamic mapItems;
@property(retain, nonatomic) NSSet *places; // @dynamic places;
@property(retain, nonatomic) NSSet *transitions; // @dynamic transitions;
@property(retain, nonatomic) NSSet *visits; // @dynamic visits;

@end

