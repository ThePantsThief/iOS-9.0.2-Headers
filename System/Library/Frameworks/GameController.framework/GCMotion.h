/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class CMMotionManager, GCController;

@interface GCMotion : NSObject {

	SCD_Struct_GC12 _gravity;
	SCD_Struct_GC12 _userAcceleration;
	GCQuaternion _attitude;
	SCD_Struct_GC12 _rotationRate;
	float _tip;
	float _tilt;
	CMMotionManager* _motionMgr;
	BOOL _motionLite;
	GCController* _controller;
	/*^block*/id _valueChangedHandler;

}

@property (nonatomic,__weak,readonly) GCController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,copy) id valueChangedHandler;                            //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GC12 gravity;                       //@synthesize gravity=_gravity - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GC12 userAcceleration;              //@synthesize userAcceleration=_userAcceleration - In the implementation block
@property (nonatomic,readonly) GCQuaternion attitude;                         //@synthesize attitude=_attitude - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GC12 rotationRate;                  //@synthesize rotationRate=_rotationRate - In the implementation block
-(void)_pauseMotionUpdates:(BOOL)arg1 ;
-(void)_setGravity:(SCD_Struct_GC12)arg1 ;
-(void)_setUserAcceleration:(SCD_Struct_GC12)arg1 ;
-(void)_setAttitude:(GCQuaternion)arg1 ;
-(void)_setRotationRate:(SCD_Struct_GC12)arg1 ;
-(id)valueChangedHandler;
-(void)setValueChangedHandler:(id)arg1 ;
-(void)_startDeviceMotionUpdates;
-(void)_stopDeviceMotionUpdates;
-(void)_setMotionLite:(BOOL)arg1 ;
-(float)_tip;
-(float)_tilt;
-(/*^block*/id)getValueChangedHandler;
-(BOOL)_isUpdatingDeviceMotion;
-(id)initWithController:(id)arg1 ;
-(GCQuaternion)attitude;
-(GCController *)controller;
-(SCD_Struct_GC12)gravity;
-(SCD_Struct_GC12)rotationRate;
-(SCD_Struct_GC12)userAcceleration;
@end

