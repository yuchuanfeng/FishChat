//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "ILocationMgrExt.h"
#import "MMImagePickerManagerDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCMultiImageScannerDelegate.h"
#import "WCSelectorViewDataSource.h"
#import "WCSelectorViewDelegate.h"

@class NSMutableArray, NSString, SightDraft, UINavigationController, WCSelectorView;

@interface ImageSelectorController : MMObject <ILocationMgrExt, WCSelectorViewDelegate, WCSelectorViewDataSource, WCActionSheetDelegate, WCMultiImageScannerDelegate, MMImagePickerManagerDelegate>
{
    NSMutableArray *_arrImages;
    WCSelectorView *_selectorView;
    UINavigationController *_navigationController;
    id <SelectorControllerDelegate> _delegate;
    _Bool _bChoosed;
    struct CGSize _imgSize;
    _Bool _isSupportVideo;
    SightDraft *_sightDraft;
    unsigned long long _type;
}

@property(nonatomic) _Bool isSupportVideo; // @synthesize isSupportVideo=_isSupportVideo;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) SightDraft *sightDraft; // @synthesize sightDraft=_sightDraft;
@property(nonatomic) struct CGSize imgSize; // @synthesize imgSize=_imgSize;
@property(nonatomic) _Bool bChoosed; // @synthesize bChoosed=_bChoosed;
@property(nonatomic) __weak id <SelectorControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) WCSelectorView *selectorView; // @synthesize selectorView=_selectorView;
@property(retain, nonatomic) NSMutableArray *arrImages; // @synthesize arrImages=_arrImages;
- (void).cxx_destruct;
- (_Bool)shouldShowDeleteView;
- (id)getViewController;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 sentImmediately:(_Bool)arg3 isMuted:(_Bool)arg4;
- (void)onSightPictureTaken:(id)arg1 withFrontCamera:(_Bool)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onDeleteItemAtIndex:(unsigned long long)arg1;
- (void)onAddViews:(id)arg1;
- (void)showActionSheet:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)onDeleteViewAtIndex:(unsigned long long)arg1;
- (void)didSelectViewAtIndex:(unsigned long long)arg1;
- (struct CGSize)sizeForViews;
- (unsigned long long)type:(unsigned long long)arg1;
- (id)viewAtIndex:(unsigned long long)arg1;
- (unsigned long long)numbersOfViews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

