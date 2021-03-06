/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:02 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDNanoSyncEntity.h>
#import <libobjc.A.dylib/HDSyncEntity.h>

@class NSString;

@interface HDKeyValueSyncEntity : NSObject <HDNanoSyncEntity, HDSyncEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)finalAnchorForNanoSyncRestoreWithStore:(id)arg1 nowDate:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)objectsForNanoSyncRestoreWithStore:(id)arg1 nowDate:(id)arg2 syncAnchorRange:(HDSyncAnchorRange)arg3 lastSyncAnchor:(long long*)arg4 healthDaemon:(id)arg5 error:(id*)arg6 ;
+(int)nanoSyncObjectType;
+(long long)category;
+(long long)syncEntityType;
+(id)syncObjectsWithStore:(id)arg1 syncAnchorRange:(HDSyncAnchorRange)arg2 lastSyncAnchor:(long long*)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(long long)nextSyncAnchorWithStore:(id)arg1 startSyncAnchor:(long long)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)decodeSyncObjectWithData:(id)arg1 ;
+(BOOL)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)syncEntityDependencies;
+(void)didReceiveKeysAndValuesWithHealthDaemon:(id)arg1 ;
@end

