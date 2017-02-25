//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock;

@interface Q2DMapStatistics : NSObject
{
    NSMutableDictionary *_tileTimes;
    NSRecursiveLock *_lock;
}

+ (id)sharedStatistics;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *tileTimes; // @synthesize tileTimes=_tileTimes;
- (void).cxx_destruct;
- (id)init;
- (void)reportTileStatistics;
- (void)addTileElpaseTime:(float)arg1 type:(int)arg2;
- (id)appendCommonUrlStatisticParamatersFor:(id)arg1;
- (void)sendingStatisticsToServer:(CDUnknownBlockType)arg1;
- (void)sendingRequest:(id)arg1:(CDUnknownBlockType)arg2;
- (id)constructRequest;
- (id)constructURLStringWithArguments:(id)arg1 forUrl:(id)arg2;
- (id)constructArguments;
- (id)constructCommonArguments;
- (id)DPI;
- (id)netType;
- (id)appVersion;
- (id)appBundleIdentifier;
- (id)appName;
- (id)deviceIdentifier;
- (void)throwKeyInvalidException;

@end

