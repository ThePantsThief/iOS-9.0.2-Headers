/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class CKDatabase;

@interface CKDatabaseOperation : CKOperation {

	CKDatabase* _database;

}

@property (nonatomic,retain) CKDatabase * database;              //@synthesize database=_database - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)setDatabase:(CKDatabase *)arg1 ;
-(CKDatabase *)database;
@end
