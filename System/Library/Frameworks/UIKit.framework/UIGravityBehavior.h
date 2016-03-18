/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicBehavior.h>

@class NSArray;

@interface UIGravityBehavior : UIDynamicBehavior {

	CGPoint _gravity;

}

@property (nonatomic,copy,readonly) NSArray * items; 
@property (assign,nonatomic) CGVector gravityDirection; 
@property (assign,nonatomic) double angle; 
@property (assign,nonatomic) double magnitude; 
+(BOOL)_isPrimitiveBehavior;
-(id)init;
-(id)description;
-(void)removeItem:(id)arg1 ;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 ;
-(void)_associate;
-(void)_dissociate;
-(void)setGravityDirection:(CGVector)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)setAngle:(double)arg1 ;
-(double)angle;
-(void)_addItem:(id)arg1 ;
-(void)setXComponent:(double)arg1 yComponent:(double)arg2 ;
-(CGPoint)gravity;
-(double)magnitude;
-(void)setAngle:(double)arg1 magnitude:(double)arg2 ;
-(double)yComponent;
-(void)setGravity:(CGPoint)arg1 ;
-(double)xComponent;
-(CGVector)gravityDirection;
-(CGPoint)denormalizedGravity;
-(void)setMagnitude:(double)arg1 ;
-(void)setXComponent:(double)arg1 ;
-(void)setYComponent:(double)arg1 ;
-(void)_setAngle:(double)arg1 magnitude:(double)arg2 ;
@end
