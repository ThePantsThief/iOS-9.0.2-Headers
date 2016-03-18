/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:59 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SAAceDomainSignal : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * appIdHints; 
@property (nonatomic,copy) NSString * domain; 
+(id)aceDomainSignal;
+(id)aceDomainSignalWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)appIdHints;
-(void)setAppIdHints:(NSArray *)arg1 ;
@end
