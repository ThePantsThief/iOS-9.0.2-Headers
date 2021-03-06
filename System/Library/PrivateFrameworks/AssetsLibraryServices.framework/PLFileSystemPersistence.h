/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:07 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PLFileSystemPersistence : NSObject {

	NSObject*<OS_dispatch_queue> _writerQueue;

}
+(id)sharedInstance;
+(void)persistData:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(id)persistedAttributesForFileAtURL:(id)arg1 ;
+(void)persistString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(id)filesystemPersistenceBatchItemForFileAtURL:(id)arg1 ;
+(void)persistUUIDString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(void)persistUInt16:(unsigned short)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(void)persistMetadata:(id)arg1 fileURL:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)backgroundWriteData:(id)arg1 toFileAtURL:(id)arg2 ;
@end

