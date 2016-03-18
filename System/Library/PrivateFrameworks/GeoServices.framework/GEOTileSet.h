/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOTileSet : PBCodable <NSCopying> {

	NSString* _baseURL;
	NSString* _localizationURL;
	NSString* _multiTileURL;
	int _scale;
	int _size;
	int _style;
	NSMutableArray* _supportedLanguages;
	int _updateBehavior;
	NSMutableArray* _validVersions;
	BOOL _multiTileURLUsesStatusCodes;
	SCD_Struct_GE7 _has;

}

@property (nonatomic,readonly) BOOL hasBaseURL; 
@property (nonatomic,retain) NSString * baseURL;                               //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) BOOL hasMultiTileURL; 
@property (nonatomic,retain) NSString * multiTileURL;                          //@synthesize multiTileURL=_multiTileURL - In the implementation block
@property (assign,nonatomic) int style;                                        //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSMutableArray * validVersions;                   //@synthesize validVersions=_validVersions - In the implementation block
@property (assign,nonatomic) int scale;                                        //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) int size;                                         //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizationURL; 
@property (nonatomic,retain) NSString * localizationURL;                       //@synthesize localizationURL=_localizationURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedLanguages;              //@synthesize supportedLanguages=_supportedLanguages - In the implementation block
@property (assign,nonatomic) BOOL hasMultiTileURLUsesStatusCodes; 
@property (assign,nonatomic) BOOL multiTileURLUsesStatusCodes;                 //@synthesize multiTileURLUsesStatusCodes=_multiTileURLUsesStatusCodes - In the implementation block
@property (assign,nonatomic) BOOL hasUpdateBehavior; 
@property (assign,nonatomic) int updateBehavior;                               //@synthesize updateBehavior=_updateBehavior - In the implementation block
-(int)size;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setScale:(int)arg1 ;
-(int)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(void)setSize:(int)arg1 ;
-(void)setStyle:(int)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)baseURL;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)supportedLanguages;
-(unsigned long long)validVersionsCount;
-(void)setHasMultiTileURLUsesStatusCodes:(BOOL)arg1 ;
-(void)setHasUpdateBehavior:(BOOL)arg1 ;
-(BOOL)hasMultiTileURLUsesStatusCodes;
-(id)validVersionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)validVersions;
-(NSString *)localizationURL;
-(void)addValidVersion:(id)arg1 ;
-(BOOL)hasUpdateBehavior;
-(unsigned long long)supportedLanguagesCount;
-(BOOL)hasBaseURL;
-(id)supportedLanguageAtIndex:(unsigned long long)arg1 ;
-(int)updateBehavior;
-(BOOL)hasLocalizationURL;
-(void)setSupportedLanguages:(NSMutableArray *)arg1 ;
-(BOOL)multiTileURLUsesStatusCodes;
-(NSString *)multiTileURL;
-(BOOL)hasMultiTileURL;
-(void)clearValidVersions;
-(void)setLocalizationURL:(NSString *)arg1 ;
-(void)setMultiTileURL:(NSString *)arg1 ;
-(void)setMultiTileURLUsesStatusCodes:(BOOL)arg1 ;
-(void)setUpdateBehavior:(int)arg1 ;
-(void)clearSupportedLanguages;
-(void)addSupportedLanguage:(id)arg1 ;
-(void)setBaseURL:(NSString *)arg1 ;
-(void)setValidVersions:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end
