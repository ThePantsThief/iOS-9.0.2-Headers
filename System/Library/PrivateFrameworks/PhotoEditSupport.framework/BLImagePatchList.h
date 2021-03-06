/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@class NSMutableArray;

@interface BLImagePatchList : NSObject {

	CGImageRef _baseImage;
	CGSize _size;
	NSMutableArray* _patchArray;

}
+(id)imagePatchListWithSingleImage:(CGImageRef)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(long long)count;
-(id)description;
-(id)initWithImage:(CGImageRef)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)addPatch:(id)arg1 ;
-(void)removeAllPatches;
@end

