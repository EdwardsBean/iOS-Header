//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MMCSServices/MMCSSimpleFile.h>

@interface MMCSGetFile : MMCSSimpleFile
{
    CDUnknownBlockType _block;
    CDUnknownBlockType _updateBlock;
}

@property(copy) CDUnknownBlockType progressUpdateBlock; // @synthesize progressUpdateBlock=_updateBlock;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_block;
- (void)setProgress:(double)arg1;
- (void)dealloc;

@end

