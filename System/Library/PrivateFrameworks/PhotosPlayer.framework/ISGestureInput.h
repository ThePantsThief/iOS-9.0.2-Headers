/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISInput.h>

@protocol ISGestureInputDelegate;
@class UIGestureRecognizer;

@interface ISGestureInput : ISInput {

	struct {
		BOOL respondsToViewHostingGestureRecognizer;
		BOOL respondsToDelegateForGestureRecognizer;
	}  _delegateFlags;
	BOOL __needsUpdateGestureRecognizer;
	UIGestureRecognizer* _gestureRecognizer;
	id<ISGestureInputDelegate> _delegate;

}

@property (nonatomic,retain) UIGestureRecognizer * gestureRecognizer;                                                  //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<ISGestureInputDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setNeedsUpdateGestureRecognizer:,nonatomic) BOOL _needsUpdateGestureRecognizer;              //@synthesize _needsUpdateGestureRecognizer=__needsUpdateGestureRecognizer - In the implementation block
-(void)_updateGestureRecognizerIfNeeded;
-(void)setDelegate:(id<ISGestureInputDelegate>)arg1 ;
-(void)dealloc;
-(id<ISGestureInputDelegate>)delegate;
-(UIGestureRecognizer *)gestureRecognizer;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)invalidateGestureRecognizer;
-(void)cancelGestureRecognizer;
-(id)newGestureRecognizer;
-(void)gestureRecognizerDidChange;
-(void)gestureRecognizerViewDidChange;
-(void)_setNeedsUpdateGestureRecognizer:(BOOL)arg1 ;
-(BOOL)_needsUpdateGestureRecognizer;
-(void)_setGestureRecognizer:(id)arg1 ;
@end
