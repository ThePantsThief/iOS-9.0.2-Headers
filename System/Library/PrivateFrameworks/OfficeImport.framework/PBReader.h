/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCBReader.h>

@interface PBReader : OCBReader {

	PptObjectFactory* mPptObjectFactory;
	const void* mBuffer;

}

@property (nonatomic,readonly) PptBinaryReader* pptReader; 
-(void)dealloc;
-(BOOL)start;
-(id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2 ;
-(id)read;
-(OCCBinaryStreamer*)allocBinaryStreamerWithCryptoKey:(OCCCryptoKeyRef)arg1 baseOutputFilenameInUTF8:(const char*)arg2 ;
-(OCCEncryptionInfoReader*)encryptionInfoReader;
-(PptBinaryReader*)pptReader;
@end
