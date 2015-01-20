/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKCancelSwipeToEditGestureRecognizer, GKCollectionViewCell, GKCollectionViewDataSource, NSIndexPath, NSString, UICollectionView, UIPanGestureRecognizer, _UIDynamicAnimation;

@interface GKSwipeToEditStateMachine : GKStateMachine <UIGestureRecognizerDelegate, GKSegmentedSectionDataSourceEventHandler> {
    UICollectionView *_collectionView;
    int _debounce;
    GKCancelSwipeToEditGestureRecognizer *_editModeCancelRecognizer;
    GKCollectionViewCell *_editingCell;
    GKCollectionViewDataSource *_gkDataSource;
    _UIDynamicAnimation *_openAnimation;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _startTrackingX;
}

@property(retain) UICollectionView * collectionView;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) GKCancelSwipeToEditGestureRecognizer * editModeCancelRecognizer;
@property(retain) GKCollectionViewCell * editingCell;
@property(retain) GKCollectionViewDataSource * gkDataSource;
@property(readonly) unsigned long long hash;
@property(retain) _UIDynamicAnimation * openAnimation;
@property(retain) UIPanGestureRecognizer * panGestureRecognizer;
@property double startTrackingX;
@property(readonly) Class superclass;
@property(readonly) NSIndexPath * trackedIndexPath;

- (id)collectionView;
- (void)dealloc;
- (void)didEnterAnimatingOpenState;
- (void)didEnterAnimatingShutState;
- (void)didEnterEditingState;
- (void)didEnterNothingState;
- (void)didExitAnimatingOpenState;
- (void)didExitEditingState;
- (void)didExitNothingState;
- (id)editModeCancelRecognizer;
- (id)editingCell;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gkDataSource;
- (void)handleCancelTap:(id)arg1;
- (void)handlePan:(id)arg1;
- (id)initWithCollectionView:(id)arg1;
- (id)openAnimation;
- (id)panGestureRecognizer;
- (void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3;
- (void)setCollectionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditModeCancelRecognizer:(id)arg1;
- (void)setEditingCell:(id)arg1;
- (void)setGkDataSource:(id)arg1;
- (void)setOpenAnimation:(id)arg1;
- (void)setPanGestureRecognizer:(id)arg1;
- (void)setStartTrackingX:(double)arg1;
- (void)shutActionPaneForEditingCellAnimated:(bool)arg1;
- (double)startTrackingX;
- (id)trackedIndexPath;
- (void)viewDidDisappear:(bool)arg1;
- (double)xPositionForTranslation:(struct CGPoint { double x1; double x2; })arg1;

@end