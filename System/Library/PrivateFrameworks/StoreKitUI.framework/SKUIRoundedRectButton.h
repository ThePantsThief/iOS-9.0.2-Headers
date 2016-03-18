/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIView, UILabel;

@interface SKUIRoundedRectButton : UIButton {

	UIView* _borderView;
	UILabel* _subtitleLabel;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_basicAnimationWithKeyPath:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)tintColorDidChange;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTitleEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_reloadColors;
-(void)_reloadFonts;
-(void)setSubtitleWithLabel:(id)arg1 ;
@end
