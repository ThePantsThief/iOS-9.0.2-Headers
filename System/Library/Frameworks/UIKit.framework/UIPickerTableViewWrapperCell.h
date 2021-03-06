/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPickerTableViewCell.h>

@class UIView;

@interface UIPickerTableViewWrapperCell : UIPickerTableViewCell {

	UIView* _wrappedView;
	UIView* _wrappedViewContainer;
	CGSize _wrappedViewSize;

}

@property (nonatomic,retain) UIView * wrappedView; 
-(UIView *)wrappedView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setWrappedView:(UIView *)arg1 ;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(void)prepareForReuse;
-(void)_setIsCenterCell:(BOOL)arg1 shouldModifyAlphaOfView:(BOOL)arg2 ;
-(void)_updateWrappedViewFrame;
-(void)_updateWrappedView;
-(id)_anyDateLabel;
@end

