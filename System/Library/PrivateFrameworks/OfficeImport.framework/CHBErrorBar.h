/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:38 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHBErrorBar : NSObject
+(int)edErrorBarDirectionFrom:(int)arg1 ;
+(int)edErrorBarTypeFrom:(int)arg1 ;
+(id)readErrorBarGraphicProperties:(const XlChartSeriesFormat*)arg1 forStyleIndex:(unsigned long long)arg2 state:(id)arg3 ;
+(int)xlErrorBarTypeFrom:(int)arg1 direction:(int)arg2 ;
+(int)xlErrorBarSourceFrom:(int)arg1 ;
+(void)readFrom:(XlChartErrorBar*)arg1 toSeries:(id)arg2 state:(id)arg3 ;
@end
