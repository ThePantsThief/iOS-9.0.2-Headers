/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UISlider.h>
#import <UIKit/UIDynamicAnimatorDelegate.h>
#import <UIKit/UICollisionBehaviorDelegate.h>

@class UIView, _UIDynamicSliderAnimator, UIGravityBehavior, UIPushBehavior, UIDynamicItemBehavior, NSString;

@interface _UIDynamicSlider : UISlider <UIDynamicAnimatorDelegate, UICollisionBehaviorDelegate> {

	double _thumbVelocity;
	CGPoint _thumbPreviousPoint;
	double _thumbPreviousTime;
	UIView* _thumbDynamicsView;
	_UIDynamicSliderAnimator* _animator;
	UIGravityBehavior* _gravityBehavior;
	UIPushBehavior* _pushBehavior;
	UIDynamicItemBehavior* _itemBehavior;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)cancelTouchTracking;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_clearDynamics;
-(void)_initializeDynamicsTracking:(id)arg1 ;
-(void)_updateDynamicsTracking:(id)arg1 ;
-(void)_handleConversionToDynamicsTracking;
-(void)dynamicAnimatorDidPause:(id)arg1 ;
-(void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(CGPoint)arg4 ;
-(void)_handleDynamicsStep;
@end
