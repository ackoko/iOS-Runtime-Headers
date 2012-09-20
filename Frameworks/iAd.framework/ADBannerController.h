/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADAdRecipientRecord, NSString, ADLocalViewController;

@interface ADBannerController : NSObject  {
    BOOL _closeInProgress;
    ADAdRecipientRecord *_recipient;
    BOOL _isOpen;
    BOOL _bannerWillLeaveApplication;
    NSString *_identifier;
    double _createdAt;
    id _remoteSession;
    id _remoteBannerController;
    ADLocalViewController *_localViewController;
    int _supportedOrientations;
    int _adType;
    unsigned int _remoteWindowContextId;
    int _adState;
}

@property ADAdRecipientRecord * recipient;
@property(readonly) BOOL isOpen;
@property(readonly) BOOL bannerWillLeaveApplication;
@property double createdAt;
@property(readonly) NSString * identifier;
@property(readonly) int adType;
@property(readonly) unsigned int remoteWindowContextId;
@property(readonly) int adState;
@property(retain) id remoteSession;
@property(retain) id remoteBannerController;
@property(retain) ADLocalViewController * localViewController;
@property int supportedOrientations;


- (id)recipient;
- (void)setRecipient:(id)arg1;
- (void)_close;
- (id)identifier;
- (id)description;
- (void)dealloc;
- (int)supportedOrientations;
- (void)setSupportedOrientations:(int)arg1;
- (void)close;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (int)adState;
- (unsigned int)remoteWindowContextId;
- (id)localViewController;
- (id)remoteBannerController;
- (id)remoteSession;
- (void)setCreatedAt:(double)arg1;
- (double)createdAt;
- (BOOL)bannerWillLeaveApplication;
- (void)_remote_dismissModalViewController:(id)arg1;
- (void)_remote_presentModalViewController:(id)arg1;
- (void)_remote_storyboardDismissedLocalViewController:(id)arg1;
- (void)_remote_storyboardDidChangeSupportedOrientations:(id)arg1;
- (void)_remote_setStatusBarVisibility:(id)arg1;
- (void)_remote_dismissRemoteViewController:(id)arg1;
- (void)_remote_presentRemoteViewController:(id)arg1;
- (void)_remote_requestRemoteViewController:(id)arg1;
- (void)_remote_openURL:(id)arg1;
- (void)_remote_bannerControllerDidOpen:(id)arg1;
- (void)_remote_adExpiredAndWasUnloaded:(id)arg1;
- (void)_remote_bannerViewDidFail:(id)arg1;
- (void)_remote_bannerViewDidLoadAd:(id)arg1;
- (void)_remote_bannerViewWillLoadAd:(id)arg1;
- (void)interstitialTouchedDismissAreaWithControlEvent:(unsigned int)arg1;
- (void)interstitialPresentedInView:(BOOL)arg1;
- (void)interstitialWasRemovedFromSuperview:(id)arg1;
- (void)updateAdViewProperties:(id)arg1;
- (void)cancelBannerViewAction;
- (void)refuseBannerViewAction;
- (void)executeBannerViewActionFrom:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withClickLocation:(struct CGPoint { float x1; float x2; })arg2;
- (id)initForAdRecipient:(id)arg1;
- (void)applicationDidResignActive:(id)arg1;
- (void)handleBannerVisibilityHeartbeatNotification:(id)arg1;
- (void)reportVisibility:(int)arg1;
- (void)setLocalViewController:(id)arg1;
- (void)_closeAndReportError:(id)arg1;
- (void)dismissLocalViewController;
- (void)_adSheetConnectionLost;
- (void)setRemoteSession:(id)arg1;
- (void)setRemoteBannerController:(id)arg1;
- (int)adType;
- (BOOL)isOpen;

@end