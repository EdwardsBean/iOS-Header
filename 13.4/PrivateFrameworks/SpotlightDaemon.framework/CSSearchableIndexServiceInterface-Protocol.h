//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpotlightDaemon/NSObject-Protocol.h>

@class CSIndexJob, NSString;

@protocol CSSearchableIndexServiceInterface <NSObject>
- (void)performIndexJob:(CSIndexJob *)arg1 protectionClass:(NSString *)arg2 acknowledgementHandler:(void (^)(NSError *))arg3;
@end

