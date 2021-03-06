//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FRScrollPositionController : NSObject
{
    NSMutableDictionary *_history;
    NSMutableDictionary *_temporaryHistory;
}

+ (id)defaultTemporaryHistorySaveLocation;
+ (id)defaultReadingListHistorySaveLocation;
+ (id)defaultDocumentPath;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *temporaryHistory; // @synthesize temporaryHistory=_temporaryHistory;
@property(retain, nonatomic) NSMutableDictionary *history; // @synthesize history=_history;
- (void)loadHistory;
- (void)saveHistory;
- (void)flushTemporaryScrollPositionObjects;
- (void)removeAllScrollPositionObjects;
- (void)removeScrollPositionForArticleID:(id)arg1;
- (id)scrollPositionForArticleID:(id)arg1;
- (void)addScrollPosition:(id)arg1 forArticleID:(id)arg2 onReadingList:(_Bool)arg3 shouldSave:(_Bool)arg4;
- (void)dealloc;
- (id)init;

@end

