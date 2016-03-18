/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RMSNowPlayingArtworkAvailableMessage : PBCodable <NSCopying> {

	NSString* _artworkIdentifier;
	int _sessionIdentifier;
	SCD_Struct_RM1 _has;

}

@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                     //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkIdentifier; 
@property (nonatomic,retain) NSString * artworkIdentifier;              //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)sessionIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSessionIdentifier:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(BOOL)hasSessionIdentifier;
-(NSString *)artworkIdentifier;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(BOOL)hasArtworkIdentifier;
@end
