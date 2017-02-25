//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMImagePickerManagerDelegate.h"
#import "WCActionSheetDelegate.h"

@class NSString, UIViewController;

@interface TakeOrSelectHeadImageLogic : MMObject <WCActionSheetDelegate, MMImagePickerManagerDelegate>
{
    UIViewController *m_viewController;
    id <TakeOrSelectHeadImageLogicDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 delegate:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showGetHeadImage;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)showImagePikcer:(long long)arg1;
- (id)getNavigationController;
- (id)getViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

