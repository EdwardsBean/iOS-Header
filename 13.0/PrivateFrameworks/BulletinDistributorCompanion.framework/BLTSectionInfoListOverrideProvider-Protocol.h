//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/BLTSectionInfoListProvider-Protocol.h>

@protocol BLTSectionInfoListProviderDelegate;

@protocol BLTSectionInfoListOverrideProvider <BLTSectionInfoListProvider>
@property(nonatomic) __weak id <BLTSectionInfoListProviderDelegate> delegate;
- (void)reloadWithCompletion:(void (^)(NSDictionary *))arg1;
@end

