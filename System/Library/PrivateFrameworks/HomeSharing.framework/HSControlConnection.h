/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:10 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HomeSharing-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol HSControlConnectionDelegate;
@class NSOutputStream, NSString;

@interface HSControlConnection : NSObject <NSStreamDelegate> {

	unsigned _key;
	NSOutputStream* _outputStream;
	double _timestamp;
	unsigned _protocolVersion;
	id<HSControlConnectionDelegate> _delegate;

}

@property (assign,nonatomic) id<HSControlConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned protocolVersion;                              //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)setDelegate:(id<HSControlConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<HSControlConnectionDelegate>)delegate;
-(void)close;
-(void)open;
-(void)setProtocolVersion:(unsigned)arg1 ;
-(unsigned)protocolVersion;
-(id)_newDataForControlEventMessage:(SCD_Struct_HS3)arg1 ;
-(id)_newDataForControlExtendedMessage:(SCD_Struct_HS3)arg1 withData:(id)arg2 ;
-(void)_sendTouchEvent:(long long)arg1 locations:(const unsigned*)arg2 count:(unsigned long long)arg3 velocity:(SCD_Struct_HS4)arg4 ;
-(id)_newDataForControlTouchEventMessage_v1:(SCD_Struct_HS5*)arg1 ;
-(id)_newDataForControlTouchEventMessage_v1_1:(SCD_Struct_HS6*)arg1 ;
-(id)initWithHost:(id)arg1 port:(unsigned)arg2 key:(unsigned)arg3 ;
-(void)sendEvent:(long long)arg1 value:(unsigned)arg2 ;
-(void)sendShowItemDetailWithDictionary:(id)arg1 ;
-(void)sendTouchesBegan:(const unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)sendTouchesEnded:(const unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)sendTouchesMoved:(const unsigned*)arg1 count:(unsigned long long)arg2 velocity:(SCD_Struct_HS4)arg3 ;
@end
