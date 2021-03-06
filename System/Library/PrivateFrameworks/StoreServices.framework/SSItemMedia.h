/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface SSItemMedia : NSObject {

	long long _duration;
	long long _fullDuration;
	long long _mediaFileSize;
	NSString* _mediaKind;
	BOOL _protected;
	NSURL* _url;

}

@property (nonatomic,readonly) long long durationInMilliseconds;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * mediaKind;                                         //@synthesize mediaKind=_mediaKind - In the implementation block
@property (getter=isProtectedMedia,nonatomic,readonly) BOOL protectedMedia;              //@synthesize protected=_protected - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                              //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) long long fullDurationInMilliseconds;                     //@synthesize fullDuration=_fullDuration - In the implementation block
@property (nonatomic,readonly) long long mediaFileSize;                                  //@synthesize mediaFileSize=_mediaFileSize - In the implementation block
-(void)setMediaKind:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)URL;
-(id)initWithStoreOfferDictionary:(id)arg1 ;
-(BOOL)isProtectedMedia;
-(long long)mediaFileSize;
-(long long)fullDurationInMilliseconds;
-(NSString *)mediaKind;
-(long long)durationInMilliseconds;
@end

