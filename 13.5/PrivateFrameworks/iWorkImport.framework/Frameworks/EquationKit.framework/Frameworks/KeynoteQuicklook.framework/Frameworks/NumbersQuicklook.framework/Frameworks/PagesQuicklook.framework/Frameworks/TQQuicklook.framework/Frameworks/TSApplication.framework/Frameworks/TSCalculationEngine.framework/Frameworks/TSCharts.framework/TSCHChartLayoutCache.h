//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSCHChartLayoutCache : NSObject
{
    NSMutableArray *mCacheItems;
    _Bool mIgnoreInvalidation;
}

+ (id)cacheWithCacheItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool ignoreInvalidation; // @synthesize ignoreInvalidation=mIgnoreInvalidation;
- (void)printDebug;
- (void)invalidate;
- (void)accessWithCacheItemBlock:(CDUnknownBlockType)arg1 calculateBlock:(CDUnknownBlockType)arg2;
- (id)initWithCacheItem:(id)arg1;
- (id)init;

@end

