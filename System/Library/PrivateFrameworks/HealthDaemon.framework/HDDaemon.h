/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:01 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDataCollectionManagerDelegate.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDDatabaseMigrationDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/HDHealthDaemon.h>

@protocol OS_dispatch_queue, HDViewOnWakeService, HDPairedWatchBundleIdentifierProvider;
@class NSString, HDSourceManager, HDDeviceManager, HDUserCharacteristicsManager, HDContentProtectionManager, HDBackgroundTaskScheduler, HDProcessStateManager, HDPluginManager, HDDataProvenanceManager, HDUnitPreferencesManager, HDNanoSyncManager, HDAuthorizationManager, HDWorkoutManager, HDDatabasePruningManager, NSMutableSet, NSObject, HDDaemonSyncEngine, HDAchievementDoctorManager, NSXPCListener, NSMutableArray, HDAppLauncher, HDDatabase, HDDataCollectionManager, HDDataManager, HDHealthDeviceManager, HDMetadataManager, HDAppSubscriptionManager, HDMigrationManager, HDCoachingDiagnosticManager;

@interface HDDaemon : NSObject <HDDataCollectionManagerDelegate, HDDiagnosticObject, HDDatabaseMigrationDelegate, NSXPCListenerDelegate, HDHealthDaemon> {

	NSString* _homeDirectoryPath;
	NSMutableSet* _servers;
	NSObject*<OS_dispatch_queue> _queue;
	HDDaemonSyncEngine* _syncEngine;
	HDContentProtectionManager* _contentProtectionManager;
	HDUserCharacteristicsManager* _userCharacteristicsManager;
	HDBackgroundTaskScheduler* _backgroundTaskScheduler;
	HDProcessStateManager* _processStateManager;
	HDPluginManager* _pluginManager;
	HDDataProvenanceManager* _dataProvenanceManager;
	HDAchievementDoctorManager* _achievementDoctorManager;
	HDDatabasePruningManager* _databasePruningManager;
	MGNotificationTokenStructRef _deviceNameChangesToken;
	NSXPCListener* _serviceListener;
	NSMutableArray* _daemonLaunchObservers;
	BOOL _daemonReady;
	HDAppLauncher* _appLauncher;
	HDAuthorizationManager* _authorizationManager;
	HDDatabase* _database;
	HDDataCollectionManager* _dataCollectMgr;
	HDDataManager* _dataMgr;
	HDHealthDeviceManager* _deviceManager;
	HDSourceManager* _sourceManager;
	HDDeviceManager* _sourceDeviceManager;
	HDMetadataManager* _metadataManager;
	HDAppSubscriptionManager* _subscriptionManager;
	HDMigrationManager* _migrationManager;
	HDUnitPreferencesManager* _unitPreferencesManager;
	HDNanoSyncManager* _nanoSyncManager;
	HDWorkoutManager* _workoutManager;
	id<HDViewOnWakeService> _viewOnWakeService;
	HDCoachingDiagnosticManager* _coachingDiagnosticManager;
	id<HDPairedWatchBundleIdentifierProvider> _pairedWatchBundleIDProvider;

}

@property (nonatomic,retain) HDAppLauncher * appLauncher;                                                               //@synthesize appLauncher=_appLauncher - In the implementation block
@property (nonatomic,retain) HDAuthorizationManager * authorizationManager;                                             //@synthesize authorizationManager=_authorizationManager - In the implementation block
@property (nonatomic,retain) HDDatabase * database;                                                                     //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) HDDataCollectionManager * dataCollectMgr;                                                  //@synthesize dataCollectMgr=_dataCollectMgr - In the implementation block
@property (nonatomic,retain) HDDataManager * dataMgr;                                                                   //@synthesize dataMgr=_dataMgr - In the implementation block
@property (nonatomic,retain) HDHealthDeviceManager * deviceManager;                                                     //@synthesize deviceManager=_deviceManager - In the implementation block
@property (nonatomic,retain) HDSourceManager * sourceManager;                                                           //@synthesize sourceManager=_sourceManager - In the implementation block
@property (nonatomic,retain) HDDeviceManager * sourceDeviceManager;                                                     //@synthesize sourceDeviceManager=_sourceDeviceManager - In the implementation block
@property (nonatomic,retain) HDMetadataManager * metadataManager;                                                       //@synthesize metadataManager=_metadataManager - In the implementation block
@property (nonatomic,retain) HDAppSubscriptionManager * subscriptionManager;                                            //@synthesize subscriptionManager=_subscriptionManager - In the implementation block
@property (nonatomic,retain) HDMigrationManager * migrationManager;                                                     //@synthesize migrationManager=_migrationManager - In the implementation block
@property (nonatomic,retain) HDUnitPreferencesManager * unitPreferencesManager;                                         //@synthesize unitPreferencesManager=_unitPreferencesManager - In the implementation block
@property (nonatomic,retain) HDNanoSyncManager * nanoSyncManager;                                                       //@synthesize nanoSyncManager=_nanoSyncManager - In the implementation block
@property (nonatomic,retain) HDWorkoutManager * workoutManager;                                                         //@synthesize workoutManager=_workoutManager - In the implementation block
@property (nonatomic,retain) id<HDViewOnWakeService> viewOnWakeService;                                                 //@synthesize viewOnWakeService=_viewOnWakeService - In the implementation block
@property (nonatomic,retain) HDCoachingDiagnosticManager * coachingDiagnosticManager;                                   //@synthesize coachingDiagnosticManager=_coachingDiagnosticManager - In the implementation block
@property (nonatomic,retain) HDDatabasePruningManager * databasePruningManager;                                         //@synthesize databasePruningManager=_databasePruningManager - In the implementation block
@property (assign,nonatomic,__weak) id<HDPairedWatchBundleIdentifierProvider> pairedWatchBundleIDProvider;              //@synthesize pairedWatchBundleIDProvider=_pairedWatchBundleIDProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * homeDirectoryPath; 
@property (readonly) id<HDHealthDatabase> healthDatabase; 
@property (readonly) id<HDHealthDataCollectionManager> healthDataCollectionManager; 
@property (readonly) id<HDHealthDataManager> healthDataManager; 
@property (readonly) id<HDSyncEngine> syncEngine; 
@property (readonly) HDSourceManager * healthSourceManager; 
@property (readonly) HDDeviceManager * healthSourceDeviceManager; 
@property (readonly) id<HDHealthMetadataManager> healthMetadataManager; 
@property (readonly) id<HDDaemonDeviceManager> healthDeviceManager; 
@property (readonly) HDUserCharacteristicsManager * userCharacteristicsManager; 
@property (readonly) HDContentProtectionManager * contentProtectionManager; 
@property (readonly) HDBackgroundTaskScheduler * backgroundTaskScheduler; 
@property (readonly) HDProcessStateManager * processStateManager; 
@property (readonly) HDPluginManager * pluginManager; 
@property (readonly) HDDataProvenanceManager * dataProvenanceManager; 
@property (readonly) BOOL isAppleWatch; 
+(BOOL)_shouldInitializeDaemon;
-(void)terminate;
-(void)dealloc;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_localeChanged:(id)arg1 ;
-(id<HDHealthDatabase>)healthDatabase;
-(HDSourceManager *)healthSourceManager;
-(void)pauseAllActiveWorkoutsWithCompletion:(/*^block*/id)arg1 ;
-(void)registerForDaemonReady:(id)arg1 ;
-(void)setPairedWatchBundleIdentifierProvider:(id)arg1 ;
-(HDProcessStateManager *)processStateManager;
-(HDContentProtectionManager *)contentProtectionManager;
-(id<HDSyncEngine>)syncEngine;
-(void)beginTransaction:(id)arg1 ;
-(void)endTransaction:(id)arg1 ;
-(HDAuthorizationManager *)authorizationManager;
-(id)diagnosticDescription;
-(BOOL)isAppleWatch;
-(id<HDHealthDataManager>)healthDataManager;
-(HDDataProvenanceManager *)dataProvenanceManager;
-(HDUserCharacteristicsManager *)userCharacteristicsManager;
-(HDUnitPreferencesManager *)unitPreferencesManager;
-(id)databaseMigratorWithDatabase:(id)arg1 ;
-(id)initWithHomeDirectoryPath:(id)arg1 ;
-(id)initWithHomeDirectoryPath:(id)arg1 contentProtectionManager:(id)arg2 queue:(id)arg3 ;
-(id)_newProcessStateManager;
-(id)_newUserCharacteristicsManager;
-(void)_setUpSignalHandlers;
-(void)_registerForDeviceNameChanges;
-(void)_notifyDaemonLaunchObservers;
-(void)_setUpLaunchEventHandlers;
-(void)invalidateAndWait;
-(void)_terminationCleanup;
-(void)_terminating;
-(id)_setupSignal:(int)arg1 handler:(/*^block*/id)arg2 ;
-(void)_setUpNotifydEventHandler;
-(void)_setUpDistnotedEventHandler;
-(void)_setUpLaunchEventHandler;
-(void)_setupMemoryWarningHandler;
-(void)_resetPrivacySettings;
-(BOOL)_motionTrackingAvailable;
-(void)_periodicUpdates;
-(void)_setUpLaunchEventHandlerCompanion;
-(id)newClientWithConnection:(id)arg1 ;
-(BOOL)_persistDataAndNotify:(id)arg1 provenance:(id)arg2 error:(id*)arg3 ;
-(void)setDataCollectionOptions:(id)arg1 forKey:(id)arg2 type:(id)arg3 clientUUID:(id)arg4 ;
-(void)suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3 ;
-(void)invalidateActivityAlertSuppressionForIdentifier:(id)arg1 ;
-(void)updateActivityCacheForNewWorkoutSamples;
-(void)_unregisterLaunchEventDynamicallyForNotification:(const char*)arg1 ;
-(void)_registerLaunchEventDynamicallyForNotification:(const char*)arg1 ;
-(BOOL)persistAndNotifyDataObjects:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(HDSourceManager *)sourceManager;
-(BOOL)hasAnyActiveWorkouts;
-(BOOL)healthDataReceived:(id)arg1 provenance:(id)arg2 error:(id*)arg3 ;
-(id)pluginDataCollectorsForCollectionManager:(id)arg1 ;
-(BOOL)persistAndNotifyDataObject:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(void)registerForLaunchNotification:(const char*)arg1 ;
-(void)unregisterForLaunchNotification:(const char*)arg1 ;
-(void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(/*^block*/id)arg4 ;
-(void)syncImmediatelyWithReason:(id)arg1 ;
-(void)didUpdateActiveWorkoutServers;
-(NSString *)homeDirectoryPath;
-(id<HDHealthDataCollectionManager>)healthDataCollectionManager;
-(HDDeviceManager *)healthSourceDeviceManager;
-(id<HDHealthMetadataManager>)healthMetadataManager;
-(id<HDDaemonDeviceManager>)healthDeviceManager;
-(HDBackgroundTaskScheduler *)backgroundTaskScheduler;
-(HDPluginManager *)pluginManager;
-(HDNanoSyncManager *)nanoSyncManager;
-(HDWorkoutManager *)workoutManager;
-(void)setWorkoutManager:(HDWorkoutManager *)arg1 ;
-(id<HDViewOnWakeService>)viewOnWakeService;
-(void)setViewOnWakeService:(id<HDViewOnWakeService>)arg1 ;
-(HDDatabasePruningManager *)databasePruningManager;
-(id)currentlyPairedWatchIdentifier;
-(void)nukeAllWorkoutServers;
-(void)runDaemon;
-(HDAppLauncher *)appLauncher;
-(void)setAppLauncher:(HDAppLauncher *)arg1 ;
-(void)setAuthorizationManager:(HDAuthorizationManager *)arg1 ;
-(void)setDatabase:(HDDatabase *)arg1 ;
-(HDDataCollectionManager *)dataCollectMgr;
-(void)setDataCollectMgr:(HDDataCollectionManager *)arg1 ;
-(HDDataManager *)dataMgr;
-(void)setDataMgr:(HDDataManager *)arg1 ;
-(HDHealthDeviceManager *)deviceManager;
-(void)setDeviceManager:(HDHealthDeviceManager *)arg1 ;
-(void)setSourceManager:(HDSourceManager *)arg1 ;
-(HDDeviceManager *)sourceDeviceManager;
-(void)setSourceDeviceManager:(HDDeviceManager *)arg1 ;
-(HDMetadataManager *)metadataManager;
-(void)setMetadataManager:(HDMetadataManager *)arg1 ;
-(HDAppSubscriptionManager *)subscriptionManager;
-(void)setSubscriptionManager:(HDAppSubscriptionManager *)arg1 ;
-(HDMigrationManager *)migrationManager;
-(void)setMigrationManager:(HDMigrationManager *)arg1 ;
-(void)setUnitPreferencesManager:(HDUnitPreferencesManager *)arg1 ;
-(void)setNanoSyncManager:(HDNanoSyncManager *)arg1 ;
-(HDCoachingDiagnosticManager *)coachingDiagnosticManager;
-(void)setCoachingDiagnosticManager:(HDCoachingDiagnosticManager *)arg1 ;
-(void)setDatabasePruningManager:(HDDatabasePruningManager *)arg1 ;
-(id<HDPairedWatchBundleIdentifierProvider>)pairedWatchBundleIDProvider;
-(void)setPairedWatchBundleIDProvider:(id<HDPairedWatchBundleIdentifierProvider>)arg1 ;
-(HDDatabase *)database;
@end

