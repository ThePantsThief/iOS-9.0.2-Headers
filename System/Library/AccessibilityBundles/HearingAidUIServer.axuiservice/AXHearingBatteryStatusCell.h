/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:37 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/HearingAidUIServer.axuiservice/HearingAidUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HearingAidUIServer/AXHearingBlurCell.h>

@class UILabel, AXAccessQueueTimer, NSDate;

@interface AXHearingBatteryStatusCell : AXHearingBlurCell {

	UILabel* _leftLabel;
	UILabel* _rightLabel;
	AXAccessQueueTimer* _updateTimer;
	NSDate* _leftBatteryDate;
	NSDate* _rightBatteryDate;

}

@property (nonatomic,retain) NSDate * leftBatteryDate;               //@synthesize leftBatteryDate=_leftBatteryDate - In the implementation block
@property (nonatomic,retain) NSDate * rightBatteryDate;              //@synthesize rightBatteryDate=_rightBatteryDate - In the implementation block
+(id)batteryStatusCellWithLeftDate:(id)arg1 andRightDate:(id)arg2 ;
-(id)initWithLeftDate:(id)arg1 andRightDate:(id)arg2 ;
-(void)setLeftBatteryDate:(NSDate *)arg1 ;
-(void)setRightBatteryDate:(NSDate *)arg1 ;
-(void)updateBatteryLabels;
-(NSDate *)leftBatteryDate;
-(id)durationStringFromTimeInterval:(double)arg1 ;
-(NSDate *)rightBatteryDate;
-(void)dealloc;
-(void)layoutSubviews;
@end

