/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:39 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OCDDelayedNodeContext.h>

@class EBReaderSheetState, NSString;

@interface EBSheetContext : NSObject <OCDDelayedNodeContext> {

	EBReaderSheetState* mSheetState;
	unsigned mSheetIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)loadDelayedNode:(id)arg1 ;
-(id)initWithSheetIndex:(unsigned)arg1 state:(id)arg2 ;
@end

