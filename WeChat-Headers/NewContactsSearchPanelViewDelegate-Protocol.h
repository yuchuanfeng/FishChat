//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexPath, NSString, UITableViewCell;

@protocol NewContactsSearchPanelViewDelegate <NSObject>
- (void)didSearchViewTableSelect:(NSIndexPath *)arg1;
- (double)heightForSearchViewTable:(NSIndexPath *)arg1;
- (UITableViewCell *)cellForSearchViewTable:(UITableViewCell *)arg1 index:(NSIndexPath *)arg2;

@optional
- (void)doTagSearch:(NSString *)arg1 arrContacts:(NSArray *)arg2;
- (void)cancelSearch;
- (void)doSearch:(NSString *)arg1 Pre:(_Bool)arg2;
- (void)searchTextFieldDidBeginEditing;
- (void)didDeleteLastWithKey:(NSString *)arg1;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(NSString *)arg2;
@end

