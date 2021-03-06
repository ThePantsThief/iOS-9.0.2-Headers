/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDictionary, NSString;

@interface PKBarcode : NSObject <NSSecureCoding> {

	NSData* _messageData;
	NSDictionary* _options;
	long long _format;
	NSString* _altText;

}

@property (nonatomic,copy) NSData * messageData;                //@synthesize messageData=_messageData - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * altText;                  //@synthesize altText=_altText - In the implementation block
@property (assign,nonatomic) long long format;                  //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) BOOL isTall; 
+(BOOL)supportsSecureCoding;
-(id)_imageFromBarcodeMessage;
-(id)image;
-(NSString *)altText;
-(NSData *)messageData;
-(long long)format;
-(void)setFormat:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(void)setMessageData:(NSData *)arg1 ;
-(void)setAltText:(NSString *)arg1 ;
-(id)initWithPassDictionary:(id)arg1 bundle:(id)arg2 ;
-(BOOL)isTall;
@end

