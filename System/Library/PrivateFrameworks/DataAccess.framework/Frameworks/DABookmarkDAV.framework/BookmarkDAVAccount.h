/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DABookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DABookmarkDAV/DABookmarkDAV-Structs.h>
#import <DataAccess/DAAccount.h>
#import <libobjc.A.dylib/CoreDAVAccountInfoProvider.h>
#import <libobjc.A.dylib/CoreDAVLogDelegate.h>
#import <libobjc.A.dylib/CoreDAVDiscoveryTaskGroupDelegate.h>

@class CoreDAVDiscoveryTaskGroup, DACoreDAVLogger, DACoreDAVTaskManager, NSString;

@interface BookmarkDAVAccount : DAAccount <CoreDAVAccountInfoProvider, CoreDAVLogDelegate, CoreDAVDiscoveryTaskGroupDelegate> {

	int _bookmarkDAVAccountVersion;
	CoreDAVDiscoveryTaskGroup* _checkValidityTaskGroup;
	DACoreDAVLogger* _curLogger;

}

@property (nonatomic,readonly) int bookmarkDAVAccountVersion;                                 //@synthesize bookmarkDAVAccountVersion=_bookmarkDAVAccountVersion - In the implementation block
@property (nonatomic,readonly) DACoreDAVTaskManager * taskManager; 
@property (nonatomic,retain) CoreDAVDiscoveryTaskGroup * checkValidityTaskGroup;              //@synthesize checkValidityTaskGroup=_checkValidityTaskGroup - In the implementation block
@property (nonatomic,retain) DACoreDAVLogger * curLogger;                                     //@synthesize curLogger=_curLogger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(id)serverRoot;
-(id)userAgentHeader;
-(id)serverComplianceClasses;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setServerComplianceClasses:(id)arg1 ;
-(void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3 ;
-(long long)coreDAVLogLevel;
-(long long)coreDAVOutputLevel;
-(void)coreDAVLogDiagnosticMessage:(id)arg1 atLevel:(long long)arg2 ;
-(BOOL)shouldLogTransmittedData;
-(void)coreDAVLogTransmittedDataPartial:(id)arg1 ;
-(void)coreDAVTransmittedDataFinished;
-(id)spinnerIdentifiers;
-(id)_validationErrorFromRawError:(id)arg1 ;
-(int)bookmarkDAVAccountVersion;
-(CoreDAVDiscoveryTaskGroup *)checkValidityTaskGroup;
-(void)setCheckValidityTaskGroup:(CoreDAVDiscoveryTaskGroup *)arg1 ;
-(id)wellKnownPaths;
-(void)setCurLogger:(DACoreDAVLogger *)arg1 ;
-(DACoreDAVLogger *)curLogger;
-(DACoreDAVTaskManager *)taskManager;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)onBehalfOfBundleIdentifier;
-(BOOL)handleTrustChallenge:(id)arg1 ;
@end
