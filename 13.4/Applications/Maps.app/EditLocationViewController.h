//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "RAPEditLocationMapViewDelegate-Protocol.h"

@class NSString, RAPEditLocationMapView, RAPMarkerViewAttributes;

__attribute__((visibility("hidden")))
@interface EditLocationViewController : UIViewController <RAPEditLocationMapViewDelegate>
{
    CDStruct_02837cd9 _mapRect;
    int _analyticsTarget;
    CDUnknownBlockType _changeHandler;
    RAPEditLocationMapView *_editLocationMapView;
    RAPMarkerViewAttributes *_attributes;
    struct CLLocationCoordinate2D _featureCoordinate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RAPMarkerViewAttributes *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) struct CLLocationCoordinate2D featureCoordinate; // @synthesize featureCoordinate=_featureCoordinate;
@property(nonatomic) int analyticsTarget; // @synthesize analyticsTarget=_analyticsTarget;
@property(retain, nonatomic) RAPEditLocationMapView *editLocationMapView; // @synthesize editLocationMapView=_editLocationMapView;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
- (void)editLocationMapView:(id)arg1 didChangeViewMode:(long long)arg2;
- (void)editLocationMapViewFinishedZoomingOut:(id)arg1;
- (void)editLocationMapViewFinishedZoomingIn:(id)arg1;
- (void)editLocationMapViewFinishedPanning:(id)arg1;
- (void)editLocationMapView:(id)arg1 didChangeCenterCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)editLocationMapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)_captureUserAction:(int)arg1;
@property(readonly, nonatomic) struct CLLocationCoordinate2D selectedCoordinate;
- (void)setupConstraints;
- (void)viewDidLoad;
- (id)initWithInitialCoordinates:(struct CLLocationCoordinate2D)arg1 inMapRect:(CDStruct_02837cd9)arg2 analyticsTarget:(int)arg3 markerViewAttributes:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

