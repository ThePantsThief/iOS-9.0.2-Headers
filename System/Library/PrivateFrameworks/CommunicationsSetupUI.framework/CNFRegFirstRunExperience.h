/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIBarButtonItem;


@protocol CNFRegFirstRunExperience <NSObject>
@property (assign,nonatomic) id<CNFRegFirstRunDelegate> delegate; 
@property (nonatomic,readonly) long long currentAppearanceStyle; 
@property (nonatomic,retain) UIBarButtonItem * customLeftButton; 
@property (nonatomic,retain) UIBarButtonItem * customRightButton; 
@required
-(void)setDelegate:(id)arg1;
-(id<CNFRegFirstRunDelegate>)delegate;
-(long long)currentAppearanceStyle;
-(id)initWithRegController:(id)arg1 account:(id)arg2;
-(void)setCustomLeftButton:(id)arg1;
-(void)setCustomRightButton:(id)arg1;
-(UIBarButtonItem *)customLeftButton;
-(UIBarButtonItem *)customRightButton;

@end

