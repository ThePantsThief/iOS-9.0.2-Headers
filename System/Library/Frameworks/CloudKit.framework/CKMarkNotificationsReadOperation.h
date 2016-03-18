/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKMarkNotificationsReadOperation : CKOperation {

	NSArray* _notificationIDs;
	/*^block*/id _markNotificationsReadCompletionBlock;
	NSMutableArray* _notificationIDsMarkedRead;
	NSMutableDictionary* _errorsByNotificationID;

}

@property (nonatomic,copy) NSArray * notificationIDs;                                   //@synthesize notificationIDs=_notificationIDs - In the implementation block
@property (nonatomic,copy) id markNotificationsReadCompletionBlock;                     //@synthesize markNotificationsReadCompletionBlock=_markNotificationsReadCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationIDsMarkedRead;                //@synthesize notificationIDsMarkedRead=_notificationIDsMarkedRead - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorsByNotificationID;              //@synthesize errorsByNotificationID=_errorsByNotificationID - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableDictionary *)errorsByNotificationID;
-(void)setErrorsByNotificationID:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)notificationIDsMarkedRead;
-(void)setNotificationIDsMarkedRead:(NSMutableArray *)arg1 ;
-(id)markNotificationsReadCompletionBlock;
-(void)setMarkNotificationsReadCompletionBlock:(id)arg1 ;
-(id)init;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)notificationIDs;
-(id)initWithNotificationIDsToMarkRead:(id)arg1 ;
-(void)setNotificationIDs:(NSArray *)arg1 ;
@end
