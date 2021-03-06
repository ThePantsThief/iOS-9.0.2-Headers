/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface BLSleepAssertionManager : NSObject {

	NSObject*<OS_dispatch_semaphore> m_assertionSemaphore;
	long long m_assertionCount;
	BOOL m_waiting;
	int m_assertionLock;
	long long m_idleCount;
	int m_idleLock;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)hidden;
-(void)takeSleepAssertion;
-(void)releaseSleepAssertion;
-(void)waitForOutstandingSleepAssertions;
-(void)takeIdleAssertion;
-(void)releaseIdleAssertion;
@end

