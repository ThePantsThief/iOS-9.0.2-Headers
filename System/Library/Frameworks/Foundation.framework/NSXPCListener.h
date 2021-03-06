/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:14 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NSXPCListenerDelegate;
@class NSObject, NSString, NSXPCListenerEndpoint;

@interface NSXPCListener : NSObject {

	void* _xconnection;
	NSObject*<OS_dispatch_queue> _userQueue;
	void* reserved0;
	id<NSXPCListenerDelegate> _delegate;
	NSString* _serviceName;
	unsigned long long _state;
	id _reserved1;
	id _reserved2;

}

@property (assign) id<NSXPCListenerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (retain,readonly) NSXPCListenerEndpoint * endpoint; 
+(id)serviceListener;
+(void)enableTransactions;
+(id)_UUID;
+(id)anonymousListener;
-(id)serviceName;
-(id)_initShared;
-(void)setDelegate:(id<NSXPCListenerDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<NSXPCListenerDelegate>)delegate;
-(void)invalidate;
-(void)suspend;
-(void)stop;
-(void)resume;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)_setQueue:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(id)_queue;
-(NSXPCListenerEndpoint *)endpoint;
-(id)_xpcConnection;
-(void)finalize;
@end

