/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MSCLAccountStore, SKUIClientContext, NSArray, UIImage, MSCLSocialService, NSOperationQueue;

@interface MSCLSocialServiceSetupTableViewSection : NSObject {

	MSCLAccountStore* _accountStore;
	SKUIClientContext* _clientContext;
	NSArray* _facebookPages;
	UIImage* _image;
	MSCLSocialService* _service;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) MSCLAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) MSCLSocialService * service;                  //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) NSArray * facebookPages;                          //@synthesize facebookPages=_facebookPages - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
+(id)instanceWithService:(id)arg1 accountStore:(id)arg2 ;
-(MSCLAccountStore *)accountStore;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(MSCLSocialService *)service;
-(id)initWithService:(id)arg1 accountStore:(id)arg2 ;
-(void)setFacebookPages:(NSArray *)arg1 ;
-(void)registerReusableCellsWithTableView:(id)arg1 ;
-(id)performActionForIndexPath:(id)arg1 parentViewController:(id)arg2 ;
-(long long)_cellTypeForIndexPath:(id)arg1 ;
-(id)_serviceTitle;
-(void)_switchAction:(id)arg1 ;
-(id)_displayNameForAccount:(id)arg1 ;
-(NSArray *)facebookPages;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
@end
