/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKRecurrenceChooserController.h>

@class NSMutableArray, NSArray;

@interface EKRecurrenceWeekdayChooserController : EKRecurrenceChooserController {

	NSMutableArray* _selectedRows;
	NSMutableArray* _cells;
	NSArray* _daysOfTheWeek;

}

@property (nonatomic,retain) NSMutableArray * cells;               //@synthesize cells=_cells - In the implementation block
@property (nonatomic,retain) NSArray * daysOfTheWeek;              //@synthesize daysOfTheWeek=_daysOfTheWeek - In the implementation block
-(id)initWithDate:(id)arg1 ;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(void)setCells:(NSMutableArray *)arg1 ;
-(NSMutableArray *)cells;
-(id)cellForRow:(long long)arg1 ;
-(double)heightForRow:(long long)arg1 ;
-(void)rowTapped:(long long)arg1 ;
-(NSArray *)daysOfTheWeek;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(void)_setCell:(id)arg1 selected:(BOOL)arg2 ;
-(int)_dayMask;
-(long long)numberOfRows;
-(long long)frequency;
@end
