//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol INUICKPSynchronousRemoteViewDelegate;

@interface INUICKPSynchronousRemoteView : UIView
{
    id <INUICKPSynchronousRemoteViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <INUICKPSynchronousRemoteViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

