/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKRandomSource.h>

@interface GKLinearCongruentialRandomSource : GKRandomSource {

	unsigned long long _seed;

}

@property (assign,nonatomic) unsigned long long seed; 
-(id)initWithSeed:(unsigned long long)arg1 ;
-(unsigned long long)nextBits:(int)arg1 ;
-(long long)nextInt;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(float)nextUniform;
-(BOOL)nextBool;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)seed;
-(void)setSeed:(unsigned long long)arg1 ;
@end
