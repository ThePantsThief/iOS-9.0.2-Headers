/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:59 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <libobjc.A.dylib/CBPairingAgentParentDelegate.h>
#import <libobjc.A.dylib/CBXpcConnectionDelegate.h>

@protocol CBCentralManagerDelegate;
@class NSMapTable, CBXpcConnection, CBPairingAgent, NSString;

@interface CBCentralManager : NSObject <CBPairingAgentParentDelegate, CBXpcConnectionDelegate> {

	struct {
		unsigned willRestoreState : 1;
		unsigned didDiscoverPeripheral : 1;
		unsigned didConnectPeripheral : 1;
		unsigned didFailToConnectPeripheral : 1;
		unsigned didDisconnectPeripheral : 1;
		unsigned didUpdatePeripheralConnectionState : 1;
		unsigned didLoseZone : 1;
		unsigned didUpdateConnectionParameters : 1;
	}  _delegateFlags;
	NSMapTable* _peripherals;
	CBXpcConnection* _connection;
	CBPairingAgent* _pairingAgent;
	BOOL _isScanning;
	id<CBCentralManagerDelegate> _delegate;
	long long _state;

}

@property (assign,nonatomic) id<CBCentralManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) long long state;                                              //@synthesize state=_state - In the implementation block
@property (assign) BOOL isScanning;                                              //@synthesize isScanning=_isScanning - In the implementation block
@property (nonatomic,readonly) CBPairingAgent * sharedPairingAgent;              //@synthesize pairingAgent=_pairingAgent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isMsgAllowedWhenOff:(int)arg1 ;
-(BOOL)isMsgAllowedAlways:(int)arg1 ;
-(BOOL)sendMsg:(int)arg1 args:(id)arg2 ;
-(id)sendSyncMsg:(int)arg1 args:(id)arg2 ;
-(id)peripheralWithInfo:(id)arg1 ;
-(void)forEachPeripheral:(/*^block*/id)arg1 ;
-(void)orphanPeripherals;
-(id)retrieveConnectedPeripheralsWithServices:(id)arg1 allowAll:(BOOL)arg2 ;
-(void)setIsScanning:(BOOL)arg1 ;
-(id)dataArrayToUUIDArray:(id)arg1 ;
-(id)peripheralWithIdentifier:(id)arg1 ;
-(void)handleStateUpdated:(id)arg1 ;
-(void)handleRestoringState:(id)arg1 ;
-(void)handlePeripheralDiscovered:(id)arg1 ;
-(void)handlePeripheralConnectionCompleted:(id)arg1 ;
-(void)handlePeripheralDisconnectionCompleted:(id)arg1 ;
-(void)handlePeripheralConnectionStateUpdated:(id)arg1 ;
-(void)handleZoneLost:(id)arg1 ;
-(void)handleConnectionParametersUpdated:(id)arg1 ;
-(void)handlePeripheralMsg:(int)arg1 args:(id)arg2 ;
-(id)peerWithInfo:(id)arg1 ;
-(void)xpcConnectionDidReset;
-(void)xpcConnectionIsInvalid;
-(void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)xpcConnectionDidFinalize;
-(void)setDesiredConnectionLatency:(long long)arg1 forPeripheral:(id)arg2 ;
-(void)setConnectionTargetQueue:(id)arg1 ;
-(void)setDelegate:(id<CBCentralManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(oneway void)release;
-(id<CBCentralManagerDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 ;
-(CBPairingAgent *)sharedPairingAgent;
-(BOOL)isScanning;
-(id)retrieveConnectedPeripheralsWithServices:(id)arg1 ;
-(void)cancelPeripheralConnection:(id)arg1 force:(BOOL)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(id)retrievePeripheralsWithIdentifiers:(id)arg1 ;
-(void)connectPeripheral:(id)arg1 options:(id)arg2 ;
-(void)cancelPeripheralConnection:(id)arg1 ;
-(void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2 ;
-(void)stopScan;
@end

