/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CoreCECTypesInternal : NSObject {

	NSArray* deckControlConstants;
	NSArray* deckControlStrings;
	NSArray* deckInfoConstants;
	NSArray* deckInfoStrings;
	NSArray* deviceTypesConstants;
	NSArray* deviceTypesStrings;
	NSArray* playModeConstants;
	NSArray* playModeStrings;
	NSArray* requestTypeConstants;
	NSArray* requestTypeStrings;
	NSArray* systemAudioModeStatusConstants;
	NSArray* systemAudioModeStatusStrings;

}
+(id)defaultTypes;
-(void)dealloc;
-(id)init;
-(id)stringForDeviceType:(unsigned long long)arg1 ;
-(id)stringForDeckInfo:(unsigned long long)arg1 ;
-(id)stringForDeckControlMode:(unsigned long long)arg1 ;
-(id)stringForPlayMode:(unsigned long long)arg1 ;
-(id)stringForRequestType:(unsigned long long)arg1 ;
-(id)stringForSystemAudioStatus:(unsigned long long)arg1 ;
-(unsigned long long)deckControlModeForString:(id)arg1 ;
-(unsigned long long)deckInfoForString:(id)arg1 ;
-(unsigned long long)playModeForString:(id)arg1 ;
-(unsigned long long)deviceTypeForString:(id)arg1 ;
-(unsigned long long)requestTypeForString:(id)arg1 ;
-(unsigned long long)systemAudioStatusForString:(id)arg1 ;
@end
