/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIFocusGuide.h>

@protocol UIKBFocusGuideDelegate;
@interface UIKBFocusGuide : UIFocusGuide {

	unsigned long long focusHeading;
	id<UIKBFocusGuideDelegate> _keyboardDelegate;

}

@property (assign,nonatomic) unsigned long long focusHeading; 
@property (assign,nonatomic) id<UIKBFocusGuideDelegate> keyboardDelegate;              //@synthesize keyboardDelegate=_keyboardDelegate - In the implementation block
-(unsigned long long)focusHeading;
-(void)setKeyboardDelegate:(id<UIKBFocusGuideDelegate>)arg1 ;
-(void)setFocusHeading:(unsigned long long)arg1 ;
-(void)_didUpdateFocusToPreferredFocusedView;
-(id<UIKBFocusGuideDelegate>)keyboardDelegate;
@end

