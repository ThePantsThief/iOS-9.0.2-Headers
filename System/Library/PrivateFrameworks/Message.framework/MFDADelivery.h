/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailDelivery.h>

@class DAMailAccount, NSString;

@interface MFDADelivery : MFMailDelivery {

	DAMailAccount* _DAMailAccount;
	NSString* _folderId;
	NSString* _accountId;
	NSString* _repliedMessageId;
	NSString* _forwardedMessageId;
	NSString* _repliedLongId;
	NSString* _forwardedLongId;

}
-(id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5 ;
-(id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3 ;
-(id)deliverSynchronously;
-(void)dealloc;
-(id)newMessageWriter;
-(void)setDAMailAccount:(id)arg1 ;
@end
