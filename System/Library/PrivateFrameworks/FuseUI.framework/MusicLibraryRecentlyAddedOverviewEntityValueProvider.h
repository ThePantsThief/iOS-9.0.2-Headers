/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/MusicEntityValueProviding.h>

@class MPMediaQuery, NSString;

@interface MusicLibraryRecentlyAddedOverviewEntityValueProvider : NSObject <MusicEntityValueProviding> {

	BOOL _hasValidItemCount;
	unsigned long long _itemCount;
	MPMediaQuery* _query;

}

@property (nonatomic,copy,readonly) MPMediaQuery * query;              //@synthesize query=_query - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQuery:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(MPMediaQuery *)query;
-(id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(CGSize)arg2 destinationScale:(double)arg3 ;
-(id)entityUniqueIdentifier;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)valuesForEntityProperties:(id)arg1 ;
@end
