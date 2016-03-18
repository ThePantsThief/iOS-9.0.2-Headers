/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIPlatterMenuDynamicsControllerDelegate <NSObject>
@required
-(id)leadingSwipeActionView;
-(CGPoint*)centerForPlatterWithMenuViewDismissed;
-(id)trailingSwipeActionView;
-(double)minimumSpacingBetweenPlatterAndMenu;
-(CGPoint*)initialCenterForLeadingSwipeActionView;
-(CGPoint*)initialCenterForTrailingSwipeActionView;
-(CGPoint*)centerForMenuDismissed;
-(CGPoint*)centerForPlatterWithMenuViewPresented;
-(CGPoint*)centerForMenuPresented;
-(void)platterMenuDynamicsControllerDidDismissWithController:(id)arg1;
-(void)platterMenuDynamicsController:(id)arg1 didMoveSwipeView:(id)arg2 toPosition:(CGPoint)arg3;

@end
