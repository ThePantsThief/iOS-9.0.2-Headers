/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _RMSNowPlayingArtworkCacheItem, NSCache;

@interface RMSNowPlayingArtworkCache : NSObject {

	_RMSNowPlayingArtworkCacheItem* _lastItem;
	NSCache* _cache;

}
+(id)sharedArtworkCache;
-(id)init;
-(id)artworkDataForIdentifier:(id)arg1 ;
-(void)setArtworkData:(id)arg1 forIdentifier:(id)arg2 ;
-(id)artworkDataForNowPlayingInfo:(id)arg1 ;
-(void)setArtworkData:(id)arg1 forNowPlayingInfo:(id)arg2 ;
@end

