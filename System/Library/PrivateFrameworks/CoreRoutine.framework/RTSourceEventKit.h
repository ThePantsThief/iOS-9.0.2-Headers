/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:37 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/RTSource.h>

@class NSString;

@interface RTSourceEventKit : RTSource {

	NSString* _eventIdentifier;

}

@property (nonatomic,retain,readonly) NSString * eventIdentifier;              //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)eventIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithEventIdentifier:(id)arg1 ;
@end

