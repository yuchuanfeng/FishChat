//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CEnterpriseContact, EnterpriseSessionSelectViewController;

@protocol EnterpriseSessionSelectViewControllerDelegate <NSObject>

@optional
- (void)OnEnterpriseCancelSelectSession:(EnterpriseSessionSelectViewController *)arg1;
- (void)OnEnterpriseSelectSession:(CEnterpriseContact *)arg1 viewController:(EnterpriseSessionSelectViewController *)arg2;
@end

