/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ACMExternalAuthenticationRequest <ACMBaseAuthenticationRequest>
@property (assign) BOOL useAlertView; 
@property (assign) BOOL userNameFieldEditable; 
@property (retain) NSString * alertViewPrompt; 
@property (assign) BOOL automaticallyCancelWhenSwitchingToBackground; 
@required
-(BOOL)useAlertView;
-(BOOL)automaticallyCancelWhenSwitchingToBackground;
-(void)setUserNameFieldEditable:(BOOL)arg1;
-(void)setAlertViewPrompt:(id)arg1;
-(void)setUseAlertView:(BOOL)arg1;
-(BOOL)userNameFieldEditable;
-(NSString *)alertViewPrompt;
-(void)setAutomaticallyCancelWhenSwitchingToBackground:(BOOL)arg1;

@end

