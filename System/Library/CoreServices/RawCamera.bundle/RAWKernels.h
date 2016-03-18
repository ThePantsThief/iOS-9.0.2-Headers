/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RawCamera/RawCamera-Structs.h>
@class NSMutableDictionary;

@interface RAWKernels : NSObject {

	NSMutableDictionary* priv;

}
+(id)kernelWithName:(id)arg1 ;
+(id)sharedKernels;
+(id)kernelWithName:(id)arg1 group:(id)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)kernelSourceForGroup:(id)arg1 ;
-(id)loadKernelsForGroup:(id)arg1 ;
-(id)kernelWithName:(id)arg1 group:(id)arg2 ;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
