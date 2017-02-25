//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WAUpoadFileFormMultiPart : NSObject
{
    NSString *_header;
    NSString *_bodyFilePath;
    NSString *_bodyString;
    NSString *_footer;
    _Bool _isFirstPart;
    _Bool _isLastPart;
}

+ (id)finalBoundary:(id)arg1;
+ (id)middlePartBoundary:(id)arg1;
+ (id)firstPartBoundary:(id)arg1;
+ (id)boundary;
+ (id)arrayFormBodyObjectWithMultiPart:(id)arg1 contentLength:(unsigned long long *)arg2;
+ (id)arrayMultiPartWithFileFieldName:(id)arg1 filePath:(id)arg2 formFields:(id)arg3 boundary:(id)arg4;
+ (id)arrayFormBodyObjectWithFileFieldName:(id)arg1 filePath:(id)arg2 formFields:(id)arg3 boundary:(id)arg4 contentLength:(unsigned long long *)arg5;
- (void).cxx_destruct;
- (void)setFileFieldName:(id)arg1 filePath:(id)arg2 boundary:(id)arg3;
- (void)setFieldName:(id)arg1 fieldValue:(id)arg2 boundary:(id)arg3;
- (void)markLastPart;
- (void)markFirstPart;
- (id)footer;
- (id)bodyString;
- (id)bodyFilePath;
- (id)header;

@end

