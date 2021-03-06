/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/_UIReflectingView.h>

@class UIImageView, UIImage;

@interface MPReflectionImageView : _UIReflectingView {

	UIImageView* _imageView;
	BOOL _squareImage;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) BOOL squareImage;                       //@synthesize squareImage=_squareImage - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
+(double)defaultReflectionHeight;
-(void)setSquareImage:(BOOL)arg1 ;
-(void)setReflectionVisible:(BOOL)arg1 withDuration:(float)arg2 ;
-(void)setFrame:(CGRect)arg1 withReflectionHeight:(double)arg2 ;
-(id)albumArtImage;
-(void)setAlbumVisible:(BOOL)arg1 reflectionVisible:(BOOL)arg2 ;
-(BOOL)squareImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(UIImageView *)imageView;
@end

