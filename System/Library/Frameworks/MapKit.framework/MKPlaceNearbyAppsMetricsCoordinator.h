/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSMetricsController, NSMutableArray, SSURLBag, NSString;

@interface MKPlaceNearbyAppsMetricsCoordinator : NSObject {

	SSMetricsController* _metricsController;
	BOOL _controllerReady;
	NSMutableArray* _callbacks;
	SSURLBag* _urlBag;
	NSString* _pageContext;
	NSString* _topic;

}

@property (nonatomic,copy) NSString * topic;                            //@synthesize topic=_topic - In the implementation block
@property (nonatomic,copy) NSString * pageContext;                      //@synthesize pageContext=_pageContext - In the implementation block
@property (nonatomic,readonly) NSMutableArray * callbacks;              //@synthesize callbacks=_callbacks - In the implementation block
@property (nonatomic,readonly) SSURLBag * urlBag;                       //@synthesize urlBag=_urlBag - In the implementation block
@property (assign,nonatomic) BOOL controllerReady;                      //@synthesize controllerReady=_controllerReady - In the implementation block
-(void)performCallbacks;
-(BOOL)controllerReady;
-(void)setControllerReady:(BOOL)arg1 ;
-(SSURLBag *)urlBag;
-(void)getMetricsControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableArray *)callbacks;
-(id)initWithConfigurationIdentifier:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(void)setPageConfiguration:(id)arg1 ;
-(void)setPageContext:(NSString *)arg1 ;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)pageContext;
-(NSString *)topic;
@end
