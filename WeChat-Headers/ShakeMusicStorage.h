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

@interface ShakeMusicStorage : NSObject <PBCoding, NSCoding, NSCopying>
{
    NSMutableArray *musics;
    int newCount;
}

+ (void)initialize;
@property(nonatomic) int newCount; // @synthesize newCount;
@property(retain, nonatomic) NSMutableArray *musics; // @synthesize musics;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

