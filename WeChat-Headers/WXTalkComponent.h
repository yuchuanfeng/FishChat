//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WXTalkComponent : NSObject
{
    struct WXTalkEngineAdapter *_engineAdapter;
    struct IMultiTalkMgr *_wxTalkEngine;
}

@property(nonatomic) struct IMultiTalkMgr *wxTalkEngine; // @synthesize wxTalkEngine=_wxTalkEngine;
@property(nonatomic) struct WXTalkEngineAdapter *engineAdapter; // @synthesize engineAdapter=_engineAdapter;
- (void)dealloc;
- (void)getLocalCapInfo:(void **)arg1 capInfoLen:(int *)arg2 forNetType:(int)arg3;
- (id)init;

@end
