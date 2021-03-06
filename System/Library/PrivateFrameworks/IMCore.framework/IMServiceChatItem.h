/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:12 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, IMServiceImpl;

@interface IMServiceChatItem : IMTranscriptChatItem {

	IMHandle* _handle;
	IMServiceImpl* _service;

}

@property (nonatomic,retain,readonly) IMServiceImpl * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,retain,readonly) IMHandle * handle;                    //@synthesize handle=_handle - In the implementation block
-(Class)__ck_chatItemClass;
-(IMHandle *)handle;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IMServiceImpl *)service;
-(id)_initWithItem:(id)arg1 service:(id)arg2 handle:(id)arg3 ;
@end

