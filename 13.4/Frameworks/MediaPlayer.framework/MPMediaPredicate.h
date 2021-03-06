//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPPProtobufferCoding-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSString;

@interface MPMediaPredicate : NSObject <MPPProtobufferCoding, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
- (_Bool)evaluateEntity:(id)arg1;
- (id)protobufferEncodableObject;
- (id)protobufferEncodableObjectFromLibrary:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

