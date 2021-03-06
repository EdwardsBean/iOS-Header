//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPassContent.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface PKPaymentPassContent : PKPassContent <NSSecureCoding>
{
    _Bool _supportsTransitOnly;
    NSString *_cobrandName;
    NSURL *_transactionServiceURL;
    NSURL *_transactionServiceRegistrationURL;
    NSString *_transactionPushTopic;
    NSURL *_messageServiceURL;
    NSURL *_messageServiceRegistrationURL;
    NSString *_messagePushTopic;
    NSString *_appURLScheme;
    NSString *_customerServiceIdentifier;
    NSDictionary *_localizedSuspendedReasonsByAID;
    NSArray *_availableActions;
    NSArray *_transitCommutePlans;
    unsigned long long _transitCommutePlanType;
    NSDictionary *_localizedEntitlementDescriptions;
    NSArray *_upgradeRequests;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *upgradeRequests; // @synthesize upgradeRequests=_upgradeRequests;
@property(copy, nonatomic) NSDictionary *localizedEntitlementDescriptions; // @synthesize localizedEntitlementDescriptions=_localizedEntitlementDescriptions;
@property(nonatomic) unsigned long long transitCommutePlanType; // @synthesize transitCommutePlanType=_transitCommutePlanType;
@property(copy, nonatomic) NSArray *transitCommutePlans; // @synthesize transitCommutePlans=_transitCommutePlans;
@property(copy, nonatomic) NSArray *availableActions; // @synthesize availableActions=_availableActions;
@property(nonatomic) _Bool supportsTransitOnly; // @synthesize supportsTransitOnly=_supportsTransitOnly;
@property(copy, nonatomic) NSDictionary *localizedSuspendedReasonsByAID; // @synthesize localizedSuspendedReasonsByAID=_localizedSuspendedReasonsByAID;
@property(copy, nonatomic) NSString *customerServiceIdentifier; // @synthesize customerServiceIdentifier=_customerServiceIdentifier;
@property(copy, nonatomic) NSString *appURLScheme; // @synthesize appURLScheme=_appURLScheme;
@property(copy, nonatomic) NSString *messagePushTopic; // @synthesize messagePushTopic=_messagePushTopic;
@property(copy, nonatomic) NSURL *messageServiceRegistrationURL; // @synthesize messageServiceRegistrationURL=_messageServiceRegistrationURL;
@property(copy, nonatomic) NSURL *messageServiceURL; // @synthesize messageServiceURL=_messageServiceURL;
@property(copy, nonatomic) NSString *transactionPushTopic; // @synthesize transactionPushTopic=_transactionPushTopic;
@property(copy, nonatomic) NSURL *transactionServiceRegistrationURL; // @synthesize transactionServiceRegistrationURL=_transactionServiceRegistrationURL;
@property(copy, nonatomic) NSURL *transactionServiceURL; // @synthesize transactionServiceURL=_transactionServiceURL;
@property(copy, nonatomic) NSString *cobrandName; // @synthesize cobrandName=_cobrandName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3;

@end

