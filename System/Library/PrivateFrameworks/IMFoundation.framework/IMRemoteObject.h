/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMRemoteObject : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSString * portName; 
@property (nonatomic,retain) NSString * processName; 
@property (assign,nonatomic) int pid; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection; 
@property (nonatomic,readonly) BOOL isValid; 
+(void)initialize;
+(void)_registerIMRemoteObject:(id)arg1 ;
+(void)_unregisterIMRemoteObject:(id)arg1 ;
+(id)_remoteObjects;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(BOOL)isValid;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(NSString *)processName;
-(void)forwardInvocation:(id)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(id)_queue;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 alreadyConfigured:(BOOL)arg3 ;
-(void)_portDidBecomeInvalid;
-(void)_systemShutdown:(id)arg1 ;
-(void)setPortName:(NSString *)arg1 ;
-(id)_initWithConnection:(id)arg1 portName:(id)arg2 protocol:(id)arg3 alreadyConfigured:(BOOL)arg4 ;
-(void)_cleanupMachBitsCanPost:(BOOL)arg1 ;
-(unsigned long long)forwardXPCObject:(id)arg1 messageContext:(id)arg2 ;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 ;
-(id)initWithPortName:(id)arg1 protocol:(id)arg2 ;
-(void)finalize;
-(NSString *)portName;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(void)setProcessName:(NSString *)arg1 ;
@end
