/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData;

@interface PKPaymentNonceResponse : PKPaymentWebServiceResponse {

	NSData* _nonceData;

}

@property (nonatomic,retain) NSData * nonceData;              //@synthesize nonceData=_nonceData - In the implementation block
-(NSData *)nonceData;
-(void)setNonceData:(NSData *)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
@end

