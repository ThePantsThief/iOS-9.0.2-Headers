/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:37 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SGDeviceState : NSObject
+(void)blockUntilFirstUnlock;
+(void)registerBlockForFirstUnlock:(/*^block*/id)arg1 ;
+(BOOL)isClassCLocked;
+(BOOL)isDeviceFormattedForProtection;
+(BOOL)isConstrainedDevice;
+(BOOL)isUnlocked;
+(id)currentOsBuild;
+(int)lockState;
+(void)registerForLockStateChangeNotifications:(/*^block*/id)arg1 ;
@end

