//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NTPBFeedViewExposure : PBCodable <NSCopying>
{
    long long _previousArticlePublisherArticleVersion;
    int _areaPresentationReason;
    NSString *_campaignId;
    NSString *_campaignType;
    int _countOfTotalGroupExposures;
    int _countOfTotalGroupsExposed;
    NSString *_creativeId;
    int _feedCellHostType;
    int _feedCellSection;
    NSString *_feedId;
    int _feedType;
    NSData *_feedViewExposureId;
    int _groupType;
    NSData *_groupViewExposureId;
    int _presentationReason;
    NSString *_presentationReasonSearchString;
    NSString *_previousArticleId;
    NSString *_previousArticleVersion;
    int _rankInToc;
    NSString *_referringSourceApplication;
    NSString *_referringUrl;
    NSString *_sourceChannelId;
    NSString *_userActivityType;
    NSString *_viewFrameInScreen;
    _Bool _adSupportedChannel;
    _Bool _cameFromGroup;
    _Bool _isNewUserToFeed;
    _Bool _isPaidSubscriberToFeed;
    _Bool _isSubscribedToGroupFeed;
    _Bool _isUserSubscribedToFeed;
    struct {
        unsigned int previousArticlePublisherArticleVersion:1;
        unsigned int areaPresentationReason:1;
        unsigned int countOfTotalGroupExposures:1;
        unsigned int countOfTotalGroupsExposed:1;
        unsigned int feedCellHostType:1;
        unsigned int feedCellSection:1;
        unsigned int feedType:1;
        unsigned int groupType:1;
        unsigned int presentationReason:1;
        unsigned int rankInToc:1;
        unsigned int adSupportedChannel:1;
        unsigned int cameFromGroup:1;
        unsigned int isNewUserToFeed:1;
        unsigned int isPaidSubscriberToFeed:1;
        unsigned int isSubscribedToGroupFeed:1;
        unsigned int isUserSubscribedToFeed:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) int rankInToc; // @synthesize rankInToc=_rankInToc;
@property(retain, nonatomic) NSData *groupViewExposureId; // @synthesize groupViewExposureId=_groupViewExposureId;
@property(nonatomic) long long previousArticlePublisherArticleVersion; // @synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion;
@property(retain, nonatomic) NSString *previousArticleVersion; // @synthesize previousArticleVersion=_previousArticleVersion;
@property(retain, nonatomic) NSString *previousArticleId; // @synthesize previousArticleId=_previousArticleId;
@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(nonatomic) _Bool adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
@property(nonatomic) _Bool isPaidSubscriberToFeed; // @synthesize isPaidSubscriberToFeed=_isPaidSubscriberToFeed;
@property(nonatomic) int countOfTotalGroupsExposed; // @synthesize countOfTotalGroupsExposed=_countOfTotalGroupsExposed;
@property(nonatomic) int countOfTotalGroupExposures; // @synthesize countOfTotalGroupExposures=_countOfTotalGroupExposures;
@property(nonatomic) _Bool isSubscribedToGroupFeed; // @synthesize isSubscribedToGroupFeed=_isSubscribedToGroupFeed;
@property(nonatomic) _Bool cameFromGroup; // @synthesize cameFromGroup=_cameFromGroup;
@property(retain, nonatomic) NSString *userActivityType; // @synthesize userActivityType=_userActivityType;
@property(retain, nonatomic) NSString *referringUrl; // @synthesize referringUrl=_referringUrl;
@property(retain, nonatomic) NSString *referringSourceApplication; // @synthesize referringSourceApplication=_referringSourceApplication;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(nonatomic) _Bool isNewUserToFeed; // @synthesize isNewUserToFeed=_isNewUserToFeed;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(retain, nonatomic) NSString *viewFrameInScreen; // @synthesize viewFrameInScreen=_viewFrameInScreen;
@property(retain, nonatomic) NSString *presentationReasonSearchString; // @synthesize presentationReasonSearchString=_presentationReasonSearchString;
@property(nonatomic) _Bool isUserSubscribedToFeed; // @synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasRankInToc;
@property(readonly, nonatomic) _Bool hasGroupViewExposureId;
@property(nonatomic) _Bool hasPreviousArticlePublisherArticleVersion;
@property(readonly, nonatomic) _Bool hasPreviousArticleVersion;
@property(readonly, nonatomic) _Bool hasPreviousArticleId;
- (int)StringAsAreaPresentationReason:(id)arg1;
- (id)areaPresentationReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasAreaPresentationReason;
@property(nonatomic) int areaPresentationReason; // @synthesize areaPresentationReason=_areaPresentationReason;
@property(readonly, nonatomic) _Bool hasCreativeId;
@property(readonly, nonatomic) _Bool hasCampaignType;
@property(readonly, nonatomic) _Bool hasCampaignId;
@property(nonatomic) _Bool hasAdSupportedChannel;
@property(nonatomic) _Bool hasIsPaidSubscriberToFeed;
@property(nonatomic) _Bool hasCountOfTotalGroupsExposed;
@property(nonatomic) _Bool hasCountOfTotalGroupExposures;
@property(nonatomic) _Bool hasIsSubscribedToGroupFeed;
- (int)StringAsGroupType:(id)arg1;
- (id)groupTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupType;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(nonatomic) _Bool hasCameFromGroup;
@property(readonly, nonatomic) _Bool hasUserActivityType;
@property(readonly, nonatomic) _Bool hasReferringUrl;
@property(readonly, nonatomic) _Bool hasReferringSourceApplication;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(nonatomic) _Bool hasIsNewUserToFeed;
@property(readonly, nonatomic) _Bool hasFeedViewExposureId;
- (int)StringAsFeedCellHostType:(id)arg1;
- (id)feedCellHostTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedCellHostType;
@property(nonatomic) int feedCellHostType; // @synthesize feedCellHostType=_feedCellHostType;
- (int)StringAsFeedCellSection:(id)arg1;
- (id)feedCellSectionAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedCellSection;
@property(nonatomic) int feedCellSection; // @synthesize feedCellSection=_feedCellSection;
@property(readonly, nonatomic) _Bool hasViewFrameInScreen;
@property(readonly, nonatomic) _Bool hasPresentationReasonSearchString;
- (int)StringAsPresentationReason:(id)arg1;
- (id)presentationReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasPresentationReason;
@property(nonatomic) int presentationReason; // @synthesize presentationReason=_presentationReason;
@property(nonatomic) _Bool hasIsUserSubscribedToFeed;
@property(readonly, nonatomic) _Bool hasFeedId;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;

@end

