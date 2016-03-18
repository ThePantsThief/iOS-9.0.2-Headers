/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDBatchPopularNearbySearchResult : PBCodable <NSCopying> {

	NSMutableArray* _popularNearbyResults;

}

@property (nonatomic,retain) NSMutableArray * popularNearbyResults;              //@synthesize popularNearbyResults=_popularNearbyResults - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPopularNearbyResults:(NSMutableArray *)arg1 ;
-(void)clearPopularNearbyResults;
-(unsigned long long)popularNearbyResultsCount;
-(id)popularNearbyResultAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)popularNearbyResults;
-(void)addPopularNearbyResult:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end
