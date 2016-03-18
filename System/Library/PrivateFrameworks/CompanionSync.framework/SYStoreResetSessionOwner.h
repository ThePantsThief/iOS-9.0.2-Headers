/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/SYStoreSessionOwner.h>

@class NSMutableArray;

@interface SYStoreResetSessionOwner : SYStoreSessionOwner {

	NSMutableArray* _buffer;
	long long _bufferedState;
	/*^block*/id _fetchNextBatch;

}

@property (nonatomic,copy) id fetchNextBatch;              //@synthesize fetchNextBatch=_fetchNextBatch - In the implementation block
-(id)init;
-(void)setFetchNextBatch:(id)arg1 ;
-(long long)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
-(long long)_sendBufferedChanges:(/*^block*/id)arg1 ;
-(id)fetchNextBatch;
-(BOOL)isResetSync;
@end
