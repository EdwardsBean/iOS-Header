//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SQLiteDatabaseStore.h"

@interface AppInstallsDatabaseStore : SQLiteDatabaseStore
{
}

+ (_Bool)createOrMigrateStoreUsingSchema:(id)arg1;
+ (id)storeDescriptor;
+ (id)sharedInstance;
- (void)_applyExternalChangesForChangeset:(id)arg1;
- (void)_applyChangesForChangeset:(id)arg1 transaction:(id)arg2;
- (void)scheduleUsingTransaction:(CDUnknownBlockType)arg1;
- (void)readUsingSession:(CDUnknownBlockType)arg1;
- (void)modifyUsingTransaction:(CDUnknownBlockType)arg1;

@end

