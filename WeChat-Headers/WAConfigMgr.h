//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMResourceMgrExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSDictionary, NSMutableDictionary, NSString, WAAppBrandNotifyStorage;

@interface WAConfigMgr : MMService <MMResourceMgrExt, IMsgExt, PBMessageObserverDelegate, MMService>
{
    NSMutableDictionary *_dicAppID2ConfigJSON;
    NSMutableDictionary *_dicAppID2ContactAttribute;
    WAAppBrandNotifyStorage *m_notifyStorage;
    NSMutableDictionary *dicUseVConsoleApp;
    NSDictionary *_dicSystemConfig;
    NSString *_mmUserAgent;
}

+ (long long)getABTestEntranceMode;
+ (_Bool)isCloseSearchEntry;
+ (_Bool)isOpenNearEntry;
+ (_Bool)isDeviceSupportWeApp;
+ (_Bool)isOverSeaUser;
+ (_Bool)isOpenGlobalLocalSearch;
+ (_Bool)isOpenFindFriendEntry;
@property(retain) NSString *mmUserAgent; // @synthesize mmUserAgent=_mmUserAgent;
@property(retain) NSDictionary *dicSystemConfig; // @synthesize dicSystemConfig=_dicSystemConfig;
- (void).cxx_destruct;
- (void)onResponseGetAppInfoList:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)doGetAppConfigCgiWithItems:(id)arg1;
- (void)asyncUpdateWeAppConfigInfo:(id)arg1;
- (id)overseasForbbidenUrlWithAppid:(id)arg1;
- (id)scanQrCodeOffLineForbbidenUrlWithAppid:(id)arg1;
- (id)waappBanSceneWithAppid:(id)arg1 banScene:(unsigned long long)arg2;
- (id)waappDetailInfoViewURLWithAppid:(id)arg1;
- (id)lowVersionWithAppid:(id)arg1;
- (id)forbbidenUrlWithAppid:(id)arg1 offShelfType:(unsigned long long)arg2;
- (id)exposeURLWithAppid:(id)arg1 msgid:(id)arg2;
- (id)exposeURLWithAppid:(id)arg1 pageid:(id)arg2 from:(unsigned long long)arg3 debugMode:(unsigned long long)arg4 appVersion:(unsigned int)arg5;
- (void)deleteDebugModeAppInfo:(id)arg1 debugType:(unsigned long long)arg2;
- (void)insertDeubgModeAppInfo:(id)arg1;
- (void)parseNotifyMsg:(id)arg1;
- (id)getSaveInfoKeyWithAppid:(id)arg1 debugType:(unsigned int)arg2;
- (void)parseConfigNotify:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)saveNotifyStorage:(id)arg1;
- (void)loadNotifyStorage;
- (void)setDebugModeDownloadPkgCompleteWithAppid:(id)arg1 debugType:(unsigned long long)arg2 value:(_Bool)arg3;
- (_Bool)isDebugModeAlreadyUpdatePkgWithAppid:(id)arg1 debugType:(unsigned long long)arg2;
- (id)getDebugPkgValidTimeStrWithAppid:(id)arg1 debugType:(unsigned long long)arg2;
- (id)getDebugPkgDownloadUrlWithAppid:(id)arg1 debugType:(unsigned long long)arg2;
- (id)getAllDebugModeAppInfoForceSave:(_Bool)arg1;
- (id)getDeubgModeAppInfoByName:(id)arg1 debugType:(unsigned long long)arg2;
- (_Bool)isDebugModeAppWithUserName:(id)arg1;
- (id)getAllDebugModeAppInfo;
- (id)getPublicResDebugModeAppInfo;
- (_Bool)closeUseVConsoleWithAppID:(id)arg1;
- (_Bool)openUseVConsoleWithAppID:(id)arg1;
- (_Bool)pageIsUseVConsoleForAppID:(id)arg1;
- (id)getMMUserAgent;
- (void)updateMMUserAgent;
- (id)getAppWebPageFullUrlWithAppid:(id)arg1 version:(unsigned long long)arg2 relativePath:(id)arg3 isDebugMode:(unsigned long long)arg4;
- (id)getCdnBaseUrlStrWithAppContact:(id)arg1;
- (id)getCdnBaseUrlStrIsDebugMode:(unsigned long long)arg1;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (void)contactAttributeCategoryOnServiceClearData;
- (void)contactAttributeCategoryOnServiceReloadData;
- (void)contactAttributeCategoryOnServiceInit;
- (void)setContactAttributeWithAppID:(id)arg1 weAppInfo:(id)arg2;
- (id)contactAttributeWithAppID:(id)arg1;
- (void)updateSystemSettingData:(id)arg1;
- (void)loadSystemSettingData;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (id)systemSetting;
- (void)systemSettingCategoryOnServiceClearData;
- (void)systemSettingCategoryOnServiceReloadData;
- (void)systemSettingCategoryOnServiceInit;
- (id)appConfigAttiForLoadingView:(id)arg1 page:(id)arg2;
- (void)setAppConfigAttiForLoadingView:(id)arg1;
- (id)objectForAppID:(id)arg1 andPaths:(id)arg2;
- (id)dictionaryForAppID:(id)arg1 andPaths:(id)arg2;
- (id)stringForAppID:(id)arg1 andPaths:(id)arg2;
- (void)setAppConfigJSON:(id)arg1 forAppID:(id)arg2;
- (id)appConfigJsonTextForAppService:(id)arg1;
- (id)networkTimeoutAttributeForAppID:(id)arg1;
- (id)entryPagePathForAppID:(id)arg1;
- (id)pageTabAttributesForAppID:(id)arg1 page:(id)arg2;
- (_Bool)isTabPageWithPagePath:(id)arg1 appID:(id)arg2;
- (id)pageWindowAttributesForAppID:(id)arg1;
- (id)pageWindowAttributesForAppID:(id)arg1 page:(id)arg2;
- (void)loadAppConfigWithAppID:(id)arg1 data:(id)arg2;
- (void)appConfigJSONCategoryOnServiceClearData;
- (void)appConfigJSONCategoryOnServiceReloadData;
- (void)appConfigJSONCategoryOnServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

