//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMProperty.h>

__attribute__((visibility("hidden")))
@interface EMEnumProperty : CMProperty
{
    int wdValue;
}

+ (id)mapUnderlineValue:(int)arg1;
+ (id)mapVerticalAlignmentValue:(int)arg1;
+ (id)mapHorizontalAlignmentValue:(int)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)cssStringForName:(id)arg1;
- (id)mapUnderline;
- (id)mapVerticalAlignment;
- (id)mapHorizontalAlignment;
- (int)value;
- (id)initWithEnum:(int)arg1;

@end

