/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIItem.h>

@class SKUIScreenshot, NSArray, NSMutableDictionary;

@interface SKUISearchItem : SKUIItem {

	SKUIScreenshot* _primaryScreenshot;
	NSArray* _screenshots;
	NSArray* _childItemIdentifiers;
	NSMutableDictionary* _loadedChildItems;

}

@property (nonatomic,readonly) SKUIScreenshot * primaryScreenshot;              //@synthesize primaryScreenshot=_primaryScreenshot - In the implementation block
@property (nonatomic,readonly) NSArray * screenshots;                           //@synthesize screenshots=_screenshots - In the implementation block
-(id)initWithLookupDictionary:(id)arg1 ;
-(id)childItemIdentifiers;
-(id)loadedChildItems;
-(id)childItemForIdentifier:(id)arg1 ;
-(void)setChildItem:(id)arg1 forIdentifier:(id)arg2 ;
-(SKUIScreenshot *)primaryScreenshot;
-(NSArray *)screenshots;
@end
