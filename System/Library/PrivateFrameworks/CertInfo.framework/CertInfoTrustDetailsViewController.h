/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSArray;

@interface CertInfoTrustDetailsViewController : UIViewController {

	NSArray* _trustProperties;

}

@property (nonatomic,retain) NSArray * trustProperties;              //@synthesize trustProperties=_trustProperties - In the implementation block
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSArray *)trustProperties;
-(void)_setupNavItem;
-(void)setTrustProperties:(NSArray *)arg1 ;
@end

