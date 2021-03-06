/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject;

@interface MCManifest : NSObject {

	NSString* _path;
	NSMutableDictionary* _manifest;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
+(id)sharedManifest;
+(id)installedProfileDataWithIdentifier:(id)arg1 ;
+(void)_setManifestPath:(id)arg1 ;
+(id)installedProfileWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)manifest;
-(id)installedProfileDataWithIdentifier:(id)arg1 ;
-(id)_manifest;
-(id)identifiersOfProfilesWithFilterFlags:(int)arg1 ;
-(void)_setManifest:(id)arg1 ;
-(id)allInstalledProfileIdentifiers;
-(void)addIdentifierToManifest:(id)arg1 flag:(int)arg2 ;
-(void)removeIdentifierFromManifest:(id)arg1 ;
-(void)invalidateCache;
-(id)installedProfileWithIdentifier:(id)arg1 ;
@end

