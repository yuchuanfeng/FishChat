//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, Config, NSString, RegApInfo, ShowWordsInfo;

@interface APCheckResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionCode; // @dynamic actionCode;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) Config *config; // @dynamic config;
@property(retain, nonatomic) RegApInfo *regApInfo; // @dynamic regApInfo;
@property(nonatomic) unsigned int relativeExpiredSeconds; // @dynamic relativeExpiredSeconds;
@property(retain, nonatomic) NSString *showUrl; // @dynamic showUrl;
@property(retain, nonatomic) ShowWordsInfo *showWords; // @dynamic showWords;

@end

