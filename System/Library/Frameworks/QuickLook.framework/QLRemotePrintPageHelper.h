/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLRemotePrintPageHelper <NSObject>
@property (assign,nonatomic) CGSize printableSize; 
@required
-(id)pdfDataForPageAtIndex:(long long)arg1 printingDone:(BOOL*)arg2;
-(CGSize)printableSize;
-(void)setPrintableSize:(CGSize)arg1;
-(long long)numberOfPages;
-(void)prepareForDrawingPages:(NSRange)arg1;

@end
