/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:07 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HKMedicalIDEditorCell.h>

@class _HKEmergencyContact;

@interface HKMedicalIDEditorEmergencyContactCell : HKMedicalIDEditorCell {

	_HKEmergencyContact* _contact;

}

@property (nonatomic,retain) _HKEmergencyContact * contact;              //@synthesize contact=_contact - In the implementation block
-(void)setContact:(_HKEmergencyContact *)arg1 ;
-(_HKEmergencyContact *)contact;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)formattedValue;
-(void)_labelTapped:(id)arg1 ;
@end

