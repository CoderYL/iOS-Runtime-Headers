/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PerformanceGraphWidget : CALayer {
    PerformanceGraphWidgetPrivate * _private;
}

+ (id)sharedWidget;

- (void).cxx_destruct;
- (id)actionForKey:(id)arg1;
- (void)addDataPoint;
- (void)addRenderDataPoint:(int)arg1 withTickTime:(unsigned long long)arg2 andIsTile:(bool)arg3;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawString:(id)arg1 atPosition:(struct CGPoint { float x1; float x2; })arg2 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 toContext:(struct CGContext { }*)arg4;
- (void)heartbeat;
- (id)init;
- (void)removedTile:(int)arg1 forBytes:(int)arg2;
- (void)renderedTile:(int)arg1 withTickTime:(unsigned long long)arg2 forBytes:(int)arg3;
- (void)setMaxPageCount:(int)arg1;
- (void)setPageVisible:(int)arg1 isVisible:(bool)arg2;
- (void)showWidget:(bool)arg1;

@end
