//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMTableView, NSMutableArray, NSString;

@interface WCPayOrderHistoryViewController : WCPayBaseViewController <UITableViewDataSource, UITableViewDelegate, WCActionSheetDelegate>
{
    MMTableView *m_tableView;
    _Bool m_loadingMoreOrderList;
    id <WCPayOrderHistoryViewControllerDelegate> m_delegate;
    NSMutableArray *arrOrderAndMsgDetail;
    _Bool m_bTableViewEditing;
}

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 cell:(id)arg2 row:(unsigned long long)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)makeTranscationCell:(id)arg1 cell:(id)arg2 row:(unsigned long long)arg3;
- (void)makeNotificationCell:(id)arg1 cell:(id)arg2 row:(unsigned long long)arg3;
- (void)loadMoreOrderList:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stopEditAllOrder;
- (void)stopEditing;
- (void)startEditAllOrder;
- (void)becomeEditing;
- (void)OnDelAllOrder;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)initView;
- (void)initNavigationBar;
- (void)initTableView;
- (id)getBottomView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

