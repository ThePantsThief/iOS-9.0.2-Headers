/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:03 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDQueryServerDelegate <NSObject>
@required
-(BOOL)queryServerShouldObserveInBackground:(id)arg1;
-(id)queryServer:(id)arg1 filterSamplesForReadAuthorization:(id)arg2;
-(void)queryServerDidStartDataCollection:(id)arg1;
-(void)queryServerDidDeactivate:(id)arg1;
-(void)queryServerDidStopDataCollection:(id)arg1;
-(BOOL)queryServer:(id)arg1 isAuthorizedToReadType:(id)arg2 withRestrictedSourceIdentifier:(id*)arg3 authorizationAnchor:(id*)arg4;
-(BOOL)queryServer:(id)arg1 isAuthorizationStatusDeterminedForTypes:(id)arg2 error:(id*)arg3;

@end
