/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@interface OITSUCustomCallBackDictionary : NSMutableDictionary {

	CFDictionaryRef mDictionary;

}
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_OI17*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)allKeys;
-(id)objectEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)allValues;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(void)setObject:(id)arg1 forUncopiedKey:(id)arg2 ;
-(id)initWithCFDictionary:(CFDictionaryRef)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 keyCallBacks:(const SCD_Struct_OI43*)arg2 valueCallBacks:(const SCD_Struct_OI44*)arg3 ;
@end

