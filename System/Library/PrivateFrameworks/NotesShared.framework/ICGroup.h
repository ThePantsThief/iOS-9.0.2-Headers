/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, ICNote, NSSet, ICAuthor;

@interface ICGroup : NSManagedObject

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSNumber * shareTimestamp; 
@property (nonatomic,retain) ICNote * notes; 
@property (nonatomic,retain) NSSet * authors; 
@property (nonatomic,readonly) ICAuthor * owner; 
@property (nonatomic,readonly) NSSet * sharedWith; 
@property (nonatomic,readonly) NSSet * sharedWithDevices; 
-(NSSet *)sharedWith;
-(NSSet *)sharedWithDevices;
-(ICAuthor *)owner;
@end
