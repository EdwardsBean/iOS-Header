//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSResponseDecoding-Protocol.h>

@class NSIndexSet, NSSet;

@interface AMSURLResponseDecoder : NSObject <AMSResponseDecoding>
{
    NSIndexSet *_allowedStatusCodes;
    NSSet *_allowedContentTypes;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *allowedContentTypes; // @synthesize allowedContentTypes=_allowedContentTypes;
@property(copy, nonatomic) NSIndexSet *allowedStatusCodes; // @synthesize allowedStatusCodes=_allowedStatusCodes;
- (id)resultFromResult:(id)arg1 error:(id *)arg2;
- (id)init;

@end

