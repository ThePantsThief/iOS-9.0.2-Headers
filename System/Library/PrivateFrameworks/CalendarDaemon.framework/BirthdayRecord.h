/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface BirthdayRecord : NSObject {

	NSMutableDictionary* _record;
	BOOL _isEmpty;

}

@property (nonatomic,readonly) BOOL isEmpty;              //@synthesize isEmpty=_isEmpty - In the implementation block
-(id)init;
-(BOOL)isEmpty;
-(BOOL)doesPerson:(void*)arg1 haveBirthday:(id)arg2 ;
-(void)recordBirthday:(id)arg1 forPerson:(void*)arg2 ;
@end

