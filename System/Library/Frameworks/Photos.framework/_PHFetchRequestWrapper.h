/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSFetchRequest, NSManagedObjectID;

@interface _PHFetchRequestWrapper : NSObject <NSCopying> {

	unsigned long long _hash;
	NSFetchRequest* _fetchRequest;
	NSManagedObjectID* _containerIdentifier;

}

@property (nonatomic,readonly) NSFetchRequest * fetchRequest;                        //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long hash;                              //@synthesize hash=_hash - In the implementation block
-(id)initWithFetchRequest:(id)arg1 containerIdentifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSManagedObjectID *)containerIdentifier;
-(NSFetchRequest *)fetchRequest;
@end
