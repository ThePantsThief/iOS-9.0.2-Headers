/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIMediaSocialAuthor.h>

@class NSString, UIImage;

@interface SKUICommenter : SKUIMediaSocialAuthor {

	BOOL _isAttributed;
	BOOL _isMySelf;
	BOOL _useImageCopy;
	NSString* _attributedName;
	UIImage* _thumbnailImage;

}

@property (nonatomic,retain) NSString * attributedName;              //@synthesize attributedName=_attributedName - In the implementation block
@property (assign,nonatomic) BOOL isAttributed;                      //@synthesize isAttributed=_isAttributed - In the implementation block
@property (assign,nonatomic) BOOL isMySelf;                          //@synthesize isMySelf=_isMySelf - In the implementation block
@property (assign,nonatomic) BOOL useImageCopy;                      //@synthesize useImageCopy=_useImageCopy - In the implementation block
@property (nonatomic,copy) UIImage * thumbnailImage;                 //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
-(UIImage *)thumbnailImage;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(BOOL)isAttributed;
-(BOOL)isMySelf;
-(NSString *)attributedName;
-(id)initWithAuthor:(id)arg1 ;
-(void)setIsMySelf:(BOOL)arg1 ;
-(void)setIsAttributed:(BOOL)arg1 ;
-(void)setAttributedName:(NSString *)arg1 ;
-(BOOL)useImageCopy;
-(void)setUseImageCopy:(BOOL)arg1 ;
@end
