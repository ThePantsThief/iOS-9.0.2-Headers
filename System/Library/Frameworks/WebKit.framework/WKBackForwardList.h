/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKBackForwardListItem, NSArray, NSString;

@interface WKBackForwardList : NSObject <WKObject> {

	ObjectStorage<WebKit::WebBackForwardList> _list;

}

@property (nonatomic,readonly) WKBackForwardListItem * currentItem; 
@property (nonatomic,readonly) WKBackForwardListItem * backItem; 
@property (nonatomic,readonly) WKBackForwardListItem * forwardItem; 
@property (nonatomic,copy,readonly) NSArray * backList; 
@property (nonatomic,copy,readonly) NSArray * forwardList; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)_removeAllItems;
-(void)_clear;
-(void)dealloc;
-(WKBackForwardListItem *)backItem;
-(WKBackForwardListItem *)currentItem;
-(WKBackForwardListItem *)forwardItem;
-(Object*)_apiObject;
-(NSArray *)backList;
-(NSArray *)forwardList;
-(id)itemAtIndex:(long long)arg1 ;
@end
