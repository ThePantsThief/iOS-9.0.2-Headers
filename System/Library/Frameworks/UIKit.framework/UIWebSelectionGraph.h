/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface UIWebSelectionGraph : NSObject {

	NSMutableArray* _selectionNodes;

}
-(void)dealloc;
-(id)init;
-(void)clearNodes;
-(id)addNodeFromSelection:(id)arg1 ;
-(void)exploreFromNode:(id)arg1 outwards:(BOOL)arg2 maxDepth:(int)arg3 ;
-(void)exploreFromNode:(id)arg1 ;
@end
