/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface PSSpecifierUpdateContext : NSObject <NSCopying> {

	BOOL _animated;
	BOOL _updateModelOnly;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) BOOL animated;                      //@synthesize animated=_animated - In the implementation block
@property (assign,nonatomic) BOOL updateModelOnly;               //@synthesize updateModelOnly=_updateModelOnly - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(id)context;
+(id)contextWithUserInfo:(id)arg1 ;
-(id)description;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(BOOL)updateModelOnly;
-(void)setUpdateModelOnly:(BOOL)arg1 ;
@end

