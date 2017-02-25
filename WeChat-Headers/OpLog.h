//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSData, NSString;

@interface OpLog : NSObject <WCDBCoding>
{
    unsigned int oplogID;
    unsigned int oplogCmdID;
    NSData *oplogBuffer;
    long long m___rowID;
}

+ (const basic_string_a490aa4c *)getWCDBPrimaryColumnName;
+ (const struct WCDBIndexHelper *)getWCDBIndexArray;
+ (unsigned long long)getWCDBIndexArrayCount;
+ (const map_0e718273 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_0e718273 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_7a576766 *)getValueNameIndexMap;
+ (id)getValueTable;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSData *oplogBuffer; // @synthesize oplogBuffer;
@property(nonatomic) unsigned int oplogCmdID; // @synthesize oplogCmdID;
@property(nonatomic) unsigned int oplogID; // @synthesize oplogID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_91e67114 *)db_oplogBuffer;
- (const WCDBCondition_c6db074e *)db_oplogCmdID;
- (const WCDBCondition_c6db074e *)db_oplogID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

