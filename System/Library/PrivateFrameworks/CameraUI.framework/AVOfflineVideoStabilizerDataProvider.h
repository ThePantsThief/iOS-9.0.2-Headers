/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVOfflineVideoStabilizerDataProvider <NSObject>
@required
-(CVBufferRef)copySourcePixelBufferForFrameNumber:(long long)arg1 outputSampleTime:(SCD_Struct_CA2*)arg2 stabilizer:(id)arg3;
-(id)copySourceStabilizationMetadataForFrameNumber:(long long)arg1 outputSampleTime:(SCD_Struct_CA2*)arg2 stabilizer:(id)arg3;

@end

