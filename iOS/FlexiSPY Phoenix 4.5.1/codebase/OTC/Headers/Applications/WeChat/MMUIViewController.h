/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "UIViewController.h"

//#import "IUiUtilExt-Protocol.h"
//#import "MMUIViewControllerDelegate-Protocol.h"
//#import "UIGestureRecognizerDelegate-Protocol.h"

@class MMLoadingView, MMTitleView, NSMutableArray, UILabel, UINavigationController, UIView;

@interface MMUIViewController : UIViewController //<IUiUtilExt, MMUIViewControllerDelegate, UIGestureRecognizerDelegate>
{
    BOOL m_isPopByClickingURL;
    MMLoadingView *m_loadingViewX;
    unsigned long m_uiVcType;
    BOOL m_bKeyboardShowForGesture;
    UIViewController *_presentingModalViewController;
    UIViewController *_presentedModalViewController;
    UILabel *m_newsTitleRecordLabel;
    NSMutableArray *m_fullScreenViews;
    BOOL _isSupportWXGesture;
    BOOL m_bAnimated;
    BOOL m_bInteractivePopEnabled;
    UINavigationController *m_navigationController;
    MMTitleView *m_baseTitleView;
    UIView *bottomView;
}

@property(nonatomic) BOOL m_bInteractivePopEnabled; // @synthesize m_bInteractivePopEnabled;
@property(nonatomic) BOOL m_bAnimated; // @synthesize m_bAnimated;
@property(nonatomic) BOOL isSupportWXGesture; // @synthesize isSupportWXGesture=_isSupportWXGesture;
@property(retain, nonatomic) NSMutableArray *m_fullScreenViews; // @synthesize m_fullScreenViews;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView;
@property(retain, nonatomic) UILabel *m_newsTitleRecordLabel; // @synthesize m_newsTitleRecordLabel;
@property(nonatomic) unsigned long m_uiVcType; // @synthesize m_uiVcType;
@property(retain, nonatomic) MMLoadingView *loadingViewX; // @synthesize loadingViewX=m_loadingViewX;
//@property(nonatomic) UIViewController *presentedModalViewController; // @synthesize presentedModalViewController=_presentedModalViewController;
//@property(nonatomic) UIViewController *presentingModalViewController; // @synthesize presentingModalViewController=_presentingModalViewController;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)shouldInteractivePop;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (BOOL)isSubviewResponder:(id)arg1;
- (void)resignSubviewResponder:(id)arg1;
- (void)viewWillDismiss:(BOOL)arg1;
- (void)viewWillPresent:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBePresented:(BOOL)arg1;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (id)getNavigationRightButton:(id)arg1;
- (id)getNavigationLeftButton:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)isPresentedIn;
- (BOOL)isPushedIn;
- (id)tagForActivePage;
- (id)getViewController;
- (void)resetViewStatus;
- (void)startForcedRotationToPortrait;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)isSvrErrorTipForbidden;
- (BOOL)shouldOtherPreventedAutorotateToInterfaceOrientation;
- (int)preferredInterfaceOrientationForPresentation;
- (void)protectStatusBarFromBeingFuckedByForeGround:(SEL)arg1;
- (int)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (void)setStatusBarHidden:(BOOL)arg1;
- (void)fixNavigationBar;
- (void)postNotification;
- (void)setOutLine:(BOOL)arg1;
- (void)setSubView:(id)arg1 OutLine:(BOOL)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)setTitleOnly:(id)arg1;
- (void)willDismissAndShow;
- (void)setTitleInterfaceOritation:(int)arg1;
- (float)getLeftBarButtonWidth;
- (void)setTitleView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)willShow;
- (void)willDisshow;
- (void)didDisshow;
- (void)didAppear;
- (void)willDisappear;
- (void)adjustView;
- (void)willAppear;
- (void)setIsPopByClickingURL;
- (void)handleUrl:(id)arg1 DisableFirstGetA8Key:(BOOL)arg2 extraInfo:(id)arg3;
- (void)resetTableViewOffset:(id)arg1;
- (void)onMainWindowFrameChanged;
- (void)RemoveFullScreenViewList;
- (void)AddViewToFullScreenViewList:(id)arg1;
- (void)onTopBarHiddenChanged:(int)arg1;
- (void)onTopBarFrameChanged;
- (void)ReLayoutFullScreenViews;
- (float)getVisibleHeight;
- (void)dealloc;
- (id)init;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)disMissSelf;
- (void)adjustViewAndNavBarRect;
- (void)adjustSubviewRects;
- (void)adjustTableViewRect;
- (void)stopLoading;
- (void)startLoadingNonBlock;
- (void)startLoadingBlocked;

@end
