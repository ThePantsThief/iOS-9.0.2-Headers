/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryAdaptiveViewConfiguration.h>

@class MusicLibraryAlbumsCollectionViewConfiguration;

@interface MusicLibraryAlbumsViewConfiguration : MusicLibraryAdaptiveViewConfiguration {

	MusicLibraryAlbumsCollectionViewConfiguration* _collectionViewConfiguration;
	BOOL _shouldForwardBasePropertyValues;

}
-(void)setIconName:(id)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(id)entityViewDescriptor;
-(void)addQueryFilterPredicate:(id)arg1 ;
-(long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4 ;
-(BOOL)canPreviewEntityValueContext:(id)arg1 ;
-(id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2 ;
-(id)initForMainAlbumsList:(BOOL)arg1 includeCompilations:(BOOL)arg2 ;
-(BOOL)pushAlbumViewWithAlbumPersistentID:(unsigned long long)arg1 fromViewController:(id)arg2 ;
-(id)loadCompactWidthConfiguration;
-(id)loadRegularWidthConfiguration;
@end

