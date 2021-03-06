/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryViewConfiguration.h>

@class MusicEntityCollectionViewDescriptor;

@interface MusicLibraryBrowseCollectionViewConfiguration : MusicLibraryViewConfiguration {

	MusicEntityCollectionViewDescriptor* _entityCollectionViewDescriptor;
	BOOL _wantsEdgeToEdgeLayout;

}

@property (nonatomic,readonly) MusicEntityCollectionViewDescriptor * entityViewDescriptor; 
@property (assign,nonatomic) BOOL wantsEdgeToEdgeLayout;                                                //@synthesize wantsEdgeToEdgeLayout=_wantsEdgeToEdgeLayout - In the implementation block
-(id)init;
-(id)loadEntityViewDescriptor;
-(MusicEntityCollectionViewDescriptor *)entityViewDescriptor;
-(void)setWantsEdgeToEdgeLayout:(BOOL)arg1 ;
-(BOOL)wantsEdgeToEdgeLayout;
@end

