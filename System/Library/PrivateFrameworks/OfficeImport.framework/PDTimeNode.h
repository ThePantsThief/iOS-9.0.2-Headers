/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, PDIterate, NSString, NSDictionary;

@interface PDTimeNode : NSObject {

	NSMutableArray* mStartTimeConditions;
	NSMutableArray* mEndTimeConditions;
	NSMutableArray* mChildTimeNodeList;
	NSMutableArray* mSubTimeNodeList;
	PDIterate* mIterate;
	int mType;
	int mAnimationPresetClass;
	BOOL mHasPresetId;
	int mPresetId;
	BOOL mHasPresetSubType;
	int mPresetSubType;
	BOOL mHasRepeatCount;
	int mRepeatCount;
	BOOL mHasRepeatDuration;
	int mRepeatDuration;
	int mRestartType;
	BOOL mHasDuration;
	double mDuration;
	BOOL mHasSpeed;
	double mSpeed;
	BOOL mHasAcceleration;
	double mAcceleration;
	BOOL mHasDeceleration;
	double mDeceleration;
	BOOL mHasDisplay;
	BOOL mDisplay;
	BOOL mHasFillType;
	int mFillType;
	NSString* mGroupId;
	NSDictionary* attributeMap;

}

@property (nonatomic,retain) NSDictionary * attributeMap; 
-(long long)writeDuration;
-(long long)writeRepeatCount;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setSpeed:(double)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)display;
-(void)setType:(int)arg1 ;
-(int)type;
-(double)speed;
-(int)repeatCount;
-(void)setRepeatCount:(int)arg1 ;
-(double)acceleration;
-(int)fillType;
-(BOOL)hasDuration;
-(int)animationPresetClass;
-(int)restartType;
-(void)setGroupId:(id)arg1 ;
-(int)presetId;
-(int)presetSubType;
-(int)repeatDuration;
-(double)deceleration;
-(id)startTimeConditions;
-(id)endTimeConditions;
-(id)childTimeNodeList;
-(id)subTimeNodeList;
-(id)groupId;
-(id)iterate;
-(void)setStartTimeConditions:(id)arg1 ;
-(void)setEndTimeConditions:(id)arg1 ;
-(void)setChildTimeNodeList:(id)arg1 ;
-(void)setSubTimeNodeList:(id)arg1 ;
-(void)setIterate:(id)arg1 ;
-(BOOL)hasType;
-(BOOL)hasPresetClass;
-(void)setAnimationPresetClass:(int)arg1 ;
-(BOOL)hasPresetSubType;
-(void)setPresetSubType:(int)arg1 ;
-(BOOL)hasPresetId;
-(void)setPresetId:(int)arg1 ;
-(BOOL)hasRepeatCount;
-(BOOL)hasRepeatDuration;
-(void)setRepeatDuration:(int)arg1 ;
-(BOOL)hasRestartType;
-(void)setRestartType:(int)arg1 ;
-(BOOL)hasSpeed;
-(BOOL)hasAcceleration;
-(void)setAcceleration:(double)arg1 ;
-(BOOL)hasDeceleration;
-(void)setDeceleration:(double)arg1 ;
-(BOOL)hasFillType;
-(void)setFillType:(int)arg1 ;
-(void)setGroupIdValue:(int)arg1 ;
-(BOOL)hasDisplay;
-(void)setDisplay:(BOOL)arg1 ;
-(NSDictionary *)attributeMap;
-(void)setAttributeMap:(NSDictionary *)arg1 ;
@end

