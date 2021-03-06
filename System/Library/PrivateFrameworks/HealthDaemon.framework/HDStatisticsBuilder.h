/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:01 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDHealthDaemon;
@class HKQuantityType, _HKFilter, HDSQLitePredicate, NSNumber, NSArray;

@interface HDStatisticsBuilder : NSObject {

	HKQuantityType* _quantityType;
	_HKFilter* _filter;
	HDSQLitePredicate* _predicate;
	unsigned long long _statisticsOptions;
	unsigned long long _mergeStrategy;
	NSNumber* _restrictedSourceIdentifier;
	id<HDHealthDaemon> _healthDaemon;
	NSArray* _orderedSources;

}

@property (nonatomic,readonly) HKQuantityType * quantityType;                      //@synthesize quantityType=_quantityType - In the implementation block
@property (nonatomic,readonly) _HKFilter * filter;                                 //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) HDSQLitePredicate * predicate;                      //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) unsigned long long statisticsOptions;               //@synthesize statisticsOptions=_statisticsOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long mergeStrategy;                   //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
@property (nonatomic,readonly) NSNumber * restrictedSourceIdentifier;              //@synthesize restrictedSourceIdentifier=_restrictedSourceIdentifier - In the implementation block
@property (nonatomic,readonly) id<HDHealthDaemon> healthDaemon;                    //@synthesize healthDaemon=_healthDaemon - In the implementation block
@property (nonatomic,readonly) NSArray * orderedSources;                           //@synthesize orderedSources=_orderedSources - In the implementation block
+(id)statisticsBuilderWithQuantityType:(id)arg1 filter:(id)arg2 statisticsOptions:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4 restrictedSourceIdentifier:(id)arg5 healthDaemon:(id)arg6 ;
+(id)_predicateWithSampleType:(id)arg1 sourceIdentifier:(id)arg2 predicate:(id)arg3 ;
-(_HKFilter *)filter;
-(HDSQLitePredicate *)predicate;
-(unsigned long long)mergeStrategy;
-(id)initialStatisticsShouldStopProcessing:(/*^block*/id)arg1 error:(id*)arg2 ;
-(unsigned long long)statisticsOptions;
-(HKQuantityType *)quantityType;
-(id<HDHealthDaemon>)healthDaemon;
-(NSArray *)orderedSources;
-(void)_enumerateSamplesWithType:(id)arg1 predicate:(id)arg2 database:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)_initialStatisticsForStartDate:(id)arg1 endDate:(id)arg2 shouldStopProcessing:(/*^block*/id)arg3 error:(id*)arg4 ;
-(id)_initialStatisticsForCollection:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 sampleCount:(long long)arg4 shouldStopProcessing:(/*^block*/id)arg5 error:(id*)arg6 ;
-(id)updateStatisticsCollection:(id)arg1 withSamples:(id)arg2 anchor:(id)arg3 error:(id*)arg4 ;
-(id)updateStatistics:(id)arg1 withSamples:(id)arg2 error:(id*)arg3 ;
-(void)_setupOrderedSources;
-(id)orderedSourceIDsFromSources:(id)arg1 sourceManager:(id)arg2 ;
-(BOOL)isTimeIntervalTooLong:(long long)arg1 sampleStartTime:(double)arg2 sampleEndTime:(double)arg3 seconds:(double)arg4 ;
-(id)initWithQuantityType:(id)arg1 filter:(id)arg2 statisticsOptions:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4 restrictedSourceIdentifier:(id)arg5 healthDaemon:(id)arg6 ;
-(NSNumber *)restrictedSourceIdentifier;
-(id)initialStatisticsForCollection:(id)arg1 shouldStopProcessing:(/*^block*/id)arg2 error:(id*)arg3 ;
@end

