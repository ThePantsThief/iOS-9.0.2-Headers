/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MKMapView;

@interface MKMapCamera : NSObject <NSSecureCoding, NSCopying> {

	SCD_Struct_MK1 _centerCoordinate;
	double _heading;
	double _pitch;
	double _altitude;
	MKMapView* _mapView;

}

@property (assign,nonatomic) SCD_Struct_MK1 centerCoordinate;                                                //@synthesize centerCoordinate=_centerCoordinate - In the implementation block
@property (assign,nonatomic) double heading;                                                                 //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) double pitch; 
@property (assign,nonatomic) double altitude;                                                                //@synthesize altitude=_altitude - In the implementation block
@property (assign,setter=_setPrecisePitch:,getter=_precisePitch,nonatomic) double precisePitch;              //@synthesize pitch=_pitch - In the implementation block
+(id)_cameraLookingAtGEOMapRect:(const SCD_Struct_MK2*)arg1 aspectRatio:(float)arg2 ;
+(id)cameraLookingAtCenterCoordinate:(SCD_Struct_MK1)arg1 fromEyeCoordinate:(SCD_Struct_MK1)arg2 eyeAltitude:(double)arg3 ;
+(id)_cameraLookingAtMapRect:(SCD_Struct_MK2)arg1 forViewSize:(CGSize)arg2 ;
+(id)cameraLookingAtCenterCoordinate:(SCD_Struct_MK1)arg1 fromDistance:(double)arg2 pitch:(double)arg3 heading:(double)arg4 ;
+(BOOL)supportsSecureCoding;
+(id)camera;
-(id)_mapView;
-(SCD_Struct_MK2)_enclosingGEOMapRectForAspectRatio:(float)arg1 ;
-(void)_setMapView:(id)arg1 ;
-(double)_precisePitch;
-(void)_setPrecisePitch:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_updateState;
-(BOOL)_validate;
-(void)setHeading:(double)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(double)heading;
-(double)altitude;
-(SCD_Struct_MK1)centerCoordinate;
-(void)setCenterCoordinate:(SCD_Struct_MK1)arg1 ;
-(double)pitch;
-(void)setPitch:(double)arg1 ;
@end
