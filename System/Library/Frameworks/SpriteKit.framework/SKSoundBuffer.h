/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SKSoundBuffer : NSObject {

	unsigned _bufferId;
	NSString* _path;
	double _duration;

}

@property (nonatomic,readonly) unsigned bufferId; 
@property (nonatomic,readonly) double duration; 
+(id)bufferWithFileNamed:(id)arg1 ;
-(unsigned)bufferId;
-(void)dealloc;
-(id)init;
-(id)description;
-(double)duration;
@end
