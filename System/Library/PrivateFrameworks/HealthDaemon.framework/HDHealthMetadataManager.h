/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:02 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDHealthMetadataManager <NSObject>
@required
-(id)metadataForDataEntity:(id)arg1 withStatement:(id)arg2 error:(id*)arg3;
-(BOOL)insertMetadata:(id)arg1 forDataEntityWithID:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
-(id)metadataForDataEntity:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;

@end

