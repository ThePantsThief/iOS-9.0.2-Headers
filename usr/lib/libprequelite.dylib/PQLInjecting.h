/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libprequelite.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData;


@protocol PQLInjecting <NSObject>
@property (nonatomic,readonly) NSData * sql; 
@optional
-(id)bindValuesToKeepAlive;

@required
-(NSData *)sql;
-(int)bindWithStatement:(sqlite3_stmtRef)arg1 startingAtIndex:(int)arg2;

@end

