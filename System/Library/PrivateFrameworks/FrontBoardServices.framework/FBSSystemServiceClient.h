/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCClient.h>
#import <libobjc.A.dylib/FBSSystemServiceClient.h>

@protocol FBSSystemServiceClient <NSObject>
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> calloutQueue; 
@required
-(void)sendMessage:(id)arg1 withType:(long long)arg2;
-(void)sendMessage:(id)arg1 withType:(long long)arg2 replyHandler:(/*^block*/id)arg3 waitForReply:(BOOL)arg4 timeout:(double)arg5;
-(NSObject*<OS_dispatch_queue>)calloutQueue;

@end


@protocol FBSSystemServiceClientDelegate, OS_dispatch_queue;
@class NSObject, NSString;

@interface FBSSystemServiceClient : BSBaseXPCClient <FBSSystemServiceClient> {

	id<FBSSystemServiceClientDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BOOL _connectionDenied;
	BOOL _invalidated;

}

@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> calloutQueue;              //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,retain) id<FBSSystemServiceClientDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendMessage:(id)arg1 withType:(long long)arg2 ;
-(void)setDelegate:(id<FBSSystemServiceClientDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBSSystemServiceClientDelegate>)delegate;
-(void)queue_handleMessage:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 endpoint:(id)arg2 ;
-(void)queue_clientWasInvalidated;
-(void)queue_connectionWasCreated;
-(void)sendMessage:(id)arg1 withType:(long long)arg2 replyHandler:(/*^block*/id)arg3 waitForReply:(BOOL)arg4 timeout:(double)arg5 ;
-(id)initWithCalloutQueue:(id)arg1 ;
-(id)initWithCalloutQueue:(id)arg1 endpoint:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
@end
