/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSynchronizedTransactionDelegate <NSObject>
@required
-(void)synchronizedTransactionReadyToCommit:(id)arg1;
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;

@end
