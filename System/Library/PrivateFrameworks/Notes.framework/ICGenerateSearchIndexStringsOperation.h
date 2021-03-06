/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ICSearchIndexableIdentifier, NSMutableArray;

@interface ICGenerateSearchIndexStringsOperation : NSOperation {

	ICSearchIndexableIdentifier* _searchIndexableIdentifier;
	NSMutableArray* _mutableSearchStrings;

}

@property (nonatomic,copy) ICSearchIndexableIdentifier * searchIndexableIdentifier;              //@synthesize searchIndexableIdentifier=_searchIndexableIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableSearchStrings;                              //@synthesize mutableSearchStrings=_mutableSearchStrings - In the implementation block
-(id)init;
-(void)setMutableSearchStrings:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mutableSearchStrings;
-(ICSearchIndexableIdentifier *)searchIndexableIdentifier;
-(void)setSearchIndexableIdentifier:(ICSearchIndexableIdentifier *)arg1 ;
-(id)searchStrings;
-(void)addStrings:(id)arg1 ;
@end

