/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MusicEntityValueProviding;
@class MPUContentItemIdentifierCollection, MPPlaybackContext;

@interface MusicEntityValueContext : NSObject <NSCoding, NSCopying> {

	BOOL _wantsItemEntityValueProvider;
	BOOL _wantsItemGlobalIndex;
	BOOL _wantsItemIdentifierCollection;
	BOOL _wantsItemPlaybackContext;
	BOOL _wantsContainerEntityValueProvider;
	BOOL _wantsContainerIdentifierCollection;
	BOOL _wantsContainerPlaybackContext;
	id<MusicEntityValueProviding> _containerEntityValueProvider;
	MPUContentItemIdentifierCollection* _containerIdentifierCollection;
	id<MusicEntityValueProviding> _itemEntityValueProvider;
	unsigned long long _itemGlobalIndex;
	MPUContentItemIdentifierCollection* _itemIdentifierCollection;
	MPPlaybackContext* _containerPlaybackContext;
	MPPlaybackContext* _itemPlaybackContext;

}

@property (assign,nonatomic) BOOL wantsItemEntityValueProvider;                                             //@synthesize wantsItemEntityValueProvider=_wantsItemEntityValueProvider - In the implementation block
@property (assign,nonatomic) BOOL wantsItemGlobalIndex;                                                     //@synthesize wantsItemGlobalIndex=_wantsItemGlobalIndex - In the implementation block
@property (assign,nonatomic) BOOL wantsItemIdentifierCollection;                                            //@synthesize wantsItemIdentifierCollection=_wantsItemIdentifierCollection - In the implementation block
@property (assign,nonatomic) BOOL wantsItemPlaybackContext;                                                 //@synthesize wantsItemPlaybackContext=_wantsItemPlaybackContext - In the implementation block
@property (assign,nonatomic) BOOL wantsContainerEntityValueProvider;                                        //@synthesize wantsContainerEntityValueProvider=_wantsContainerEntityValueProvider - In the implementation block
@property (assign,nonatomic) BOOL wantsContainerIdentifierCollection;                                       //@synthesize wantsContainerIdentifierCollection=_wantsContainerIdentifierCollection - In the implementation block
@property (assign,nonatomic) BOOL wantsContainerPlaybackContext;                                            //@synthesize wantsContainerPlaybackContext=_wantsContainerPlaybackContext - In the implementation block
@property (nonatomic,readonly) id<MusicEntityValueProviding> entityValueProvider; 
@property (nonatomic,retain) id<MusicEntityValueProviding> containerEntityValueProvider;                    //@synthesize containerEntityValueProvider=_containerEntityValueProvider - In the implementation block
@property (nonatomic,copy) MPUContentItemIdentifierCollection * containerIdentifierCollection;              //@synthesize containerIdentifierCollection=_containerIdentifierCollection - In the implementation block
@property (nonatomic,retain) id<MusicEntityValueProviding> itemEntityValueProvider;                         //@synthesize itemEntityValueProvider=_itemEntityValueProvider - In the implementation block
@property (assign,nonatomic) unsigned long long itemGlobalIndex;                                            //@synthesize itemGlobalIndex=_itemGlobalIndex - In the implementation block
@property (nonatomic,copy) MPUContentItemIdentifierCollection * itemIdentifierCollection;                   //@synthesize itemIdentifierCollection=_itemIdentifierCollection - In the implementation block
@property (nonatomic,retain) MPPlaybackContext * containerPlaybackContext;                                  //@synthesize containerPlaybackContext=_containerPlaybackContext - In the implementation block
@property (nonatomic,retain) MPPlaybackContext * itemPlaybackContext;                                       //@synthesize itemPlaybackContext=_itemPlaybackContext - In the implementation block
-(void)configureWithMediaEntity:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPUContentItemIdentifierCollection *)containerIdentifierCollection;
-(MPPlaybackContext *)itemPlaybackContext;
-(MPPlaybackContext *)containerPlaybackContext;
-(MPUContentItemIdentifierCollection *)itemIdentifierCollection;
-(id<MusicEntityValueProviding>)itemEntityValueProvider;
-(id<MusicEntityValueProviding>)containerEntityValueProvider;
-(void)setWantsContainerIdentifierCollection:(BOOL)arg1 ;
-(void)setWantsContainerEntityValueProvider:(BOOL)arg1 ;
-(void)setWantsContainerPlaybackContext:(BOOL)arg1 ;
-(void)resetOutputValues;
-(BOOL)wantsItemEntityValueProvider;
-(void)setItemEntityValueProvider:(id<MusicEntityValueProviding>)arg1 ;
-(BOOL)wantsItemGlobalIndex;
-(void)setItemGlobalIndex:(unsigned long long)arg1 ;
-(void)setWantsItemEntityValueProvider:(BOOL)arg1 ;
-(BOOL)wantsContainerEntityValueProvider;
-(void)setContainerEntityValueProvider:(id<MusicEntityValueProviding>)arg1 ;
-(void)setContainerPlaybackContext:(MPPlaybackContext *)arg1 ;
-(unsigned long long)itemGlobalIndex;
-(BOOL)wantsItemIdentifierCollection;
-(void)setItemIdentifierCollection:(MPUContentItemIdentifierCollection *)arg1 ;
-(BOOL)wantsContainerIdentifierCollection;
-(BOOL)wantsContainerPlaybackContext;
-(void)setContainerIdentifierCollection:(MPUContentItemIdentifierCollection *)arg1 ;
-(BOOL)wantsItemPlaybackContext;
-(void)setItemPlaybackContext:(MPPlaybackContext *)arg1 ;
-(void)setWantsItemPlaybackContext:(BOOL)arg1 ;
-(void)setWantsItemIdentifierCollection:(BOOL)arg1 ;
-(void)setWantsItemGlobalIndex:(BOOL)arg1 ;
-(id<MusicEntityValueProviding>)entityValueProvider;
@end

