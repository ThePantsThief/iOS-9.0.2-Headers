/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MSPowerAssertionManager : NSObject {

	BOOL _isAssertingPowerAssertion;
	BOOL _isBusy;
	int _busyCount;
	int _UIBusyCount;
	unsigned _assertionID;

}

@property (assign,nonatomic) int busyCount;                               //@synthesize busyCount=_busyCount - In the implementation block
@property (assign,nonatomic) int UIBusyCount;                             //@synthesize UIBusyCount=_UIBusyCount - In the implementation block
@property (assign,nonatomic) BOOL isBusy;                                 //@synthesize isBusy=_isBusy - In the implementation block
@property (assign,nonatomic) BOOL isAssertingPowerAssertion;              //@synthesize isAssertingPowerAssertion=_isAssertingPowerAssertion - In the implementation block
@property (assign,nonatomic) unsigned assertionID;                        //@synthesize assertionID=_assertionID - In the implementation block
+(id)sharedManager;
-(BOOL)isBusy;
-(void)retainBusy;
-(void)releaseBusy;
-(int)busyCount;
-(void)setBusyCount:(int)arg1 ;
-(void)retainUIBusy;
-(void)releaseUIBusy;
-(int)UIBusyCount;
-(void)setUIBusyCount:(int)arg1 ;
-(void)_recomputePowerAssertion;
-(BOOL)isAssertingPowerAssertion;
-(void)setIsAssertingPowerAssertion:(BOOL)arg1 ;
-(void)_assertPowerAssertion;
-(void)_deassertPowerAssertion;
-(void)toggleAssertion;
-(unsigned)assertionID;
-(void)setAssertionID:(unsigned)arg1 ;
-(void)setIsBusy:(BOOL)arg1 ;
@end

