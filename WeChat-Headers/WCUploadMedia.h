//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray, NSString, VideoUploadStatInfo, WCUrl;

@interface WCUploadMedia : NSObject
{
    int type;
    int subType;
    NSData *buffer;
    NSString *clientID;
    int failCount;
    _Bool isFinished;
    WCUrl *bufferUrl;
    WCUrl *lowBandUrl;
    WCUrl *bufferDataUrl;
    WCUrl *lowBandDataUrl;
    NSMutableArray *thumbUrlsList;
    NSString *serverID;
    int outType;
    int imageFilterID;
    struct CGSize imgSize;
    _Bool isSyncToWeibo;
    _Bool isSyncToFacebook;
    _Bool isSyncToTwitter;
    _Bool isSyncToQZone;
    NSString *title;
    NSString *desc;
    _Bool isThumbForPrevMeida;
    int imageFrom;
    NSString *twitterOAuthToken;
    NSString *twitterOAuthTokenSecret;
    NSString *userData;
    _Bool isSingleMedia;
    NSString *md5;
    NSString *videoMD5;
    int _sourceForSNSUploadStat;
    unsigned int _duration;
    VideoUploadStatInfo *videoUploadStatInfo;
}

@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) int sourceForSNSUploadStat; // @synthesize sourceForSNSUploadStat=_sourceForSNSUploadStat;
@property(retain, nonatomic) VideoUploadStatInfo *videoUploadStatInfo; // @synthesize videoUploadStatInfo;
@property(retain, nonatomic) NSString *videoMD5; // @synthesize videoMD5;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(nonatomic) _Bool isSingleMedia; // @synthesize isSingleMedia;
@property(retain, nonatomic) NSString *userData; // @synthesize userData;
@property(retain, nonatomic) NSString *twitterOAuthTokenSecret; // @synthesize twitterOAuthTokenSecret;
@property(retain, nonatomic) NSString *twitterOAuthToken; // @synthesize twitterOAuthToken;
@property(nonatomic) int imageFrom; // @synthesize imageFrom;
@property(nonatomic) _Bool isThumbForPrevMeida; // @synthesize isThumbForPrevMeida;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(nonatomic) _Bool isSyncToQZone; // @synthesize isSyncToQZone;
@property(nonatomic) _Bool isSyncToTwitter; // @synthesize isSyncToTwitter;
@property(nonatomic) _Bool isSyncToFacebook; // @synthesize isSyncToFacebook;
@property(nonatomic) _Bool isSyncToWeibo; // @synthesize isSyncToWeibo;
@property(nonatomic) struct CGSize imgSize; // @synthesize imgSize;
@property(nonatomic) int imageFilterID; // @synthesize imageFilterID;
@property(nonatomic) int outType; // @synthesize outType;
@property(retain, nonatomic) NSString *serverID; // @synthesize serverID;
@property(retain, nonatomic) NSMutableArray *thumbUrlsList; // @synthesize thumbUrlsList;
@property(retain, nonatomic) WCUrl *lowBandDataUrl; // @synthesize lowBandDataUrl;
@property(retain, nonatomic) WCUrl *bufferDataUrl; // @synthesize bufferDataUrl;
@property(retain, nonatomic) WCUrl *lowBandUrl; // @synthesize lowBandUrl;
@property(retain, nonatomic) WCUrl *bufferUrl; // @synthesize bufferUrl;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID;
@property(retain, nonatomic) NSData *buffer; // @synthesize buffer;
@property(nonatomic) int subType; // @synthesize subType;
@property(nonatomic) int type; // @synthesize type;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)pathForMedia;
- (void)removeMediaBuffer;
- (void)saveMediaBuffer;
- (void)clearMediaBuffer;
- (id)mediaBuffer;
- (id)getTypeName;
- (id)init;

@end

