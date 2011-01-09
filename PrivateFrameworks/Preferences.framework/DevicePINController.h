/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIBarButtonItem, NSString;



@interface DevicePINController : PSDetailController 
{
    NSInteger _mode;
    NSInteger _substate;
    NSString *_oldPassword;
    NSString *_lastEntry;
    BOOL _success;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_doneButton;
    NSString *_error1;
    NSString *_error2;
}

+ (BOOL)settingEnabled;

- (void)_dismiss;
- (void)suspend;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (id)init;
- (void)dealloc;
- (void)setPane:(id)arg1;
- (void)_updateUI;
- (NSInteger)pinLength;
- (void)pinEntered:(id)arg1;
- (BOOL)simplePIN;
- (BOOL)_isBlocked;
- (id)stringsTable;
- (void)setOldPassword:(id)arg1;
- (void)setLastEntry:(id)arg1;
- (BOOL)pinIsAcceptable:(id)arg1 outError:(id*)arg2;
- (void)setPIN:(id)arg1;
- (BOOL)validatePIN:(id)arg1;
- (BOOL)useProgressiveDelays;
- (struct __CFString { }*)defaultsID;
- (struct __CFString { }*)failedAttemptsKey;
- (struct __CFString { }*)blockTimeIntervalKey;
- (struct __CFString { }*)blockedStateKey;
- (NSInteger)_getScreenType;
- (NSInteger)_numberOfFailedAttempts;
- (void)_setNumberOfFailedAttempts:(NSInteger)arg1;
- (void)_clearBlockedState;
- (double)_unblockTime;
- (void)_setUnblockTime:(double)arg1;
- (BOOL)_attemptValidationWithPIN:(id)arg1;
- (void)performActionAfterPINEntry;
- (void)performActionAfterPINSetOrRemove;
- (void)performActionAfterPINSet;
- (void)performActionAfterPINRemove;
- (void)_showFailedAttempts;
- (void)_updateErrorTextAndFailureCount:(BOOL)arg1;
- (void)_showUnacceptablePINError:(id)arg1 password:(id)arg2;
- (void)_showPINConfirmationError;
- (void)_updatePINButtons;
- (BOOL)completedInputIsValid:(id)arg1;
- (void)_slidePasscodeField;
- (void)cancelButtonTapped;
- (id)pinInstructionsPrompt;
- (id)pinInstructionsPromptFont;
- (BOOL)_success;
- (void)willUnlock;
- (BOOL)requiresKeyboard;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })paneFrame;

@end