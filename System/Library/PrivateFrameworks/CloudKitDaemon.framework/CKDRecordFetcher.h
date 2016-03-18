/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@protocol OS_dispatch_group;
@class NSArray, NSSet, NSObject, NSMutableDictionary, NSMutableArray;

@interface CKDRecordFetcher : CKDDatabaseOperation {

	BOOL _fetchAssetContents;
	BOOL _preserveOrdering;
	NSArray* _recordResponsesToFetch;
	NSSet* _desiredKeys;
	/*^block*/id _recordFetchedBlock;
	NSObject*<OS_dispatch_group> _fetchGroup;
	NSMutableDictionary* _fetchedRecordInfoByRecordID;
	NSMutableArray* _recordIDsToFetch;

}

@property (nonatomic,retain) NSArray * recordResponsesToFetch;                               //@synthesize recordResponsesToFetch=_recordResponsesToFetch - In the implementation block
@property (assign,nonatomic) BOOL fetchAssetContents;                                        //@synthesize fetchAssetContents=_fetchAssetContents - In the implementation block
@property (assign,nonatomic) BOOL preserveOrdering;                                          //@synthesize preserveOrdering=_preserveOrdering - In the implementation block
@property (nonatomic,retain) NSSet * desiredKeys;                                            //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                                            //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> fetchGroup;                        //@synthesize fetchGroup=_fetchGroup - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fetchedRecordInfoByRecordID;              //@synthesize fetchedRecordInfoByRecordID=_fetchedRecordInfoByRecordID - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordIDsToFetch;                              //@synthesize recordIDsToFetch=_recordIDsToFetch - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(unsigned long long)activityStart;
-(BOOL)shouldCheckAppVersion;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSSet *)desiredKeys;
-(void)setDesiredKeys:(NSSet *)arg1 ;
-(BOOL)fetchAssetContents;
-(NSMutableArray *)recordIDsToFetch;
-(NSMutableDictionary *)fetchedRecordInfoByRecordID;
-(void)_flushFetchedRecordsToConsumer;
-(NSObject*<OS_dispatch_group>)fetchGroup;
-(id)recordFetchedBlock;
-(BOOL)preserveOrdering;
-(NSArray *)recordResponsesToFetch;
-(void)setRecordIDsToFetch:(NSMutableArray *)arg1 ;
-(void)setFetchedRecordInfoByRecordID:(NSMutableDictionary *)arg1 ;
-(void)_fetchRecordsFromServer:(id)arg1 fullRecords:(id)arg2 ;
-(void)setRecordResponsesToFetch:(NSArray *)arg1 ;
-(void)setFetchAssetContents:(BOOL)arg1 ;
-(void)setPreserveOrdering:(BOOL)arg1 ;
-(void)setFetchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end
