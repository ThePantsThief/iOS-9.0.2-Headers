/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:02 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDNanoSyncDescription.h>

@class HDIDSIncomingRequest, NSString, NSData, NSDictionary;

@interface HDIDSOutgoingResponse : NSObject <HDNanoSyncDescription> {

	BOOL _doNotCompress;
	BOOL _forceLocalDelivery;
	BOOL _sent;
	unsigned short _messageID;
	HDIDSIncomingRequest* _request;
	NSString* _idsIdentifier;
	NSData* _data;
	unsigned long long _priority;
	double _sendTimeout;
	NSDictionary* _persistentUserInfo;
	id _pbResponse;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) HDIDSIncomingRequest * request;              //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                           //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                             //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) NSData * data;                                      //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                        //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double sendTimeout;                                 //@synthesize sendTimeout=_sendTimeout - In the implementation block
@property (nonatomic,retain) NSDictionary * persistentUserInfo;                  //@synthesize persistentUserInfo=_persistentUserInfo - In the implementation block
@property (assign,nonatomic) BOOL doNotCompress;                                 //@synthesize doNotCompress=_doNotCompress - In the implementation block
@property (assign,nonatomic) BOOL forceLocalDelivery;                            //@synthesize forceLocalDelivery=_forceLocalDelivery - In the implementation block
@property (getter=isSent) BOOL sent;                                             //@synthesize sent=_sent - In the implementation block
@property (nonatomic,retain) id pbResponse;                                      //@synthesize pbResponse=_pbResponse - In the implementation block
-(id)nanoSyncDescription;
-(void)configureWithActivationRestore:(id)arg1 forStore:(id)arg2 ;
-(void)configureWithStatus:(id)arg1 forStore:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(HDIDSIncomingRequest *)request;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(void)send;
-(unsigned short)messageID;
-(BOOL)isSent;
-(void)setRequest:(HDIDSIncomingRequest *)arg1 ;
-(void)setForceLocalDelivery:(BOOL)arg1 ;
-(void)setSendTimeout:(double)arg1 ;
-(NSString *)idsIdentifier;
-(id)pbResponse;
-(void)setPersistentUserInfo:(NSDictionary *)arg1 ;
-(void)setPbResponse:(id)arg1 ;
-(NSDictionary *)persistentUserInfo;
-(double)sendTimeout;
-(BOOL)doNotCompress;
-(BOOL)forceLocalDelivery;
-(void)setMessageID:(unsigned short)arg1 ;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setSent:(BOOL)arg1 ;
-(void)setDoNotCompress:(BOOL)arg1 ;
@end

