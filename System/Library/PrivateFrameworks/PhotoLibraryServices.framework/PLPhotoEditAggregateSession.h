/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSArray;

@interface PLPhotoEditAggregateSession : NSObject {

	BOOL _toggledOriginal;
	BOOL _pluginStarted;
	BOOL _pluginSaved;
	BOOL __hasCropSuggestion;
	BOOL __autoCropAdjusted;
	BOOL __autoCropReset;

}

@property (assign,nonatomic) BOOL toggledOriginal;                                               //@synthesize toggledOriginal=_toggledOriginal - In the implementation block
@property (assign,nonatomic) BOOL pluginStarted;                                                 //@synthesize pluginStarted=_pluginStarted - In the implementation block
@property (assign,nonatomic) BOOL pluginSaved;                                                   //@synthesize pluginSaved=_pluginSaved - In the implementation block
@property (nonatomic,readonly) NSArray * _autoCropKeys; 
@property (assign,setter=_setHasCropSuggestion:,nonatomic) BOOL _hasCropSuggestion;              //@synthesize _hasCropSuggestion=__hasCropSuggestion - In the implementation block
@property (assign,setter=_setAutoCropAdjusted:,nonatomic) BOOL _autoCropAdjusted;                //@synthesize _autoCropAdjusted=__autoCropAdjusted - In the implementation block
@property (assign,setter=_setAutoCropReset:,nonatomic) BOOL _autoCropReset;                      //@synthesize _autoCropReset=__autoCropReset - In the implementation block
+(CFStringRef)_keyForSessionEnd:(long long)arg1 ;
-(void)setToggledOriginal:(BOOL)arg1 ;
-(void)finishSessionWithEnd:(long long)arg1 ;
-(void)setPluginSaved:(BOOL)arg1 ;
-(void)finishSessionWithEnd:(long long)arg1 newEditModel:(id)arg2 oldEditModel:(id)arg3 ;
-(void)setPluginStarted:(BOOL)arg1 ;
-(void)notifyDidResetCrop;
-(BOOL)_hasCropSuggestion;
-(void)notifyDidApplyAutoCrop;
-(void)notifyDidAdjustCrop;
-(void)_setHasCropSuggestion:(BOOL)arg1 ;
-(void)_setAutoCropAdjusted:(BOOL)arg1 ;
-(void)_setAutoCropReset:(BOOL)arg1 ;
-(BOOL)_autoCropReset;
-(BOOL)_autoCropAdjusted;
-(NSArray *)_autoCropKeys;
-(BOOL)toggledOriginal;
-(BOOL)pluginStarted;
-(BOOL)pluginSaved;
-(id)_sessionKeysWithEnd:(long long)arg1 ;
-(void)_recordKeys:(id)arg1 ;
@end
