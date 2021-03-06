/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMutableArray, NSDictionary, NSTimer;

@interface VSCacheUpdateListener : NSObject {

	NSLock* _lock;
	NSMutableArray* _updateRequestQueue;
	NSDictionary* _dataProviders;
	NSTimer* _flushTimer;
	BOOL _isListening;

}
+(id)sharedListener;
+(id)sharedListenerIfExists;
-(id)_initShared;
-(void)dealloc;
-(id)init;
-(void)startListening;
-(void)stopListening;
-(void)_enqueueRequest:(id)arg1 ;
-(void)_flush;
-(void)_spokenLanguageChanged:(id)arg1 ;
-(void)performUpdateForModelIdentifier:(id)arg1 classIdentifier:(id)arg2 ;
@end

