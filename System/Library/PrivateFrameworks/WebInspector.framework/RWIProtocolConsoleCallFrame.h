/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolConsoleCallFrame : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * functionName; 
@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) int lineNumber; 
@property (assign,nonatomic) int columnNumber; 
-(void)setFunctionName:(NSString *)arg1 ;
-(int)lineNumber;
-(void)setLineNumber:(int)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(int)columnNumber;
-(void)setColumnNumber:(int)arg1 ;
-(id)initWithFunctionName:(id)arg1 url:(id)arg2 lineNumber:(int)arg3 columnNumber:(int)arg4 ;
-(NSString *)functionName;
@end
