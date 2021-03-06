/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSInvocation, NSTimer;

@interface UIRepeatedAction : NSObject {

	BOOL _didCompletePreInvocationDelay;
	BOOL _didCompleteInvocationDelay;
	BOOL _rescheduleAfterNextFire;
	BOOL _disableRepeat;
	BOOL _skipInitialFire;
	double _preInvocationDelay;
	double _invocationDelay;
	double _repeatedDelay;
	NSInvocation* _invocation;
	id _invocationArgument;
	NSTimer* _timer;

}

@property (assign,nonatomic) double preInvocationDelay;              //@synthesize preInvocationDelay=_preInvocationDelay - In the implementation block
@property (assign,nonatomic) double invocationDelay;                 //@synthesize invocationDelay=_invocationDelay - In the implementation block
@property (assign,nonatomic) double repeatedDelay;                   //@synthesize repeatedDelay=_repeatedDelay - In the implementation block
@property (assign,nonatomic) BOOL disableRepeat;                     //@synthesize disableRepeat=_disableRepeat - In the implementation block
@property (assign,nonatomic) BOOL skipInitialFire;                   //@synthesize skipInitialFire=_skipInitialFire - In the implementation block
@property (nonatomic,retain) NSInvocation * invocation;              //@synthesize invocation=_invocation - In the implementation block
@property (nonatomic,retain) id invocationArgument;                  //@synthesize invocationArgument=_invocationArgument - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                        //@synthesize timer=_timer - In the implementation block
+(id)_invocationForTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
+(id)actionWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(void)invoke;
-(id)initWithInvocation:(id)arg1 ;
-(void)reset;
-(void)setInvocationDelay:(double)arg1 ;
-(void)setRepeatedDelay:(double)arg1 ;
-(void)setDisableRepeat:(BOOL)arg1 ;
-(void)setSkipInitialFire:(BOOL)arg1 ;
-(void)scheduleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)setInvocationArgument:(id)arg1 ;
-(void)setInvocation:(NSInvocation *)arg1 ;
-(void)schedule;
-(NSInvocation *)invocation;
-(double)preInvocationDelay;
-(id)invocationArgument;
-(BOOL)disableRepeat;
-(void)setTimer:(NSTimer *)arg1 ;
-(double)repeatedDelay;
-(void)_repeatedTimerFire;
-(double)invocationDelay;
-(void)_invocationTimerFire;
-(void)_preInvocationTimerFire;
-(NSTimer *)timer;
-(void)setPreInvocationDelay:(double)arg1 ;
-(BOOL)skipInitialFire;
@end

