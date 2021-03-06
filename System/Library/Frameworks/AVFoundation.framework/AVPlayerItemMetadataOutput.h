/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemMetadataOutputInternal;

@interface AVPlayerItemMetadataOutput : AVPlayerItemOutput {

	AVPlayerItemMetadataOutputInternal* _metadataOutputInternal;

}

@property (nonatomic,__weak,readonly) id<AVPlayerItemMetadataOutputPushDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (assign,nonatomic) double advanceIntervalForDelegateInvocation; 
+(void)initialize;
-(void)_signalFlush;
-(void)_pushTimedMetadataGroups:(id)arg1 fromPlayerItemTrack:(id)arg2 ;
-(double)advanceIntervalForDelegateInvocation;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_detachFromPlayerItem;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)initWithIdentifiers:(id)arg1 ;
-(void)_collectUncollectables;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setAdvanceIntervalForDelegateInvocation:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AVPlayerItemMetadataOutputPushDelegate>)delegate;
-(void)finalize;
@end

