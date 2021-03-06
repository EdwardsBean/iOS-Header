//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _WKWebsiteDataStore : NSObject
{
    struct RetainPtr<WKWebsiteDataStore> _dataStore;
}

+ (id)nonPersistentDataStore;
+ (id)defaultDataStore;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeDataOfTypes:(unsigned long long)arg1 modifiedSince:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeDataOfTypes:(unsigned long long)arg1 forDataRecords:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchDataRecordsOfTypes:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, getter=isNonPersistent) _Bool nonPersistent;
- (id)initWithDataStore:(id)arg1;

@end

