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

@interface CPLEngineQuarantinedRecords : CPLEngineStorage <CPLAbstractObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(BOOL)resetWithError:(id*)arg1 ;
-(BOOL)addQuarantinedRecordsWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeQuarantinedRecordsWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)isRecordWithIdentifierQuarantined:(id)arg1 ;
@end
