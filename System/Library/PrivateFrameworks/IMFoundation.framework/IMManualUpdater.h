/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMManualUpdater : NSObject {

	id _target;
	SEL _action;
	unsigned _needsUpdate : 1;

}

@property (assign,nonatomic) id target;                     //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate; 
-(void)setNeedsUpdate;
-(void)updateIfNeeded;
-(id)description;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
@end

