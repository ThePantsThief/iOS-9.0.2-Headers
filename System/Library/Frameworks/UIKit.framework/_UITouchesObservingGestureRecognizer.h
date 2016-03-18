/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@class NSSet;

@interface _UITouchesObservingGestureRecognizer : UIGestureRecognizer {

	NSSet* _touches;

}

@property (nonatomic,copy) NSSet * touches;              //@synthesize touches=_touches - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(NSSet *)touches;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)_wantsPartialTouchSequences;
-(BOOL)_affectedByGesture:(id)arg1 ;
-(BOOL)_acceptsFailureRequirements;
-(void)setTouches:(NSSet *)arg1 ;
-(void)_updateTouchesFromEvent:(id)arg1 ;
-(BOOL)_allTouchesAreEndedOrCancelled:(id)arg1 ;
@end
