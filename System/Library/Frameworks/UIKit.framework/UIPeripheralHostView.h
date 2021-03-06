/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIKeyboardCornerView, UIKBInputBackdropView, UIKBRenderConfig;

@interface UIPeripheralHostView : UIView {

	int _explicitLayoutCount;
	UIKeyboardCornerView* _cornerViewLeft;
	UIKeyboardCornerView* _cornerViewRight;
	UIKBInputBackdropView* _inputBackdropView;
	UIKBInputBackdropView* _inputAccessoryBackdropView;
	UIKBRenderConfig* _renderConfig;

}

@property (nonatomic,readonly) UIKeyboardCornerView * cornerViewLeft;                           //@synthesize cornerViewLeft=_cornerViewLeft - In the implementation block
@property (nonatomic,readonly) UIKeyboardCornerView * cornerViewRight;                          //@synthesize cornerViewRight=_cornerViewRight - In the implementation block
@property (nonatomic,readonly) UIKBInputBackdropView * inputBackdropView;                       //@synthesize inputBackdropView=_inputBackdropView - In the implementation block
@property (nonatomic,readonly) UIKBInputBackdropView * inputAccessoryBackdropView;              //@synthesize inputAccessoryBackdropView=_inputAccessoryBackdropView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(void)didAddSubview:(id)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(int)textEffectsVisibilityLevel;
-(id)_inheritedRenderConfig;
-(int)_clipCornersOfView:(id)arg1 ;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(void)updateBackdropViewForInputAccessoryView:(BOOL)arg1 ;
-(UIKeyboardCornerView *)cornerViewLeft;
-(UIKeyboardCornerView *)cornerViewRight;
-(void)syncInputViewBackdropToFrame:(CGRect)arg1 ;
-(UIKBInputBackdropView *)inputBackdropView;
-(void)syncInputAccessoryViewBackdropToFrame:(CGRect)arg1 ;
-(UIKBInputBackdropView *)inputAccessoryBackdropView;
-(void)beginExplicitLayout;
-(void)endExplicitLayout;
-(void)_setRenderConfig:(id)arg1 updateKeyboard:(BOOL)arg2 ;
-(void)_setBaseRenderConfig:(id)arg1 ;
-(BOOL)explicitLayout;
@end

