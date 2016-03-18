/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MTLResourceAllocationInfo;


@protocol MTLResourceSPI <MTLResource>
@property (assign) int responsibleProcess; 
@property (readonly) MTLResourceAllocationInfo * sharedAllocationInfo; 
@property (readonly) MTLResourceAllocationInfo * cachedAllocationInfo; 
@required
-(BOOL)isPurgeable;
-(int)responsibleProcess;
-(void)setResponsibleProcess:(int)arg1;
-(MTLResourceAllocationInfo *)sharedAllocationInfo;
-(MTLResourceAllocationInfo *)cachedAllocationInfo;

@end
