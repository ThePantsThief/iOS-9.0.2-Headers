/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:58 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUINanoImageResource, NSString;

@interface SASTHeroImageItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUINanoImageResource * watchImageResource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)heroImageItem;
+(id)heroImageItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUINanoImageResource *)watchImageResource;
-(void)setWatchImageResource:(SAUINanoImageResource *)arg1 ;
@end
