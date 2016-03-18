/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface AutoEncodeDecodeObject : NSObject <NSCopying> {

	NSArray* _keysToEncode;

}

@property (nonatomic,retain) NSArray * keysToEncode;              //@synthesize keysToEncode=_keysToEncode - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)keysToEncode;
-(id)getKeysToEncode;
-(void)setKeysToEncode:(NSArray *)arg1 ;
-(BOOL)isEqualToObject:(id)arg1 ;
@end
