/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TITypologyRecord.h>

@class TIKeyboardTouchEvent, TIKeyboardState, TIKeyboardLayout;

@interface TITypologyRecordHitTest : TITypologyRecord {

	TIKeyboardTouchEvent* _touchEvent;
	TIKeyboardState* _keyboardState;
	TIKeyboardLayout* _keyLayout;
	long long _keyCode;

}

@property (nonatomic,retain) TIKeyboardTouchEvent * touchEvent;              //@synthesize touchEvent=_touchEvent - In the implementation block
@property (nonatomic,retain) TIKeyboardState * keyboardState;                //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TIKeyboardLayout * keyLayout;                   //@synthesize keyLayout=_keyLayout - In the implementation block
@property (assign,nonatomic) long long keyCode;                              //@synthesize keyCode=_keyCode - In the implementation block
-(void)applyToStatistic:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(TIKeyboardLayout *)keyLayout;
-(void)setKeyLayout:(TIKeyboardLayout *)arg1 ;
-(void)setTouchEvent:(TIKeyboardTouchEvent *)arg1 ;
-(TIKeyboardTouchEvent *)touchEvent;
-(long long)keyCode;
-(void)setKeyCode:(long long)arg1 ;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(TIKeyboardState *)keyboardState;
@end

