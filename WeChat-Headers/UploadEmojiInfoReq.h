//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSData, NSString;

@interface UploadEmojiInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *emojiBuffer; // @dynamic emojiBuffer;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) int startPos; // @dynamic startPos;
@property(nonatomic) int totalLen; // @dynamic totalLen;

@end

