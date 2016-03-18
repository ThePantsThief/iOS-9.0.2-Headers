/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:01 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, BKSApplicationStateMonitor, NSObject, NSPointerArray, HDDaemon;

@interface HDProcessStateManager : NSObject {

	NSMutableDictionary* _processObserversByBundleID;
	BKSApplicationStateMonitor* _applicationMonitor;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _clientCalloutQueue;
	NSMutableDictionary* _currentProcessStateByBundleID;
	NSPointerArray* _generalProcessObservers;
	HDDaemon* _daemon;

}

@property (assign,nonatomic,__weak) HDDaemon * daemon;              //@synthesize daemon=_daemon - In the implementation block
+(id)bundleVersionStringForProcessIdentifier:(int)arg1 ;
-(id)init;
-(HDDaemon *)daemon;
-(void)setDaemon:(HDDaemon *)arg1 ;
-(void)registerAllProcessObserver:(id)arg1 ;
-(long long)countOfForegroundObservedApplications;
-(id)initWithDaemon:(id)arg1 ;
-(void)_queue_stateChangeHandler:(id)arg1 ;
-(BOOL)registerObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)unregisterObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)unregisterAllProcessObserver:(id)arg1 ;
-(BOOL)isApplicationStateSuspendedForBundleIdentifier:(id)arg1 ;
@end
