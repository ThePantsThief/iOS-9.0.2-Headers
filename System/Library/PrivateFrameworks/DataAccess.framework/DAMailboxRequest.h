/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DAMailboxRequest : NSObject {

	int _requestType;
	int _bodyFormat;
	NSString* _messageID;

}

@property (assign,nonatomic) int requestType;                 //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) int bodyFormat;                  //@synthesize bodyFormat=_bodyFormat - In the implementation block
@property (nonatomic,copy) NSString * messageID;              //@synthesize messageID=_messageID - In the implementation block
-(BOOL)mf_alwaysReportFailures;
-(int)requestType;
-(id)init;
-(NSString *)messageID;
-(void)setBodyFormat:(int)arg1 ;
-(void)setRequestType:(int)arg1 ;
-(void)setMessageID:(NSString *)arg1 ;
-(int)bodyFormat;
@end
