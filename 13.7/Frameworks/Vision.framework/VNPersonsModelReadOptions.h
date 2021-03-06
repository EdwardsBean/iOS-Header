//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@class NSIndexSet;

@interface VNPersonsModelReadOptions : NSObject <NSCopying, NSSecureCoding>
{
    NSIndexSet *_acceptableVersions;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSIndexSet *acceptableVersions; // @synthesize acceptableVersions=_acceptableVersions;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

