/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, PLManagedAsset;

@interface PLCloudCommentsChangeNotification : PLContainerChangeNotification {

	NSDictionary* _userInfo;

}

@property (nonatomic,retain,readonly) PLManagedAsset * asset; 
+(id)notificationWithAsset:(id)arg1 snapshot:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)userInfo;
-(PLManagedAsset *)asset;
-(id)_contentRelationshipName;
@end

