/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:01 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HDSQLiteTableColumn : NSObject {

	NSString* _name;
	NSString* _qualifiers;

}

@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * qualifiers;              //@synthesize qualifiers=_qualifiers - In the implementation block
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)SQL;
-(NSString *)qualifiers;
-(void)setQualifiers:(NSString *)arg1 ;
@end

