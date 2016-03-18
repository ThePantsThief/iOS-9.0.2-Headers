/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:03 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSTimeZone.h>

@interface __NSLocalTimeZone : NSTimeZone
+(BOOL)supportsSecureCoding;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(id)description;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)data;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
-(long long)secondsFromGMTForDate:(id)arg1 ;
-(id)localizedName:(long long)arg1 locale:(id)arg2 ;
-(BOOL)isDaylightSavingTimeForDate:(id)arg1 ;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
@end
