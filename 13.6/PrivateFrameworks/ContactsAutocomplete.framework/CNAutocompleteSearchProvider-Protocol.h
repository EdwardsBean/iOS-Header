//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsAutocomplete/NSObject-Protocol.h>

@class NSArray;
@protocol CNAutocompleteSearch;

@protocol CNAutocompleteSearchProvider <NSObject>
- (id <CNAutocompleteSearch>)calendarServerSearch;
- (id <CNAutocompleteSearch>)directoryServerSearch;
- (NSArray *)localExtensionSearches;
- (id <CNAutocompleteSearch>)duetSearch;
- (id <CNAutocompleteSearch>)suggestionsSearch;
- (id <CNAutocompleteSearch>)recentsSearch;
- (id <CNAutocompleteSearch>)localSearch;
@end

