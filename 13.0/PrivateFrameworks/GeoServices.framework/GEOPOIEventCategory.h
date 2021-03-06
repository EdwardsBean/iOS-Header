//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface GEOPOIEventCategory : NSObject <NSSecureCoding>
{
    NSString *_category;
    NSArray *_localizedNames;
}

+ (_Bool)supportsSecureCoding;
+ (id)poiEventCategoriesForEventCategories:(id)arg1;
@property(readonly, nonatomic) NSArray *localizedNames; // @synthesize localizedNames=_localizedNames;
@property(readonly, nonatomic) NSString *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (id)parsePDCategories:(id)arg1;
- (_Bool)isEqualToPOIEventCategory:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCategory:(id)arg1 localizedNames:(id)arg2;
- (id)initWithEventCategory:(id)arg1;
- (id)init;

@end

