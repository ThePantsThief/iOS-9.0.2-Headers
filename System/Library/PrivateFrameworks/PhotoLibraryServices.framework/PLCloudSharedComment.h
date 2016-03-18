/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSNumber, NSDate, PLManagedAsset, PLCloudFeedCommentsEntry;

@interface PLCloudSharedComment : PLManagedObject

@property (nonatomic,retain) NSString * cloudGUID; 
@property (nonatomic,retain) NSString * commenterHashedPersonID; 
@property (nonatomic,retain) NSNumber * isDeletable; 
@property (nonatomic,retain) NSNumber * isLike; 
@property (nonatomic,retain) NSNumber * isCaption; 
@property (nonatomic,retain) NSNumber * isBatchComment; 
@property (nonatomic,retain) NSNumber * isMyComment; 
@property (nonatomic,retain) NSString * commentText; 
@property (nonatomic,retain) NSDate * commentDate; 
@property (nonatomic,retain) NSDate * commentClientDate; 
@property (nonatomic,retain) PLManagedAsset * commentedAsset; 
@property (nonatomic,retain) PLManagedAsset * likedAsset; 
@property (nonatomic,retain) PLCloudFeedCommentsEntry * cloudFeedCommentEntry; 
@property (nonatomic,retain) PLCloudFeedCommentsEntry * cloudFeedLikeCommentEntry; 
@property (nonatomic,readonly) BOOL isLikeBoolValue; 
@property (nonatomic,readonly) NSString * commenterEmail; 
@property (nonatomic,readonly) NSString * commenterFirstName; 
@property (nonatomic,readonly) NSString * commenterLastName; 
@property (nonatomic,readonly) NSString * commenterFullName; 
@property (nonatomic,readonly) PLCloudFeedCommentsEntry * cloudFeedEntry; 
@property (nonatomic,retain) NSString * commentType; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertNewCommentIntoAsset:(id)arg1 commentDate:(id)arg2 withText:(id)arg3 isLike:(BOOL)arg4 isMyComment:(BOOL)arg5 inLibrary:(id)arg6 ;
+(id)cloudSharedCommentWithGUIDs:(id)arg1 inLibrary:(id)arg2 ;
+(id)cloudSharedCommentWithGUID:(id)arg1 inLibrary:(id)arg2 ;
-(PLCloudFeedCommentsEntry *)cloudFeedEntry;
-(BOOL)canBeDeletedByUser;
-(id)commenterDisplayName;
-(BOOL)isLikeBoolValue;
-(void)dealloc;
-(id)init;
-(id)asset;
-(void)awakeFromInsert;
-(void)prepareForDeletion;
-(void)willSave;
-(BOOL)isInterestingForAlbumsSorting;
-(BOOL)shouldNotifyAsBulletinWithMediaStreamInfo:(id)arg1 asCaptionOnly:(BOOL*)arg2 ;
-(NSString *)commenterEmail;
-(BOOL)_isInterestingToUser;
-(NSString *)commenterFirstName;
-(NSString *)commenterLastName;
-(NSString *)commenterFullName;
@end
