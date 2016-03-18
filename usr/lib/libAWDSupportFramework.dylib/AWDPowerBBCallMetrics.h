/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDPowerBBCallMetrics : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _bBAndDataPowerMicroWatt;
	unsigned _bBPowerMicroWatt;
	unsigned _bBTotalAndDataDuration;
	unsigned _bBTotalCallDuration;
	unsigned _connectedSleepDuration;
	unsigned _connectedSleepDurationData;
	NSMutableArray* _metrics;
	SCD_Struct_AW19 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * metrics;                         //@synthesize metrics=_metrics - In the implementation block
@property (assign,nonatomic) BOOL hasBBTotalCallDuration; 
@property (assign,nonatomic) unsigned bBTotalCallDuration;                     //@synthesize bBTotalCallDuration=_bBTotalCallDuration - In the implementation block
@property (assign,nonatomic) BOOL hasBBPowerMicroWatt; 
@property (assign,nonatomic) unsigned bBPowerMicroWatt;                        //@synthesize bBPowerMicroWatt=_bBPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasBBTotalAndDataDuration; 
@property (assign,nonatomic) unsigned bBTotalAndDataDuration;                  //@synthesize bBTotalAndDataDuration=_bBTotalAndDataDuration - In the implementation block
@property (assign,nonatomic) BOOL hasBBAndDataPowerMicroWatt; 
@property (assign,nonatomic) unsigned bBAndDataPowerMicroWatt;                 //@synthesize bBAndDataPowerMicroWatt=_bBAndDataPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasConnectedSleepDuration; 
@property (assign,nonatomic) unsigned connectedSleepDuration;                  //@synthesize connectedSleepDuration=_connectedSleepDuration - In the implementation block
@property (assign,nonatomic) BOOL hasConnectedSleepDurationData; 
@property (assign,nonatomic) unsigned connectedSleepDurationData;              //@synthesize connectedSleepDurationData=_connectedSleepDurationData - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)metrics;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setMetrics:(NSMutableArray *)arg1 ;
-(void)addMetrics:(id)arg1 ;
-(unsigned long long)metricsCount;
-(void)clearMetrics;
-(id)metricsAtIndex:(unsigned long long)arg1 ;
-(void)setBBTotalCallDuration:(unsigned)arg1 ;
-(void)setHasBBTotalCallDuration:(BOOL)arg1 ;
-(BOOL)hasBBTotalCallDuration;
-(void)setBBPowerMicroWatt:(unsigned)arg1 ;
-(void)setHasBBPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasBBPowerMicroWatt;
-(void)setBBTotalAndDataDuration:(unsigned)arg1 ;
-(void)setHasBBTotalAndDataDuration:(BOOL)arg1 ;
-(BOOL)hasBBTotalAndDataDuration;
-(void)setBBAndDataPowerMicroWatt:(unsigned)arg1 ;
-(void)setHasBBAndDataPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasBBAndDataPowerMicroWatt;
-(void)setConnectedSleepDuration:(unsigned)arg1 ;
-(void)setHasConnectedSleepDuration:(BOOL)arg1 ;
-(BOOL)hasConnectedSleepDuration;
-(void)setConnectedSleepDurationData:(unsigned)arg1 ;
-(void)setHasConnectedSleepDurationData:(BOOL)arg1 ;
-(BOOL)hasConnectedSleepDurationData;
-(unsigned)bBTotalCallDuration;
-(unsigned)bBPowerMicroWatt;
-(unsigned)bBTotalAndDataDuration;
-(unsigned)bBAndDataPowerMicroWatt;
-(unsigned)connectedSleepDuration;
-(unsigned)connectedSleepDurationData;
@end
