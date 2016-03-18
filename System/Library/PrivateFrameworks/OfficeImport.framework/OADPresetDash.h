/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADDash.h>

@interface OADPresetDash : OADDash {

	char mType;
	unsigned mIsTypeOverridden : 1;

}
+(id)defaultProperties;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(char)arg1 ;
-(char)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)equivalentCustomDash;
-(id)initWithDefaults;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(BOOL)isTypeOverridden;
@end
