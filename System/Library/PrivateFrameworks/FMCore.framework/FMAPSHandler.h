/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@class APSConnection, NSMutableArray, NSString;

@interface FMAPSHandler : NSObject <APSConnectionDelegate> {

	BOOL _suspendRegistrations;
	BOOL _registerForDarkWake;
	APSConnection* _apsConnection;
	NSMutableArray* _registeredDelegates;
	NSMutableArray* _pendingPushes;
	NSString* _environmentName;
	id _kvoToken;

}

@property (assign,nonatomic) BOOL suspendRegistrations;                         //@synthesize suspendRegistrations=_suspendRegistrations - In the implementation block
@property (assign,nonatomic) BOOL registerForDarkWake;                          //@synthesize registerForDarkWake=_registerForDarkWake - In the implementation block
@property (nonatomic,readonly) NSString * apsToken; 
@property (nonatomic,retain) APSConnection * apsConnection;                     //@synthesize apsConnection=_apsConnection - In the implementation block
@property (nonatomic,retain) NSMutableArray * registeredDelegates;              //@synthesize registeredDelegates=_registeredDelegates - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingPushes;                    //@synthesize pendingPushes=_pendingPushes - In the implementation block
@property (nonatomic,retain) NSString * environmentName;                        //@synthesize environmentName=_environmentName - In the implementation block
@property (nonatomic,retain) id kvoToken;                                       //@synthesize kvoToken=_kvoToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)constantForEnvironmentString:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)initWithEnvironmentName:(id)arg1 ;
-(APSConnection *)apsConnection;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(void)setApsConnection:(APSConnection *)arg1 ;
-(id)initWithEnvironmentName:(id)arg1 launchOnDemandPort:(id)arg2 ;
-(void)setRegisteredDelegates:(NSMutableArray *)arg1 ;
-(void)setPendingPushes:(NSMutableArray *)arg1 ;
-(void)_registrationsWereResumed;
-(void)setKvoToken:(id)arg1 ;
-(id)kvoToken;
-(NSMutableArray *)registeredDelegates;
-(BOOL)suspendRegistrations;
-(NSMutableArray *)pendingPushes;
-(void)_handleMessage:(id)arg1 onTopic:(id)arg2 ;
-(void)registerDelegate:(id)arg1 forTopic:(id)arg2 ;
-(void)deregisterDelegate:(id)arg1 ;
-(NSString *)apsToken;
-(void)setSuspendRegistrations:(BOOL)arg1 ;
-(BOOL)registerForDarkWake;
-(void)setRegisterForDarkWake:(BOOL)arg1 ;
-(void)_setEnabledTopics:(id)arg1 ;
-(void)setEnvironmentName:(NSString *)arg1 ;
-(NSString *)environmentName;
@end
