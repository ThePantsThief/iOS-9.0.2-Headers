/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@interface SCRCStackQueue : NSObject {

	SCRCStackNode* _firstNode;
	SCRCStackNode* _lastNode;
	unsigned long long _count;

}
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)description;
-(id)objectEnumerator;
-(BOOL)isEmpty;
-(void)pushObject:(id)arg1 ;
-(id)popObject;
-(void)enqueueObject:(id)arg1 ;
-(id)dequeueObject;
-(id)dequeueObjectRetained;
-(id)popObjectRetained;
-(void)pushArray:(id)arg1 ;
-(id)topObject;
@end

