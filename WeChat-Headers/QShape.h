//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QAnnotation.h"

@class NSString;

@interface QShape : NSObject <QAnnotation>
{
    NSString *_title;
    NSString *_subtitle;
    NSString *title;
    NSString *subtitle;
    struct CLLocationCoordinate2D coordinate;
}

@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate;
@property(copy) NSString *subtitle; // @synthesize subtitle;
@property(copy) NSString *title; // @synthesize title;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

