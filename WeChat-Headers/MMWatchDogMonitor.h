//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMWatchDogMonitor : NSObject
{
}

+ (void)writeValueToFile:(int)arg1 isBootTimeNotEnough:(_Bool)arg2;
+ (int)origValueFromFile;
+ (_Bool)isAvailable;
+ (int)continuousTimeoutTimes;
+ (void)clearFlagByTimer;
+ (void)clearFlag;
+ (void)handleDidBecomeActiveNotification:(id)arg1;
+ (void)bootTimeMonitor;
+ (void)beginMonitor;

@end

