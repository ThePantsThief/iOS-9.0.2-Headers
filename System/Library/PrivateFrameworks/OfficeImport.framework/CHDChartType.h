/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:38 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CHDChart, EDCollection, CHDSeriesCollection, CHDDataLabel;

@interface CHDChartType : NSObject {

	CHDChart* mChart;
	EDCollection* mAxisIds;
	CHDSeriesCollection* mSeries;
	CHDDataLabel* mDefaultDataLabel;
	BOOL mVaryColors;

}
+(id)chartTypeWithChart:(id)arg1 ;
+(BOOL)is3DType;
-(void)dealloc;
-(id)description;
-(BOOL)isHorizontal;
-(id)contentFormat;
-(id)axes;
-(id)seriesCollection;
-(id)defaultDataLabel;
-(id)chart;
-(id)initWithChart:(id)arg1 ;
-(void)setVaryColors:(BOOL)arg1 ;
-(id)axisIds;
-(void)setDefaultDataLabel:(id)arg1 ;
-(int)defaultLabelPosition;
-(BOOL)isPlotedOnSecondaryAxis;
-(unsigned long long)seriesCount;
-(unsigned long long)categoryCount;
-(void)setSeriesCollection:(id)arg1 ;
-(BOOL)isVaryColors;
-(id)defaultTitleWithResources:(id)arg1 ;
-(id)axisForClass:(Class)arg1 ;
@end
