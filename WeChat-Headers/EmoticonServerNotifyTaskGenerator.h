//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface EmoticonServerNotifyTaskGenerator : MMObject
{
}

+ (const char *)emojiDeviceIDNodeName;
+ (const char *)emojiMd5NodeName;
+ (const char *)emojiBackupNodeName;
+ (const char *)opCodeNodeName;
+ (long long)opcodeForTop;
+ (long long)opcodeForAdd;
+ (long long)opcodeForDelete;
+ (id)EmoticonMd5ObjectFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)getTaskForXmlString:(id)arg1 withDelegate:(id)arg2;

@end

