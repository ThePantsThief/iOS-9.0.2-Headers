/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@interface OFUIWindowDraggingGestureRecognizer : UIGestureRecognizer {

	BOOL _allowDragging;
	CGPoint _initialPoint;

}

@property (nonatomic,readonly) CGPoint translation; 
@property (nonatomic,readonly) CGPoint initialPoint;              //@synthesize initialPoint=_initialPoint - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(CGPoint)initialPoint;
-(CGPoint)translation;
-(void)cancelDragging;
-(void)beginDragging;
-(void)_beginDraggingIfNecessary;
-(void)_stopDraggingIfNecessary:(BOOL)arg1 ;
@end

