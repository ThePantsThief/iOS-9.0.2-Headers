/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface _HKWorkoutDataGap : NSObject <NSSecureCoding> {

	NSUUID* _start;
	NSUUID* _end;

}

@property (nonatomic,retain) NSUUID * start;              //@synthesize start=_start - In the implementation block
@property (nonatomic,retain) NSUUID * end;                //@synthesize end=_end - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSUUID *)start;
-(void)setStart:(NSUUID *)arg1 ;
-(NSUUID *)end;
-(void)setEnd:(NSUUID *)arg1 ;
@end
