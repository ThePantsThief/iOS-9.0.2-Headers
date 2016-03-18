/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/SKPayment.h>

@class NSString, NSData, NSDictionary;

@interface SKMutablePayment : SKPayment

@property (nonatomic,copy) NSString * applicationUsername; 
@property (nonatomic,copy) NSString * productIdentifier; 
@property (assign,nonatomic) long long quantity; 
@property (nonatomic,copy) NSData * requestData; 
@property (assign,nonatomic) BOOL simulatesAskToBuyInSandbox; 
@property (nonatomic,copy) NSString * partnerIdentifier; 
@property (nonatomic,copy) NSString * partnerTransactionIdentifier; 
@property (nonatomic,copy) NSDictionary * requestParameters; 
-(void)setProductIdentifier:(NSString *)arg1 ;
-(void)setApplicationUsername:(NSString *)arg1 ;
-(void)setQuantity:(long long)arg1 ;
-(void)setSimulatesAskToBuyInSandbox:(BOOL)arg1 ;
-(void)setPartnerTransactionIdentifier:(NSString *)arg1 ;
-(void)setRequestData:(NSData *)arg1 ;
-(void)setRequestParameters:(NSDictionary *)arg1 ;
-(void)setPartnerIdentifier:(NSString *)arg1 ;
@end
