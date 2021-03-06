/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@protocol EKCellShortener;
@class UILabel;

@interface CalendarEventEditedByCell : EKUIConstrainedFontsTableViewCell {

	UILabel* _titleLabel2;
	UILabel* _valueLabel2;
	unsigned _valuePlaceholder : 2;
	id<EKCellShortener> _shortener;

}

@property (nonatomic,retain,readonly) UILabel * textLabel2; 
@property (nonatomic,retain,readonly) UILabel * detailTextLabel2; 
@property (assign,nonatomic,__weak) id<EKCellShortener> shortener;              //@synthesize shortener=_shortener - In the implementation block
-(void)setShortener:(id<EKCellShortener>)arg1 ;
-(UILabel *)detailTextLabel2;
-(void)_checkValueWidth;
-(id<EKCellShortener>)shortener;
-(void)_copyTextLabelAttributesFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)detailTextIsPlaceholder;
-(BOOL)detailText2IsPlaceholder;
-(void)setDetailTextIsPlaceholder:(BOOL)arg1 ;
-(void)setDetailText2IsPlaceholder:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel2;
@end

