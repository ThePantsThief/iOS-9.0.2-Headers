/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDFairPlaySAPSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 didCloseWithError:(id)arg2;

@required
-(void)session:(id)arg1 didReceiveServerCertificateRequestWithCompletionHandler:(/*^block*/id)arg2;
-(void)session:(id)arg1 didReceiveClientExchangeData:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

