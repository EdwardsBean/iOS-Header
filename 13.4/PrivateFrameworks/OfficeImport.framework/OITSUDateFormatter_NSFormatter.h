//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSString, OITSULocale;

__attribute__((visibility("hidden")))
@interface OITSUDateFormatter_NSFormatter : NSFormatter
{
    NSString *_preferredFormat;
    _Bool isDateOnly;
    _Bool isTimeOnly;
    OITSULocale *_locale;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OITSULocale *locale; // @synthesize locale=_locale;
@property(nonatomic) _Bool isTimeOnly; // @synthesize isTimeOnly;
@property(nonatomic) _Bool isDateOnly; // @synthesize isDateOnly;
@property(retain, nonatomic) NSString *preferredFormat; // @synthesize preferredFormat=_preferredFormat;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)init;

@end

