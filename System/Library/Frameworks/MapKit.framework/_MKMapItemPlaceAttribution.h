/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKMapItemAttribution.h>

@class GEOMapItemPlaceAttribution, NSArray;

@interface _MKMapItemPlaceAttribution : _MKMapItemAttribution {

	GEOMapItemPlaceAttribution* _geoPlaceAttribution;

}

@property (nonatomic,readonly) NSArray * checkInURLs; 
-(id)initWithGEOMapItemAttribution:(id)arg1 ;
-(id)urlsForDealWithIdentifier:(id)arg1 ;
-(NSArray *)checkInURLs;
@end

