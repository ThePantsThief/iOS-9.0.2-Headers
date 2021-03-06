/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class UIImageView, UILabel, NSLayoutConstraint, NSString;

@interface MKTransitSystemCell : MKCustomSeparatorTableViewCell {

	UIImageView* _shieldImageView;
	UILabel* _systemLabel;
	NSLayoutConstraint* _systemLabelMarginConstraint;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSLayoutConstraint* _imageColumnCenterConstraint;
	double _unadjustedSeparatorInset;
	BOOL _shouldAdjustSeparatorInsetToMargin;
	double _systemLabelMargin;

}

@property (nonatomic,copy) NSString * systemName; 
@property (assign,nonatomic) double systemLabelMargin;                             //@synthesize systemLabelMargin=_systemLabelMargin - In the implementation block
@property (assign,nonatomic) BOOL shouldAdjustSeparatorInsetToMargin;              //@synthesize shouldAdjustSeparatorInsetToMargin=_shouldAdjustSeparatorInsetToMargin - In the implementation block
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(double)systemLabelMargin;
-(void)setSystemName:(NSString *)arg1 ;
-(BOOL)shouldAdjustSeparatorInsetToMargin;
-(void)setLeftSeparatorInset:(double)arg1 ;
-(double)_adjustedSeparatorInsetToMargin:(double)arg1 ;
-(void)setShouldAdjustSeparatorInsetToMargin:(BOOL)arg1 ;
-(void)setSystemImage:(id)arg1 shouldCenter:(BOOL)arg2 centeringWidth:(double)arg3 ;
-(void)setSystemLabelMargin:(double)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutMarginsDidChange;
-(NSString *)systemName;
@end

