/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLMoviePlayerControllerManager : NSObject {

	NSMutableArray* _playerStack;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)moveControllerToTopOfStack:(id)arg1 ;
-(void)removeControllerFromStack:(id)arg1 ;
@end
