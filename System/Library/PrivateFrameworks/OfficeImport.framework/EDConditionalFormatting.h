/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:39 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject {

	NSMutableArray* mRules;
	EDReferenceCollection* mRanges;
	BOOL mApplyToDate;

}
+(id)conditionalFormatting;
-(void)dealloc;
-(id)init;
-(id)description;
-(unsigned long long)rangeCount;
-(id)rangeAtIndex:(unsigned long long)arg1 ;
-(void)addRange:(id)arg1 ;
-(void)addRule:(id)arg1 ;
-(unsigned long long)ruleCount;
-(id)ruleAtIndex:(unsigned long long)arg1 ;
-(id)rules;
-(BOOL)isApplyToDate;
@end
