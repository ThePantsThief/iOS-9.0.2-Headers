/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIForceLevelClassifier.h>

@interface _UIPolynomialForceLevelClassifier : _UIForceLevelClassifier {

	double _currentForce;
	UIForceLevelInfo _standardLevel;
	UIForceLevelInfo _strongLevel;

}

@property (assign,nonatomic) UIForceLevelInfo standardLevel;              //@synthesize standardLevel=_standardLevel - In the implementation block
@property (assign,nonatomic) UIForceLevelInfo strongLevel;                //@synthesize strongLevel=_strongLevel - In the implementation block
-(id)init;
-(id)description;
-(void)reset;
-(void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(CGPoint)arg3 ;
-(long long)currentForceLevel;
-(UIForceLevelInfo)standardLevel;
-(UIForceLevelInfo)strongLevel;
-(long long)_forceLevelForValue:(double)arg1 ;
-(void)setStandardLevel:(UIForceLevelInfo)arg1 ;
-(void)setStrongLevel:(UIForceLevelInfo)arg1 ;
@end

