/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMModeSwitchTestHarness : CAMPerformanceTestHarness {
    int  _desiredMode;
    CAMViewfinderViewController * _viewfinder;
}

+ (id)harnessWithTestName:(id)arg1 viewfinder:(id)arg2 mode:(int)arg3;

- (void).cxx_destruct;
- (void)ensureCaptureMode:(int)arg1 thenPerform:(id /* block */)arg2;
- (id)initWithTestName:(id)arg1 viewfinder:(id)arg2 mode:(int)arg3;
- (void)runConfiguredTest;

@end
