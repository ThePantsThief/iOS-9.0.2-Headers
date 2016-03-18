/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLMoviePlayerControllerDelegate <NSObject>
@required
-(void)moviePlayerHeadsetPlayPausePressed:(id)arg1;
-(void)moviePlayerHeadsetNextTrackPressed:(id)arg1;
-(void)moviePlayerHeadsetPreviousTrackPressed:(id)arg1;
-(void)moviePlayerBufferingStateDidChange:(id)arg1;
-(void)moviePlayerReadyToPlay:(id)arg1;
-(void)moviePlayerPlaybackStateDidChange:(id)arg1 fromPlaybackState:(unsigned long long)arg2;
-(void)moviePlayerPlaybackRateDidChange:(id)arg1;
-(void)moviePlayerDurationAvailable:(id)arg1;
-(void)moviePlayerPlaybackDidEnd:(id)arg1;
-(BOOL)moviePlayerExitRequest:(id)arg1 exitReason:(int)arg2;
-(void)moviePlayerControllerDidBecomeActiveController:(id)arg1;
-(void)moviePlayerControllerWillResignAsActiveController:(id)arg1;
-(void)moviePlayerReadyToDisplay:(id)arg1;
-(void)moviePlayerUpdatedDestinationPlaceholder:(id)arg1;
-(void)moviePlayerWasSuspendedDuringPlayback:(id)arg1;
-(void)moviePlayerEncounteredAuthenticationError:(id)arg1;
-(BOOL)moviePlayerShouldNotifyOnPreparationError:(id)arg1;
-(BOOL)moviePlayerControllerShouldAllowExternalPlayback:(id)arg1;
-(void)moviePlayerDidChangeExternalPlaybackType:(id)arg1;
-(id)moviePlayerRequestsPickedAirplayRoute:(id)arg1;

@end
