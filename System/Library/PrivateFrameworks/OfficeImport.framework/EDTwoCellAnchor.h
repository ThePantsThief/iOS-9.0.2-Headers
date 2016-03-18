/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:39 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDAnchor.h>

@interface EDTwoCellAnchor : EDAnchor {

	EDCellAnchorMarker mFrom;
	EDCellAnchorMarker mTo;
	BOOL mIsRelative;
	int mEditAs;

}
-(id)init;
-(EDCellAnchorMarker)from;
-(BOOL)isRelative;
-(EDCellAnchorMarker)to;
-(void)setRelative:(BOOL)arg1 ;
-(void)setFrom:(EDCellAnchorMarker)arg1 ;
-(void)setTo:(EDCellAnchorMarker)arg1 ;
-(int)editAs;
-(void)setEditAs:(int)arg1 ;
@end
