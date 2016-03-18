/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapServiceCompletionTicket.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse, NSDictionary, GEOMapServiceTraits, NSString;

@interface _GEOPlaceSearchAutocompleteTicket : NSObject <GEOMapServiceCompletionTicket> {

	GEOPDPlaceRequest* _request;
	GEOPDPlaceResponse* _response;
	NSDictionary* _userInfo;
	GEOMapServiceTraits* _traits;
	BOOL _canceled;
	NSString* _searchQuery;

}

@property (getter=isCanceled,nonatomic,readonly) BOOL canceled;              //@synthesize canceled=_canceled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits;                 //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
-(void)cancel;
-(void)dealloc;
-(GEOMapServiceTraits *)traits;
-(NSDictionary *)responseUserInfo;
-(void)submitWithAutoCompletionHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(BOOL)matchesFragment:(id)arg1 ;
-(BOOL)isCanceled;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 searchQuery:(id)arg3 ;
@end
