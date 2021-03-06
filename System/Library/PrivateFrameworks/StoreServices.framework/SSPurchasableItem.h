/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, SSSQLiteDatabase;

@interface SSPurchasableItem : NSObject {

	NSDictionary* _propertyValues;
	NSString* _tableName;
	SSSQLiteDatabase* _database;

}
+(id)databaseTable;
+(id)sortByDatePurchasedKey;
+(id)allPropertyKeys;
-(void)dealloc;
-(BOOL)isHidden;
-(id)description;
-(id)propertyValues;
-(id)datePurchased;
-(long long)storeID;
-(long long)accountUniqueIdentifier;
-(id)initWithPropertyValues:(id)arg1 ;
-(long long)pid;
@end

