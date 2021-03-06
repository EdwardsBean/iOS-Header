//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFCloudKitItem-Protocol.h>

@class CKRecordID, NSArray, NSString;

@interface WFWorkflowOrdering : NSObject <WFCloudKitItem>
{
    CKRecordID *_identifier;
    NSArray *_orderedWorkflowIDs;
}

+ (id)properties;
+ (id)recordType;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *orderedWorkflowIDs; // @synthesize orderedWorkflowIDs=_orderedWorkflowIDs;
@property(readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
- (id)initWithZoneID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

