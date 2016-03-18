/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:12 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSString, ICSDateValue;

@interface CalDAVCalendarServerDeletedDetailsItem : CoreDAVItem {

	BOOL _hadMoreInstances;
	NSString* _componentType;
	NSString* _summary;
	NSString* _displayName;
	ICSDateValue* _nextInstance;

}

@property (nonatomic,retain) NSString * componentType;                 //@synthesize componentType=_componentType - In the implementation block
@property (nonatomic,retain) NSString * summary;                       //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) ICSDateValue * nextInstance;              //@synthesize nextInstance=_nextInstance - In the implementation block
@property (assign,nonatomic) BOOL hadMoreInstances;                    //@synthesize hadMoreInstances=_hadMoreInstances - In the implementation block
-(void)setSummary:(NSString *)arg1 ;
-(id)init;
-(NSString *)displayName;
-(id)copyParseRules;
-(void)setDisplayNameItem:(id)arg1 ;
-(void)setNextInstance:(ICSDateValue *)arg1 ;
-(void)setHadMoreInstances:(BOOL)arg1 ;
-(void)setComponentTypeItem:(id)arg1 ;
-(void)setSummaryItem:(id)arg1 ;
-(void)setNextInstanceItem:(id)arg1 ;
-(void)setHadMoreInstancesItem:(id)arg1 ;
-(ICSDateValue *)nextInstance;
-(BOOL)hadMoreInstances;
-(void)setComponentType:(NSString *)arg1 ;
-(NSString *)componentType;
-(NSString *)summary;
-(void)setDisplayName:(NSString *)arg1 ;
@end
