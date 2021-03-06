/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _NMRCloudAvailabilityProtobuf : PBCodable <NSCopying> {

	BOOL _canShowCloudMusic;
	BOOL _hasProperNetworkConditionsToPlayMedia;
	SCD_Struct_NM2 _has;

}

@property (assign,nonatomic) BOOL hasHasProperNetworkConditionsToPlayMedia; 
@property (assign,nonatomic) BOOL hasProperNetworkConditionsToPlayMedia;                 //@synthesize hasProperNetworkConditionsToPlayMedia=_hasProperNetworkConditionsToPlayMedia - In the implementation block
@property (assign,nonatomic) BOOL hasCanShowCloudMusic; 
@property (assign,nonatomic) BOOL canShowCloudMusic;                                     //@synthesize canShowCloudMusic=_canShowCloudMusic - In the implementation block
-(BOOL)canShowCloudMusic;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasProperNetworkConditionsToPlayMedia:(BOOL)arg1 ;
-(void)setHasHasProperNetworkConditionsToPlayMedia:(BOOL)arg1 ;
-(BOOL)hasHasProperNetworkConditionsToPlayMedia;
-(void)setCanShowCloudMusic:(BOOL)arg1 ;
-(void)setHasCanShowCloudMusic:(BOOL)arg1 ;
-(BOOL)hasCanShowCloudMusic;
-(BOOL)readFrom:(id)arg1 ;
@end

