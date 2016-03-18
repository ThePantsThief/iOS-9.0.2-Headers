/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLMoviePlayerControllerDelegate;
@class AVPlayerItem, AVPlayer, PLMoviePlayerView, UIAlertView, PLTVOutWindow, NSString;

@interface PLMoviePlayerController : NSObject {

	AVPlayerItem* _playerItem;
	AVPlayer* _player;
	PLMoviePlayerView* _view;
	UIAlertView* _alertView;
	PLTVOutWindow* _tvOutWindow;
	BOOL _hasPendingTime;
	double _pendingTime;
	unsigned long long _pendingTimeSnapOption;
	BOOL _forceUpdateCurrentTime;
	BOOL _isExternalPlayback;
	BOOL _exited;
	double _lastSetCurrentTimeTime;
	BOOL _isSeeking;
	unsigned long long _backgroundTaskId;
	BOOL _audioSessionActive;
	NSString* _originalAudioCategory;
	BOOL _TVOutEnabled;
	BOOL _forceDisableTVOut;
	BOOL _isPreparedForPlayback;
	BOOL _isActiveController;
	id<PLMoviePlayerControllerDelegate> _delegate;
	unsigned long long _bufferingState;
	unsigned long long _playbackState;

}

@property (assign,nonatomic) id<PLMoviePlayerControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) AVPlayer * player;                                        //@synthesize player=_player - In the implementation block
@property (nonatomic,retain,readonly) PLMoviePlayerView * view;                                 //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) float playbackRate; 
@property (nonatomic,readonly) unsigned long long playbackState;                                //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) unsigned long long bufferingState;                               //@synthesize bufferingState=_bufferingState - In the implementation block
@property (nonatomic,readonly) BOOL isPreparedForPlayback;                                      //@synthesize isPreparedForPlayback=_isPreparedForPlayback - In the implementation block
@property (assign,nonatomic) BOOL TVOutEnabled;                                                 //@synthesize TVOutEnabled=_TVOutEnabled - In the implementation block
@property (assign,setter=_setForceDisableTVOut:,nonatomic) BOOL forceDisableTVOut;              //@synthesize forceDisableTVOut=_forceDisableTVOut - In the implementation block
@property (assign,nonatomic) BOOL isActiveController;                                           //@synthesize isActiveController=_isActiveController - In the implementation block
+(id)AVAssetURLWithPath:(id)arg1 ;
+(BOOL)_isStreamableAsset:(id)arg1 ;
+(BOOL)_isNetworkSupportedPath:(id)arg1 ;
-(BOOL)_allowsExternalPlayback;
-(void)_simpleRemoteNotification:(id)arg1 ;
-(unsigned long long)bufferingState;
-(BOOL)TVOutEnabled;
-(void)setTVOutEnabled:(BOOL)arg1 ;
-(void)_willEnterForegroundNotification:(id)arg1 ;
-(void)_didEnterBackgroundNotification:(id)arg1 ;
-(void)_unregisterForNotifications;
-(BOOL)videoOutActive;
-(void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned long long)arg2 ;
-(void)_exitPlayer:(int)arg1 ;
-(void)_willSuspendNotification:(id)arg1 ;
-(void)_willBeginSuspendAnimationNotification:(id)arg1 ;
-(void)_willResignNotification:(id)arg1 ;
-(BOOL)isPreparedForPlayback;
-(float)playbackRate;
-(void)_registerForNotifications;
-(long long)externalPlaybackType;
-(void)_setBufferingState:(unsigned long long)arg1 ;
-(id)_playerKeysToObserve;
-(void)_serverConnectionDidDie:(id)arg1 ;
-(void)tearDownTVOutWindow;
-(void)_updateBackgroundViewInformation;
-(void)_updateDisableAirPlayMirroringDuringPlayback;
-(void)_setupTVOutWindow;
-(void)_updateTVOutEnabled;
-(void)_tearDownTVOutWindow;
-(void)setCurrentTime:(double)arg1 ;
-(double)currentTime;
-(id)_asset;
-(void)play;
-(void)_updateFromPendingTime;
-(unsigned long long)playbackState;
-(void)_setPlayerItem:(id)arg1 ;
-(AVPlayer *)player;
-(void)setDelegate:(id<PLMoviePlayerControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PLMoviePlayerControllerDelegate>)delegate;
-(PLMoviePlayerView *)view;
-(double)duration;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)pause;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
-(void)willResignAsActiveController;
-(void)didBecomeActiveController;
-(void)requestToBecomeActiveController;
-(void)requestToResignAsActiveController;
-(void)setPlayerItem:(id)arg1 startTime:(double)arg2 ;
-(void)resetPlayer;
-(void)playDueToEnoughData;
-(BOOL)isExternalPlayback;
-(void)playFromBeginning;
-(void)_setupPlayer;
-(void)_tearDownPlayer;
-(void)_updateAudioSession;
-(void)_setPlaybackState:(unsigned long long)arg1 ;
-(void)_loadAsset:(id)arg1 ;
-(void)_playerItemDidReachEndNotification:(id)arg1 ;
-(void)_playerItemFailedToPlayToEndNotification:(id)arg1 ;
-(void)_didLoadValueOfKey:(id)arg1 forAsset:(id)arg2 ;
-(void)_playerItemFailedToPlayToEnd:(id)arg1 ;
-(void)_streamRanDry;
-(void)_streamBufferFull;
-(void)_streamLikelyToKeepUp;
-(void)_streamUnlikelyToKeepUp;
-(void)_dispatchOnMainThreadWithBlock:(/*^block*/id)arg1 ;
-(void)_playerRateDidChange:(id)arg1 ;
-(void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned long long)arg2 forceUpdate:(BOOL)arg3 ;
-(void)_delayedUpdateFromPendingTime;
-(void)_setPlayerAudioSessionActive:(BOOL)arg1 ;
-(void)_restoreTVOutVideoIfNecessary;
-(void)_pausePlaybackForNotification;
-(void)_setForceDisableTVOut:(BOOL)arg1 ;
-(void)_displayVideoView;
-(BOOL)isActiveController;
-(void)setIsActiveController:(BOOL)arg1 ;
-(void)_playbackFailedWithError:(id)arg1 ;
-(void)pauseDueToInsufficientData;
-(BOOL)forceDisableTVOut;
@end
