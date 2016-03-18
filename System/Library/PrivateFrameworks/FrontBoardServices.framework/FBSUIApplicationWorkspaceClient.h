/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceClient.h>

@interface FBSUIApplicationWorkspaceClient : FBSWorkspaceClient

@property (nonatomic,readonly) id<FBSUIApplicationWorkspaceClientDelegate> delegate; 
-(BOOL)willObserveLayersManually;
-(BOOL)_queue_handleMessageWithType:(long long)arg1 message:(id)arg2 ;
-(void)_queue_handleLaunch:(id)arg1 ;
-(void)_queue_handleExit:(id)arg1 ;
-(void)_queue_handleAssertionExpirationImminent:(id)arg1 ;
@end
