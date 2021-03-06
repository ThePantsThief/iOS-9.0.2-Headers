/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSString, CPLPlatformObject;

@interface CPLEngineCloudCache : CPLEngineStorage <CPLAbstractObject>

@property (readonly) BOOL hasDoneAFirstSynchronization; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(BOOL)resetWithError:(id*)arg1 ;
-(BOOL)discardStagedChangesWithError:(id*)arg1 ;
-(BOOL)resetSyncAnchorWithError:(id*)arg1 ;
-(id)cloudChangeBatchFromBatch:(id)arg1 usingMapping:(id)arg2 isFinal:(BOOL)arg3 withError:(id*)arg4 ;
-(BOOL)applyBatch:(id)arg1 isFinal:(BOOL)arg2 withError:(id*)arg3 ;
-(BOOL)setSyncAnchor:(id)arg1 error:(id*)arg2 ;
-(BOOL)commitStagedChangesWithError:(id*)arg1 ;
-(id)recordWithIdentifier:(id)arg1 isFinal:(BOOL)arg2 ;
-(BOOL)updateRecord:(id)arg1 isFinal:(BOOL)arg2 error:(id*)arg3 ;
-(id)resourceOfType:(unsigned long long)arg1 forRecordWithIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasRecordWithIdentifier:(id)arg1 ;
-(BOOL)addRecord:(id)arg1 isFinal:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)deleteRecordWithIdentifier:(id)arg1 isFinal:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)remapAllRecordsWithPreviousIdentifier:(id)arg1 newIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasDoneAFirstSynchronization;
-(BOOL)_remapRecord:(id)arg1 inBatch:(id)arg2 error:(id*)arg3 ;
-(BOOL)confirmAllRecordsWithError:(id*)arg1 ;
-(id)confirmedRecordWithIdentifier:(id)arg1 ;
-(id)recordsWithRelatedIdentifier:(id)arg1 isFinal:(BOOL)arg2 ;
-(id)recordsOfClass:(Class)arg1 isFinal:(BOOL)arg2 ;
-(void)getCommittedRecord:(id*)arg1 stagedRecord:(id*)arg2 forIdentifier:(id)arg3 ;
-(id)syncAnchor;
@end

