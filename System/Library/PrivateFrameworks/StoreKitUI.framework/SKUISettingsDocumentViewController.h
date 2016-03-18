/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUISettingsDocumentViewDelegate.h>
#import <libobjc.A.dylib/SKUISettingsEditTransactionDelegate.h>
#import <libobjc.A.dylib/SKUISettingsGroupsDescriptionDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class UIBarButtonItem, SKUISettingsEditTransaction, SKUIViewElementLayoutContext, SKUIResourceLoader, SKUISettingsContext, SKUISettingsGroupsDescription, UITableView, SKUISettingsTemplateViewElement, SKUIViewElementTextLayoutCache, NSString;

@interface SKUISettingsDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUISettingsDocumentViewDelegate, SKUISettingsEditTransactionDelegate, SKUISettingsGroupsDescriptionDelegate, UITableViewDataSource, UITableViewDelegate, SKUIDocumentViewController> {

	UIBarButtonItem* _barButtonItemCancel;
	UIBarButtonItem* _barButtonItemDone;
	UIBarButtonItem* _barButtonItemEdit;
	SKUISettingsEditTransaction* _editTransaction;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUIResourceLoader* _resourceLoader;
	SKUISettingsContext* _settingsContext;
	SKUISettingsGroupsDescription* _settingsGroupsDescription;
	UITableView* _tableView;
	SKUISettingsTemplateViewElement* _templateElement;
	SKUIViewElementTextLayoutCache* _textLayoutCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_settingsGroupsFromTemplateElement:(id)arg1 withDelegate:(id)arg2 settingsContext:(id)arg3 ;
+(double)_heightThatFitsWidth:(double)arg1 withSettingsHeaderFooterDescription:(id)arg2 context:(id)arg3 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(id)_tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_invalidateLayout;
-(void)_reloadData;
-(id)_layoutContext;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)documentDidUpdate:(id)arg1 ;
-(id)_resourceLoader;
-(void)_cancelButtonAction:(id)arg1 ;
-(id)_textLayoutCache;
-(void)_doneButtonAction:(id)arg1 ;
-(void)settingsDocumentViewDidChangeTintColor:(id)arg1 ;
-(id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)_deselectItemsAnimated:(BOOL)arg1 ;
-(id)_viewForSettingsHeaderFooterDescription:(id)arg1 ;
-(void)_showEditBarButtonItemAnimated:(BOOL)arg1 ;
-(id)_barButtonItemDone;
-(void)_showEditingBarButtonItemsEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_editButtonAction:(id)arg1 ;
-(id)_barButtonItemEdit;
-(void)_showBarItemLeft:(id)arg1 right:(id)arg2 animated:(BOOL)arg3 ;
-(id)_barButtonItemCancel;
-(id)_dequeueHeaderFooterViewWithReuseIdentifier:(id)arg1 ;
-(void)settingsEditTransactionDidCompleteTransaction:(id)arg1 ;
-(void)settingsEditTransactionDidFailTransaction:(id)arg1 ;
-(void)settingsEditTransactionWillBeginTransaction:(id)arg1 ;
-(void)settingsEditTransactionWillCommitTransaction:(id)arg1 ;
-(id)owningViewControllerForSettingsGroupsDescription:(id)arg1 ;
-(void)settingsGroupsDescription:(id)arg1 deletedSettingAtIndexPath:(id)arg2 ;
-(void)settingsGroupsDescription:(id)arg1 deletedSettingsGroupAtIndex:(unsigned long long)arg2 ;
-(void)settingsGroupsDescription:(id)arg1 didUpdateSettingsDescription:(id)arg2 ;
-(void)settingsGroupsDescription:(id)arg1 dismissViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)settingsGroupsDescription:(id)arg1 presentViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)settingsGroupsDescription:(id)arg1 viewForSettingAtIndexPath:(id)arg2 ;
-(void)settingsGroupsDescriptionDidUpdateValidity:(id)arg1 ;
-(void)settingsEditTransaction:(id)arg1 isValid:(BOOL)arg2 ;
@end
