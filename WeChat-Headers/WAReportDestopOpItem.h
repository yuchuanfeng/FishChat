//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@interface WAReportDestopOpItem : WAReportBaseItem
{
    unsigned int _eventTime;
    unsigned long long _opActionType;
    unsigned long long _opScene;
}

@property(nonatomic) unsigned long long opScene; // @synthesize opScene=_opScene;
@property(nonatomic) unsigned long long opActionType; // @synthesize opActionType=_opActionType;
@property(nonatomic) unsigned int eventTime; // @synthesize eventTime=_eventTime;
- (id)reportString;

@end

