//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface ShakeTvActionList : NSObject <PBCoding, NSCoding, NSCopying>
{
    int type;
    NSString *title;
    NSMutableArray *actions;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *actions; // @synthesize actions;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) int type; // @synthesize type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

