/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:37 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XPCClientDelegate.h>

@protocol WPAirPlaySoloDelegate;
@class XPCClient, NSString;

@interface WPAirPlaySolo : NSObject <XPCClientDelegate> {

	long long _state;
	XPCClient* _connection;
	id<WPAirPlaySoloDelegate> _delegate;

}

@property (assign) long long state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) XPCClient * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<WPAirPlaySoloDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<WPAirPlaySoloDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<WPAirPlaySoloDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(XPCClient *)connection;
-(void)setConnection:(XPCClient *)arg1 ;
-(void)connectionInterrupted;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)updateState:(long long)arg1 ;
-(void)messageArrived:(id)arg1 ;
-(void)connectionDied;
-(void)startConnectionlessAdvertisingWithData:(id)arg1 ;
-(void)stopConnectionlessAdvertising;
-(void)startConnectionlessScanningWithData:(id)arg1 ;
-(void)stopConnectionlessScanningWithData:(id)arg1 ;
-(void)startTrackingPeer:(id)arg1 withData:(id)arg2 ;
-(void)stopTrackingPeer:(id)arg1 withData:(id)arg2 ;
@end

