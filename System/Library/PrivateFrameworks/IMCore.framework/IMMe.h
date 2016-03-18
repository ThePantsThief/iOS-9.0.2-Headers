/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:12 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMPerson, NSString, NSArray, NSMutableArray, IMHandle;

@interface IMMe : NSObject {

	IMPerson* _person;
	NSString* _abNickname;
	NSString* _abFirstName;
	NSString* _abFullName;
	NSString* _abLastName;
	NSArray* _abEmails;
	NSMutableArray* _abIMHandles;
	NSMutableArray* _loginIMHandles;

}

@property (nonatomic,readonly) NSString * guid; 
@property (nonatomic,readonly) IMPerson * person; 
@property (nonatomic,readonly) NSString * nickname; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSString * email; 
@property (nonatomic,readonly) NSArray * emails; 
@property (nonatomic,readonly) IMHandle * bestIMHandle; 
@property (nonatomic,readonly) NSArray * imHandles; 
+(id)fallbackUserName;
+(id)imHandleForService:(id)arg1 ;
+(id)me;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)dealloc;
-(id)init;
-(id)description;
-(IMPerson *)person;
-(BOOL)removeLoginIMHandle:(id)arg1 ;
-(void)resetABPerson;
-(BOOL)addLoginIMHandle:(id)arg1 ;
-(void)setIMPerson:(id)arg1 ;
-(BOOL)removeIMHandle:(id)arg1 ;
-(BOOL)addIMHandle:(id)arg1 ;
-(void)myPictureChanged;
-(void)rebuildIMHandles;
-(void)setFirstName:(id)arg1 lastName:(id)arg2 ;
-(id)_imHandlesWithIDs:(id)arg1 onAccount:(id)arg2 ;
-(NSArray *)imHandles;
-(id)loginIMHandles;
-(BOOL)isIMHandleLoginIMHandle:(id)arg1 ;
-(IMHandle *)bestIMHandle;
-(NSString *)fullName;
-(NSString *)guid;
-(NSString *)email;
-(NSArray *)emails;
-(NSString *)nickname;
@end
