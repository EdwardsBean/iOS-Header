//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;
@protocol CNContactDataSource_Internal;

@interface ContactsURLParser : NSObject
{
    NSURL *_url;
    id <CNContactDataSource_Internal> _dataSource;
    NSString *_identifier;
    NSNumber *_legacyIdenifier;
}

+ (id)log;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *legacyIdenifier; // @synthesize legacyIdenifier=_legacyIdenifier;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) __weak id <CNContactDataSource_Internal> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)legacyIdentifierFound;
- (id)identifierFound;
- (id)identifierFromShowCommandURL:(id)arg1;
- (void)readURL:(id)arg1;
- (id)initWithURL:(id)arg1 dataSource:(id)arg2;

@end

