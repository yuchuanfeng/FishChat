//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SettingBaseViewController.h"

#import "WCActionSheetDelegate.h"
#import "contactInfoDelegate.h"

@class NSMutableArray, NSString;

@interface SettingPluginsViewController : SettingBaseViewController <contactInfoDelegate, WCActionSheetDelegate>
{
    map_0e718273 m_mapCellToCellType;
    map_0e718273 m_uninstallMapCellToCellType;
    map_0e718273 m_mapSectionType;
    NSMutableArray *m_nameArray;
    NSMutableArray *m_uninstallNameArray;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)initDeepLinkConfig;
- (void)openSecurityAssistant;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)pluginsChanged:(id)arg1;
- (void)initData;
- (void)initOnePlugin:(int)arg1;
- (void)reportUserClickWithPluginType:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)openContactInfoView:(int)arg1;
- (void)newMessageFromContactInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

