/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class SKUIGiftDashView, UILabel, NSString;

@interface SKUIGiftConfirmLabeledValue : UIView {

	SKUIGiftDashView* _dashView;
	UILabel* _labelLabel;
	long long _style;
	UILabel* _valueLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,readonly) long long giftConfirmLabelStyle;              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * subtitleLabel; 
@property (nonatomic,copy) NSString * value; 
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)subtitleLabel;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setSubtitleLabel:(NSString *)arg1 ;
-(id)initWithGiftConfirmLabelStyle:(long long)arg1 ;
-(long long)giftConfirmLabelStyle;
@end

