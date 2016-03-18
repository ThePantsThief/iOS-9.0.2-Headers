/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class XBApplicationSnapshotPredicate, NSArray, XBApplicationSnapshotGenerationContext, NSString;

@interface XBApplicationSnapshotFetchRequest : NSObject <BSDescriptionProviding> {

	XBApplicationSnapshotPredicate* _predicate;
	NSArray* _sortDescriptors;
	XBApplicationSnapshotGenerationContext* _fallbackGenerationContext;

}

@property (nonatomic,retain) XBApplicationSnapshotPredicate * predicate;                                      //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                                                         //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,retain) XBApplicationSnapshotGenerationContext * fallbackGenerationContext;              //@synthesize fallbackGenerationContext=_fallbackGenerationContext - In the implementation block
@property (nonatomic,copy,readonly) NSArray * NSSortDescriptors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchRequest;
-(void)dealloc;
-(NSString *)description;
-(void)setPredicate:(XBApplicationSnapshotPredicate *)arg1 ;
-(XBApplicationSnapshotPredicate *)predicate;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(XBApplicationSnapshotGenerationContext *)fallbackGenerationContext;
-(NSArray *)NSSortDescriptors;
-(void)setFallbackGenerationContext:(XBApplicationSnapshotGenerationContext *)arg1 ;
@end
