/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:03 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPCollection.h>

@class NSString;

@interface SAMPAudiobookCollection : SAMPCollection

@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,copy) NSString * sortArtist; 
+(id)audiobookCollection;
+(id)audiobookCollectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)artist;
-(void)setArtist:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)sortArtist;
-(void)setSortArtist:(NSString *)arg1 ;
@end
