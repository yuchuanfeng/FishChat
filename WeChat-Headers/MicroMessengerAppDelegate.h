//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIResponder.h"

#import "MMCommonAdapterDelegate.h"
#import "ResourceMonitorDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIApplicationDelegate.h"

@class CAppObserverCenter, CAppViewControllerManager, CMainControll, MMSMStartViewController, MMServiceCenter, MMUIWindow, NSRecursiveLock, NSString, ResourceInfo, ResourceMonitor, UILabel, UIWindow, VoIPTokenRetriveObject;

@interface MicroMessengerAppDelegate : MMUIResponder <MMCommonAdapterDelegate, UIApplicationDelegate, UIAlertViewDelegate, ResourceMonitorDelegate>
{
    CAppObserverCenter *m_appObserverCenter;
    CMainControll *m_mainController;
    MMServiceCenter *m_serviceCenter;
    CAppViewControllerManager *m_appViewControllerMgr;
    NSString *m_nsToken;
    NSString *m_nsSound;
    NSString *m_nsVoipSound;
    unsigned int m_uLastTimeResignActive;
    unsigned int m_uInitViewType;
    long long m_tTotalRunningTime;
    long long m_tLastActiveTime;
    long long m_appVerCompareWithLastRun;
    _Bool m_isActive;
    UILabel *m_changeValueLabel;
    UILabel *m_resourceLabel;
    MMUIWindow *m_resourceWindow;
    ResourceInfo *m_lastResourceInfo;
    ResourceMonitor *m_resourceMonitor;
    NSRecursiveLock *mActiveLock;
    _Bool mInBackground;
    _Bool mInBackGroundFetch;
    unsigned long long m_ui64BackGroundFetchStopTime;
    CDUnknownBlockType m_fetchCompletionHandler;
    _Bool m_isFirstLaunching;
    _Bool m_isInSafeMode;
    MMSMStartViewController *m_safeModeViewController;
    UIWindow *_window;
    CDUnknownBlockType _backgroundSessionCompletionHandler;
    VoIPTokenRetriveObject *_m_voipTokenRetriveObject;
}

@property(retain, nonatomic) VoIPTokenRetriveObject *m_voipTokenRetriveObject; // @synthesize m_voipTokenRetriveObject=_m_voipTokenRetriveObject;
@property(copy, nonatomic) CDUnknownBlockType backgroundSessionCompletionHandler; // @synthesize backgroundSessionCompletionHandler=_backgroundSessionCompletionHandler;
@property(retain, nonatomic) NSRecursiveLock *mActiveLock; // @synthesize mActiveLock;
@property(nonatomic) unsigned long long m_ui64BackGroundFetchStopTime; // @synthesize m_ui64BackGroundFetchStopTime;
@property(nonatomic) _Bool mInBackGroundFetch; // @synthesize mInBackGroundFetch;
@property(readonly, nonatomic) _Bool m_isActive; // @synthesize m_isActive;
@property(readonly, nonatomic) CAppObserverCenter *m_appObserverCenter; // @synthesize m_appObserverCenter;
@property(readonly, nonatomic) CAppViewControllerManager *m_appViewControllerMgr; // @synthesize m_appViewControllerMgr;
@property(retain, nonatomic) NSString *m_nsVoipSound; // @synthesize m_nsVoipSound;
@property(retain, nonatomic) NSString *m_nsSound; // @synthesize m_nsSound;
@property(retain, nonatomic) NSString *m_nsToken; // @synthesize m_nsToken;
@property(retain, nonatomic) CMainControll *m_mainController; // @synthesize m_mainController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (_Bool)isWeWorkURL:(id)arg1;
- (void)setInBackground:(_Bool)arg1;
- (_Bool)getInBackground;
- (void)onUpdateResourceInfo:(id)arg1;
- (void)setUserAgent;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)closeMainFrameWithoutReset;
- (void)delayStopMain;
- (void)closeMainFrameInternal;
- (void)dealloc;
- (long long)GetAppVerCompareWithLastRun;
- (void)saveAppVersion;
- (void)detectAppFirstRunOrFirstRunAfterUpgrade;
- (void)firstStartAfterUpgradeDowngrade;
- (void)didReceiveLocalMemoryWarning:(id)arg1;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)clearURLCache;
- (void)clearServiceMemory;
- (void)handleMemoryWarning;
- (void)application:(id)arg1 didUpdateUserActivity:(id)arg2;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupForShortcut;
- (void)application:(id)arg1 handleWatchKitExtensionRequest:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2 bundleID:(id)arg3 annotation:(id)arg4;
- (id)decodeUrlAttrs:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1 bundleID:(id)arg2;
- (void)process3rdAppSupportContentFlagFromOpenUrl:(id *)arg1 andUrlStr:(id *)arg2 appID:(id)arg3;
- (void)application:(id)arg1 didChangeStatusBarFrame:(struct CGRect)arg2;
- (void)application:(id)arg1 willChangeStatusBarFrame:(struct CGRect)arg2;
- (void)application:(id)arg1 willChangeStatusBarOrientation:(long long)arg2 duration:(double)arg3;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)application:(id)arg1 didChangeStatusBarOrientation:(long long)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)handleOpenPush;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)resetBadge;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (double)getMainWindowHeight;
- (double)getMainWindowWidth;
- (void)ClearBackGroundFetch;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)apnsSilentPushTimeOut:(CDUnknownBlockType)arg1;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)jumpToChatWhenReceivePush:(id)arg1 remotePush:(_Bool)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)doSendTokenTimeOut;
- (void)doSendToken:(id)arg1 error:(_Bool)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)mainUISetting;
- (void)monitorResource;
- (void)mainThreadMonitorStart;
- (void)continueMainLaunching:(id)arg1;
- (void)tryProtectLaunchBeforeDeviceFirstUnlock;
- (void)beforeMainLauching;
- (void)logEssencialInfo;
- (void)clearServiceObject;
- (void)initServiceObject;
- (void)registerLazyExtensionListener;
- (void)registerClsMethodObserver;
- (void)releaseSeviceCenter;
- (void)RenamePath;
- (void)handleMMSafeModeDidEndNotification:(id)arg1;
- (_Bool)shouldEnterSafeMode;
- (void)LogFeatureIdKey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3 isKeyLog:(_Bool)arg4;
- (void)LogFeatureExt:(unsigned int)arg1 logExt:(id)arg2 isReportNow:(_Bool)arg3 isImportant:(_Bool)arg4;
- (void)NetworkLogOutput:(id)arg1;
- (void)LogWithinCommon:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 funcName:(const char *)arg5 message:(id)arg6;
- (_Bool)ShouldLog:(int)arg1;
- (_Bool)IsChinese;
- (void)setupMMCommonAdapter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

