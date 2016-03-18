/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:01 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDAchievementEngineDelegate <NSObject>
@required
-(id)currentDate;
-(long long)activityCacheIndexToday;
-(id)energyBurnedGoalYesterday;
-(id)energyBurnedGoalToday;
-(double)caloriesBurnedYesterday;
-(double)caloriesBurnedToday;
-(double)briskMinutesYesterday;
-(double)briskMinutesToday;
-(unsigned long long)standingHoursYesterday;
-(unsigned long long)standingHoursToday;
-(unsigned long long)stepsTakenYesterday;
-(unsigned long long)stepsTakenToday;
-(unsigned long long)numberOfSessionsCompletedAfterDate:(id)arg1 beforeDate:(id)arg2 minimumSessionDuration:(double)arg3;
-(id)sessionsEndingAfterDate:(id)arg1;

@end
