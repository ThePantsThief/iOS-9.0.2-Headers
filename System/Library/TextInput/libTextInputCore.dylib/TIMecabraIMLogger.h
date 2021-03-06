/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString;

@interface TIMecabraIMLogger : NSObject {

	NSMutableString* _loggedMessage;

}

@property (nonatomic,retain) NSMutableString * loggedMessage;              //@synthesize loggedMessage=_loggedMessage - In the implementation block
+(BOOL)isLoggingEnabled;
-(void)dealloc;
-(id)logFilePath;
-(NSMutableString *)loggedMessage;
-(void)writeLogToFile;
-(void)beginLogging;
-(void)endLoggingForInput:(id)arg1 atFinalTimeMark:(unsigned long long)arg2 ;
-(void)setLoggedMessage:(NSMutableString *)arg1 ;
-(void)markTime:(unsigned long long)arg1 ;
@end

