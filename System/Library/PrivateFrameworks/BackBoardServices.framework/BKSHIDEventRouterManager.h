/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BKSHIDEventRouterManagerBase.h>

@interface BKSHIDEventRouterManager : BKSHIDEventRouterManagerBase {

	BOOL _needsFlush;

}

@property (assign,nonatomic) BOOL needsFlush;              //@synthesize needsFlush=_needsFlush - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_routerUpdated:(id)arg1 ;
-(void)setEventRouters:(id)arg1 ;
-(void)_flushTrigger;
-(BOOL)needsFlush;
-(void)setNeedsFlush:(BOOL)arg1 ;
-(void)_flush;
@end

