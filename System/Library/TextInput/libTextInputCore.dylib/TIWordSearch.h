/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libTextInputCore.dylib/libTextInputCore.dylib-Structs.h>
@class TIInputMode, TIMecabraWrapper, TIWordSearchOperationGetCandidates, NSCache, NSCharacterSet;

@interface TIWordSearch : NSObject {

	id _userDictionaryObserver;
	BOOL _autoCorrects;
	BOOL _shouldLearnAcceptedCandidate;
	TIInputMode* _inputMode;
	TIMecabraWrapper* _mecabraWrapper;
	TIWordSearchOperationGetCandidates* _operation;
	NSCache* _candidatesCache;

}

@property (assign) BOOL autoCorrects;                                                            //@synthesize autoCorrects=_autoCorrects - In the implementation block
@property (assign) BOOL shouldLearnAcceptedCandidate;                                            //@synthesize shouldLearnAcceptedCandidate=_shouldLearnAcceptedCandidate - In the implementation block
@property (readonly) TIInputMode * inputMode;                                                    //@synthesize inputMode=_inputMode - In the implementation block
@property (readonly) MecabraRef mecabra; 
@property (readonly) TIMecabraWrapper * mecabraWrapper;                                          //@synthesize mecabraWrapper=_mecabraWrapper - In the implementation block
@property (nonatomic,retain) NSCache * candidatesCache;                                          //@synthesize candidatesCache=_candidatesCache - In the implementation block
@property (nonatomic,readonly) NSCharacterSet * validCharacterSetForAutocorrection; 
@property (retain) TIWordSearchOperationGetCandidates * operation;                               //@synthesize operation=_operation - In the implementation block
+(id)sharedOperationQueue;
-(void)cancel;
-(void)dealloc;
-(TIWordSearchOperationGetCandidates *)operation;
-(void)setOperation:(TIWordSearchOperationGetCandidates *)arg1 ;
-(BOOL)isCancelled;
-(TIInputMode *)inputMode;
-(void)lastAcceptedCandidateCorrected;
-(void)clearCache;
-(TIMecabraWrapper *)mecabraWrapper;
-(id)facemarkCandiates;
-(void)endInputSession;
-(id)uncachedCandidatesForOperation:(id)arg1 ;
-(void)setLanguageModelAdaptationContextWithClientIdentifier:(id)arg1 recipientIdentifier:(id)arg2 ;
-(id)cachedCandidatesForOperation:(id)arg1 ;
-(BOOL)shouldLearnAcceptedCandidate;
-(void)setLanguageModelAdaptationContext:(id)arg1 ;
-(BOOL)autoCorrects;
-(id)candidatesForOperation:(id)arg1 ;
-(void)setAutoCorrects:(BOOL)arg1 ;
-(id)geometryModelDataFromZephyr:(TIInputManagerZephyr*)arg1 ;
-(NSCache *)candidatesCache;
-(void)saveLearningDictionary;
-(void)adaptOfflineToParagraph:(id)arg1 adaptationContext:(id)arg2 timeStamp:(double)arg3 ;
-(void)clearLearningDictionary;
-(void)performAccept:(void*)arg1 isPartial:(BOOL)arg2 ;
-(void)flushDynamicData;
-(void)adaptToCandidateContext:(id)arg1 andStringContext:(id)arg2 ;
-(void)performOperationAsync:(id)arg1 withBackgroundActivityAssertion:(BOOL)arg2 ;
-(void)clearObservers;
-(MecabraRef)mecabra;
-(void)resetPreviousWord;
-(void)updateMecabraState;
-(id)mecabraLearningDictionaryDirectory;
-(void)dynamicDictionariesRemoved:(id)arg1 ;
-(void)updateUserWordEntries;
-(NSCharacterSet *)validCharacterSetForAutocorrection;
-(unsigned long long)mecabraCreationOptions;
-(void)completeOperationsInQueue;
-(void)performOperationAsync:(id)arg1 ;
-(void)setShouldLearnAcceptedCandidate:(BOOL)arg1 ;
-(void)setCandidatesCache:(NSCache *)arg1 ;
-(int)mecabraInputMethodType;
-(id)candidatesCacheKeyForOperation:(id)arg1 ;
-(id)initTIWordSearchWithInputMode:(id)arg1 ;
-(void)releaseBackgroundActivityAssertion;
@end
