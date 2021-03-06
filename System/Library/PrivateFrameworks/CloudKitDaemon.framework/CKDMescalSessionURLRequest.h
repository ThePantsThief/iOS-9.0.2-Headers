/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSData;

@interface CKDMescalSessionURLRequest : CKDURLRequest {

	NSData* _mescalData;
	NSData* _sessionData;

}

@property (nonatomic,retain) NSData * mescalData;               //@synthesize mescalData=_mescalData - In the implementation block
@property (nonatomic,retain) NSData * sessionData;              //@synthesize sessionData=_sessionData - In the implementation block
-(BOOL)requiresDeviceID;
-(BOOL)requiresSignature;
-(BOOL)allowsAnonymousAccount;
-(id)initWithSessionData:(id)arg1 ;
-(NSData *)mescalData;
-(id)requestOperations;
-(void)setMescalData:(NSData *)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(NSData *)sessionData;
-(void)setSessionData:(NSData *)arg1 ;
-(int)operationType;
@end

