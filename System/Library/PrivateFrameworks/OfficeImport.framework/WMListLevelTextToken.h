/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:32 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WMListLevelTextToken : NSObject {

	NSString* m_string;
	int m_level;

}
+(id)tokenWithString:(id)arg1 andLevel:(int)arg2 ;
-(void)dealloc;
-(id)string;
-(int)level;
-(id)stringForIndex:(unsigned long long)arg1 withFormat:(int)arg2 orNumberFormatter:(void*)arg3 initialNumber:(unsigned long long)arg4 ;
-(id)initWithString:(id)arg1 andLevel:(int)arg2 ;
@end
