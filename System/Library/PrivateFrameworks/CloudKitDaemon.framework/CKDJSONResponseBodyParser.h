/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKDResponseBodyParser.h>

@protocol OS_dispatch_queue;
@class NSError, NSObject, NSMutableData, NSString;

@interface CKDJSONResponseBodyParser : NSObject <CKDResponseBodyParser> {

	/*^block*/id _objectParsedBlock;
	NSError* _parserError;
	NSObject*<OS_dispatch_queue> _parseQueue;
	NSMutableData* _parserData;

}

@property (nonatomic,copy) id objectParsedBlock;                                   //@synthesize objectParsedBlock=_objectParsedBlock - In the implementation block
@property (nonatomic,retain) NSError * parserError;                                //@synthesize parserError=_parserError - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> parseQueue;              //@synthesize parseQueue=_parseQueue - In the implementation block
@property (nonatomic,retain) NSMutableData * parserData;                           //@synthesize parserData=_parserData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)parserError;
-(id)init;
-(void)setObjectParsedBlock:(id)arg1 ;
-(void)processData:(id)arg1 ;
-(void)finishWithCompletion:(/*^block*/id)arg1 ;
-(id)objectParsedBlock;
-(void)setParserError:(NSError *)arg1 ;
-(NSMutableData *)parserData;
-(void)setParserData:(NSMutableData *)arg1 ;
-(NSObject*<OS_dispatch_queue>)parseQueue;
-(void)setParseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

