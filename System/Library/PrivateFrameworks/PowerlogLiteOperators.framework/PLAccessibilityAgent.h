/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLCFNotificationOperatorComposition;

@interface PLAccessibilityAgent : PLAgent {

	PLCFNotificationOperatorComposition* _notificationReduceMotionChanged;
	PLCFNotificationOperatorComposition* _notificationBackgroundContrastChanged;

}

@property (readonly) PLCFNotificationOperatorComposition * notificationReduceMotionChanged;                    //@synthesize notificationReduceMotionChanged=_notificationReduceMotionChanged - In the implementation block
@property (readonly) PLCFNotificationOperatorComposition * notificationBackgroundContrastChanged;              //@synthesize notificationBackgroundContrastChanged=_notificationBackgroundContrastChanged - In the implementation block
+(void)load;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(void)logEventForwardReduceMotion;
-(void)logEventForwardBackgroundContrast;
-(PLCFNotificationOperatorComposition *)notificationReduceMotionChanged;
-(PLCFNotificationOperatorComposition *)notificationBackgroundContrastChanged;
@end
