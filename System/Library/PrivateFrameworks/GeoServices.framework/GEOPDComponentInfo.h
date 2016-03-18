/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDComponentFilter;

@interface GEOPDComponentInfo : PBCodable <NSCopying> {

	unsigned _count;
	GEOPDComponentFilter* _filter;
	unsigned _startIndex;
	int _type;
	int _urgency;
	BOOL _includeSource;
	SCD_Struct_GE93 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasStartIndex; 
@property (assign,nonatomic) unsigned startIndex;                        //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                             //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) BOOL hasFilter; 
@property (nonatomic,retain) GEOPDComponentFilter * filter;              //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeSource; 
@property (assign,nonatomic) BOOL includeSource;                         //@synthesize includeSource=_includeSource - In the implementation block
@property (assign,nonatomic) BOOL hasUrgency; 
@property (assign,nonatomic) int urgency;                                //@synthesize urgency=_urgency - In the implementation block
-(id)initWithType:(int)arg1 count:(unsigned)arg2 ;
-(GEOPDComponentFilter *)filter;
-(void)setStartIndex:(unsigned)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilter:(GEOPDComponentFilter *)arg1 ;
-(void)setCount:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(void)setHasStartIndex:(BOOL)arg1 ;
-(BOOL)hasStartIndex;
-(int)urgency;
-(BOOL)hasIncludeSource;
-(void)setHasIncludeSource:(BOOL)arg1 ;
-(BOOL)includeSource;
-(void)setUrgency:(int)arg1 ;
-(void)setIncludeSource:(BOOL)arg1 ;
-(BOOL)hasUrgency;
-(BOOL)hasFilter;
-(void)setHasUrgency:(BOOL)arg1 ;
-(BOOL)hasCount;
-(void)setHasCount:(BOOL)arg1 ;
-(unsigned)startIndex;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasType;
@end
