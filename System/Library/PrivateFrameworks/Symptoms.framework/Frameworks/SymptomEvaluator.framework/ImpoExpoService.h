/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AnalyticsWorkspace, NSObject;

@interface ImpoExpoService : NSObject {

	AnalyticsWorkspace* workspace;
	NSObject*<OS_dispatch_queue> queue;

}
+(id)impoExpoServiceInWorkspace:(id)arg1 andQueue:(id)arg2 ;
-(id)listItemsNameWithPrefix:(id)arg1 sortDescriptor:(id)arg2 ;
-(id)exportItemUnderName:(id)arg1 lastUpdated:(id*)arg2 ;
-(BOOL)importItemUnderName:(id)arg1 item:(id)arg2 ;
-(id)_nameSubfix;
-(id)_initInWorkspace:(id)arg1 andQueue:(id)arg2 ;
-(id)_locateRecord:(id)arg1 createMissing:(BOOL)arg2 ;
-(BOOL)importValueUnderName:(id)arg1 value:(unsigned long long)arg2 ;
-(unsigned long long)exportValueUnderName:(id)arg1 lastUpdated:(id*)arg2 ;
-(void)deleteItemsWithNames:(id)arg1 ;
@end

