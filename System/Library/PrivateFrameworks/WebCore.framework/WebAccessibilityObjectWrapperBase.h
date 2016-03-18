/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebAccessibilityObjectWrapperBase : NSObject {

	AccessibilityObject* m_object;

}
+(void)accessibilitySetShouldRepostNotifications:(BOOL)arg1 ;
-(void)detach;
-(id)attachmentView;
-(id)initWithAccessibilityObject:(AccessibilityObject*)arg1 ;
-(void)accessibilityPostedNotification:(id)arg1 ;
-(BOOL)fileUploadButtonReturnsValueInTitle;
-(id)accessibilityPlatformMathSubscriptKey;
-(id)accessibilityPlatformMathSuperscriptKey;
-(void)accessibilityPostedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)updateObjectBackingStore;
-(AccessibilityObject*)accessibilityObject;
-(BOOL)titleTagShouldBeUsedInDescriptionField;
-(id)baseAccessibilityTitle;
-(id)baseAccessibilityDescription;
-(id)baseAccessibilityHelpText;
-(CGPathRef)convertPathToScreenSpace:(Path*)arg1 ;
-(CGPoint)convertPointToScreenSpace:(FloatPoint*)arg1 ;
-(id)ariaLandmarkRoleDescription;
-(id)accessibilityMathPostscriptPairs;
-(id)accessibilityMathPrescriptPairs;
@end
