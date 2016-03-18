/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSMutableArray, BSEventQueueEvent, NSObject, NSString, NSArray;

@interface BSEventQueue : NSObject <BSDescriptionProviding> {

	NSHashTable* _eventQueueLocks;
	NSMutableArray* _eventQueue;
	BOOL _processingEvents;
	BSEventQueueEvent* _executingEvent;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _name;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pendingEvents; 
@property (nonatomic,retain) BSEventQueueEvent * executingEvent;              //@synthesize executingEvent=_executingEvent - In the implementation block
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)isLocked;
-(void)_addEventQueueLock:(id)arg1 ;
-(void)_removeEventQueueLock:(id)arg1 ;
-(void)_processNextEvent;
-(void)_executeOrPendEvents:(id)arg1 position:(int)arg2 ;
-(void)setExecutingEvent:(BSEventQueueEvent *)arg1 ;
-(void)flushPendingEvents;
-(void)cancelEventsWithName:(id)arg1 ;
-(BOOL)hasEventWithPrefix:(id)arg1 ;
-(BOOL)hasEventWithName:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithName:(id)arg1 onQueue:(id)arg2 ;
-(void)executeOrInsertEvents:(id)arg1 atPosition:(int)arg2 ;
-(BOOL)_shouldProcessEvent:(id)arg1 enqueuedDuringExecutionOfEvent:(id)arg2 ;
-(void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2 ;
-(void)_noteWillCancelEventsWithName:(id)arg1 count:(unsigned long long)arg2 ;
-(void)_noteWillExecuteEvent:(id)arg1 ;
-(void)_noteQueueDidLock;
-(void)_noteQueueDidUnlock;
-(NSArray *)pendingEvents;
-(id)acquireLockForReason:(id)arg1 ;
-(void)flushEvents:(id)arg1 ;
-(void)flushAllEvents;
-(void)relinquishLock:(id)arg1 ;
-(void)executeOrInsertEvent:(id)arg1 atPosition:(int)arg2 ;
-(BSEventQueueEvent *)executingEvent;
-(void)_noteQueueDidDrain;
@end
