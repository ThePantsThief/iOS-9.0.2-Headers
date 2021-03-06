/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface NSLock : NSObject <NSLocking> {

	void* _priv;

}

@property (copy) NSString * name; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)mf_waitForLock;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(BOOL)tryLock;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)lock;
-(void)unlock;
-(void)finalize;
@end

