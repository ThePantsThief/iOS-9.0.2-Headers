/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMCatherineFeederInternal : NSObject {

	NSObject*<OS_dispatch_queue> fInternalQueue;
	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_source> fWatchdogTimer;

}
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)_startDaemonConnection;
-(void)_feedCatherine:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3 ;
-(void)dealloc;
-(id)init;
-(void)_teardown;
@end

