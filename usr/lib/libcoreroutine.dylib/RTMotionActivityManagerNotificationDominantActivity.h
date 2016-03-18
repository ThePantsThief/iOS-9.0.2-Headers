/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class RTMotionActivity;

@interface RTMotionActivityManagerNotificationDominantActivity : RTNotification {

	RTMotionActivity* _dominantActivity;

}

@property (nonatomic,readonly) RTMotionActivity * dominantActivity;              //@synthesize dominantActivity=_dominantActivity - In the implementation block
+(id)notificationName;
-(id)initWithDominantActivity:(id)arg1 ;
-(RTMotionActivity *)dominantActivity;
@end
