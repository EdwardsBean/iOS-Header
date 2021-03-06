//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/NSFastEnumeration-Protocol.h>

@class NSString, TSCHChartGrid;

@interface TSCHChartGridAdapter : NSObject <NSFastEnumeration>
{
    TSCHChartGrid *mGrid;
    unsigned long long mIndex;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TSCHChartGrid *grid; // @synthesize grid=mGrid;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(retain, nonatomic) NSString *name;
- (void)setValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)valueAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithChartGrid:(id)arg1 index:(unsigned long long)arg2;

@end

