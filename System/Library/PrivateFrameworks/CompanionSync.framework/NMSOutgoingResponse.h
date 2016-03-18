/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMSObfuscatableDescriptionProviding.h>

@class NMSIncomingRequest, NSData, NSDictionary, NSString;

@interface NMSOutgoingResponse : NSObject <NMSObfuscatableDescriptionProviding> {

	BOOL _sent;
	NMSIncomingRequest* _request;
	NSData* _data;
	unsigned long long _priority;
	double _sendTimeout;
	NSDictionary* _persistentUserInfo;
	NSDictionary* _extraIDSOptions;
	NSString* _idsIdentifier;
	id _pbResponse;

}

@property (assign,nonatomic,__weak) NMSIncomingRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSData * data;                                    //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                      //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double sendTimeout;                               //@synthesize sendTimeout=_sendTimeout - In the implementation block
@property (nonatomic,retain) NSDictionary * persistentUserInfo;                //@synthesize persistentUserInfo=_persistentUserInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * extraIDSOptions;                   //@synthesize extraIDSOptions=_extraIDSOptions - In the implementation block
@property (getter=isSent) BOOL sent;                                           //@synthesize sent=_sent - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                           //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) id pbResponse;                                    //@synthesize pbResponse=_pbResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(NMSIncomingRequest *)request;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(void)send;
-(BOOL)isSent;
-(void)setExtraIDSOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)extraIDSOptions;
-(id)CPObfuscatedDescriptionObject;
-(id)_makePBResponse;
-(void)setRequest:(NMSIncomingRequest *)arg1 ;
-(void)setSendTimeout:(double)arg1 ;
-(NSString *)idsIdentifier;
-(id)pbResponse;
-(void)setPersistentUserInfo:(NSDictionary *)arg1 ;
-(void)setPbResponse:(id)arg1 ;
-(NSDictionary *)persistentUserInfo;
-(double)sendTimeout;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setSent:(BOOL)arg1 ;
@end
