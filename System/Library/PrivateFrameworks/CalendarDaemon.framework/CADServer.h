/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ClientConnectionDelegate.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSXPCListener, BirthdayCalendarManager, LocalAttachmentCleanUpSupport, NSMutableSet, NSLock, NSArray, NSString;

@interface CADServer : NSObject <NSXPCListenerDelegate, ClientConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _backgroundTaskCount;
	NSXPCListener* _NSXPCListener;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	BirthdayCalendarManager* _birthdayManager;
	LocalAttachmentCleanUpSupport* _localAttachmentCleanupManager;
	NSMutableSet* _clientConnections;
	NSLock* _connectionLock;
	unsigned long long _birthdayManagerGeneration;
	NSArray* _signalSensors;
	BOOL _running;
	NSObject*<OS_dispatch_queue> _serverQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)server;
+(id)_serverIdentifier;
-(void)_protectedDataDidBecomeAvailable;
-(void)_registerForNotifications;
-(void)dealloc;
-(id)init;
-(void)run;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)clientConnectionDied:(id)arg1 ;
-(void)_startBirthdayManager;
-(void)_handleXPCConnection:(id)arg1 ;
-(void)_registerForIdentityOrphanCleanup;
-(void)_registerForIdleChangeTrackingClientCleanup;
-(void)_tearDownSignalHandlers;
-(void)_exitWithStatus:(int)arg1 ;
-(void)_updateOccurrenceCacheTimeZone;
-(BOOL)_trimAndExtendOccurrenceCache;
-(void)runForTesting;
-(id)clientConnectionForIdentifier:(int)arg1 ;
-(void)_stopBirthdayManager;
-(void)shutDown;
-(void)_setUpSignalHandlers;
-(void)_dumpState;
@end

