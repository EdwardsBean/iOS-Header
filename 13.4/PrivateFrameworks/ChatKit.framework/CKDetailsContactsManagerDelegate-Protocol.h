//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKDetailsContactsManager, CKEntity, NSArray;

@protocol CKDetailsContactsManagerDelegate <NSObject>
- (void)contactsManager:(CKDetailsContactsManager *)arg1 didRequestCallTypeForEntity:(CKEntity *)arg2 addresses:(NSArray *)arg3 abLabels:(NSArray *)arg4 faceTimeAudioEnabled:(_Bool)arg5;
- (void)contactsManagerViewModelsDidChange:(CKDetailsContactsManager *)arg1;
@end

