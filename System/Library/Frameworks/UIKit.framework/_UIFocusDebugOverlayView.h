/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIView;

@interface _UIFocusDebugOverlayView : UIView {

	UIColor* _overlayColor;
	UIColor* _borderColor;
	UIView* _highlightView;

}

@property (nonatomic,copy) UIColor * overlayColor;                //@synthesize overlayColor=_overlayColor - In the implementation block
@property (nonatomic,copy) UIColor * borderColor;                 //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,retain) UIView * highlightView;              //@synthesize highlightView=_highlightView - In the implementation block
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)_focusItemsOverlayCreateIfNecessary:(BOOL)arg1 ;
-(void)_removeFocusItemOverlayViews;
-(void)setBorderColor:(UIColor *)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)_highlightFocusableFrame:(CGRect)arg1 relativeToView:(id)arg2 withBackgroundColor:(id)arg3 ;
-(void)_unhighlightFocusableFrame;
-(void)setOverlayColor:(UIColor *)arg1 ;
-(UIColor *)overlayColor;
-(UIColor *)borderColor;
-(UIView *)highlightView;
-(void)setHighlightView:(UIView *)arg1 ;
@end
