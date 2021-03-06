//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/EDPersistence.h>

#import <Message/EFLoggable-Protocol.h>

@class EDConversationPersistence, EDLocalActionPersistence, EDMailboxPersistence, EDMessageChangeManager, EDMessagePersistence, EDPersistenceDatabase, EDSearchableIndexManager, EDServerMessagePersistenceFactory, EDThreadPersistence, MFMailMessageLibrary, NSString;
@protocol EDAccountsProvider, EDRemoteSearchProvider, EMUserProfileProvider;

@interface MFPersistence_iOS : EDPersistence <EFLoggable>
{
    id <EDAccountsProvider> _accountsProvider;
    EDConversationPersistence *_conversationPersistence;
    EDPersistenceDatabase *_database;
    EDLocalActionPersistence *_localActionPersistence;
    EDMailboxPersistence *_mailboxPersistence;
    EDMessageChangeManager *_messageChangeManager;
    EDMessagePersistence *_messagePersistence;
    id <EDRemoteSearchProvider> _remoteSearchProvider;
    EDSearchableIndexManager *_searchableIndexManager;
    EDServerMessagePersistenceFactory *_serverMessagePersistenceFactory;
    EDThreadPersistence *_threadPersistence;
    id <EMUserProfileProvider> _userProfileProvider;
    MFMailMessageLibrary *_library;
}

+ (id)log;
- (void).cxx_destruct;
@property(nonatomic) __weak MFMailMessageLibrary *library; // @synthesize library=_library;
@property(retain, nonatomic) id <EMUserProfileProvider> userProfileProvider; // @synthesize userProfileProvider=_userProfileProvider;
- (id)threadPersistence;
- (id)serverMessagePersistenceFactory;
- (id)searchableIndexManager;
- (id)remoteSearchProvider;
- (id)messagePersistence;
- (id)messageChangeManager;
@property(retain, nonatomic) EDMailboxPersistence *mailboxPersistence; // @synthesize mailboxPersistence=_mailboxPersistence;
- (id)localActionPersistence;
- (id)database;
- (id)conversationPersistence;
@property(retain, nonatomic) id <EDAccountsProvider> accountsProvider; // @synthesize accountsProvider=_accountsProvider;
- (void)scheduleRecurringActivity;
- (void)_configureSearchableIndexManagerIfNecessary;
- (void)setUpWithMailboxProvider:(id)arg1 remoteSearchProvider:(id)arg2;
- (id)initWithPath:(id)arg1 inMemoryIdentifier:(id)arg2 library:(id)arg3 propertyMapper:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

