/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSMutableOrderedSet;


@protocol PLUserEditableAlbumProtocol <PLAlbumProtocol>
@property (nonatomic,retain,readonly) NSMutableOrderedSet * userEditableAssets; 
@required
-(NSMutableOrderedSet *)userEditableAssets;
-(void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4;

@end
