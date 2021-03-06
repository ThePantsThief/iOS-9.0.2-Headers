/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLActivityCriterionDelegate;
@interface PLActivityCriterion : NSObject {

	BOOL _satisfied;
	id<PLActivityCriterionDelegate> _delegate;

}

@property (assign,nonatomic) BOOL satisfied;                              //@synthesize satisfied=_satisfied - In the implementation block
@property (__weak) id<PLActivityCriterionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<PLActivityCriterionDelegate>)arg1 ;
-(id)init;
-(id<PLActivityCriterionDelegate>)delegate;
-(void)didEnableActivity:(id)arg1 ;
-(void)didCompleteActivity:(id)arg1 ;
-(void)didInterruptActivity:(id)arg1 ;
-(void)didDisableActivity:(id)arg1 ;
-(void)setSatisfied:(BOOL)arg1 ;
-(BOOL)satisfied;
@end

