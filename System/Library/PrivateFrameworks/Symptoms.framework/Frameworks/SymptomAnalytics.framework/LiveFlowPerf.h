/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, NSString, Flow;

@interface LiveFlowPerf : NSManagedObject

@property (nonatomic,retain) NSNumber * connAttempts; 
@property (nonatomic,retain) NSNumber * connSuccesses; 
@property (nonatomic,retain) NSNumber * kind; 
@property (nonatomic,retain) NSNumber * overallTime; 
@property (nonatomic,retain) NSDate * timeStamp; 
@property (nonatomic,retain) NSNumber * timesThresholded; 
@property (nonatomic,retain) NSString * tmpID; 
@property (nonatomic,retain) NSNumber * txFailPackets; 
@property (nonatomic,retain) NSNumber * txPackets; 
@property (nonatomic,retain) NSNumber * txReTxInterval; 
@property (nonatomic,retain) NSNumber * txReTxPackets; 
@property (nonatomic,retain) NSNumber * usecsEstabTime; 
@property (nonatomic,retain) NSString * tag; 
@property (nonatomic,retain) Flow * hasFlow; 
@end

