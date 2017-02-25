//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "CNetworkStatusExt.h"
#import "EmoticonAddFromServerLogicObjectDelegate.h"
#import "EmoticonBackupDeleteNotifyExt.h"
#import "EmoticonBackupLogicObjectDelegate.h"
#import "EmoticonDeleteFromServerLogicObjectDelegate.h"
#import "EmoticonRecoverLogicObjectDelegate.h"
#import "EmoticonRestartBackupWhenDeleteTaskDelegate.h"
#import "IMsgExt.h"
#import "MMKernelExt.h"
#import "MMService.h"

@class EmoticonBackupLogicObject, EmoticonRecoverLogicObject, NSMutableArray, NSString;

@interface EmoticonBackUpMgr : MMService <EmoticonBackupLogicObjectDelegate, EmoticonRecoverLogicObjectDelegate, MMKernelExt, CNetworkStatusExt, IMsgExt, EmoticonDeleteFromServerLogicObjectDelegate, EmoticonAddFromServerLogicObjectDelegate, EmoticonRestartBackupWhenDeleteTaskDelegate, EmoticonBackupDeleteNotifyExt, MMService>
{
    _Bool m_hasOnceStartRecover;
    _Bool _m_hasNotStartRecoverTaskInList;
    unsigned int m_userActionStatus;
    unsigned int m_lastManageViewUploadTime;
    EmoticonBackupLogicObject *m_backupLogicObject;
    EmoticonRecoverLogicObject *m_recoverLogicObject;
    NSMutableArray *m_notifyTaskList;
}

+ (unsigned int)ActionStatusRecoverForbiden;
+ (unsigned int)ActionStatusAllowRecover;
+ (unsigned int)ActionStatusNoAction;
@property(nonatomic) _Bool m_hasNotStartRecoverTaskInList; // @synthesize m_hasNotStartRecoverTaskInList=_m_hasNotStartRecoverTaskInList;
@property(nonatomic) unsigned int m_lastManageViewUploadTime; // @synthesize m_lastManageViewUploadTime;
@property(nonatomic) unsigned int m_userActionStatus; // @synthesize m_userActionStatus;
@property(retain, nonatomic) NSMutableArray *m_notifyTaskList; // @synthesize m_notifyTaskList;
@property(nonatomic) _Bool m_hasOnceStartRecover; // @synthesize m_hasOnceStartRecover;
@property(retain, nonatomic) EmoticonRecoverLogicObject *m_recoverLogicObject; // @synthesize m_recoverLogicObject;
@property(retain, nonatomic) EmoticonBackupLogicObject *m_backupLogicObject; // @synthesize m_backupLogicObject;
- (void).cxx_destruct;
- (void)onEmoticonRestartBackupWhenDeleteTaskExecute;
- (void)checkIfServerOverLimitAndBackup;
- (void)onEmoticonBackupDeleteNotify;
- (void)runNotifyTask;
- (void)onAddSyncLogicBeginWithFullMd5List:(id)arg1;
- (_Bool)canResumeAddSyncLogic;
- (void)onDeleteSyncLogicComplete;
- (_Bool)canResumeDeleteSyncLogic;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onSimCardNetTypeChange;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onPreQuit;
- (void)onAuthOK;
- (_Bool)needNotifyEmoticonListChangeImmediately;
- (_Bool)isUserAllowOnRecover;
- (_Bool)isUserPauseOnRecover;
- (_Bool)isUserNoActionOnRecover;
- (void)onEmoticonRecoverLogicAutoPauseOnWWan;
- (void)onEmoticonRecoverLogicDownloadOneEmoticonOK;
- (void)onEmoticonRecoverLogicFailed;
- (void)onEmoticonRecoverLogicOk;
- (void)onEmoticonBackupLogicFailed;
- (void)onEmoticonBackupLogicOk;
- (void)internalGoonRecover;
- (void)goonRecover;
- (void)pauseRecover;
- (_Bool)isRecoverEmoticonBeenPause;
- (_Bool)isRecoveringEmoticonFromServer;
- (_Bool)isRecoveringEmoticonComplete;
- (_Bool)isRecoveringEmoticonPause;
- (_Bool)isRecoveringEmoticon;
- (_Bool)recoverEmoticonFromServer;
- (void)backupLocalEmoticonToServerFromManageView;
- (void)backupLocalEmoticonToServer;
- (void)backupLocalEmoticonToServerAndIgnoreOnceLimit:(_Bool)arg1;
- (_Bool)canStartCgiNow;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

