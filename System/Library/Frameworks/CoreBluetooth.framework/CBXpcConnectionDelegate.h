/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:59 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBXpcConnectionDelegate <NSObject>
@required
-(void)xpcConnectionDidReset;
-(void)xpcConnectionIsInvalid;
-(void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(id)arg2 reply:(/*^block*/id)arg3;
-(void)xpcConnectionDidFinalize;

@end
