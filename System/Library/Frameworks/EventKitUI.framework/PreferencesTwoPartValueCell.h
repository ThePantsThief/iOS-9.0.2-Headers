/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@protocol EKCellShortener;
@class TwoPartTextLabel, UIColor;

@interface PreferencesTwoPartValueCell : EKUIConstrainedFontsTableViewCell {

	TwoPartTextLabel* _twoPartLabel;
	unsigned _notifiedShort;
	id<EKCellShortener> _shortener;

}

@property (nonatomic,retain,readonly) TwoPartTextLabel * twoPartTextLabel; 
@property (assign,nonatomic,__weak) id<EKCellShortener> shortener;                      //@synthesize shortener=_shortener - In the implementation block
@property (nonatomic,retain,readonly) UIColor * valueColor; 
-(TwoPartTextLabel *)twoPartTextLabel;
-(void)setShortener:(id<EKCellShortener>)arg1 ;
-(id<EKCellShortener>)shortener;
-(UIColor *)valueColor;
-(void)layoutText:(id)arg1 andValue:(id)arg2 ;
-(void)_layoutSubviewsCore;
-(void)checkValueWidths;
-(void)shorten;
-(void)layoutSubviews;
-(id)description;
@end
