//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCBeaconLastFetchedContent : MMObject <PBCoding>
{
    NSString *mpLogo;
    NSString *title;
    NSString *desc;
    NSString *picUrl;
    NSString *jumpUrl;
    NSString *uuid;
    NSString *major;
    NSString *minor;
    double distance;
}

+ (void)initialize;
@property(nonatomic) double distance; // @synthesize distance;
@property(copy, nonatomic) NSString *minor; // @synthesize minor;
@property(copy, nonatomic) NSString *major; // @synthesize major;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl;
@property(copy, nonatomic) NSString *desc; // @synthesize desc;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(copy, nonatomic) NSString *mpLogo; // @synthesize mpLogo;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

