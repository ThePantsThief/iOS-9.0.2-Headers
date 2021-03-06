/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSSystemServiceClientDelegate.h>
#import <libobjc.A.dylib/FBSSystemServiceClient.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, FBSSystemServiceClient;

@interface FBSSystemServiceFacilityClient : NSObject <FBSSystemServiceClientDelegate, FBSSystemServiceClient> {

	NSString* _identifier;
	NSObject*<OS_dispatch_queue> _queue;
	FBSSystemServiceClient* _client;
	BOOL _connectionDenied;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> calloutQueue;              //@synthesize queue=_queue - In the implementation block
-(void)sendMessage:(id)arg1 withType:(long long)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2 ;
-(void)sendMessage:(id)arg1 withType:(long long)arg2 replyHandler:(/*^block*/id)arg3 waitForReply:(BOOL)arg4 timeout:(double)arg5 ;
-(void)handleMessage:(id)arg1 withType:(long long)arg2 ;
-(void)client:(id)arg1 configureConnectMessage:(id)arg2 ;
-(void)client:(id)arg1 didConnectWithSuccess:(BOOL)arg2 ;
-(void)client:(id)arg1 handleMessage:(id)arg2 withType:(long long)arg3 ;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)configureConnectMessage:(id)arg1 ;
@end

