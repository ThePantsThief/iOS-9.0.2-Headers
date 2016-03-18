/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface PKPaymentOptionGroup : NSObject {

	BOOL _editable;
	NSArray* _items;
	NSString* _groupType;
	NSString* _groupDisplayName;
	NSString* _readOnlyDisplayName;
	NSString* _groupDisplayMode;
	long long _indexForSelectedItem;
	/*^block*/id _selectionChangedHandler;

}

@property (nonatomic,copy) NSArray * items;                                    //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSString * groupType;                               //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,copy) NSString * groupDisplayName;                        //@synthesize groupDisplayName=_groupDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * addNewDisplayName; 
@property (nonatomic,readonly) NSString * addExistingDisplayName; 
@property (nonatomic,readonly) NSString * abTitleDisplayName; 
@property (nonatomic,copy) NSString * readOnlyDisplayName;                     //@synthesize readOnlyDisplayName=_readOnlyDisplayName - In the implementation block
@property (nonatomic,copy) NSString * groupDisplayMode;                        //@synthesize groupDisplayMode=_groupDisplayMode - In the implementation block
@property (assign,nonatomic) long long indexForSelectedItem;                   //@synthesize indexForSelectedItem=_indexForSelectedItem - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable;                  //@synthesize editable=_editable - In the implementation block
@property (nonatomic,copy) id selectionChangedHandler;                         //@synthesize selectionChangedHandler=_selectionChangedHandler - In the implementation block
-(void)setGroupType:(NSString *)arg1 ;
-(void)setGroupDisplayMode:(NSString *)arg1 ;
-(void)setReadOnlyDisplayName:(NSString *)arg1 ;
-(long long)indexForSelectedItem;
-(void)setSelectionChangedHandler:(id)arg1 ;
-(NSString *)addNewDisplayName;
-(NSString *)addExistingDisplayName;
-(void)setIndexForSelectedItem:(long long)arg1 ;
-(NSString *)groupType;
-(void)setGroupDisplayName:(NSString *)arg1 ;
-(void)prependGroupItem:(id)arg1 promoteAndCoalesceDupes:(BOOL)arg2 ;
-(id)selectionChangedHandler;
-(void)prependGroupItems:(id)arg1 afterItem:(id)arg2 ;
-(NSString *)readOnlyDisplayName;
-(void)removeGroupItem:(id)arg1 ;
-(NSString *)groupDisplayName;
-(NSString *)abTitleDisplayName;
-(NSString *)groupDisplayMode;
-(void)dealloc;
-(id)init;
-(BOOL)isEditable;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
@end
