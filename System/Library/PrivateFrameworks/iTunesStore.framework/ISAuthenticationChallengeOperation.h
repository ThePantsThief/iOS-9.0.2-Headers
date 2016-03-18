/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:39 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISDialogOperation.h>

@class ISAuthenticationChallenge, NSURLCredential;

@interface ISAuthenticationChallengeOperation : ISDialogOperation {

	ISAuthenticationChallenge* _challenge;
	NSURLCredential* _credential;

}

@property (retain) ISAuthenticationChallenge * challenge;              //@synthesize challenge=_challenge - In the implementation block
@property (retain) NSURLCredential * credential;                       //@synthesize credential=_credential - In the implementation block
+(id)operationWithChallenge:(id)arg1 ;
-(void)setCredential:(NSURLCredential *)arg1 ;
-(void)dealloc;
-(void)run;
-(ISAuthenticationChallenge *)challenge;
-(void)setChallenge:(ISAuthenticationChallenge *)arg1 ;
-(NSURLCredential *)credential;
-(void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2 ;
-(id)_copyCredentialForSignInResponseDictionary:(id)arg1 ;
@end
