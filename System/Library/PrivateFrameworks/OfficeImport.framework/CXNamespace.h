/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CXNamespace : NSObject {

	const char* mUri;
	xmlDoc* mDocument;
	xmlNs* mDocumentNamespace;
	CXNamespace* mFallbackNamespace;

}

@property (nonatomic,retain) CXNamespace * fallbackNamespace; 
+(void)registerNamespace:(id)arg1 ;
+(BOOL)isNamespaceSupported:(const char*)arg1 ;
+(BOOL)isPrefixSupportedFromNodeContext:(xmlNode*)arg1 prefix:(const char*)arg2 ;
+(BOOL)isPrefixSupportedFromStream:(xmlTextReaderRef)arg1 prefix:(const char*)arg2 ;
+(void)clearRegisteredNamespaces;
-(void)dealloc;
-(id)init;
-(BOOL)containsNode:(xmlNode*)arg1 ;
-(BOOL)containsAttribute:(xmlAttr*)arg1 ;
-(const char*)uri;
-(CXNamespace *)fallbackNamespace;
-(id)initUnsupportedNsWithUri:(const char*)arg1 ;
-(id)initWithUri:(const char*)arg1 ;
-(const char*)fallbackUri;
-(id)initWithUri:(const char*)arg1 fallbackNamespace:(id)arg2 ;
-(void)setFallbackNamespace:(CXNamespace *)arg1 ;
@end

