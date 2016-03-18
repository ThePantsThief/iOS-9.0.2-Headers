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

@class PBUnknownFields, GEOLatLng;

@interface GEOPDAutocompleteEntryAddress : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _opaqueGeoId;
	GEOLatLng* _center;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                             //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) BOOL hasOpaqueGeoId; 
@property (assign,nonatomic) unsigned long long opaqueGeoId;                 //@synthesize opaqueGeoId=_opaqueGeoId - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOLatLng *)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasCenter;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasOpaqueGeoId;
-(void)setHasOpaqueGeoId:(BOOL)arg1 ;
-(void)setOpaqueGeoId:(unsigned long long)arg1 ;
-(unsigned long long)opaqueGeoId;
-(BOOL)readFrom:(id)arg1 ;
@end
