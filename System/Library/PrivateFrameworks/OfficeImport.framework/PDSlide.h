/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDSlideChild.h>

@class PDSlideLayout, NSMutableArray, PDNotesSlide;

@interface PDSlide : PDSlideChild {

	PDSlideLayout* mSlideLayout;
	NSMutableArray* mComments;
	PDNotesSlide* mNotesSlide;

}
-(unsigned long long)commentCount;
-(void)dealloc;
-(id)description;
-(id)transition;
-(id)background;
-(id)defaultTheme;
-(id)slideLayout;
-(id)parentSlideBase;
-(void)removeUnnecessaryOverrides;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;
-(void)doneWithContent;
-(void)setSlideLayout:(id)arg1 ;
-(void)addComment:(id)arg1 ;
-(id)parentTextStyleForTables;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4 ;
-(id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)notesSlide;
-(id)commentAtIndex:(unsigned long long)arg1 ;
-(void)setInheritedTextStyle:(id)arg1 placeholderType:(int)arg2 defaultTextListStyle:(id)arg3 ;
-(id)inheritedTextStyleForPlaceholderType:(int)arg1 ;
-(void)setNotesSlide:(id)arg1 ;
@end

