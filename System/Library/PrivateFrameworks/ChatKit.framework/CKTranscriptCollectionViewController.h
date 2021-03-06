/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/CKTranscriptCollectionViewDelegate.h>
#import <libobjc.A.dylib/CKMovieBalloonViewDelegate.h>
#import <libobjc.A.dylib/CKLocationShareBalloonViewDelegate.h>
#import <libobjc.A.dylib/CKTitledImageBalloonViewDelegate.h>
#import <libobjc.A.dylib/CKAudioControllerDelegate.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@protocol CKTranscriptCollectionViewControllerDelegate, CKGradientReferenceView, OS_dispatch_group;
@class NSArray, CKConversation, CKTranscriptCollectionView, UIView, NSObject, NSIndexSet, UITapGestureRecognizer, CKAudioController, NSString, IMChat;

@interface CKTranscriptCollectionViewController : CKViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIAlertViewDelegate, CKTranscriptCollectionViewDelegate, CKMovieBalloonViewDelegate, CKLocationShareBalloonViewDelegate, CKTitledImageBalloonViewDelegate, CKAudioControllerDelegate, CNAvatarViewDelegate> {

	BOOL _initialLoad;
	BOOL _shouldLoadDefaultConversationViewingMessageCountOnAppear;
	BOOL _peeking;
	BOOL _hasHiddenItems;
	BOOL _isLoadingEarlierMessages;
	BOOL _sizedFullTranscript;
	BOOL _filterAllButFirstMessage;
	BOOL _transcriptUpdateAnimated;
	NSArray* _chatItems;
	CKConversation* _conversation;
	CKTranscriptCollectionView* _collectionView;
	double _balloonMaxWidth;
	id<CKTranscriptCollectionViewControllerDelegate> _delegate;
	UIView*<CKGradientReferenceView> _gradientReferenceView;
	NSObject*<OS_dispatch_group> _updateAnimationGroup;
	NSIndexSet* _hiddenItems;
	UITapGestureRecognizer* _loggingTapGestureRecognizer;
	CKAudioController* _audioController;
	/*^block*/id _alertHandler;
	NSString* _speakerTransferGUID;
	double _firstBalloonAlignmentTopInset;
	/*^block*/id _transcriptUpdateCompletion;
	CGPoint _peekSampleTranslation;
	UIEdgeInsets _marginInsets;

}

@property (nonatomic,retain) CKConversation * conversation;                                                //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain,readonly) IMChat * chat; 
@property (nonatomic,retain) CKTranscriptCollectionView * collectionView;                                  //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,copy) NSArray * chatItems;                                                            //@synthesize chatItems=_chatItems - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marginInsets;                                                    //@synthesize marginInsets=_marginInsets - In the implementation block
@property (assign,nonatomic) double balloonMaxWidth;                                                       //@synthesize balloonMaxWidth=_balloonMaxWidth - In the implementation block
@property (assign,nonatomic) id<CKTranscriptCollectionViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView*<CKGradientReferenceView> gradientReferenceView;                       //@synthesize gradientReferenceView=_gradientReferenceView - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> updateAnimationGroup;                            //@synthesize updateAnimationGroup=_updateAnimationGroup - In the implementation block
@property (nonatomic,copy) NSIndexSet * hiddenItems;                                                       //@synthesize hiddenItems=_hiddenItems - In the implementation block
@property (assign,getter=isInitialLoad,nonatomic) BOOL initialLoad;                                        //@synthesize initialLoad=_initialLoad - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadDefaultConversationViewingMessageCountOnAppear;                //@synthesize shouldLoadDefaultConversationViewingMessageCountOnAppear=_shouldLoadDefaultConversationViewingMessageCountOnAppear - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * loggingTapGestureRecognizer;                         //@synthesize loggingTapGestureRecognizer=_loggingTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) CKAudioController * audioController;                                          //@synthesize audioController=_audioController - In the implementation block
@property (nonatomic,copy) id alertHandler;                                                                //@synthesize alertHandler=_alertHandler - In the implementation block
@property (assign,nonatomic) CGPoint peekSampleTranslation;                                                //@synthesize peekSampleTranslation=_peekSampleTranslation - In the implementation block
@property (assign,getter=isPeeking,nonatomic) BOOL peeking;                                                //@synthesize peeking=_peeking - In the implementation block
@property (assign,nonatomic) BOOL hasHiddenItems;                                                          //@synthesize hasHiddenItems=_hasHiddenItems - In the implementation block
@property (assign,nonatomic) BOOL isLoadingEarlierMessages;                                                //@synthesize isLoadingEarlierMessages=_isLoadingEarlierMessages - In the implementation block
@property (nonatomic,copy) NSString * speakerTransferGUID;                                                 //@synthesize speakerTransferGUID=_speakerTransferGUID - In the implementation block
@property (assign,nonatomic) BOOL sizedFullTranscript;                                                     //@synthesize sizedFullTranscript=_sizedFullTranscript - In the implementation block
@property (assign,nonatomic) double firstBalloonAlignmentTopInset;                                         //@synthesize firstBalloonAlignmentTopInset=_firstBalloonAlignmentTopInset - In the implementation block
@property (assign,nonatomic) BOOL filterAllButFirstMessage;                                                //@synthesize filterAllButFirstMessage=_filterAllButFirstMessage - In the implementation block
@property (assign,getter=isTranscriptUpdateAnimated,nonatomic) BOOL transcriptUpdateAnimated;              //@synthesize transcriptUpdateAnimated=_transcriptUpdateAnimated - In the implementation block
@property (nonatomic,copy) id transcriptUpdateCompletion;                                                  //@synthesize transcriptUpdateCompletion=_transcriptUpdateCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)__handleLoggingTapped:(id)arg1 ;
-(BOOL)_shouldShowUILogging;
-(BOOL)_shouldShowInternalUILogging;
-(id)_remoteLogDumpButtonTitle;
-(id)_localLogDumpButtonTitle;
-(void)_performLocalLogDump;
-(void)_performRemoteLogDump;
-(void)_showLoggingAlertIfNecessary;
-(void)_setupLoggingTapGestureRecognizer;
-(void)_tearDownLoggingTapGestureRecognizer;
-(void)setDelegate:(id<CKTranscriptCollectionViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(id<CKTranscriptCollectionViewControllerDelegate>)delegate;
-(id)collectionViewLayout;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CKTranscriptCollectionView *)collectionView;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setCollectionView:(CKTranscriptCollectionView *)arg1 ;
-(id)selectedItems;
-(void)setSelectedItems:(id)arg1 ;
-(void)setInitialLoad:(BOOL)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(CKConversation *)conversation;
-(IMChat *)chat;
-(BOOL)isInitialLoad;
-(void)viewDidAppearDeferredSetup;
-(NSArray *)chatItems;
-(UITapGestureRecognizer *)loggingTapGestureRecognizer;
-(void)setLoggingTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setAlertHandler:(id)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(BOOL)balloonView:(id)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3 ;
-(void)balloonViewWillResignFirstResponder:(id)arg1 ;
-(void)balloonViewTapped:(id)arg1 ;
-(BOOL)shouldShowMenuForBalloonView:(id)arg1 ;
-(id)menuItemsForBalloonView:(id)arg1 ;
-(CGRect)calloutTargetRectForBalloonView:(id)arg1 ;
-(void)balloonView:(id)arg1 performAction:(SEL)arg2 withSender:(id)arg3 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(double)balloonMaxWidth;
-(void)invalidateChatItemLayoutWithBalloonMaxWidth:(double)arg1 marginInsets:(UIEdgeInsets)arg2 ;
-(void)performResumeDeferredSetup;
-(void)setScrollAnchor:(double)arg1 ;
-(void)prepareForSuspend;
-(id)initWithConversation:(id)arg1 balloonMaxWidth:(double)arg2 marginInsets:(UIEdgeInsets)arg3 ;
-(void)setGradientReferenceView:(UIView*<CKGradientReferenceView>)arg1 ;
-(void)setShouldLoadDefaultConversationViewingMessageCountOnAppear:(BOOL)arg1 ;
-(void)raiseGestureRecognized:(id)arg1 ;
-(void)deleteSelectedItems:(id)arg1 ;
-(BOOL)canRaiseToListen;
-(BOOL)canRaiseToTalk;
-(UIView*<CKGradientReferenceView>)gradientReferenceView;
-(void)updateTranscript:(/*^block*/id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setHiddenItems:(NSIndexSet *)arg1 ;
-(void)configureCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)sizeFullTranscriptIfNecessary;
-(NSObject*<OS_dispatch_group>)updateAnimationGroup;
-(void)stopPlayingAudio;
-(id)alertHandler;
-(BOOL)wantsDrawerLayout;
-(void)previewDidChange:(id)arg1 ;
-(void)transferUpdated:(id)arg1 ;
-(void)balloonViewTitleTapped:(id)arg1 ;
-(void)balloonView:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2 ;
-(BOOL)shouldLoadDefaultConversationViewingMessageCountOnAppear;
-(void)scrollToTopOfLastBubbleCellAnimated:(BOOL)arg1 ;
-(CKAudioController *)audioController;
-(void)setBalloonMaxWidth:(double)arg1 ;
-(id)chatItemsWithIMChatItems:(id)arg1 ;
-(void)setSizedFullTranscript:(BOOL)arg1 ;
-(void)setChatItems:(NSArray *)arg1 ;
-(BOOL)sizedFullTranscript;
-(void)_refreshLocationsForRecipientsIfNecessary;
-(void)setUpdateAnimationGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setTranscriptUpdateAnimated:(BOOL)arg1 ;
-(void)transferRestored:(id)arg1 ;
-(void)locationStringDidChange:(id)arg1 ;
-(void)addressBookChanged:(id)arg1 ;
-(void)snapshotTaken:(id)arg1 ;
-(void)chatItemsDidChange:(id)arg1 ;
-(void)chatRegistryDidLoad:(id)arg1 ;
-(void)setHasHiddenItems:(BOOL)arg1 ;
-(void)reconfigureVisibleSpeakerButtonCells;
-(void)setTranscriptUpdateCompletion:(id)arg1 ;
-(void)setAudioController:(CKAudioController *)arg1 ;
-(void)setPeeking:(BOOL)arg1 ;
-(void)setPeekSampleTranslation:(CGPoint)arg1 ;
-(void)loadEarlierMessagesIfNeeded;
-(BOOL)isPeeking;
-(CGPoint)peekSampleTranslation;
-(id)indexPathForBalloonView:(id)arg1 ;
-(void)balloonView:(id)arg1 copy:(id)arg2 ;
-(void)balloonView:(id)arg1 export:(id)arg2 ;
-(void)balloonView:(id)arg1 sendAsTextMessage:(id)arg2 ;
-(void)balloonView:(id)arg1 more:(id)arg2 ;
-(void)setSpeakerTransferGUID:(NSString *)arg1 ;
-(void)touchUpInsideCellFailureButton:(id)arg1 ;
-(void)touchUpInsideCellStatusButton:(id)arg1 ;
-(void)touchUpInsideCellReportSpamButton:(id)arg1 ;
-(void)configureSpeakerButtonCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(BOOL)hasHiddenItems;
-(NSIndexSet *)hiddenItems;
-(id)chatItemWithIMChatItem:(id)arg1 ;
-(void)_setIsFirstChatItemOnFirstChatItem:(BOOL)arg1 ;
-(NSString *)speakerTransferGUID;
-(void)setIsLoadingEarlierMessages:(BOOL)arg1 ;
-(BOOL)isLoadingEarlierMessages;
-(void)loadEarlierMessages;
-(id)messagePartForBalloonView:(id)arg1 ;
-(void)_downgradeMessageAtIndexPath:(id)arg1 ;
-(void)_resendMessageAtIndexPath:(id)arg1 ;
-(BOOL)isTranscriptUpdateAnimated;
-(id)transcriptUpdateCompletion;
-(void)updateTranscriptChatItems:(id)arg1 inserted:(id)arg2 removed:(id)arg3 reload:(id)arg4 regenerate:(id)arg5 animated:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(void)touchUpInsideCellSpeakerButton:(id)arg1 ;
-(void)collectionViewWillScroll:(id)arg1 targetContentOffset:(inout CGPoint*)arg2 ;
-(void)collectionViewWillProgrammaticallyScroll:(id)arg1 ;
-(void)collectionViewWillInset:(id)arg1 targetContentInset:(inout UIEdgeInsets*)arg2 ;
-(void)collectionViewDidInset:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 isEditableItemAtIndexPath:(id)arg2 ;
-(void)balloonViewDidFinishDataDetectorAction:(id)arg1 ;
-(void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1 ;
-(void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1 ;
-(void)locationShareBalloonViewShareButtonTapped:(id)arg1 ;
-(void)locationShareBalloonViewIgnoreButtonTapped:(id)arg1 ;
-(void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2 ;
-(void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4 ;
-(void)audioControllerDidPause:(id)arg1 ;
-(void)audioControllerDidStop:(id)arg1 ;
-(void)audioControllerPlayingDidChange:(id)arg1 ;
-(void)collectionViewLayoutRestingDidChange:(id)arg1 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 chatItemForItemAtIndexPath:(id)arg3 ;
-(void)collectionViewLayout:(id)arg1 sizeDidChange:(CGSize)arg2 ;
-(double)firstBalloonAlignmentTopInset;
-(void)setFirstBalloonAlignmentTopInset:(double)arg1 ;
-(BOOL)filterAllButFirstMessage;
-(void)setFilterAllButFirstMessage:(BOOL)arg1 ;
@end

