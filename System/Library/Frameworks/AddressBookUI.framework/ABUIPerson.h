/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSData;

@interface ABUIPerson : NSObject <NSCopying> {

	void* _record;
	void* _addressBook;
	void* _source;
	NSArray* _linkedPeople;

}

@property (readonly) int recordID; 
@property (readonly) unsigned recordType; 
@property (readonly) void* record;                                      //@synthesize record=_record - In the implementation block
@property (readonly) void* source;                                      //@synthesize source=_source - In the implementation block
@property (readonly) void* addressBook;                                 //@synthesize addressBook=_addressBook - In the implementation block
@property (readonly) BOOL recordWasDeleted; 
@property (readonly) BOOL hasValidRecordID; 
@property (readonly) BOOL isMeCard; 
@property (readonly) BOOL hasLinkedPeople; 
@property (readonly) unsigned long long linkedPeopleCount; 
@property (readonly) NSArray * linkedPeople; 
@property (readonly) BOOL isReadonly; 
@property (readonly) BOOL areAllLinkedPeopleReadonly; 
@property (readonly) BOOL isRemote; 
@property (readonly) void* policy; 
@property (readonly) int kind; 
@property (readonly) NSString * name; 
@property (readonly) NSString * phoneticName; 
@property (readonly) NSData * photoThumbnail; 
@property (readonly) ABUIPerson * preferredPersonForName; 
@property (readonly) NSString * preferredName; 
@property (readonly) ABUIPerson * preferredPersonForPhoto; 
@property (readonly) NSData * preferredPhotoThumbnail; 
@property (readonly) BOOL hasPhoto; 
@property (readonly) BOOL hasPreferredPhoto; 
@property (readonly) NSString * primarySourceName; 
@property (readonly) NSString * secondarySourceName; 
@property (readonly) BOOL isFromFacebook; 
+(void)setAccountStore:(id)arg1 ;
+(id)personWithABPerson:(void*)arg1 ;
+(id)personInSource:(void*)arg1 ;
+(id)personWithABRecordID:(int)arg1 fromAddressBook:(void*)arg2 ;
+(id)personInAddressBook:(void*)arg1 ;
+(id)person;
-(BOOL)hasValidRecordID;
-(NSData *)preferredPhotoThumbnail;
-(BOOL)isReadonly;
-(NSData *)photoThumbnail;
-(BOOL)addToGroup:(void*)arg1 ;
-(NSString *)primarySourceName;
-(NSString *)secondarySourceName;
-(void*)copyPropertyValue:(int)arg1 ;
-(BOOL)allowsCustomLabelsForProperty:(int)arg1 ;
-(BOOL)isMeCard;
-(NSArray *)linkedPeople;
-(ABUIPerson *)preferredPersonForName;
-(void)removePropertyValue:(int)arg1 ;
-(id)nameIgnoringOrganization:(BOOL)arg1 ;
-(BOOL)addToAddressBook:(void*)arg1 ;
-(BOOL)updateNewPersonKindFromName;
-(ABUIPerson *)preferredPersonForPhoto;
-(BOOL)isFromFacebook;
-(id)policiesForAllLinkedPeople;
-(BOOL)areAllLinkedPeopleReadonly;
-(void)setNamePropertiesFromPerson:(id)arg1 ;
-(BOOL)linkToPerson:(id)arg1 ;
-(void)mergeValuesFromRecord:(void*)arg1 ;
-(BOOL)updatePersonKindFromName;
-(BOOL)hasLinkedPeople;
-(NSString *)preferredName;
-(void)setAsPreferredPersonForName;
-(BOOL)recordWasDeleted;
-(id)reloadFromDB;
-(id)initWithABPerson:(void*)arg1 ;
-(id)initWithABRecordID:(int)arg1 fromAddressBook:(void*)arg2 ;
-(unsigned long long)linkedPeopleCount;
-(BOOL)_updatePersonKindFromNamePreserveOrganizationKind:(BOOL)arg1 ;
-(void)mergeProperties:(id)arg1 fromRecord:(void*)arg2 ;
-(void)setAsPreferredPersonForPhoto;
-(BOOL)hasPreferredPhoto;
-(void*)policy;
-(void*)record;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void*)source;
-(int)kind;
-(id)valueForProperty:(int)arg1 ;
-(unsigned)recordType;
-(NSString *)phoneticName;
-(BOOL)hasPhoto;
-(void*)addressBook;
-(int)recordID;
-(BOOL)isRemote;
-(void)setValue:(void*)arg1 forProperty:(int)arg2 ;
@end

