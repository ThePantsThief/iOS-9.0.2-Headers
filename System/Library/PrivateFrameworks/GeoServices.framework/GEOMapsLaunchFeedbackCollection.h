/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOMapsLaunchFeedbackCollection : PBCodable <NSCopying> {

	SCD_Struct_GE4 _sessionId;
	NSString* _sourceAppBundleId;
	NSString* _uriScheme;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionId;                  //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceAppBundleId; 
@property (nonatomic,retain) NSString * sourceAppBundleId;              //@synthesize sourceAppBundleId=_sourceAppBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasUriScheme; 
@property (nonatomic,retain) NSString * uriScheme;                      //@synthesize uriScheme=_uriScheme - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasSessionId:(BOOL)arg1 ;
-(BOOL)hasSessionId;
-(void)setSessionId:(SCD_Struct_GE4)arg1 ;
-(SCD_Struct_GE4)sessionId;
-(void)setUriScheme:(NSString *)arg1 ;
-(BOOL)hasUriScheme;
-(void)setSourceAppBundleId:(NSString *)arg1 ;
-(NSString *)uriScheme;
-(BOOL)hasSourceAppBundleId;
-(NSString *)sourceAppBundleId;
-(BOOL)readFrom:(id)arg1 ;
@end

