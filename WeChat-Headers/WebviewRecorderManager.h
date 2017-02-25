//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IFavAudioRecorderExt.h"
#import "IRecordPermissionCheckExt.h"
#import "MMService.h"

@class FavAudioRecorder, MMTimer, NSString;

@interface WebviewRecorderManager : MMService <MMService, IFavAudioRecorderExt, IRecordPermissionCheckExt>
{
    FavAudioRecorder *_recorder;
    int _recordStatus;
    NSString *_lastFilePath;
    unsigned long long _startRecordTime;
    unsigned long long _endRecordTime;
    MMTimer *_recordTimer;
    long long _stopReason;
    long long _recordTimeoutValue;
}

@property(retain, nonatomic) NSString *lastFilePath; // @synthesize lastFilePath=_lastFilePath;
- (void).cxx_destruct;
- (void)OnFavFinishRecord:(id)arg1 VoiceFmt:(unsigned int)arg2;
- (void)OnFavBeginRecording:(int)arg1;
- (_Bool)internalStopRecord;
- (void)stopTime;
- (void)onTimeCount;
- (void)notifyFinishRecordOnMainThread:(id)arg1;
- (void)notifyRecordTimeTooShortOnMainThread;
- (void)notifyStartRecordOnMainThread:(id)arg1;
- (_Bool)endRecord;
- (_Bool)stopRecord;
- (_Bool)startRecord:(int)arg1;
- (int)getRecordStatus;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

