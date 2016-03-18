/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLOptionElement : DOMHTMLElement

@property (assign) BOOL disabled; 
@property (readonly) DOMHTMLFormElement * form; 
@property (copy) NSString * label; 
@property (assign) BOOL defaultSelected; 
@property (assign) BOOL selected; 
@property (copy) NSString * value; 
@property (copy,readonly) NSString * text; 
@property (readonly) int index; 
-(id)itemTitle;
-(id)createSelectedItem;
-(id)createPickerCell;
-(void)populateCell:(id)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)text;
-(void)setSelected:(BOOL)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(int)index;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(DOMHTMLFormElement *)form;
-(BOOL)selected;
-(BOOL)defaultSelected;
-(void)setDefaultSelected:(BOOL)arg1 ;
@end
