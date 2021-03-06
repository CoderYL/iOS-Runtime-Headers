/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

@interface FMSlidingPaneViewController : FMViewController {
    float  _animationDuration;
    float  _animationInitialVelocity;
    unsigned int  _animationOptions;
    float  _animationSpringDamping;
    <FMSlidingPaneViewControllerDelegate> * _delegate;
    BOOL  _didHideToolbar;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _paneContentInsets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _paneInsets;
    SlidingPaneViewState * _paneState;
    UIVisualEffect * _paneVisualEffect;
}

@property (nonatomic) float animationDuration;
@property (nonatomic) float animationInitialVelocity;
@property (nonatomic) unsigned int animationOptions;
@property (nonatomic) float animationSpringDamping;
@property (nonatomic) <FMSlidingPaneViewControllerDelegate> *delegate;
@property (nonatomic) BOOL didHideToolbar;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } paneContentInsets;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } paneInsets;
@property (getter=isPaneShowing, nonatomic, readonly) BOOL paneShowing;
@property (nonatomic, retain) SlidingPaneViewState *paneState;
@property (nonatomic, readonly) UIView *paneView;
@property (nonatomic, readonly) UIViewController *paneViewController;
@property (nonatomic, retain) UIVisualEffect *paneVisualEffect;

- (void).cxx_destruct;
- (void)_createPaneContentConstraintsForState:(id)arg1;
- (void)_createPaneViewForState:(id)arg1;
- (void)_crossDissolveOldPaneState:(id)arg1 newPaneState:(id)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)_dismissPaneState:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)_metricsFromEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct CGSize { float x1; float x2; })_normalizeSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_paneFrameChanged:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_paneParentView;
- (struct CGSize { float x1; float x2; })_preferredSizeForPaneState:(id)arg1;
- (void)_presentPaneState:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)_removeChildViewControllerForState:(id)arg1;
- (float)animationDuration;
- (float)animationInitialVelocity;
- (unsigned int)animationOptions;
- (float)animationSpringDamping;
- (void)awakeFromNib;
- (void)commonConfiguration;
- (id)delegate;
- (void)didDismissPane:(id)arg1 animated:(BOOL)arg2;
- (BOOL)didHideToolbar;
- (void)didPresentPane:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 animated:(BOOL)arg3;
- (void)dismiss:(id)arg1;
- (void)dismiss:(id)arg1 forEvent:(id)arg2;
- (void)dismissPaneViewControllerAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)dismissSegue:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isPaneShowing;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })paneContentInsets;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })paneInsets;
- (void)paneSizeChanged:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forViewController:(id)arg2;
- (id)paneState;
- (id)paneView;
- (id)paneViewController;
- (id)paneVisualEffect;
- (void)presentPaneViewController:(id)arg1 fromEdge:(unsigned int)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)presentPaneViewController:(id)arg1 fromEdge:(unsigned int)arg2 withPercent:(float)arg3 completion:(id /* block */)arg4;
- (void)setAnimationDuration:(float)arg1;
- (void)setAnimationInitialVelocity:(float)arg1;
- (void)setAnimationOptions:(unsigned int)arg1;
- (void)setAnimationSpringDamping:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidHideToolbar:(BOOL)arg1;
- (void)setPaneContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPaneInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPaneState:(id)arg1;
- (void)setPaneVisualEffect:(id)arg1;
- (void)setPresentingConstraintConstant:(float)arg1;
- (id)traitCollectionForChildViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willDismissPane:(id)arg1 animated:(BOOL)arg2;
- (void)willPresentPane:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 animated:(BOOL)arg3;

@end
