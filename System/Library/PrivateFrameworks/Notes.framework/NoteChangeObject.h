/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NoteStoreObject, NSNumber, NSMutableSet;

@interface NoteChangeObject : NSManagedObject

@property (nonatomic,retain) NoteStoreObject * store; 
@property (nonatomic,retain) NSNumber * changeType; 
@property (nonatomic,retain) NSMutableSet * noteIntegerIds; 
@property (nonatomic,retain) NSMutableSet * noteServerIds; 
@property (nonatomic,retain) NSMutableSet * noteServerIntIds; 
@end

