//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@interface NUVideoRenderJob : NURenderJob
{
}

- (id)result;
- (id)generateVideoComposition:(out id *)arg1;
- (_Bool)prepare:(out id *)arg1;
- (id)videoRenderRequest;
- (id)scalePolicy;
- (_Bool)wantsOutputGeometry;
- (_Bool)wantsOutputVideo;
- (_Bool)wantsCompleteStage;
- (_Bool)wantsRenderStage;

@end

