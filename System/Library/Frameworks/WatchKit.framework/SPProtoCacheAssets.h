/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface SPProtoCacheAssets : PBCodable <NSCopying> {

	NSMutableArray* _assets;

}

@property (nonatomic,retain) NSMutableArray * assets;              //@synthesize assets=_assets - In the implementation block
-(void)addAssets:(id)arg1 ;
-(void)setAssets:(NSMutableArray *)arg1 ;
-(NSMutableArray *)assets;
-(unsigned long long)assetsCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearAssets;
-(id)assetsAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

