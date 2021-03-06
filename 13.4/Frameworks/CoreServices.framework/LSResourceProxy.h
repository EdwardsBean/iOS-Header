//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreServices/_LSQueryResult.h>

#import <CoreServices/NSCopying-Protocol.h>
#import <CoreServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, _LSBoundIconInfo;
@protocol LSIconResourceLocator;

@interface LSResourceProxy : _LSQueryResult <NSCopying, NSSecureCoding>
{
    NSString *_localizedName;
    _LSBoundIconInfo *__boundIconInfo;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setBoundIconInfo:) _LSBoundIconInfo *_boundIconInfo; // @synthesize _boundIconInfo=__boundIconInfo;
@property(copy, nonatomic, setter=_setLocalizedName:) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(nonatomic) unsigned long long propertyListCachingStrategy;
- (id)iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (id)_privateDocumentFileNamesAsCacheKey;
- (id)iconDataForVariant:(int)arg1;
- (id)iconDataForStyle:(id)arg1 width:(long long)arg2 height:(long long)arg3 options:(unsigned long long)arg4;
@property(readonly, nonatomic) NSString *primaryIconName;
@property(readonly, nonatomic) NSDictionary *iconsDictionary;
@property(readonly, nonatomic) id <LSIconResourceLocator> iconResourceLocator;
- (id)uniqueIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool boundIconIsBadge;
- (id)_initWithLocalizedName:(id)arg1;

@end

