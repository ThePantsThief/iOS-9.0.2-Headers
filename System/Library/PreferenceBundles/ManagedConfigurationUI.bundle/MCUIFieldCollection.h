/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, MCUIPayloadUserInputField;

@interface MCUIFieldCollection : NSObject {

	NSMutableArray* _payloadFieldArrays;
	long long _currentPayloadIndex;
	long long _currentFieldIndex;
	MCUIPayloadUserInputField* _currentField;
	BOOL _isFinalField;

}
-(id)initWithUserInput:(id)arg1 ;
-(id)currentField;
-(BOOL)currentFieldIsLastInPayload;
-(void)moveToNextField;
-(BOOL)currentFieldIsFinalField;
-(id)userInputResponses;
-(id)responseDictionariesForCurrentPayload;
-(long long)currentPayloadIndex;
-(BOOL)currentFieldIsSinglePasswordField;
-(void)restartCurrentPayload;
-(void)_setCurrentFieldToCurrentIndices;
-(void)_setIsFinalField;
@end
