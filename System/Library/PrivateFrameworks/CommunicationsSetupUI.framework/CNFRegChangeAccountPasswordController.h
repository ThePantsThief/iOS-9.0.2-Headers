/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegAuthorizedAccountWebViewController.h>

@protocol CNFRegChangeAccountPasswordDelegate;
@class NSString;

@interface CNFRegChangeAccountPasswordController : CNFRegAuthorizedAccountWebViewController {

	id<CNFRegChangeAccountPasswordDelegate> _delegate;
	NSString* _appleID;

}

@property (nonatomic,copy) NSString * appleID;                                              //@synthesize appleID=_appleID - In the implementation block
@property (assign,nonatomic) id<CNFRegChangeAccountPasswordDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<CNFRegChangeAccountPasswordDelegate>)arg1 ;
-(void)dealloc;
-(id<CNFRegChangeAccountPasswordDelegate>)delegate;
-(id)initWithRegController:(id)arg1 appleID:(id)arg2 ;
-(id)logName;
-(id)overrideURLForURL:(id)arg1 ;
-(void)setHeadersForRequest:(id)arg1 ;
-(BOOL)canSendURLRequest:(id)arg1 ;
-(void)cancelTapped;
-(void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(id)bagKey;
-(void)setAppleID:(NSString *)arg1 ;
-(NSString *)appleID;
@end
