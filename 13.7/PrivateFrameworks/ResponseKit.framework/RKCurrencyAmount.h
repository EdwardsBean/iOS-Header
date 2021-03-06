//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ResponseKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface RKCurrencyAmount : NSObject <NSSecureCoding>
{
    NSString *_string;
    NSString *_currency;
    double _value;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) double value; // @synthesize value=_value;
@property(readonly) NSString *currency; // @synthesize currency=_currency;
@property(readonly) NSString *string; // @synthesize string=_string;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 currency:(id)arg2 value:(double)arg3;

@end

