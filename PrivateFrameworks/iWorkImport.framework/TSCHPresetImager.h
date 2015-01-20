/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPresetImager : NSObject {
}

+ (void)drawGenericImageIntoContext:(struct CGContext { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 preset:(id)arg3 usingRepresentativeSpecificSeriesFillProperties:(id)arg4 outShouldCache:(bool*)arg5;
+ (id)presetImagerForChartType:(id)arg1;

- (id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 imageScale:(double)arg4 swatchFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 documentRoot:(id)arg6 shouldCache:(bool*)arg7;
- (id)init;
- (id)initWithChartType:(id)arg1;
- (id)p_chartType;
- (struct CGSize { double x1; double x2; })p_drawAndOffsetMultiDataSliderIntoContext:(struct CGContext { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 contentsScale:(double)arg3;
- (void)p_drawShadowedContentIntoContext:(struct CGContext { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 contentsScale:(double)arg3 preset:(id)arg4 shouldCache:(bool*)arg5;
- (void)p_drawUnshadowedContentIntoContext:(struct CGContext { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 contentsScale:(double)arg3 preset:(id)arg4 shouldCache:(bool*)arg5;
- (void)p_fillPath:(struct CGPath { }*)arg1 withFill:(id)arg2 inContext:(struct CGContext { }*)arg3;
- (id)p_init;
- (struct CGSize { double x1; double x2; })p_nativeSize;
- (struct CGContext { }*)p_newContextOfSize:(struct CGSize { double x1; double x2; })arg1;
- (id)p_objectFromStyle:(id)arg1 specific:(int)arg2 default:(int)arg3;
- (bool)p_preserveAspectRatio;
- (id)p_shadow;
- (id)p_strokeFromStyle:(id)arg1 specific:(int)arg2 default:(int)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })swatchImageEdgeInsetsForSize:(struct CGSize { double x1; double x2; })arg1;

@end