/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKControllerDelegateProtocol <NSObject>
@optional
-(id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
-(void)editCheckpointReachedForAnnotationController:(id)arg1;
-(double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
-(BOOL)controllerShouldDetectFormElements:(id)arg1;
-(void)controller:(id)arg1 willPlaceSingleShotAnnotation:(id)arg2 onProposedPageModelController:(id*)arg3;
-(void)controller:(id)arg1 didPlaceSingleShotAnnotation:(id)arg2 onPageModelController:(id)arg3;
-(void)controllerWillEnterToolMode:(id)arg1;
-(void)controllerWillExitToolMode:(id)arg1;
-(void)controllerDidEnterToolMode:(id)arg1;
-(void)controllerDidExitToolMode:(id)arg1;
-(BOOL)shouldPlaceFormElementAtPoint:(CGPoint)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
-(BOOL)shouldPlaceProposedFormElementAtRect:(CGRect)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
-(void)placeAuxiliaryView:(id)arg1 forAnnotationController:(id)arg2;
-(void)removeAuxiliaryView:(id)arg1 forAnnotationController:(id)arg2;
-(CGRect*)postioningRectForCandidatePicker;
-(void)controllerWillShowSignatureCaptureView:(id)arg1;

@required
-(id)undoManagerForAnnotationController:(id)arg1;
-(CGPoint*)convertPoint:(CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
-(CGPoint*)convertPoint:(CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
-(CGRect*)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
-(id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)arg1 atScale:(double)arg2 inRect:(CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;

@end

