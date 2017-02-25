//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCondition;

@interface WCDBRWLock : NSObject
{
    NSCondition *m_locker;
    struct map<NSThread *__weak, int, std::__1::less<NSThread *__weak>, std::__1::allocator<std::__1::pair<NSThread *const __weak, int>>> m_sharedThreads;
    struct pair<NSThread *__weak, int> m_exclusiveThread;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unlock:(unsigned long long)arg1;
- (void)lock:(unsigned long long)arg1;
- (_Bool)tryLockRead;
- (id)init;

@end

