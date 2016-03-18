/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:37 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ODIState;

@interface ODIHorizonalList3 : NSObject {

	unsigned mMaxPointCount;
	ODIState* mState;

}
+(BOOL)mapIdentifier:(id)arg1 state:(id)arg2 ;
-(void)map;
-(void)mapRoofStyleFromPoint:(id)arg1 shape:(id)arg2 ;
-(void)mapOnePillarStyleFromPoint:(id)arg1 shape:(id)arg2 ;
-(void)mapPillarPoints:(id)arg1 bounds:(CGRect)arg2 ;
-(void)mapBaseStyleFromPoint:(id)arg1 shape:(id)arg2 ;
-(id)initWithState:(id)arg1 ;
-(void)setMaxPointCount:(unsigned)arg1 ;
@end
