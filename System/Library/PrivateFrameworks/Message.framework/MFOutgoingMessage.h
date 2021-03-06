/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailMessage.h>

@class MFMessageBody, MFMutableMessageHeaders;

@interface MFOutgoingMessage : MFMailMessage {

	MFMessageBody* _messageBody;
	MFMutableMessageHeaders* _messageHeaders;

}
-(id)messageStore;
-(id)headersIfAvailable;
-(id)messageBodyIfAvailable;
-(id)mutableHeaders;
-(id)headers;
-(id)messageData;
-(void)dealloc;
-(unsigned long long)messageSize;
-(BOOL)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(void)setMutableHeaders:(id)arg1 ;
-(id)messageBody;
-(void)setMessageBody:(id)arg1 ;
@end

