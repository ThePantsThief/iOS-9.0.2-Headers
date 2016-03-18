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

@interface GEOWalkingOptions : PBCodable <NSCopying> {

	SCD_Struct_GE1* _avoidedModes;
	double _preferredSpeed;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasPreferredSpeed; 
@property (assign,nonatomic) double preferredSpeed;                               //@synthesize preferredSpeed=_preferredSpeed - In the implementation block
@property (nonatomic,readonly) unsigned long long avoidedModesCount; 
@property (nonatomic,readonly) int* avoidedModes; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAvoidedModes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)addAvoidedMode:(int)arg1 ;
-(int)avoidedModeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)avoidedModesCount;
-(void)clearAvoidedModes;
-(int*)avoidedModes;
-(void)setHasPreferredSpeed:(BOOL)arg1 ;
-(double)preferredSpeed;
-(BOOL)hasPreferredSpeed;
-(void)setPreferredSpeed:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end
