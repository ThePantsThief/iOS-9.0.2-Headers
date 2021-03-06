/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:58 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSDictionary, NSLock;

@interface GEOLocalizationRegionsInfo : NSObject {

	NSDictionary* _regions;
	NSLock* _regionsLock;

}
-(void)dealloc;
-(id)init;
-(void)reset;
-(BOOL)needsLocalizationForKey:(const GEOTileKey*)arg1 language:(id)arg2 ;
@end

