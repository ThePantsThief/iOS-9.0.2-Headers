/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLPrintPageRendererDataSource <NSObject>
@required
-(long long)numberOfPagesInPrintPageRenderer:(id)arg1;
-(void)printPageRenderer:(id)arg1 prepareForDrawingPages:(NSRange)arg2;
-(id)printPageRenderer:(id)arg1 pdfDataForPageAtIndex:(long long)arg2 printingDone:(BOOL*)arg3;

@end
