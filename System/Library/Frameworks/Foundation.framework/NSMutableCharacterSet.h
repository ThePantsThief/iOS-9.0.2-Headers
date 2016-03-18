/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:10 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCharacterSet.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying>
+(id)nonBaseCharacterSet;
+(id)decomposableCharacterSet;
+(id)capitalizedLetterCharacterSet;
+(id)illegalCharacterSet;
+(id)characterSetWithContentsOfFile:(id)arg1 ;
+(id)characterSetWithBitmapRepresentation:(id)arg1 ;
+(id)letterCharacterSet;
+(id)whitespaceAndNewlineCharacterSet;
+(id)controlCharacterSet;
+(id)newlineCharacterSet;
+(id)uppercaseLetterCharacterSet;
+(id)whitespaceCharacterSet;
+(id)characterSetWithCharactersInString:(id)arg1 ;
+(id)punctuationCharacterSet;
+(id)symbolCharacterSet;
+(id)decimalDigitCharacterSet;
+(id)lowercaseLetterCharacterSet;
+(id)characterSetWithRange:(NSRange)arg1 ;
+(id)alphanumericCharacterSet;
-(BOOL)isMutable;
-(void)removeCharactersInRange:(NSRange)arg1 ;
-(void)addCharactersInRange:(NSRange)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)formUnionWithCharacterSet:(id)arg1 ;
-(void)addCharactersInString:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)removeCharactersInString:(id)arg1 ;
-(void)formIntersectionWithCharacterSet:(id)arg1 ;
-(void)invert;
@end
