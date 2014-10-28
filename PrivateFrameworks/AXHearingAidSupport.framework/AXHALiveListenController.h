/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHALiveListenController : NSObject {
    BOOL _didInitializeAudioUnit;
    BOOL isListening;
    struct OpaqueAudioComponentInstance { } *mixerUnit;
    struct OpaqueAudioComponentInstance { } *rioUnit;
}

@property BOOL didInitializeAudioUnit;
@property BOOL isListening;
@property(readonly) struct OpaqueAudioComponentInstance { }* mixerUnit;
@property(readonly) struct OpaqueAudioComponentInstance { }* rioUnit;

- (float)audioLevel;
- (void)audioRouteDidChange:(id)arg1;
- (void)audioSessionWasInterrupted:(id)arg1;
- (void)dealloc;
- (BOOL)didInitializeAudioUnit;
- (id)init;
- (BOOL)isListening;
- (void)mediaServicesWereReset:(id)arg1;
- (struct OpaqueAudioComponentInstance { }*)mixerUnit;
- (struct OpaqueAudioComponentInstance { }*)rioUnit;
- (void)setDidInitializeAudioUnit:(BOOL)arg1;
- (void)setIsListening:(BOOL)arg1;
- (BOOL)startListeningWithError:(id*)arg1;
- (BOOL)stopListeningWithError:(id*)arg1;

@end