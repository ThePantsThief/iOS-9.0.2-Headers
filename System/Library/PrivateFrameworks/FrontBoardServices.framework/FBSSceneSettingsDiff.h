/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSSettingsDiff.h>

@interface FBSSceneSettingsDiff : FBSSettingsDiff
+(id)diffFromSettings:(id)arg1 toSettings:(id)arg2 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)settingsByApplyingToMutableCopyOfSettings:(id)arg1 ;
-(BOOL)inspectFrame:(CGRect*)arg1 ;
-(BOOL)inspectLevel:(double*)arg1 ;
-(BOOL)inspectInterfaceOrientation:(long long*)arg1 ;
-(BOOL)inspectBackgrounded:(BOOL*)arg1 ;
@end

