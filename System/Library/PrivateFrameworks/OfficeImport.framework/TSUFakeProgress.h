/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OITSUBasicProgress.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface TSUFakeProgress : OITSUBasicProgress {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _currentStage;
	unsigned long long _numberOfStages;
	BOOL _stopped;

}
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)p_slowlyAdvanceToNextStage;
-(id)initWithMaxValue:(double)arg1 numberOfStages:(unsigned long long)arg2 ;
-(void)advanceToStage:(unsigned long long)arg1 ;
@end
