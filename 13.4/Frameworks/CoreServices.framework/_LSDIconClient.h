//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreServices/_LSDClient.h>

#import <CoreServices/_LSDIconServiceProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface _LSDIconClient : _LSDClient <_LSDIconServiceProtocol>
{
}

- (void)getAlternateIconNameForIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setAlternateIconName:(id)arg1 forIdentifier:(id)arg2 iconsDictionary:(id)arg3 reply:(CDUnknownBlockType)arg4;

@end

