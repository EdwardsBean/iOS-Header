//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceMemos/NSObject-Protocol.h>

@class RCAVPlayer;

@protocol RCAVPlayerDelegate <NSObject>
- (void)playerDidBecomeInvalid:(RCAVPlayer *)arg1;
- (void)playerCurrentTimeDidChange:(RCAVPlayer *)arg1;
- (void)playerCurrentRateDidChange:(RCAVPlayer *)arg1;
- (void)playerCurrentItemDidBecomeReadyToPlay:(RCAVPlayer *)arg1;
@end

