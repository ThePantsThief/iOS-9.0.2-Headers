/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUILayoutRequest.h>

@class NSArray, NSString;

@interface SKUIEditorialLinkLayoutRequest : NSObject <SKUILayoutRequest> {

	NSArray* _links;
	double _width;

}

@property (nonatomic,copy) NSArray * links;                         //@synthesize links=_links - In the implementation block
@property (assign,nonatomic) double width;                          //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Class layoutClass; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)width;
-(NSArray *)links;
-(void)setWidth:(double)arg1 ;
-(void)setLinks:(NSArray *)arg1 ;
-(Class)layoutClass;
@end
