/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/SubscribedCalendarSettings.bundle/SubscribedCalendarSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACUIAccountViewsProviderProtocol.h>

@class NSString;

@interface SubCalSettingsPlugin : NSObject <ACUIAccountViewsProviderProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)supportedAccountTypeIdentifiers;
-(Class)viewControllerClassForViewingAccount:(id)arg1 ;
-(Class)viewControllerClassForCreatingAccountWithType:(id)arg1 ;
-(id)configurationInfoForViewingAccount:(id)arg1 ;
-(id)configurationInfoForCreatingAccountWithType:(id)arg1 ;
@end

