/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAAuthenticateRequest.h>

@class NSMutableDictionary;

@interface AARegisterRequest : AAAuthenticateRequest {

	NSMutableDictionary* _additionalCookieHeaders;

}
+(Class)responseClass;
-(id)urlString;
-(id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3 ;
-(void)addCookieHeaders:(id)arg1 ;
-(id)urlRequest;
@end

