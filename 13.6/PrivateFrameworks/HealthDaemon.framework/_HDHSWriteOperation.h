//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDHealthServiceCharacteristic;

@interface _HDHSWriteOperation : NSObject
{
    _Bool _expectResponse;
    HDHealthServiceCharacteristic *_characteristic;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool expectResponse; // @synthesize expectResponse=_expectResponse;
@property(retain, nonatomic) HDHealthServiceCharacteristic *characteristic; // @synthesize characteristic=_characteristic;

@end

