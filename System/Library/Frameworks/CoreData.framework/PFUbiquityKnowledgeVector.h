/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:01 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface PFUbiquityKnowledgeVector : NSObject <NSCoding, NSCopying> {

	NSDictionary* _kv;
	NSDictionary* _storeKVDict;
	unsigned long long _hash;

}

@property (nonatomic,readonly) unsigned long long hash;                //@synthesize hash=_hash - In the implementation block
@property (nonatomic,readonly) unsigned long long length; 
+(id)createSetOfAllPeerIDsInKnowledgeVectors:(id)arg1 ;
+(id)createKnowledgeVectorDictionaryFromString:(id)arg1 ;
-(id)transactionNumberForPeerID:(id)arg1 ;
-(id)initWithStoreKnowledgeVectorDictionary:(id)arg1 ;
-(void)updateWithKnowledgeVector:(id)arg1 ;
-(BOOL)isZeroVector;
-(BOOL)isAncestorOfKnowledgeVector:(id)arg1 ;
-(id)allPeerIDs;
-(BOOL)conflictsWithKnowledgeVector:(id)arg1 ;
-(id)createStoreKnowledgeVectorDictionary;
-(id)newKnowledgeVectorByDecrementingPeerWithID:(id)arg1 ;
-(id)createKnowledgeVectorString;
-(id)newKnowledgeVectorBySubtractingVector:(id)arg1 ;
-(id)initWithKnowledgeVectorString:(id)arg1 ;
-(id)initWithKnowledgeVectorDictionary:(id)arg1 ;
-(id)newKnowledgeVectorByAddingKnowledgeVector:(id)arg1 ;
-(id)createAncestorVectorForConflictingVector:(id)arg1 ;
-(id)newKnowledgeVectorByIncrementingPeerWithID:(id)arg1 ;
-(id)createSetOfAllPeerIDsWithOtherVector:(id)arg1 ;
-(void)_updateHash;
-(id)initFromCopy:(id)arg1 storeKVDict:(id)arg2 hash:(unsigned long long)arg3 ;
-(id)initWithKnowledgeVectorDictionary:(id)arg1 andStoreKnowledgeVectorDictionary:(id)arg2 ;
-(BOOL)hasPeerIDInCommonWith:(id)arg1 ;
-(BOOL)isDescendantOfKnowledgeVector:(id)arg1 ;
-(void)decrementToMinimumWithKnowledgeVector:(id)arg1 ;
-(BOOL)canMergeWithKnowledgeVector:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

