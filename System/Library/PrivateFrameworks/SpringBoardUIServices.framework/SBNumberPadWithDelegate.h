/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:14 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <TelephonyUI/TPNumberPad.h>

@protocol SBNumberPadDelegate;
@interface SBNumberPadWithDelegate : TPNumberPad {

	id<SBNumberPadDelegate> _delegate;

}

@property (assign,nonatomic) id<SBNumberPadDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)buttonDown:(id)arg1 ;
-(void)buttonUp:(id)arg1 ;
-(void)setDelegate:(id<SBNumberPadDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<SBNumberPadDelegate>)delegate;
-(id)buttonForPoint:(CGPoint)arg1 forEvent:(id)arg2 ;
-(void)buttonCancelled:(id)arg1 ;
@end

