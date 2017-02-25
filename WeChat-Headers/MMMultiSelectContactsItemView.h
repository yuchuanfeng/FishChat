//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class CContact, ContactsItemView, UIImageView;

@interface MMMultiSelectContactsItemView : MMUIView
{
    _Bool _isAllowMultiSelect;
    CContact *_contact;
    UIImageView *_checkMarkImgView;
    ContactsItemView *_contactItemView;
}

@property(retain, nonatomic) ContactsItemView *contactItemView; // @synthesize contactItemView=_contactItemView;
@property(retain, nonatomic) UIImageView *checkMarkImgView; // @synthesize checkMarkImgView=_checkMarkImgView;
@property(nonatomic) _Bool isAllowMultiSelect; // @synthesize isAllowMultiSelect=_isAllowMultiSelect;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (id)getCheckMarkImageWithContactState:(unsigned long long)arg1;
- (void)updateItemView:(id)arg1 andContactState:(unsigned long long)arg2;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 andContact:(id)arg2 andIsAllowMultiSelect:(_Bool)arg3;
- (void)dealloc;

@end

