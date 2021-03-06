/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface FBPreferences : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _enabledLogNames;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)reload;
-(BOOL)isLogEnabled:(id)arg1 ;
-(void)_queue_reload;
-(id)_extractEnabledLoggersFromPreferenceDomain:(id)arg1 ;
-(id)enabledLogNames;
@end

