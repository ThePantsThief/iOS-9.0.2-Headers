/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/Frameworks/EscrowService.framework/EscrowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EscrowService : NSObject
+(id)_CreateLakituConnection;
-(void)getAccountInfoWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)startSMSChallengeWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)changeSMSTargetWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)storeRecordWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)recoverRecordWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)updateRecordWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)deleteRecordWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)updateRecordMetadataWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)listSMSTargetsWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getCountrySMSCodesWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)verifyCertificateWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end
