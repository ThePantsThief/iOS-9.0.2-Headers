/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetPLLConfigLogger.framework/DuetPLLConfigLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface fetchDenyEntry : NSObject {

	int _why;
	NSDate* _when;

}

@property (retain) NSDate * when;              //@synthesize when=_when - In the implementation block
@property (assign) int why;                    //@synthesize why=_why - In the implementation block
-(id)init;
-(NSDate *)when;
-(void)setWhen:(NSDate *)arg1 ;
-(int)why;
-(void)setWhy:(int)arg1 ;
@end
