/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface _SKUICounterTimeFieldView : UIView {

	UILabel* _labelLabel;
	UILabel* _valueLabel;
	unsigned long long _visibilityField;

}

@property (nonatomic,readonly) UILabel * labelLabel;                          //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,readonly) UILabel * valueLabel;                          //@synthesize valueLabel=_valueLabel - In the implementation block
@property (assign,nonatomic) unsigned long long visibilityField;              //@synthesize visibilityField=_visibilityField - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)labelLabel;
-(void)setVisibilityField:(unsigned long long)arg1 ;
-(UILabel *)valueLabel;
-(unsigned long long)visibilityField;
@end
