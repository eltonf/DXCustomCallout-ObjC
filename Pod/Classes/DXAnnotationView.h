//
//  DXAnnotationView.h
//  CustomCallout
//
//  Created by Selvin on 05/04/15.
//  Copyright (c) 2015 S3lvin. All rights reserved.
//

#import <MapKit/MapKit.h>
@class DXAnnotationSettings;

typedef UIView* (^CreateCalloutViewBlock)();

@interface DXAnnotationView : MKAnnotationView

// Added here to enable reconfiguration upon reuse
@property(nonatomic, strong) UIView *calloutView;
@property(nonatomic, strong) CreateCalloutViewBlock createCalloutViewBlock;

- (instancetype)initWithAnnotation:(id<MKAnnotation>)annotation
                   reuseIdentifier:(NSString *)reuseIdentifier
                           pinView:(UIView *)pinView
                       calloutView:(UIView *)calloutView
                          settings:(DXAnnotationSettings *)settings;

- (instancetype)initWithAnnotation:(id<MKAnnotation>)annotation
                   reuseIdentifier:(NSString *)reuseIdentifier
                           pinView:(UIView *)pinView
            createCalloutViewBlock:(CreateCalloutViewBlock)createCalloutViewBlock
                          settings:(DXAnnotationSettings *)settings;

- (void)hideCalloutView;
- (void)showCalloutView;

@end
