/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NNMKFetchesSyncServiceServerDelegate <NSObject>
@required
-(void)fetchesSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestFetch:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessages:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessagesForConversation:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestContent:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestFullSync:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestHaltSync:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didNotifyInitialSyncFinished:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didNotifyProtectedChannelSupported:(id)arg2;

@end

