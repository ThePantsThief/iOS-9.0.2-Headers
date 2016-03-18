/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <libobjc.A.dylib/PASerializable.h>

@class NSMutableDictionary, NSString, NSArray;

@interface PASample : NSObject <PASerializable> {

	NSMutableDictionary* _tasks;
	double _machTimestamp;
	double _wallTimestamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double machTimestamp;                          //@synthesize machTimestamp=_machTimestamp - In the implementation block
@property (readonly) double wallTimestamp;                          //@synthesize wallTimestamp=_wallTimestamp - In the implementation block
@property (readonly) NSArray * sampleTasks; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(NSMutableDictionary*)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)_initWithSerializedData:(const SCD_Struct_PA11*)arg1 ;
-(void)dealloc;
-(id)initWithStackshot:(id)arg1 ;
-(double)machTimestamp;
-(double)wallTimestamp;
-(NSArray *)sampleTasks;
-(id)sampleTaskForPid:(int)arg1 ;
-(void)addSampleTask:(id)arg1 ;
@end
