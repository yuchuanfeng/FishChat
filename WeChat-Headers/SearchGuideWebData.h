//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface SearchGuideWebData : NSObject <PBCoding>
{
    _Bool bOpen;
    unsigned int expiredTime;
    unsigned int webVersion;
    NSString *funcWord;
    NSMutableArray *arrVertEntryData;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *arrVertEntryData; // @synthesize arrVertEntryData;
@property(nonatomic) unsigned int webVersion; // @synthesize webVersion;
@property(retain, nonatomic) NSString *funcWord; // @synthesize funcWord;
@property(nonatomic) unsigned int expiredTime; // @synthesize expiredTime;
@property(nonatomic) _Bool bOpen; // @synthesize bOpen;
- (void).cxx_destruct;
- (void)setClose;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

