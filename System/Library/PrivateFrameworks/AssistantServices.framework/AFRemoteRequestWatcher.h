/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AFRemoteRequestWatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _token;
	/*^block*/id _handler;

}
-(void)dealloc;
-(id)init;
-(void)_setupListener;
-(void)setNewRequestHandler:(/*^block*/id)arg1 ;
@end
