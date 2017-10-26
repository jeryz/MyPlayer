// GENERATED CODE
// Generated by the Java program at /build/annotationProcessors at compile time
// from annotations on Java methods. To update, change the annotations on the
// corresponding Java methods and rerun the build. Manually updating this file
// will cause your build to fail.

#ifndef GeneratedJNINatives_h
#define GeneratedJNINatives_h

#include "GeneratedJNIWrappers.h"
#include "mozilla/jni/Natives.h"

namespace mozilla {
namespace java {

template<class Impl>
class AndroidGamepadManager::Natives : public mozilla::jni::NativeImpl<AndroidGamepadManager, Impl>
{
public:
    static const JNINativeMethod methods[3];
};

template<class Impl>
const JNINativeMethod AndroidGamepadManager::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<AndroidGamepadManager::OnAxisChange_t>(
            mozilla::jni::NativeStub<AndroidGamepadManager::OnAxisChange_t, Impl>
            ::template Wrap<&Impl::OnAxisChange>),

    mozilla::jni::MakeNativeMethod<AndroidGamepadManager::OnButtonChange_t>(
            mozilla::jni::NativeStub<AndroidGamepadManager::OnButtonChange_t, Impl>
            ::template Wrap<&Impl::OnButtonChange>),

    mozilla::jni::MakeNativeMethod<AndroidGamepadManager::OnGamepadChange_t>(
            mozilla::jni::NativeStub<AndroidGamepadManager::OnGamepadChange_t, Impl>
            ::template Wrap<&Impl::OnGamepadChange>)
};

template<class Impl>
class EventDispatcher::Natives : public mozilla::jni::NativeImpl<EventDispatcher, Impl>
{
public:
    static const JNINativeMethod methods[3];
};

template<class Impl>
const JNINativeMethod EventDispatcher::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<EventDispatcher::DispatchToGecko_t>(
            mozilla::jni::NativeStub<EventDispatcher::DispatchToGecko_t, Impl>
            ::template Wrap<&Impl::DispatchToGecko>),

    mozilla::jni::MakeNativeMethod<EventDispatcher::DisposeNative_t>(
            mozilla::jni::NativeStub<EventDispatcher::DisposeNative_t, Impl>
            ::template Wrap<&Impl::DisposeNative>),

    mozilla::jni::MakeNativeMethod<EventDispatcher::HasGeckoListener_t>(
            mozilla::jni::NativeStub<EventDispatcher::HasGeckoListener_t, Impl>
            ::template Wrap<&Impl::HasGeckoListener>)
};

template<class Impl>
class EventDispatcher::NativeCallbackDelegate::Natives : public mozilla::jni::NativeImpl<NativeCallbackDelegate, Impl>
{
public:
    static const JNINativeMethod methods[3];
};

template<class Impl>
const JNINativeMethod EventDispatcher::NativeCallbackDelegate::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<EventDispatcher::NativeCallbackDelegate::Finalize_t>(
            mozilla::jni::NativeStub<EventDispatcher::NativeCallbackDelegate::Finalize_t, Impl>
            ::template Wrap<&Impl::Finalize>),

    mozilla::jni::MakeNativeMethod<EventDispatcher::NativeCallbackDelegate::SendError_t>(
            mozilla::jni::NativeStub<EventDispatcher::NativeCallbackDelegate::SendError_t, Impl>
            ::template Wrap<&Impl::SendError>),

    mozilla::jni::MakeNativeMethod<EventDispatcher::NativeCallbackDelegate::SendSuccess_t>(
            mozilla::jni::NativeStub<EventDispatcher::NativeCallbackDelegate::SendSuccess_t, Impl>
            ::template Wrap<&Impl::SendSuccess>)
};

template<class Impl>
class GeckoAppShell::Natives : public mozilla::jni::NativeImpl<GeckoAppShell, Impl>
{
public:
    static const JNINativeMethod methods[6];
};

template<class Impl>
const JNINativeMethod GeckoAppShell::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<GeckoAppShell::NotifyObservers_t>(
            mozilla::jni::NativeStub<GeckoAppShell::NotifyObservers_t, Impl>
            ::template Wrap<&Impl::NotifyObservers>),

    mozilla::jni::MakeNativeMethod<GeckoAppShell::NotifyAlertListener_t>(
            mozilla::jni::NativeStub<GeckoAppShell::NotifyAlertListener_t, Impl>
            ::template Wrap<&Impl::NotifyAlertListener>),

    mozilla::jni::MakeNativeMethod<GeckoAppShell::NotifyUriVisited_t>(
            mozilla::jni::NativeStub<GeckoAppShell::NotifyUriVisited_t, Impl>
            ::template Wrap<&Impl::NotifyUriVisited>),

    mozilla::jni::MakeNativeMethod<GeckoAppShell::OnLocationChanged_t>(
            mozilla::jni::NativeStub<GeckoAppShell::OnLocationChanged_t, Impl>
            ::template Wrap<&Impl::OnLocationChanged>),

    mozilla::jni::MakeNativeMethod<GeckoAppShell::OnSensorChanged_t>(
            mozilla::jni::NativeStub<GeckoAppShell::OnSensorChanged_t, Impl>
            ::template Wrap<&Impl::OnSensorChanged>),

    mozilla::jni::MakeNativeMethod<GeckoAppShell::ReportJavaCrash_t>(
            mozilla::jni::NativeStub<GeckoAppShell::ReportJavaCrash_t, Impl>
            ::template Wrap<&Impl::ReportJavaCrash>)
};

template<class Impl>
class GeckoAppShell::CameraCallback::Natives : public mozilla::jni::NativeImpl<CameraCallback, Impl>
{
public:
    static const JNINativeMethod methods[1];
};

template<class Impl>
const JNINativeMethod GeckoAppShell::CameraCallback::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<GeckoAppShell::CameraCallback::OnFrameData_t>(
            mozilla::jni::NativeStub<GeckoAppShell::CameraCallback::OnFrameData_t, Impl>
            ::template Wrap<&Impl::OnFrameData>)
};

template<class Impl>
class GeckoBatteryManager::Natives : public mozilla::jni::NativeImpl<GeckoBatteryManager, Impl>
{
public:
    static const JNINativeMethod methods[1];
};

template<class Impl>
const JNINativeMethod GeckoBatteryManager::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<GeckoBatteryManager::OnBatteryChange_t>(
            mozilla::jni::NativeStub<GeckoBatteryManager::OnBatteryChange_t, Impl>
            ::template Wrap<&Impl::OnBatteryChange>)
};

template<class Impl>
class GeckoEditableChild::Natives : public mozilla::jni::NativeImpl<GeckoEditableChild, Impl>
{
public:
    static const JNINativeMethod methods[6];
};

template<class Impl>
const JNINativeMethod GeckoEditableChild::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<GeckoEditableChild::OnImeAddCompositionRange_t>(
            mozilla::jni::NativeStub<GeckoEditableChild::OnImeAddCompositionRange_t, Impl>
            ::template Wrap<&Impl::OnImeAddCompositionRange>),

    mozilla::jni::MakeNativeMethod<GeckoEditableChild::OnImeReplaceText_t>(
            mozilla::jni::NativeStub<GeckoEditableChild::OnImeReplaceText_t, Impl>
            ::template Wrap<&Impl::OnImeReplaceText>),

    mozilla::jni::MakeNativeMethod<GeckoEditableChild::OnImeRequestCursorUpdates_t>(
            mozilla::jni::NativeStub<GeckoEditableChild::OnImeRequestCursorUpdates_t, Impl>
            ::template Wrap<&Impl::OnImeRequestCursorUpdates>),

    mozilla::jni::MakeNativeMethod<GeckoEditableChild::OnImeSynchronize_t>(
            mozilla::jni::NativeStub<GeckoEditableChild::OnImeSynchronize_t, Impl>
            ::template Wrap<&Impl::OnImeSynchronize>),

    mozilla::jni::MakeNativeMethod<GeckoEditableChild::OnImeUpdateComposition_t>(
            mozilla::jni::NativeStub<GeckoEditableChild::OnImeUpdateComposition_t, Impl>
            ::template Wrap<&Impl::OnImeUpdateComposition>),

    mozilla::jni::MakeNativeMethod<GeckoEditableChild::OnKeyEvent_t>(
            mozilla::jni::NativeStub<GeckoEditableChild::OnKeyEvent_t, Impl>
            ::template Wrap<&Impl::OnKeyEvent>)
};

template<class Impl>
class GeckoNetworkManager::Natives : public mozilla::jni::NativeImpl<GeckoNetworkManager, Impl>
{
public:
    static const JNINativeMethod methods[2];
};

template<class Impl>
const JNINativeMethod GeckoNetworkManager::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<GeckoNetworkManager::OnConnectionChanged_t>(
            mozilla::jni::NativeStub<GeckoNetworkManager::OnConnectionChanged_t, Impl>
            ::template Wrap<&Impl::OnConnectionChanged>),

    mozilla::jni::MakeNativeMethod<GeckoNetworkManager::OnStatusChanged_t>(
            mozilla::jni::NativeStub<GeckoNetworkManager::OnStatusChanged_t, Impl>
            ::template Wrap<&Impl::OnStatusChanged>)
};

template<class Impl>
class GeckoScreenOrientation::Natives : public mozilla::jni::NativeImpl<GeckoScreenOrientation, Impl>
{
public:
    static const JNINativeMethod methods[1];
};

template<class Impl>
const JNINativeMethod GeckoScreenOrientation::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<GeckoScreenOrientation::OnOrientationChange_t>(
            mozilla::jni::NativeStub<GeckoScreenOrientation::OnOrientationChange_t, Impl>
            ::template Wrap<&Impl::OnOrientationChange>)
};

template<class Impl>
class GeckoThread::Natives : public mozilla::jni::NativeImpl<GeckoThread, Impl>
{
public:
    static const JNINativeMethod methods[6];
};

template<class Impl>
const JNINativeMethod GeckoThread::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<GeckoThread::CreateServices_t>(
            mozilla::jni::NativeStub<GeckoThread::CreateServices_t, Impl>
            ::template Wrap<&Impl::CreateServices>),

    mozilla::jni::MakeNativeMethod<GeckoThread::OnPause_t>(
            mozilla::jni::NativeStub<GeckoThread::OnPause_t, Impl>
            ::template Wrap<&Impl::OnPause>),

    mozilla::jni::MakeNativeMethod<GeckoThread::OnResume_t>(
            mozilla::jni::NativeStub<GeckoThread::OnResume_t, Impl>
            ::template Wrap<&Impl::OnResume>),

    mozilla::jni::MakeNativeMethod<GeckoThread::RunUiThreadCallback_t>(
            mozilla::jni::NativeStub<GeckoThread::RunUiThreadCallback_t, Impl>
            ::template Wrap<&Impl::RunUiThreadCallback>),

    mozilla::jni::MakeNativeMethod<GeckoThread::SpeculativeConnect_t>(
            mozilla::jni::NativeStub<GeckoThread::SpeculativeConnect_t, Impl>
            ::template Wrap<&Impl::SpeculativeConnect>),

    mozilla::jni::MakeNativeMethod<GeckoThread::WaitOnGecko_t>(
            mozilla::jni::NativeStub<GeckoThread::WaitOnGecko_t, Impl>
            ::template Wrap<&Impl::WaitOnGecko>)
};

template<class Impl>
class GeckoView::Window::Natives : public mozilla::jni::NativeImpl<Window, Impl>
{
public:
    static const JNINativeMethod methods[5];
};

template<class Impl>
const JNINativeMethod GeckoView::Window::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<GeckoView::Window::Close_t>(
            mozilla::jni::NativeStub<GeckoView::Window::Close_t, Impl>
            ::template Wrap<&Impl::Close>),

    mozilla::jni::MakeNativeMethod<GeckoView::Window::DisposeNative_t>(
            mozilla::jni::NativeStub<GeckoView::Window::DisposeNative_t, Impl>
            ::template Wrap<&Impl::DisposeNative>),

    mozilla::jni::MakeNativeMethod<GeckoView::Window::LoadUri_t>(
            mozilla::jni::NativeStub<GeckoView::Window::LoadUri_t, Impl>
            ::template Wrap<&Impl::LoadUri>),

    mozilla::jni::MakeNativeMethod<GeckoView::Window::Open_t>(
            mozilla::jni::NativeStub<GeckoView::Window::Open_t, Impl>
            ::template Wrap<&Impl::Open>),

    mozilla::jni::MakeNativeMethod<GeckoView::Window::Reattach_t>(
            mozilla::jni::NativeStub<GeckoView::Window::Reattach_t, Impl>
            ::template Wrap<&Impl::Reattach>)
};

template<class Impl>
class PrefsHelper::Natives : public mozilla::jni::NativeImpl<PrefsHelper, Impl>
{
public:
    static const JNINativeMethod methods[4];
};

template<class Impl>
const JNINativeMethod PrefsHelper::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<PrefsHelper::AddObserver_t>(
            mozilla::jni::NativeStub<PrefsHelper::AddObserver_t, Impl>
            ::template Wrap<&Impl::AddObserver>),

    mozilla::jni::MakeNativeMethod<PrefsHelper::GetPrefs_t>(
            mozilla::jni::NativeStub<PrefsHelper::GetPrefs_t, Impl>
            ::template Wrap<&Impl::GetPrefs>),

    mozilla::jni::MakeNativeMethod<PrefsHelper::RemoveObserver_t>(
            mozilla::jni::NativeStub<PrefsHelper::RemoveObserver_t, Impl>
            ::template Wrap<&Impl::RemoveObserver>),

    mozilla::jni::MakeNativeMethod<PrefsHelper::SetPref_t>(
            mozilla::jni::NativeStub<PrefsHelper::SetPref_t, Impl>
            ::template Wrap<&Impl::SetPref>)
};

template<class Impl>
class ScreenManagerHelper::Natives : public mozilla::jni::NativeImpl<ScreenManagerHelper, Impl>
{
public:
    static const JNINativeMethod methods[2];
};

template<class Impl>
const JNINativeMethod ScreenManagerHelper::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<ScreenManagerHelper::AddDisplay_t>(
            mozilla::jni::NativeStub<ScreenManagerHelper::AddDisplay_t, Impl>
            ::template Wrap<&Impl::AddDisplay>),

    mozilla::jni::MakeNativeMethod<ScreenManagerHelper::RemoveDisplay_t>(
            mozilla::jni::NativeStub<ScreenManagerHelper::RemoveDisplay_t, Impl>
            ::template Wrap<&Impl::RemoveDisplay>)
};

template<class Impl>
class SurfaceTextureListener::Natives : public mozilla::jni::NativeImpl<SurfaceTextureListener, Impl>
{
public:
    static const JNINativeMethod methods[2];
};

template<class Impl>
const JNINativeMethod SurfaceTextureListener::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<SurfaceTextureListener::DisposeNative_t>(
            mozilla::jni::NativeStub<SurfaceTextureListener::DisposeNative_t, Impl>
            ::template Wrap<&Impl::DisposeNative>),

    mozilla::jni::MakeNativeMethod<SurfaceTextureListener::OnFrameAvailable_t>(
            mozilla::jni::NativeStub<SurfaceTextureListener::OnFrameAvailable_t, Impl>
            ::template Wrap<&Impl::OnFrameAvailable>)
};

template<class Impl>
class GeckoSurfaceTexture::Natives : public mozilla::jni::NativeImpl<GeckoSurfaceTexture, Impl>
{
public:
    static const JNINativeMethod methods[1];
};

template<class Impl>
const JNINativeMethod GeckoSurfaceTexture::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<GeckoSurfaceTexture::NativeAcquireTexture_t>(
            mozilla::jni::NativeStub<GeckoSurfaceTexture::NativeAcquireTexture_t, Impl>
            ::template Wrap<&Impl::NativeAcquireTexture>)
};

template<class Impl>
class LayerView::Compositor::Natives : public mozilla::jni::NativeImpl<Compositor, Impl>
{
public:
    static const JNINativeMethod methods[14];
};

template<class Impl>
const JNINativeMethod LayerView::Compositor::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<LayerView::Compositor::AttachToJava_t>(
            mozilla::jni::NativeStub<LayerView::Compositor::AttachToJava_t, Impl>
            ::template Wrap<&Impl::AttachToJava>),

    mozilla::jni::MakeNativeMethod<LayerView::Compositor::CreateCompositor_t>(
            mozilla::jni::NativeStub<LayerView::Compositor::CreateCompositor_t, Impl>
            ::template Wrap<&Impl::CreateCompositor>),

    mozilla::jni::MakeNativeMethod<LayerView::Compositor::DisposeNative_t>(
            mozilla::jni::NativeStub<LayerView::Compositor::DisposeNative_t, Impl>
            ::template Wrap<&Impl::DisposeNative>),

    mozilla::jni::MakeNativeMethod<LayerView::Compositor::EnableLayerUpdateNotifications_t>(
            mozilla::jni::NativeStub<LayerView::Compositor::EnableLayerUpdateNotifications_t, Impl>
            ::template Wrap<&Impl::EnableLayerUpdateNotifications>),

    mozilla::jni::MakeNativeMethod<LayerView::Compositor::OnSizeChanged_t>(
            mozilla::jni::NativeStub<LayerView::Compositor::OnSizeChanged_t, Impl>
            ::template Wrap<&Impl::OnSizeChanged>),

    mozilla::jni::MakeNativeMethod<LayerView::Compositor::RequestScreenPixels_t>(
            mozilla::jni::NativeStub<LayerView::Compositor::RequestScreenPixels_t, Impl>
            ::template Wrap<&Impl::RequestScreenPixels>),

    mozilla::jni::MakeNativeMethod<LayerView::Compositor::SendToolbarAnimatorMessage_t>(
            mozilla::jni::NativeStub<LayerView::Compositor::SendToolbarAnimatorMessage_t, Impl>
            ::template Wrap<&Impl::SendToolbarAnimatorMessage>),

    mozilla::jni::MakeNativeMethod<LayerView::Compositor::SendToolbarPixelsToCompositor_t>(
            mozilla::jni::NativeStub<LayerView::Compositor::SendToolbarPixelsToCompositor_t, Impl>
            ::template Wrap<&Impl::SendToolbarPixelsToCompositor>),

    mozilla::jni::MakeNativeMethod<LayerView::Compositor::SetDefaultClearColor_t>(
            mozilla::jni::NativeStub<LayerView::Compositor::SetDefaultClearColor_t, Impl>
            ::template Wrap<&Impl::SetDefaultClearColor>),

    mozilla::jni::MakeNativeMethod<LayerView::Compositor::SetMaxToolbarHeight_t>(
            mozilla::jni::NativeStub<LayerView::Compositor::SetMaxToolbarHeight_t, Impl>
            ::template Wrap<&Impl::SetMaxToolbarHeight>),

    mozilla::jni::MakeNativeMethod<LayerView::Compositor::SetPinned_t>(
            mozilla::jni::NativeStub<LayerView::Compositor::SetPinned_t, Impl>
            ::template Wrap<&Impl::SetPinned>),

    mozilla::jni::MakeNativeMethod<LayerView::Compositor::SyncInvalidateAndScheduleComposite_t>(
            mozilla::jni::NativeStub<LayerView::Compositor::SyncInvalidateAndScheduleComposite_t, Impl>
            ::template Wrap<&Impl::SyncInvalidateAndScheduleComposite>),

    mozilla::jni::MakeNativeMethod<LayerView::Compositor::SyncPauseCompositor_t>(
            mozilla::jni::NativeStub<LayerView::Compositor::SyncPauseCompositor_t, Impl>
            ::template Wrap<&Impl::SyncPauseCompositor>),

    mozilla::jni::MakeNativeMethod<LayerView::Compositor::SyncResumeResizeCompositor_t>(
            mozilla::jni::NativeStub<LayerView::Compositor::SyncResumeResizeCompositor_t, Impl>
            ::template Wrap<&Impl::SyncResumeResizeCompositor>)
};

template<class Impl>
class NativePanZoomController::Natives : public mozilla::jni::NativeImpl<NativePanZoomController, Impl>
{
public:
    static const JNINativeMethod methods[5];
};

template<class Impl>
const JNINativeMethod NativePanZoomController::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<NativePanZoomController::DisposeNative_t>(
            mozilla::jni::NativeStub<NativePanZoomController::DisposeNative_t, Impl>
            ::template Wrap<&Impl::DisposeNative>),

    mozilla::jni::MakeNativeMethod<NativePanZoomController::HandleMotionEvent_t>(
            mozilla::jni::NativeStub<NativePanZoomController::HandleMotionEvent_t, Impl>
            ::template Wrap<&Impl::HandleMotionEvent>),

    mozilla::jni::MakeNativeMethod<NativePanZoomController::HandleMouseEvent_t>(
            mozilla::jni::NativeStub<NativePanZoomController::HandleMouseEvent_t, Impl>
            ::template Wrap<&Impl::HandleMouseEvent>),

    mozilla::jni::MakeNativeMethod<NativePanZoomController::HandleScrollEvent_t>(
            mozilla::jni::NativeStub<NativePanZoomController::HandleScrollEvent_t, Impl>
            ::template Wrap<&Impl::HandleScrollEvent>),

    mozilla::jni::MakeNativeMethod<NativePanZoomController::SetIsLongpressEnabled_t>(
            mozilla::jni::NativeStub<NativePanZoomController::SetIsLongpressEnabled_t, Impl>
            ::template Wrap<&Impl::SetIsLongpressEnabled>)
};

template<class Impl>
class VsyncSource::Natives : public mozilla::jni::NativeImpl<VsyncSource, Impl>
{
public:
    static const JNINativeMethod methods[1];
};

template<class Impl>
const JNINativeMethod VsyncSource::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<VsyncSource::NotifyVsync_t>(
            mozilla::jni::NativeStub<VsyncSource::NotifyVsync_t, Impl>
            ::template Wrap<&Impl::NotifyVsync>)
};

template<class Impl>
class CodecProxy::NativeCallbacks::Natives : public mozilla::jni::NativeImpl<NativeCallbacks, Impl>
{
public:
    static const JNINativeMethod methods[4];
};

template<class Impl>
const JNINativeMethod CodecProxy::NativeCallbacks::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<CodecProxy::NativeCallbacks::OnError_t>(
            mozilla::jni::NativeStub<CodecProxy::NativeCallbacks::OnError_t, Impl>
            ::template Wrap<&Impl::OnError>),

    mozilla::jni::MakeNativeMethod<CodecProxy::NativeCallbacks::OnInputStatus_t>(
            mozilla::jni::NativeStub<CodecProxy::NativeCallbacks::OnInputStatus_t, Impl>
            ::template Wrap<&Impl::OnInputStatus>),

    mozilla::jni::MakeNativeMethod<CodecProxy::NativeCallbacks::OnOutput_t>(
            mozilla::jni::NativeStub<CodecProxy::NativeCallbacks::OnOutput_t, Impl>
            ::template Wrap<&Impl::OnOutput>),

    mozilla::jni::MakeNativeMethod<CodecProxy::NativeCallbacks::OnOutputFormatChanged_t>(
            mozilla::jni::NativeStub<CodecProxy::NativeCallbacks::OnOutputFormatChanged_t, Impl>
            ::template Wrap<&Impl::OnOutputFormatChanged>)
};

template<class Impl>
class GeckoHlsDemuxerWrapper::HlsDemuxerCallbacks::Natives : public mozilla::jni::NativeImpl<HlsDemuxerCallbacks, Impl>
{
public:
    static const JNINativeMethod methods[2];
};

template<class Impl>
const JNINativeMethod GeckoHlsDemuxerWrapper::HlsDemuxerCallbacks::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<GeckoHlsDemuxerWrapper::HlsDemuxerCallbacks::OnError_t>(
            mozilla::jni::NativeStub<GeckoHlsDemuxerWrapper::HlsDemuxerCallbacks::OnError_t, Impl>
            ::template Wrap<&Impl::OnError>),

    mozilla::jni::MakeNativeMethod<GeckoHlsDemuxerWrapper::HlsDemuxerCallbacks::OnInitialized_t>(
            mozilla::jni::NativeStub<GeckoHlsDemuxerWrapper::HlsDemuxerCallbacks::OnInitialized_t, Impl>
            ::template Wrap<&Impl::OnInitialized>)
};

template<class Impl>
class GeckoHlsResourceWrapper::HlsResourceCallbacks::Natives : public mozilla::jni::NativeImpl<HlsResourceCallbacks, Impl>
{
public:
    static const JNINativeMethod methods[2];
};

template<class Impl>
const JNINativeMethod GeckoHlsResourceWrapper::HlsResourceCallbacks::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<GeckoHlsResourceWrapper::HlsResourceCallbacks::OnDataArrived_t>(
            mozilla::jni::NativeStub<GeckoHlsResourceWrapper::HlsResourceCallbacks::OnDataArrived_t, Impl>
            ::template Wrap<&Impl::OnDataArrived>),

    mozilla::jni::MakeNativeMethod<GeckoHlsResourceWrapper::HlsResourceCallbacks::OnError_t>(
            mozilla::jni::NativeStub<GeckoHlsResourceWrapper::HlsResourceCallbacks::OnError_t, Impl>
            ::template Wrap<&Impl::OnError>)
};

template<class Impl>
class MediaDrmProxy::NativeMediaDrmProxyCallbacks::Natives : public mozilla::jni::NativeImpl<NativeMediaDrmProxyCallbacks, Impl>
{
public:
    static const JNINativeMethod methods[7];
};

template<class Impl>
const JNINativeMethod MediaDrmProxy::NativeMediaDrmProxyCallbacks::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<MediaDrmProxy::NativeMediaDrmProxyCallbacks::OnRejectPromise_t>(
            mozilla::jni::NativeStub<MediaDrmProxy::NativeMediaDrmProxyCallbacks::OnRejectPromise_t, Impl>
            ::template Wrap<&Impl::OnRejectPromise>),

    mozilla::jni::MakeNativeMethod<MediaDrmProxy::NativeMediaDrmProxyCallbacks::OnSessionBatchedKeyChanged_t>(
            mozilla::jni::NativeStub<MediaDrmProxy::NativeMediaDrmProxyCallbacks::OnSessionBatchedKeyChanged_t, Impl>
            ::template Wrap<&Impl::OnSessionBatchedKeyChanged>),

    mozilla::jni::MakeNativeMethod<MediaDrmProxy::NativeMediaDrmProxyCallbacks::OnSessionClosed_t>(
            mozilla::jni::NativeStub<MediaDrmProxy::NativeMediaDrmProxyCallbacks::OnSessionClosed_t, Impl>
            ::template Wrap<&Impl::OnSessionClosed>),

    mozilla::jni::MakeNativeMethod<MediaDrmProxy::NativeMediaDrmProxyCallbacks::OnSessionCreated_t>(
            mozilla::jni::NativeStub<MediaDrmProxy::NativeMediaDrmProxyCallbacks::OnSessionCreated_t, Impl>
            ::template Wrap<&Impl::OnSessionCreated>),

    mozilla::jni::MakeNativeMethod<MediaDrmProxy::NativeMediaDrmProxyCallbacks::OnSessionError_t>(
            mozilla::jni::NativeStub<MediaDrmProxy::NativeMediaDrmProxyCallbacks::OnSessionError_t, Impl>
            ::template Wrap<&Impl::OnSessionError>),

    mozilla::jni::MakeNativeMethod<MediaDrmProxy::NativeMediaDrmProxyCallbacks::OnSessionMessage_t>(
            mozilla::jni::NativeStub<MediaDrmProxy::NativeMediaDrmProxyCallbacks::OnSessionMessage_t, Impl>
            ::template Wrap<&Impl::OnSessionMessage>),

    mozilla::jni::MakeNativeMethod<MediaDrmProxy::NativeMediaDrmProxyCallbacks::OnSessionUpdated_t>(
            mozilla::jni::NativeStub<MediaDrmProxy::NativeMediaDrmProxyCallbacks::OnSessionUpdated_t, Impl>
            ::template Wrap<&Impl::OnSessionUpdated>)
};

template<class Impl>
class GeckoProcessManager::Natives : public mozilla::jni::NativeImpl<GeckoProcessManager, Impl>
{
public:
    static const JNINativeMethod methods[1];
};

template<class Impl>
const JNINativeMethod GeckoProcessManager::Natives<Impl>::methods[] = {

    mozilla::jni::MakeNativeMethod<GeckoProcessManager::GetEditableParent_t>(
            mozilla::jni::NativeStub<GeckoProcessManager::GetEditableParent_t, Impl>
            ::template Wrap<&Impl::GetEditableParent>)
};

} /* java */
} /* mozilla */
#endif // GeneratedJNINatives_h