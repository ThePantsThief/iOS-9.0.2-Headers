/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:39 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIDocumentPickerContainerModel.h>
#import <UIKit/_UIArrayControllerDelegate.h>

@class NSArray, NSURL, NSString, _UIDocumentPickerDirectoryObserver;

@interface _UIDocumentPickerURLContainerModel : _UIDocumentPickerContainerModel <_UIArrayControllerDelegate> {

	BOOL _isRootContainer;
	BOOL _isObservingContainers;
	double _startObservingTime;
	NSArray* _modelObjects;
	NSArray* _pickableTypes;
	unsigned long long _pickerMode;
	NSURL* _url;
	NSString* _displayTitle;
	_UIDocumentPickerDirectoryObserver* _observer;

}

@property (nonatomic,retain) NSURL * url;                                                //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * displayTitle;                                      //@synthesize displayTitle=_displayTitle - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerDirectoryObserver * observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSArray * modelObjects;                                     //@synthesize modelObjects=_modelObjects - In the implementation block
@property (nonatomic,copy) NSArray * pickableTypes;                                      //@synthesize pickableTypes=_pickableTypes - In the implementation block
@property (assign,nonatomic) unsigned long long pickerMode;                              //@synthesize pickerMode=_pickerMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_tagColorsDidChange;
+(id)tagColorsByTag;
+(id)_tagBlipColors;
+(id)allTags;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3 ;
-(id)scopes;
-(BOOL)shouldShowTopLevelContainers;
-(NSString *)displayTitle;
-(id)_createObserver;
-(BOOL)afterInitialUpdate;
-(NSArray *)modelObjects;
-(void)updateSortDescriptors;
-(void)startMonitoringChanges;
-(void)stopMonitoringChanges;
-(void)refreshItem:(id)arg1 thumbnailOnly:(BOOL)arg2 ;
-(NSArray *)pickableTypes;
-(unsigned long long)pickerMode;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setPickableTypes:(NSArray *)arg1 ;
-(void)setPickerMode:(unsigned long long)arg1 ;
-(void)setDisplayTitle:(NSString *)arg1 ;
-(_UIDocumentPickerDirectoryObserver *)observer;
-(id)_containerListDidChange;
-(void)setObserver:(_UIDocumentPickerDirectoryObserver *)arg1 ;
-(void)callUpdateHandlerWithNewItems:(id)arg1 diff:(id)arg2 ;
-(BOOL)shouldShowContainerForType:(id)arg1 ;
-(BOOL)shouldAllowPickingType:(id)arg1 ;
-(void)setModelObjects:(NSArray *)arg1 ;
-(void)arrayController:(id)arg1 modelChanged:(id)arg2 differences:(id)arg3 ;
@end
