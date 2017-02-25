//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIWindow.h"

@class FavFullScreenImageViewController;

@interface FavFullScreenImageWindow : MMUIWindow
{
    FavFullScreenImageViewController *m_controller;
    id <FavFullScreenImageViewDelegate> m_delegate;
    _Bool _m_canSelect;
    _Bool _m_useAlphaAnimation;
}

+ (void)freeFavFullScreenView;
+ (id)getFavFullScreenView;
@property(nonatomic) _Bool m_useAlphaAnimation; // @synthesize m_useAlphaAnimation=_m_useAlphaAnimation;
@property(nonatomic) _Bool m_canSelect; // @synthesize m_canSelect=_m_canSelect;
@property(nonatomic) __weak id <FavFullScreenImageViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onMemoryWarning;
- (void)animationShowWithRecordData:(id)arg1 originRect:(struct CGRect)arg2 index:(unsigned int)arg3;
- (void)animationShowWithRecordData:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3;
- (id)init;

@end

