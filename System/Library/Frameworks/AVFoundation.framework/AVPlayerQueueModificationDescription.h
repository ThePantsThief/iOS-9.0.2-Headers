/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVPlayerItem;

@interface AVPlayerQueueModificationDescription : NSObject {

	long long _modificationType;
	AVPlayerItem* _item;
	AVPlayerItem* _afterItem;

}

@property (nonatomic,readonly) long long modificationType;              //@synthesize modificationType=_modificationType - In the implementation block
@property (nonatomic,readonly) AVPlayerItem * item;                     //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) AVPlayerItem * afterItem;                //@synthesize afterItem=_afterItem - In the implementation block
+(id)modificationForInsertingItem:(id)arg1 afterItem:(id)arg2 ;
+(id)modificationForRemovingItem:(id)arg1 ;
-(long long)modificationType;
-(AVPlayerItem *)afterItem;
-(id)initWithModificationType:(long long)arg1 item:(id)arg2 afterItem:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(AVPlayerItem *)item;
@end
