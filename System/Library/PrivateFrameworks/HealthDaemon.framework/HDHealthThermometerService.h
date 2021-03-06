/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:04 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthService.h>

@interface HDHealthThermometerService : HDHealthService
+(long long)serviceType;
+(id)serviceUUID;
-(id)init;
-(void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)handleTemperatureMeasurement:(id)arg1 isIntermediate:(BOOL)arg2 ;
-(void)handleTemperatureType:(id)arg1 ;
-(void)handleTemperatureInterval:(id)arg1 ;
@end

