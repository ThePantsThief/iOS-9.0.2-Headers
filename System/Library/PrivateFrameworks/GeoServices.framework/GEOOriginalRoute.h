/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface GEOOriginalRoute : PBCodable <NSCopying> {

	NSData* _originalDirectionsResponseID;
	int _originalRoutePurpose;
	NSData* _routeHandle;
	unsigned _routeIndex;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasOriginalRoutePurpose; 
@property (assign,nonatomic) int originalRoutePurpose;                            //@synthesize originalRoutePurpose=_originalRoutePurpose - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteHandle; 
@property (nonatomic,retain) NSData * routeHandle;                                //@synthesize routeHandle=_routeHandle - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalDirectionsResponseID; 
@property (nonatomic,retain) NSData * originalDirectionsResponseID;               //@synthesize originalDirectionsResponseID=_originalDirectionsResponseID - In the implementation block
@property (assign,nonatomic) BOOL hasRouteIndex; 
@property (assign,nonatomic) unsigned routeIndex;                                 //@synthesize routeIndex=_routeIndex - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasRouteIndex;
-(int)originalRoutePurpose;
-(BOOL)hasOriginalRoutePurpose;
-(NSData *)originalDirectionsResponseID;
-(void)setHasRouteIndex:(BOOL)arg1 ;
-(void)setRouteHandle:(NSData *)arg1 ;
-(NSData *)routeHandle;
-(void)setRouteIndex:(unsigned)arg1 ;
-(void)setOriginalDirectionsResponseID:(NSData *)arg1 ;
-(void)setHasOriginalRoutePurpose:(BOOL)arg1 ;
-(BOOL)hasRouteHandle;
-(BOOL)hasOriginalDirectionsResponseID;
-(void)setOriginalRoutePurpose:(int)arg1 ;
-(unsigned)routeIndex;
-(BOOL)readFrom:(id)arg1 ;
@end

