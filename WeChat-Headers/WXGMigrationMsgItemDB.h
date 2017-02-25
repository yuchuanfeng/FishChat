//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCDataBase;

@interface WXGMigrationMsgItemDB : NSObject
{
    WCDataBase *m_db;
}

- (void).cxx_destruct;
- (id)p_getTagTable;
- (id)p_getMsgItemTable;
- (_Bool)deleteTagObjectByMsgID:(id)arg1;
- (id)getMsgListIDForSessionName:(id)arg1;
- (id)getAllSessionName;
- (id)getAllTagObject;
- (long long)getLastEndTimeOfSession:(id)arg1;
- (void)insertDataWithTagObject:(id)arg1;
- (_Bool)deleteMsgListArrayFormMsgIDTable:(id)arg1;
- (id)getAllMsgListIDFromMsgIDTable;
- (void)insertDataWithMsgIDObject:(id)arg1;
- (void)removeDBFile;
- (void)closeDB;
- (void)dealloc;
- (id)init;

@end

