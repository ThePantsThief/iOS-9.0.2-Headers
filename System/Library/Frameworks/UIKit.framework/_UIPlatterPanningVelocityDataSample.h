/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSDate;

@interface _UIPlatterPanningVelocityDataSample : NSObject {

	NSDate* _time;
	CGVector _translation;
	CGPoint _point;

}

@property (nonatomic,retain) NSDate * time;                     //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) CGVector translation;              //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) CGPoint point;                     //@synthesize point=_point - In the implementation block
-(id)description;
-(CGPoint)point;
-(void)setTime:(NSDate *)arg1 ;
-(NSDate *)time;
-(void)setPoint:(CGPoint)arg1 ;
-(CGVector)translation;
-(BOOL)isSampleDistinctEnoughFromTouchLocation:(CGPoint)arg1 ;
-(void)updateTimeToNow;
-(void)setTranslation:(CGVector)arg1 ;
@end

