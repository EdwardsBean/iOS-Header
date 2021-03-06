//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AXMFaceDetectorNode, AXMImageNode, AXMVisionEngine;

@interface AXPhotosVisionEngine : NSObject
{
    AXMVisionEngine *_engine;
    AXMImageNode *_imageNode;
    AXMFaceDetectorNode *_faceNode;
}

+ (id)sharedEngine;
- (void).cxx_destruct;
@property(retain, nonatomic) AXMFaceDetectorNode *faceNode; // @synthesize faceNode=_faceNode;
@property(retain, nonatomic) AXMImageNode *imageNode; // @synthesize imageNode=_imageNode;
@property(retain, nonatomic) AXMVisionEngine *engine; // @synthesize engine=_engine;
- (void)analyzeImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

