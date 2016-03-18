/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/SpringBoardPlugins/NowPlayingArtLockScreen.lockbundle/NowPlayingArtLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NowPlayingArtLockScreen/NowPlayingArtLockScreen-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface _NowPlayingArtView : UIView {

	UIView* _artworkView;
	long long _orientation;

}

@property (nonatomic,retain) UIView * artworkView;               //@synthesize artworkView=_artworkView - In the implementation block
@property (assign,nonatomic) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
-(void)layoutSubviews;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(UIView *)artworkView;
-(void)setArtworkView:(UIView *)arg1 ;
-(CGSize)_artworkSize;
@end
