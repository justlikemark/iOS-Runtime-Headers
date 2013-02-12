/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUViewController;

@interface SURotationController : NSObject {
    NSString *_rotationStyle;
    SUViewController *_viewController;
}

@property(copy) NSString *rotationStyle;
@property SUViewController *viewController;

- (BOOL)_orientationAffectsViewFrame;
- (void)animateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)dealloc;
- (void)finishRotationFromInterfaceOrientation:(NSInteger)arg1;
- (id)init;
- (id)initWithViewController:(id)arg1;
- (void)prepareForDeferredRotateToInterfaceOrientation:(NSInteger)arg1;
- (void)prepareToRotateToInterfaceOrientation:(NSInteger)arg1;
- (id)rotationStyle;
- (void)setRotationStyle:(id)arg1;
- (void)setViewController:(id)arg1;
- (BOOL)shouldDeferRotationToInterfaceOrientation:(NSInteger)arg1;
- (id)viewController;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })viewFrameForInterfaceOrientation:(NSInteger)arg1;

@end