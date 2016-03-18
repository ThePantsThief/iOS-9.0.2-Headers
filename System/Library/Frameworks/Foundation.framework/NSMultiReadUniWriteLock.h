/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {

	void* _priv;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)lockForReading;
-(BOOL)tryLockForReading;
-(BOOL)lockForReadingBeforeDate:(id)arg1 ;
-(void)lockForWriting;
-(BOOL)tryLockForWriting;
-(BOOL)lockForWritingBeforeDate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)lock;
-(void)unlock;
-(void)finalize;
@end
