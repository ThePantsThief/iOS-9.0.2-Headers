/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notes/Notes-Structs.h>
@class NSString, NSDate;

@interface ICSpotlightAttributeSet : NSObject {

	NSString* _identifier;
	NSString* _objectIdentifier;
	NSDate* _modificationDate;
	NSString* _title;
	NSString* _contentText;

}

@property (nonatomic,copy,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * objectIdentifier;              //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * modificationDate;                //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentText;                   //@synthesize contentText=_contentText - In the implementation block
-(NSString *)contentText;
-(id)init;
-(NSString *)identifier;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)modificationDate;
-(id)initWithIdentifier:(id)arg1 objectIdentifier:(id)arg2 modificationDate:(id)arg3 title:(id)arg4 contentText:(id)arg5 ;
-(id)coreSpotlightAttributeSet;
-(id)coreSpotlightAttributeSetForUserActivity;
-(NSString *)objectIdentifier;
@end
