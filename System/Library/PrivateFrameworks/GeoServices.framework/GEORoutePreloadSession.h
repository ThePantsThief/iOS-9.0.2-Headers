/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOComposedRoute;


@protocol GEORoutePreloadSession <NSObject>
@property (nonatomic,readonly) GEOComposedRoute * route; 
@property (__weak) id<GEORoutePreloadSessionDelegate> delegate; 
@property (assign,nonatomic) unsigned long long networkQuality; 
@required
-(void)setDelegate:(id)arg1;
-(id<GEORoutePreloadSessionDelegate>)delegate;
-(void)stop;
-(void)start;
-(void)stopLoading;
-(GEOComposedRoute *)route;
-(BOOL)isSufficientlyLoaded;
-(void)setTraits:(id)arg1;
-(void)preloaderLog:(id)arg1;
-(void)updateWithRouteMatch:(id)arg1;
-(void)getPreloadSetCoordinates:(SCD_Struct_GE16*)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long*)arg3;
-(void)setNetworkQuality:(unsigned long long)arg1;
-(unsigned long long)networkQuality;
-(int)preloadStateForTile:(const GEOTileKey*)arg1;
-(void)beginLoading;
-(BOOL)loggingEnabled;
-(BOOL)fullDebuggingEnabled;
-(BOOL)minimalDebuggingEnabled;

@end
