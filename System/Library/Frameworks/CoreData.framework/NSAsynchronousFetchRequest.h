/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:01 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSFetchRequest;

@interface NSAsynchronousFetchRequest : NSPersistentStoreRequest {

	NSFetchRequest* _fetchRequest;
	id _requestCompletionBlock;
	long long _estimatedResultCount;

}

@property (readonly) NSFetchRequest * fetchRequest;                       //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (readonly) id completionBlock;                                  //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
@property (assign,nonatomic) long long estimatedResultCount;              //@synthesize estimatedResultCount=_estimatedResultCount - In the implementation block
-(id)initWithFetchRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(long long)estimatedResultCount;
-(void)setEstimatedResultCount:(long long)arg1 ;
-(unsigned long long)requestType;
-(void)dealloc;
-(id)description;
-(id)completionBlock;
-(NSFetchRequest *)fetchRequest;
@end
