/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SALocalSearchPeriod.h>

@class NSString;

@interface SALocalSearchRangePeriod : AceObject <SALocalSearchPeriod>

@property (assign,nonatomic) long long endSecondsSinceMidnight; 
@property (assign,nonatomic) long long startSecondsSinceMidnight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rangePeriod;
+(id)rangePeriodWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)endSecondsSinceMidnight;
-(void)setEndSecondsSinceMidnight:(long long)arg1 ;
-(long long)startSecondsSinceMidnight;
-(void)setStartSecondsSinceMidnight:(long long)arg1 ;
@end

