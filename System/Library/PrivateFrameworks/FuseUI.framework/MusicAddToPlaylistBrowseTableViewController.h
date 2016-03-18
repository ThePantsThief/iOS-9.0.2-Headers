/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryBrowseTableViewController.h>
#import <libobjc.A.dylib/MusicNoContentViewDelegate.h>

@class MusicNoContentView, NSArray, NSString;

@interface MusicAddToPlaylistBrowseTableViewController : MusicLibraryBrowseTableViewController <MusicNoContentViewDelegate> {

	MusicNoContentView* _noContentView;
	NSArray* _prepopulatedNewPlaylistMediaItems;

}

@property (nonatomic,retain) NSArray * prepopulatedNewPlaylistMediaItems;              //@synthesize prepopulatedNewPlaylistMediaItems=_prepopulatedNewPlaylistMediaItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewDidLoad;
-(id)noContentView;
-(void)_updateNoContentViewVisibility;
-(void)noContentViewDidTapButton:(id)arg1 ;
-(void)handleEntityProviderDidInvalidate;
-(NSArray *)prepopulatedNewPlaylistMediaItems;
-(void)setPrepopulatedNewPlaylistMediaItems:(NSArray *)arg1 ;
@end
