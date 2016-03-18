/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLEntryNotificationOperatorComposition, PLSemaphore;

@interface PLNetworkAgent : PLAgent {

	PLEntryNotificationOperatorComposition* _batteryLevelChanged;
	PLEntryNotificationOperatorComposition* _canSleep;
	PLSemaphore* _canSleepSemaphore;

}

@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;              //@synthesize batteryLevelChanged=_batteryLevelChanged - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * canSleep;                         //@synthesize canSleep=_canSleep - In the implementation block
@property (retain) PLSemaphore * canSleepSemaphore;                                           //@synthesize canSleepSemaphore=_canSleepSemaphore - In the implementation block
+(id)defaults;
+(void)load;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(void)setBatteryLevelChanged:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)batteryLevelChanged;
-(PLSemaphore *)canSleepSemaphore;
-(void)setCanSleepSemaphore:(PLSemaphore *)arg1 ;
-(void)setCanSleep:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)logEventBackwardCumulativeNetworkUsage;
-(PLEntryNotificationOperatorComposition *)canSleep;
@end
