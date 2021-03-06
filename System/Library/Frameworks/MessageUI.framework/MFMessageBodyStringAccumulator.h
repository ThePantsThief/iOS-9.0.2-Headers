/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <libobjc.A.dylib/MFMessageBodyStringAccumulator.h>

@protocol MFMessageBodyStringAccumulator <NSObject>
@required
-(void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
-(void)appendInnerTextWithConsumableNode:(id)arg1;
-(id)accumulatedString;
-(void)appendNewline;
-(void)appendRange:(NSRange)arg1 ofString:(id)arg2;
-(BOOL)isFull;
-(void)appendCustomEntityWithTag:(unsigned long long)arg1 stringRepresentation:(id)arg2;
-(void)appendString:(id)arg1;

@end


@class NSMutableString, NSString;

@interface MFMessageBodyStringAccumulator : NSObject <MFMessageBodyStringAccumulator> {

	NSMutableString* _accumulatedString;
	unsigned long long _remainingLength;
	int _options;
	int _lastEntity;
	unsigned long long _lastCustomEntityTag;
	BOOL _isFull;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithOptions:(int)arg1 lengthLimit:(unsigned long long)arg2 ;
-(void)appendInnerTextWithConsumableNode:(id)arg1 ;
-(id)accumulatedString;
-(void)appendNewline;
-(void)appendRange:(NSRange)arg1 ofString:(id)arg2 ;
-(BOOL)isFull;
-(void)appendCustomEntityWithTag:(unsigned long long)arg1 stringRepresentation:(id)arg2 ;
-(void)dealloc;
-(void)appendString:(id)arg1 ;
@end

