/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:38 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class CUIPSDImageRef;

@interface CUIPSDLayerBaseRef : NSObject {

	CUIPSDImageRef* _imageRef;
	unsigned _layerIndex;

}

@property (readonly) CGRect bounds; 
@property (readonly) BOOL visibility; 
@property (readonly) double opacity; 
@property (readonly) double fillOpacity; 
@property (readonly) int blendMode; 
@property (readonly) BOOL hasLayerMask; 
@property (readonly) BOOL hasVectorMask; 
-(CGRect)bounds;
-(id)name;
-(double)opacity;
-(CPSDLayerRecord*)_psdLayerRecord;
-(BOOL)hasVectorMask;
-(BOOL)hasLayerMask;
-(id)_psdImageRef;
-(BOOL)isLayerGroup;
-(double)fillOpacity;
-(id)layerMaskRef;
-(id)vectorMaskRef;
-(CGImageRef)_createMaskFromAlphaChannel:(long long)arg1 ;
-(int)blendMode;
-(BOOL)visibility;
@end
