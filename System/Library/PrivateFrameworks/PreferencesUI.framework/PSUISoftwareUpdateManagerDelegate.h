/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSUISoftwareUpdateManagerDelegate <NSObject>
@required
-(void)manager:(id)arg1 didTransitionToState:(int)arg2 fromState:(int)arg3 error:(id)arg4;
-(void)manager:(id)arg1 scanFoundUpdate:(id)arg2 error:(id)arg3;
-(void)manager:(id)arg1 installFailedWithError:(id)arg2;
-(void)manager:(id)arg1 download:(id)arg2 failedWithError:(id)arg3;
-(void)manager:(id)arg1 downloadProgressChanged:(id)arg2;

@end
