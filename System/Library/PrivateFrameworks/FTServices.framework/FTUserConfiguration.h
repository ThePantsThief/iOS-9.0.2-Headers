/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FTUserConfiguration : NSObject

@property (assign,nonatomic) BOOL cellularFaceTimeEnabled; 
@property (assign,nonatomic) BOOL allowAnyNetwork; 
@property (nonatomic,readonly) BOOL _nonWifiFaceTimeEntitled; 
+(id)sharedInstance;
-(BOOL)cellularFaceTimeEnabled;
-(void)setCellularFaceTimeEnabled:(BOOL)arg1 ;
-(BOOL)_nonWifiFaceTimeEntitled;
-(BOOL)_adequateInternalOrCarrierInstall;
-(void)setAllowAnyNetwork:(BOOL)arg1 ;
-(BOOL)allowAnyNetwork;
@end
