/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DAECalendarDirectorySearchResult : NSObject <NSSecureCoding> {

	NSString* _displayName;
	NSString* _preferredAddress;

}

@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * preferredAddress;              //@synthesize preferredAddress=_preferredAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPreferredAddress:(NSString *)arg1 ;
-(NSString *)preferredAddress;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
@end
