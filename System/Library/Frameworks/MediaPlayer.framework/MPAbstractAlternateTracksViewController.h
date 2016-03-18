/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPViewController.h>

@interface MPAbstractAlternateTracksViewController : MPViewController {

	unsigned long long _selectedTracks[2];
	unsigned long long _previousTracks[2];

}
-(id)alternateTracks;
-(void)saveChanges;
-(unsigned long long)countOfGroups;
-(id)arrayForGroup:(long long)arg1 ;
-(unsigned long long)indexForGroup:(long long)arg1 ;
-(unsigned long long)typeForGroup:(long long)arg1 ;
-(void)addLoadingUI;
-(void)removeLoadingUI;
-(void)_alternateTypesChangedNotification:(id)arg1 ;
-(BOOL)_hasAudioGroup;
-(BOOL)_hasSubtitlesGroup;
-(void)dealloc;
-(void)reloadData;
-(id)init;
@end
