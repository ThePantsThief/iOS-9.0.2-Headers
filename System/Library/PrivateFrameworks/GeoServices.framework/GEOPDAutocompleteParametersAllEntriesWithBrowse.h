/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDAutocompleteEntry, NSData, NSString, GEOPDViewportInfo;

@interface GEOPDAutocompleteParametersAllEntriesWithBrowse : PBCodable <NSCopying> {

	GEOPDAutocompleteEntry* _categorySuggestionEntry;
	NSData* _categorySuggestionEntryMetadata;
	int _maxResults;
	NSString* _query;
	GEOPDViewportInfo* _viewportInfo;
	BOOL _highlightDiff;
	SCD_Struct_GE7 _has;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) NSString * query;                                              //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo;                              //@synthesize viewportInfo=_viewportInfo - In the implementation block
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) int maxResults;                                                //@synthesize maxResults=_maxResults - In the implementation block
@property (assign,nonatomic) BOOL hasHighlightDiff; 
@property (assign,nonatomic) BOOL highlightDiff;                                            //@synthesize highlightDiff=_highlightDiff - In the implementation block
@property (nonatomic,readonly) BOOL hasCategorySuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * categorySuggestionEntryMetadata;                      //@synthesize categorySuggestionEntryMetadata=_categorySuggestionEntryMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasCategorySuggestionEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * categorySuggestionEntry;              //@synthesize categorySuggestionEntry=_categorySuggestionEntry - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)query;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasQuery;
-(BOOL)highlightDiff;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setHighlightDiff:(BOOL)arg1 ;
-(BOOL)hasViewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(BOOL)hasMaxResults;
-(BOOL)hasHighlightDiff;
-(void)setMaxResults:(int)arg1 ;
-(void)setHasHighlightDiff:(BOOL)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(int)maxResults;
-(void)setCategorySuggestionEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(BOOL)hasCategorySuggestionEntryMetadata;
-(BOOL)hasCategorySuggestionEntry;
-(GEOPDAutocompleteEntry *)categorySuggestionEntry;
-(void)setCategorySuggestionEntryMetadata:(NSData *)arg1 ;
-(NSData *)categorySuggestionEntryMetadata;
-(BOOL)readFrom:(id)arg1 ;
@end
