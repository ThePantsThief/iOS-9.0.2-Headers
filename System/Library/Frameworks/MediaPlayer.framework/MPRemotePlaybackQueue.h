/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSDictionary;

@interface MPRemotePlaybackQueue : NSObject {

	MRSystemAppPlaybackQueueRef _mediaRemotePlaybackQueue;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) NSDictionary * userInfo;                                                            //@synthesize userInfo=_userInfo - In the implementation block
@property (getter=isRequestingImmediatePlayback,nonatomic,readonly) BOOL requestingImmediatePlayback; 
@property (nonatomic,readonly) BOOL shouldOverrideManuallyCuratedQueue; 
+(id)queueWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 ;
-(id)createPlaybackContext;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 ;
-(BOOL)isRequestingImmediatePlayback;
-(BOOL)shouldOverrideManuallyCuratedQueue;
-(BOOL)verifyWithError:(id*)arg1 ;
-(void)dealloc;
-(id)init;
-(NSDictionary *)userInfo;
@end
