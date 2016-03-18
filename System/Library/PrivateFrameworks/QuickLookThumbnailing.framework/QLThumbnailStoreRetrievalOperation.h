/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol QLThumbnailGenerationRequest;
@class NSURL, NSError, QLThumbnailAddition, NSDictionary, NSData, GSAddition;

@interface QLThumbnailStoreRetrievalOperation : NSOperation {

	NSURL* _documentURL;
	NSError* _error;
	BOOL _finished;
	BOOL _executing;
	BOOL _allowsThumbnailGeneration;
	BOOL _generateThumbnailsAtBackgroundPriority;
	QLThumbnailAddition* _addition;
	id<QLThumbnailGenerationRequest> _thumbnailRequest;
	NSURL* _destinationURL;

}

@property (assign) BOOL allowsThumbnailGeneration;                                //@synthesize allowsThumbnailGeneration=_allowsThumbnailGeneration - In the implementation block
@property (assign) BOOL generateThumbnailsAtBackgroundPriority;                   //@synthesize generateThumbnailsAtBackgroundPriority=_generateThumbnailsAtBackgroundPriority - In the implementation block
@property (readonly) NSDictionary * thumbnailImagesDictionary; 
@property (readonly) NSData * serializedQuickLookMetadataDictionary; 
@property (retain) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (readonly) BOOL thumbnailWasAutomaticallyGenerated; 
@property (readonly) GSAddition * genStoreAddition; 
@property (assign,getter=isExecuting,nonatomic) BOOL executing;                   //@synthesize executing=_executing - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                     //@synthesize finished=_finished - In the implementation block
+(BOOL)canMostRecentClientsGenerateThumbnailsForUTI:(id)arg1 ;
-(BOOL)isConcurrent;
-(NSError *)error;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)start;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)_finishIfCancelled;
-(NSDictionary *)thumbnailImagesDictionary;
-(NSData *)serializedQuickLookMetadataDictionary;
-(id)initWithDocumentAtURL:(id)arg1 ;
-(void)setExecuting:(BOOL)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)_finishBecauseGenerationFailedWithUnderlyingError:(id)arg1 ;
-(void)_afterThumbnailIsGenerated;
-(void)_generateThumbnail;
-(void)afterThumbnailIsPutInGenstore;
-(GSAddition *)genStoreAddition;
-(BOOL)thumbnailWasAutomaticallyGenerated;
-(BOOL)allowsThumbnailGeneration;
-(void)setAllowsThumbnailGeneration:(BOOL)arg1 ;
-(BOOL)generateThumbnailsAtBackgroundPriority;
-(void)setGenerateThumbnailsAtBackgroundPriority:(BOOL)arg1 ;
@end
