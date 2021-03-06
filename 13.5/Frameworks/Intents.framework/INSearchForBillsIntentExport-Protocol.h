//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INBillPayee, INDateComponentsRange;

@protocol INSearchForBillsIntentExport <NSObject, JSExport>
@property(copy, nonatomic) INDateComponentsRange *dueDateRange;
@property(nonatomic) long long status;
@property(nonatomic) long long billType;
@property(copy, nonatomic) INDateComponentsRange *paymentDateRange;
@property(copy, nonatomic) INBillPayee *billPayee;
- (id)init;
@end

