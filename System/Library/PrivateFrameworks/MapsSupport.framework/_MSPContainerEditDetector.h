/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@protocol MSPMutableObject;
@class _MSPContainerEditsRecorder;

@interface _MSPContainerEditDetector : NSProxy {

	_MSPContainerEditsRecorder* _owner;
	id<MSPMutableObject> _object;

}
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithObject:(id)arg1 owner:(id)arg2 ;
@end
