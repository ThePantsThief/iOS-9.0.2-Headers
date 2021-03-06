/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPUI/CDPPassphraseEntryViewController.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>

@class UIViewController, NSString;

@interface CDPLocalSecretEntryViewController : CDPPassphraseEntryViewController <DevicePINControllerDelegate> {

	UIViewController* _presentingViewController;
	/*^block*/id _validSecretHandler;

}

@property (nonatomic,copy) id validSecretHandler;                   //@synthesize validSecretHandler=_validSecretHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)title;
-(void)setValidSecretHandler:(id)arg1 ;
-(id)validSecretHandler;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
-(id)pinInstructionsPrompt;
@end

