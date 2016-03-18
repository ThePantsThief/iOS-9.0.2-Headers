/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIButton.h>

@interface MPUTextButton : UIButton {

	long long _titleAlignment;

}

@property (assign,nonatomic) long long titleAlignment;              //@synthesize titleAlignment=_titleAlignment - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)setTitleAlignment:(long long)arg1 ;
-(long long)titleAlignment;
-(void)_commonTextButtonInit;
@end
