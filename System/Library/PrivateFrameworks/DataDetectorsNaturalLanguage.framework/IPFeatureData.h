/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsNaturalLanguage/DataDetectorsNaturalLanguage-Structs.h>
#import <DataDetectorsNaturalLanguage/IPFeature.h>

@class NSMutableDictionary;

@interface IPFeatureData : IPFeature {

	NSMutableDictionary* _contextDictionary;
	unsigned long long _type;
	id _value;

}

@property (assign) unsigned long long type;                                //@synthesize type=_type - In the implementation block
@property (retain) id value;                                               //@synthesize value=_value - In the implementation block
@property (readonly) NSMutableDictionary * contextDictionary;              //@synthesize contextDictionary=_contextDictionary - In the implementation block
+(id)featureDataWithType:(unsigned long long)arg1 value:(id)arg2 matchRange:(NSRange)arg3 ;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)nGramMarker;
-(NSMutableDictionary *)contextDictionary;
@end
