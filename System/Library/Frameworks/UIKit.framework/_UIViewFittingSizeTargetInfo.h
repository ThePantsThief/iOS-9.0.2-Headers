/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIViewFittingSizeTargetInfo : NSObject <NSCopying> {

	BOOL _dummy;
	float _horizontalPriority;
	float _verticalPriority;
	CGSize _targetSize;

}

@property (nonatomic,readonly) CGSize targetSize;                     //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) float horizontalPriority;              //@synthesize horizontalPriority=_horizontalPriority - In the implementation block
@property (nonatomic,readonly) float verticalPriority;                //@synthesize verticalPriority=_verticalPriority - In the implementation block
@property (assign,getter=isDummy,nonatomic) BOOL dummy;               //@synthesize dummy=_dummy - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)horizontalPriority;
-(float)verticalPriority;
-(CGSize)targetSize;
-(BOOL)isDummy;
-(void)setDummy:(BOOL)arg1 ;
-(BOOL)isEqualToTargetInfo:(id)arg1 ;
-(id)initWithTargetSize:(CGSize)arg1 horizontalPriority:(float)arg2 verticalPriority:(float)arg3 ;
@end
