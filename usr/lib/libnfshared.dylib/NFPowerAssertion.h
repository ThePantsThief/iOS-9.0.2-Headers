/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
@class NSMutableArray;

@interface NFPowerAssertion : NSObject {

	unsigned _powerNotificationConnection;
	IONotificationPortRef _powerNotificationPort;
	unsigned _powerNotificationNotifier;
	unsigned _assertionID;
	NSMutableArray* _assertionHolders;

}
+(id)sharedPowerAssertion;
-(void)dealloc;
-(id)init;
-(void)releasePowerAssertion:(id)arg1 ;
-(BOOL)holdPowerAssertion:(id)arg1 ;
@end

