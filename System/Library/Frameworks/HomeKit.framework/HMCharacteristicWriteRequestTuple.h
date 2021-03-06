/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMCharacteristic;

@interface HMCharacteristicWriteRequestTuple : NSObject {

	HMCharacteristic* _characteristic;
	id _value;

}

@property (nonatomic,readonly) HMCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) id value;                                       //@synthesize value=_value - In the implementation block
+(id)tupleWithCharacteristic:(id)arg1 value:(id)arg2 ;
-(id)value;
-(HMCharacteristic *)characteristic;
@end

