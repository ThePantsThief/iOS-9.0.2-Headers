/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFMessageBodyParser.h>

@class DOMDocument;

@interface MFMessageBodyDOMParser : MFMessageBodyParser {

	DOMDocument* _document;

}
+(BOOL)documentContainsAnyQuotation:(id)arg1 ;
-(id)initWithDOMDocument:(id)arg1 ;
-(id)rangeForElement:(id)arg1 ;
-(Class)messageBodyElementClass;
-(void)_consumeAccumulatedNodes:(id)arg1 ;
-(void)extendRange:(id)arg1 toElement:(id)arg2 ;
-(id)rangeFromElement:(id)arg1 toElement:(id)arg2 ;
-(BOOL)parse;
-(void)dealloc;
@end
