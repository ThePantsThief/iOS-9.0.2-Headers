/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPCharSequence;

@interface CPZoneMaker : NSObject {

	CPCharSequence* charactersOnPage;

}
-(void)dealloc;
-(void)makeZonesIn:(id)arg1 ;
-(unsigned)categorizeGraphicsIn:(id)arg1 ;
-(void)mergeQualifyingRectanglesIn:(id)arg1 ;
-(void)makeZonesWithBoundaryIn:(id)arg1 ;
-(void)cutHorizontalBorders:(id)arg1 whereObscuredByShape:(id)arg2 ;
-(void)cutVerticalBorders:(id)arg1 whereObscuredByShape:(id)arg2 ;
-(id)newZoneForStraddlersFrom:(id)arg1 ;
-(void)addObjectsToStraddler:(id)arg1 from:(id)arg2 ;
-(BOOL)overlap:(id)arg1 with:(id)arg2 ;
@end

