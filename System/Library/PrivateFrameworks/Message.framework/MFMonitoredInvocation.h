/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSInvocation.h>

@class MFActivityMonitor, NSString;

@interface MFMonitoredInvocation : NSInvocation {

	MFActivityMonitor* _monitor;
	BOOL _shouldLogInvocation;
	BOOL _isLowPriority;
	NSString* _powerAssertionId;

}

@property (nonatomic,readonly) MFActivityMonitor * monitor;              //@synthesize monitor=_monitor - In the implementation block
@property (assign,nonatomic) BOOL isLowPriority;                         //@synthesize isLowPriority=_isLowPriority - In the implementation block
@property (nonatomic,copy) NSString * powerAssertionId;                  //@synthesize powerAssertionId=_powerAssertionId - In the implementation block
+(id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3 taskName:(id)arg4 priority:(int)arg5 canBeCancelled:(BOOL)arg6 ;
+(id)invocationWithSelector:(SEL)arg1 target:(id)arg2 taskName:(id)arg3 priority:(int)arg4 canBeCancelled:(BOOL)arg5 ;
+(id)invocationWithMethodSignature:(id)arg1 ;
+(id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 taskName:(id)arg5 priority:(int)arg6 canBeCancelled:(BOOL)arg7 ;
-(void)dealloc;
-(id)description;
-(void)invoke;
-(MFActivityMonitor *)monitor;
-(void)setPowerAssertionId:(NSString *)arg1 ;
-(BOOL)mf_shouldLogInvocation;
-(void)setShouldLogInvocation:(BOOL)arg1 ;
-(BOOL)isLowPriority;
-(void)setIsLowPriority:(BOOL)arg1 ;
-(NSString *)powerAssertionId;
@end
