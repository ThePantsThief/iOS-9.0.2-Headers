/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILabel.h>

@class NSString;

@interface UITableViewCountView : UILabel {

	NSString* _countString;
	int _count;

}
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 withCountString:(id)arg2 withCount:(long long)arg3 ;
-(void)setCountString:(id)arg1 withCount:(long long)arg2 ;
@end
