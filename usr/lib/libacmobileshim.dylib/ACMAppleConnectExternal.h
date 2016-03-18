/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMAppleConnectPrivate.h>
#import <libobjc.A.dylib/ACMSignInDialogDelegate.h>

@class ACMSignInDialog, NSMutableSet, NSString;

@interface ACMAppleConnectExternal : ACMAppleConnectPrivate <ACMSignInDialogDelegate> {

	ACMSignInDialog* _signInDialog;
	NSMutableSet* _shownAlerts;
	long long _appleConnectState;

}

@property (nonatomic,retain) ACMSignInDialog * signInDialog;              //@synthesize signInDialog=_signInDialog - In the implementation block
@property (nonatomic,retain) NSMutableSet * shownAlerts;                  //@synthesize shownAlerts=_shownAlerts - In the implementation block
@property (assign,nonatomic) long long appleConnectState;                 //@synthesize appleConnectState=_appleConnectState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(int)logLevel;
-(void)setLogLevel:(int)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(id)parentViewController;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)reportError:(id)arg1 ;
-(Class)settingsClass;
-(void)cancelRequests;
-(id)authenticationRequest;
-(void)authenticateWithRequest:(id)arg1 password:(id)arg2 ;
-(BOOL)shouldReleaseOnMemoryWarning;
-(id)initWithMasterObject:(id)arg1 ;
-(id)hideAppleConnectSignInDialog;
-(void)verifyServiceTicket:(id)arg1 ;
-(void)onIForgot:(id)arg1 ;
-(void)setShownAlerts:(NSMutableSet *)arg1 ;
-(void)setAppleConnectState:(long long)arg1 ;
-(ACMSignInDialog *)signInDialog;
-(void)setSignInDialog:(ACMSignInDialog *)arg1 ;
-(long long)appleConnectState;
-(void)hideSignIn;
-(BOOL)signInAnimated;
-(void)showSignIn;
-(void)returnError:(id)arg1 withSelector:(SEL)arg2 withResponseClass:(Class)arg3 ;
-(void)sendAuthenticationRequest:(id)arg1 password:(id)arg2 ;
-(void)returnServiceTicket:(id)arg1 ;
-(void)returnResponse:(id)arg1 withSelector:(SEL)arg2 ;
-(NSMutableSet *)shownAlerts;
-(void)onSignIn:(id)arg1 withPassword:(id)arg2 ;
-(void)onSignInCancel:(id)arg1 ;
-(Class)provisionManagerClass;
-(void)authenticateRunningOnMainThreadWithRequest:(id)arg1 ;
-(void)signInDialogWillBecomeEnabled;
-(void)signInDialogDidBecomeEnabled;
-(void)signInDialogWillBecomeDisabled;
-(void)signInDialogDidBecomeDisabled;
@end
