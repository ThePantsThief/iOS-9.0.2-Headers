/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TouchRemote-Structs.h>
#import <TouchRemote/TRPacketEvent.h>

@interface TRDirectionalPanPacketEvent : TRPacketEvent {

	long long _gestureState;
	CGPoint _location;
	CGPoint _velocity;

}

@property (nonatomic,readonly) CGPoint location;                    //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) long long gestureState;              //@synthesize gestureState=_gestureState - In the implementation block
@property (nonatomic,readonly) CGPoint velocity;                    //@synthesize velocity=_velocity - In the implementation block
+(unsigned)_packetEventType;
-(id)description;
-(CGPoint)velocity;
-(CGPoint)location;
-(long long)gestureState;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initWithGestureState:(long long)arg1 location:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
@end
