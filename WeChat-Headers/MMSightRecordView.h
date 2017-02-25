//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface MMSightRecordView : UIView
{
    long long _state;
    UIView *_outerDotBg;
    UIView *_outerDotBlurBg;
    UIView *_outerDot;
    UIView *_innerDot;
}

@property(retain, nonatomic) UIView *innerDot; // @synthesize innerDot=_innerDot;
@property(retain, nonatomic) UIView *outerDot; // @synthesize outerDot=_outerDot;
@property(retain, nonatomic) UIView *outerDotBlurBg; // @synthesize outerDotBlurBg=_outerDotBlurBg;
@property(retain, nonatomic) UIView *outerDotBg; // @synthesize outerDotBg=_outerDotBg;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)frameAnimationFrom:(struct CGRect)arg1 to:(struct CGRect)arg2;
- (id)radiusAnimationFrom:(double)arg1 to:(double)arg2;
- (void)stateTransitionAnimation;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

