//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/BOXModel.h>

@class NSDate, NSString;

@interface BOXGroup : BOXModel
{
    NSString *_name;
    NSDate *_createdDate;
    NSDate *_modifiedDate;
}

@property(retain, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property(retain, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithJSON:(id)arg1;

@end

