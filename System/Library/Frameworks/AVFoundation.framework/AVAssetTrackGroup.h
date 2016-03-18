/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVAssetTrackGroupInternal, NSArray;

@interface AVAssetTrackGroup : NSObject <NSCopying> {

	AVAssetTrackGroupInternal* _assetTrackGroup;

}

@property (nonatomic,readonly) NSArray * trackIDs; 
-(id)initWithAsset:(id)arg1 trackIDs:(id)arg2 ;
-(NSArray *)trackIDs;
-(id)_assetComparisonToken;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
@end
