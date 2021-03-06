/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEORoutePreloadSession;
@class NSPointerArray, GEONavigationDetails, GEONavigationGuidanceState, GEOLocation, NSDate, NSXPCConnection, NSTimer, NSData, GEOComposedRoute, NSString, GEORouteMatch;

@interface GEONavigation : NSObject {

	NSPointerArray* _observers;
	GEONavigationDetails* _details;
	id<GEORoutePreloadSession> _preloadSession;
	GEONavigationGuidanceState* _guidanceState;
	GEOLocation* _previousLocation;
	NSDate* _arrivalDate;
	NSXPCConnection* _navdConnection;
	NSXPCConnection* _nanomapscdConnection;
	int _navigationStartedToken;
	BOOL _hasNavigationStartedToken;
	BOOL _hasStartedGuidance;
	NSTimer* _etaUpdateTimer;
	NSDate* _displayETA;
	BOOL _shouldSendRouteWithStatus;
	NSData* _lastSentRouteContext;

}

@property (nonatomic,readonly) GEOComposedRoute * route; 
@property (nonatomic,readonly) BOOL hasStartedGuidance;                               //@synthesize hasStartedGuidance=_hasStartedGuidance - In the implementation block
@property (nonatomic,readonly) NSString * destinationName; 
@property (nonatomic,readonly) GEOLocation * location; 
@property (nonatomic,readonly) GEORouteMatch * routeMatch; 
@property (nonatomic,readonly) double distanceToManeuverStart; 
@property (nonatomic,readonly) double distanceToManeuverEnd; 
@property (nonatomic,readonly) double distanceToRoute; 
@property (nonatomic,readonly) double distanceRemainingOnRoute; 
@property (nonatomic,readonly) double remainingTime; 
@property (assign,nonatomic) long long displayStep; 
@property (nonatomic,readonly) BOOL isNavigating; 
@property (nonatomic,readonly) BOOL locationUnreliable; 
@property (assign,nonatomic) int navigationTransportType; 
@property (assign,nonatomic) int navigationState; 
@property (assign,nonatomic) BOOL guidancePromptsEnabled; 
@property (assign,nonatomic) int guidanceLevel; 
@property (nonatomic,readonly) int guidanceLevelIgnoringTimeCriterion; 
@property (nonatomic,readonly) NSDate * arrivalDate;                                  //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (assign,nonatomic) unsigned long long announcementStage; 
@property (nonatomic,readonly) unsigned long long nextAnnouncementStage; 
@property (nonatomic,readonly) double timeUntilNextAnnouncement; 
@property (nonatomic,readonly) BOOL shouldSuppressCellularDataAlerts; 
+(id)sharedInstance;
+(double)displayRemainingTimeForRemainingTime:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)stop;
-(void)removeObserver:(id)arg1 ;
-(GEOLocation *)location;
-(void)setNavigationState:(int)arg1 ;
-(void)setNextAnnouncementStage:(unsigned long long)arg1 andTime:(double)arg2 ;
-(void)startWithDestinationName:(id)arg1 ;
-(void)sendNavigationStatus;
-(void)_createNavdConnection;
-(GEOComposedRoute *)route;
-(BOOL)guidancePromptsEnabled;
-(unsigned long long)announcementStage;
-(void)selectRoute:(id)arg1 currentLocation:(id)arg2 ;
-(BOOL)canNavigateWithTransportType:(int)arg1 ;
-(int)navigationState;
-(void)startTrackingFromLocation:(id)arg1 ;
-(void)_invalidateNavigationSessionWithRouteContext:(id)arg1 ;
-(void)_clearETATimer;
-(double)distanceToManeuverEnd;
-(BOOL)locationUnreliable;
-(BOOL)_canRunNavigationBasedOnDistanceForRoute:(id)arg1 withCurrentLocation:(id)arg2 ;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(void)startTurnByTurnNavigationForTransportType:(int)arg1 state:(int)arg2 ;
-(void)_updateETA;
-(NSDate *)arrivalDate;
-(void)_createNanomapscdConnection;
-(void)_updateNavigationGuidanceStateCellularDataAlertsAttribute:(BOOL)arg1 ;
-(void)stopTurnByTurnNavigation;
-(id)preloadSessionForRoute:(id)arg1 loggingEnabled:(BOOL)arg2 minimalDebugging:(BOOL)arg3 fullDebugging:(BOOL)arg4 delegate:(id)arg5 traits:(id)arg6 withBatteryHandler:(/*^block*/id)arg7 ;
-(double)remainingTime;
-(void)setDisplayStep:(long long)arg1 ;
-(void)updateRouteGuidanceLevelForLocation:(id)arg1 shouldFilterLocationUpdatesOnDistance:(BOOL)arg2 ;
-(BOOL)hasStartedGuidance;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(void)_updatePreloaderWithGuidanceLevel:(int)arg1 ;
-(int)guidanceLevel;
-(NSString *)destinationName;
-(void)setNavigationTransportType:(int)arg1 ;
-(double)distanceToManeuverStart;
-(void)recalculatedToRoute:(id)arg1 location:(id)arg2 routeMatch:(id)arg3 ;
-(long long)displayStep;
-(unsigned long long)nextAnnouncementStage;
-(void)updatedETA:(id)arg1 ;
-(void)_updateNavigationRouteDetails:(id)arg1 routeStatus:(id)arg2 routeContext:(id)arg3 ;
-(double)distanceRemainingOnRoute;
-(void)stopTracking;
-(BOOL)shouldSuppressCellularDataAlerts;
-(void)_closeNavdConnection;
-(void)setAnnouncementStage:(unsigned long long)arg1 ;
-(void)_sendMessage:(long long)arg1 data:(id)arg2 ;
-(int)navigationTransportType;
-(GEORouteMatch *)routeMatch;
-(BOOL)isNavigating;
-(void)_updateNavigationRouteStatus;
-(BOOL)canRunNavigationForRoute:(id)arg1 withCurrentLocation:(id)arg2 ;
-(void)_closeNanomapscdConnection;
-(void)setGuidanceLevel:(int)arg1 ;
-(double)timeUntilNextAnnouncement;
-(double)distanceToRoute;
-(void)updateLocation:(id)arg1 routeMatch:(id)arg2 etaRoute:(id)arg3 locationUnreliable:(BOOL)arg4 ;
-(int)guidanceLevelIgnoringTimeCriterion;
@end

