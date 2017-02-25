//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ForwardMessageLogicDelegate.h"
#import "IDeviceRankProfileMgrExt.h"
#import "IDeviceRankSnsMgrExt.h"
#import "MMImageLoaderObserver.h"
#import "MMWebImageViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class DeviceRankInfo, ForwardMessageLogicController, MMHeadImageView, MMTableView, MMUIImageView, MMUILabel, MMWebImageView, NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSString, NSTimer, ShareMessageConfirmLogicHelper, UIImage, UIImageView, UILabel, UIView;

@interface BraceletRankViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, IDeviceRankSnsMgrExt, IDeviceRankProfileMgrExt, WCActionSheetDelegate, MMWebImageViewDelegate, ForwardMessageLogicDelegate, MMImageLoaderObserver>
{
    MMTableView *_tableView;
    UIView *_tableHeaderView;
    UIView *_championTipView;
    MMWebImageView *_championCoverView;
    UIImageView *_leaderView;
    MMUILabel *_tipLablel;
    NSString *_rankId;
    NSDictionary *_infoDic;
    NSString *_championUsername;
    NSString *_championCoverUrl;
    NSString *_championMotto;
    NSMutableArray *_rankInfoArray;
    NSMutableArray *_focusInfoArray;
    NSMutableArray *_focusArray;
    NSArray *_likeMeUserList;
    NSArray *_affectedUserList;
    NSTimer *m_disappearTimer;
    _Bool _bExpired;
    NSString *_nsScrollToName;
    NSString *_nsJumpChampionUrl;
    _Bool _isLikedCover;
    _Bool _hasCoverUrl;
    NSString *_donateStepsUrl;
    UIView *_championViewFix;
    UIView *_barBackgroundView;
    NSString *_nsShareTitle;
    NSString *_nsShareUrl;
    unsigned int _iEntranceScence;
    MMUIImageView *_reverseImageView;
    UIImageView *_blurView;
    UIImage *_snapShotImg;
    MMHeadImageView *_championHeadImageView;
    UILabel *_championDisplayLabel;
    _Bool _isBluring;
    DeviceRankInfo *m_myselfRankInfo;
    NSMutableSet *friendLikeSet;
    UIView *m_oTableFooterView;
    ForwardMessageLogicController *m_forwardLogic;
    ShareMessageConfirmLogicHelper *_m_shareToFriendHelper;
}

@property(retain, nonatomic) ShareMessageConfirmLogicHelper *m_shareToFriendHelper; // @synthesize m_shareToFriendHelper=_m_shareToFriendHelper;
- (void).cxx_destruct;
- (id)getCurrentViewController;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)onLoadImageOK:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)OnStayAtWeChat:(id)arg1;
- (void)OnBackTo3rdApp:(id)arg1;
- (void)OnSendMessageCancel:(id)arg1;
- (void)OnSendMessageFail:(id)arg1 WithError:(int)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (id)genShareFriendMessage:(id)arg1;
- (id)getHeaderImgUrl;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (id)getMyselfHeadImageData;
- (id)genUploadTask;
- (void)donateSteps;
- (void)shareToTimeline;
- (void)shareToFriend;
- (void)onShare;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)onDelFollowWithUserName:(id)arg1 error:(int)arg2;
- (void)onAddFollowWithFollowItems:(id)arg1 error:(int)arg2;
- (void)onCoverImageChanged;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateChampionView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollToLikeUser;
- (void)onLikeFriendRank:(id)arg1 optype:(unsigned int)arg2 err:(int)arg3;
- (void)onGotUserRankList:(id)arg1 aryUserRankList:(id)arg2 aryLikeMeList:(id)arg3 aryAffectedUserList:(id)arg4 championCoverUrl:(id)arg5 championMotto:(id)arg6 jumpChampionUrl:(id)arg7 shareUrl:(id)arg8 isCacheExist:(_Bool)arg9 shareTitle:(id)arg10 focusList:(id)arg11 isLikedCover:(_Bool)arg12 donationUrl:(id)arg13 hasCoverUrl:(_Bool)arg14 err:(int)arg15;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isFocusMember:(id)arg1;
- (void)makeCell:(id)arg1 AtIndexPath:(id)arg2;
- (id)getRankInfoAtIndexPath:(id)arg1;
- (void)onRankInfoClicked:(id)arg1;
- (void)updateReverseImage:(id)arg1;
- (double)getTableViewBgHeight;
- (void)clickToInviteFriend:(id)arg1;
- (void)updateTableFooterView;
- (void)reloadTable;
- (void)updateTableBgView;
- (void)onSingleTap:(id)arg1;
- (void)animatChangeLikeStateForUser:(id)arg1 isTolikeState:(_Bool)arg2;
- (void)onClickLike:(id)arg1;
- (void)onRankProfile;
- (void)jumpToChampionUrl;
- (void)openChampionProfile;
- (void)updateChampionViewWithRadius:(double)arg1;
- (id)genChampionView;
- (void)updateInfoViewSnapshot;
- (void)initTableView;
- (void)initNotSupportView;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initData;
- (void)dealloc;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithLikeUserInfoDictionary:(id)arg1;
- (id)initForLatestRank;
- (id)initWithRankId:(id)arg1;
- (id)initWithRankInfoDictionary:(id)arg1 bExpire:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

