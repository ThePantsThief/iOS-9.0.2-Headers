/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSNumber;

@interface GKGameDescriptor : GKInternalRepresentation {

	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSNumber* _adamID;
	NSNumber* _externalVersion;

}

@property (nonatomic,retain) NSNumber * adamID;                       //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,retain) NSNumber * externalVersion;              //@synthesize externalVersion=_externalVersion - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                  //@synthesize bundleVersion=_bundleVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
+(id)gameDescriptorWithBundleID:(id)arg1 ;
+(id)gameDescriptorWithBundleID:(id)arg1 adamID:(id)arg2 ;
+(id)gameDescriptorWithBundleID:(id)arg1 bundleVersion:(id)arg2 adamID:(id)arg3 ;
-(void)setDictionary:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)dictionary;
-(NSNumber *)externalVersion;
-(void)setExternalVersion:(NSNumber *)arg1 ;
-(id)initWithPushDictionary:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSNumber *)adamID;
-(void)setAdamID:(NSNumber *)arg1 ;
@end

