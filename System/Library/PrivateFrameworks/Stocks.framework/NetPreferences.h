/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NetPreferences : NSObject {

	NSString* _buildVersion;
	NSString* _productVersion;
	NSString* _UUID;
	BOOL _serviceDebugging;
	BOOL _isNetworkReachable;
	NSString* _requestCountryCode;
	NSString* _requestLanguageCode;
	NSString* _acceptLanguageCode;

}

@property (assign,getter=isNetworkReachable,nonatomic) BOOL networkReachable; 
@property (retain) NSString * requestCountryCode; 
@property (retain) NSString * requestLanguageCode; 
@property (retain) NSString * acceptLanguageCode; 
+(id)sharedPreferences;
+(void)clearSharedPreferences;
-(BOOL)isNetworkReachable;
-(id)init;
-(id)UUID;
-(void)resetLocale;
-(id)stocksYQLBaseURL;
-(id)signedRequestForURL:(id)arg1 parameters:(id)arg2 ;
-(BOOL)serviceDebugging;
-(void)setRequestCountryCode:(NSString *)arg1 ;
-(void)setRequestLanguageCode:(NSString *)arg1 ;
-(void)setAcceptLanguageCode:(NSString *)arg1 ;
-(NSString *)requestCountryCode;
-(NSString *)requestLanguageCode;
-(id)stocksLanguageCodeForLanguage:(id)arg1 ;
-(NSString *)acceptLanguageCode;
-(id)_stocksUserAgent;
-(id)stocksCountryCode;
-(id)_stocksAcceptLanguage;
-(void)setupLogging;
-(void)setNetworkReachable:(BOOL)arg1 ;
-(id)stocksLanguageCode;
-(void)addStocksHeadersToPostRequest:(id)arg1 ;
-(id)financeRequestAttributes;
-(id)_urlStringWithHost:(id)arg1 ;
-(id)fullQuoteURLOverrideForStock:(id)arg1 ;
-(id)defaultBacksideLogoURL;
-(id)backsideLogoURL;
-(id)_cacheDirectoryPath;
-(id)logoButtonImage;
-(id)logoBacksideImage;
-(id)serviceDebuggingPath;
@end
