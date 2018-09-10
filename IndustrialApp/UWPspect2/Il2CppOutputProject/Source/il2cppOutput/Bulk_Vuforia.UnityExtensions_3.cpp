#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action
struct Action_t1264377477;
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_t1617499438;
// System.Action`1<Vuforia.VuforiaBehaviour>
struct Action_1_t2324316135;
// System.Action`2<Vuforia.VuforiaManager/TrackableIdPair,System.Boolean>
struct Action_2_t1413982646;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Vuforia.WebCamProfile/ProfileData>[]
struct EntryU5BU5D_t4260740697;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>[]
struct EntryU5BU5D_t4047155310;
// System.Collections.Generic.Dictionary`2/Entry<Vuforia.VuforiaManager/TrackableIdPair,UnityEngine.XR.WSA.WorldAnchor>[]
struct EntryU5BU5D_t3737004205;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>
struct KeyCollection_t3494323695;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>
struct KeyCollection_t1266212798;
// System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.VuforiaManager/TrackableIdPair,UnityEngine.XR.WSA.WorldAnchor>
struct KeyCollection_t1330680619;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>
struct ValueCollection_t725725246;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>
struct ValueCollection_t2792581645;
// System.Collections.Generic.Dictionary`2/ValueCollection<Vuforia.VuforiaManager/TrackableIdPair,UnityEngine.XR.WSA.WorldAnchor>
struct ValueCollection_t2857049466;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>
struct Dictionary_2_t2595729825;
// System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t571830913;
// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t3304648224;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,System.Single>
struct Dictionary_2_t317574578;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4>
struct Dictionary_2_t738209647;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>
struct Dictionary_2_t1076537327;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t3630620928;
// System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,System.Object>
struct Dictionary_2_t2059337159;
// System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,UnityEngine.XR.WSA.WorldAnchor>
struct Dictionary_2_t1141005148;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t412400163;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet>
struct IEnumerable_1_t2265887763;
// System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget>
struct IEnumerable_1_t2686869383;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Camera/StereoscopicEye>
struct IEqualityComparer_1_t51028758;
// System.Collections.Generic.IEqualityComparer`1<Vuforia.VuforiaManager/TrackableIdPair>
struct IEqualityComparer_1_t2039715179;
// System.Collections.Generic.LinkedList`1<Vuforia.VuforiaManager/TrackableIdPair>
struct LinkedList_1_t3066996466;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t463142320;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t2968050330;
// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT>
struct List_1_t386988881;
// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_t619090059;
// System.Collections.Generic.List`1<Vuforia.VuforiaManager/TrackableIdPair>
struct List_1_t1404457903;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Func`3<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>
struct Func_3_t917206208;
// System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>
struct Func_3_t3440825513;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t2285235057;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Void
struct Void_t1185182177;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1709987734;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487;
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MeshFilter
struct MeshFilter_t3523625662;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1417781964;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t4294070825;
// UnityEngine.WebCamTexture
struct WebCamTexture_t1514609158;
// UnityEngine.XR.WSA.WorldAnchor
struct WorldAnchor_t2161774153;
// UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate
struct OnTrackingChangedDelegate_t3480415086;
// Vuforia.ARController
struct ARController_t116632334;
// Vuforia.BackgroundPlaneBehaviour
struct BackgroundPlaneBehaviour_t3333547397;
// Vuforia.BaseCameraConfiguration
struct BaseCameraConfiguration_t3118151474;
// Vuforia.CameraCalibrationComparer
struct CameraCalibrationComparer_t2990055837;
// Vuforia.CameraDevice
struct CameraDevice_t960297568;
// Vuforia.DefaultWebCamTexAdaptor
struct DefaultWebCamTexAdaptor_t2452636845;
// Vuforia.Device
struct Device_t64880687;
// Vuforia.DeviceTrackerARController
struct DeviceTrackerARController_t1095592542;
// Vuforia.DigitalEyewearARController
struct DigitalEyewearARController_t1054226036;
// Vuforia.DigitalEyewearARController/SerializableViewerParameters
struct SerializableViewerParameters_t2043332680;
// Vuforia.IHoloLensApiAbstraction
struct IHoloLensApiAbstraction_t3268373165;
// Vuforia.IPlayModeEditorUtility
struct IPlayModeEditorUtility_t752570519;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t1495975588;
// Vuforia.ITrackerManager
struct ITrackerManager_t607206903;
// Vuforia.IUnityPlayer
struct IUnityPlayer_t3870301646;
// Vuforia.IVuforiaWrapper
struct IVuforiaWrapper_t2381307640;
// Vuforia.IWebCam
struct IWebCam_t3734514901;
// Vuforia.IWebCamTexAdaptor
struct IWebCamTexAdaptor_t3823546776;
// Vuforia.Image
struct Image_t745056343;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t2430893908;
// Vuforia.LateLatchingManager
struct LateLatchingManager_t3198550161;
// Vuforia.NullHoloLensApiAbstraction
struct NullHoloLensApiAbstraction_t2968904009;
// Vuforia.ObjectTracker
struct ObjectTracker_t4177997237;
// Vuforia.StereoProjMatrixStore
struct StereoProjMatrixStore_t888524276;
// Vuforia.TargetFinder
struct TargetFinder_t2439332195;
// Vuforia.TextureRenderer
struct TextureRenderer_t3278815845;
// Vuforia.Trackable
struct Trackable_t2451999991;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1113559212;
// Vuforia.TrackableSource
struct TrackableSource_t2567074243;
// Vuforia.TrackerData/TrackableResultData[]
struct TrackableResultDataU5BU5D_t4273811049;
// Vuforia.TrackerData/VuMarkTargetData[]
struct VuMarkTargetDataU5BU5D_t4015091482;
// Vuforia.TrackerData/VuMarkTargetResultData[]
struct VuMarkTargetResultDataU5BU5D_t2157423781;
// Vuforia.VRDeviceCameraConfiguration
struct VRDeviceCameraConfiguration_t3015543037;
// Vuforia.VRDeviceController
struct VRDeviceController_t3863472269;
// Vuforia.VideoBackgroundBehaviour
struct VideoBackgroundBehaviour_t1552899074;
// Vuforia.VuMarkBehaviour
struct VuMarkBehaviour_t1178230459;
// Vuforia.VuforiaARController
struct VuforiaARController_t1876945237;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t2151848540;
// Vuforia.VuforiaConfiguration
struct VuforiaConfiguration_t1763229349;
// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct DeviceTrackerConfiguration_t721467671;
// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration
struct DigitalEyewearConfiguration_t546560202;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t3697830469;
// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration
struct SmartTerrainConfiguration_t1514074484;
// Vuforia.VuforiaConfiguration/TrackerConfiguration
struct TrackerConfiguration_t3072429111;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t3392414655;
// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct WebCamConfiguration_t1101614731;
// Vuforia.VuforiaManager
struct VuforiaManager_t1653423889;
// Vuforia.VuforiaManager/TrackableIdPair[]
struct TrackableIdPairU5BU5D_t475764036;
// Vuforia.VuforiaNativeWrapper
struct VuforiaNativeWrapper_t2621726075;
// Vuforia.VuforiaNullWrapper
struct VuforiaNullWrapper_t2343315499;
// Vuforia.VuforiaRenderer
struct VuforiaRenderer_t3433045970;
// Vuforia.VuforiaRuntimeUtilities
struct VuforiaRuntimeUtilities_t399660591;
// Vuforia.VuforiaRuntimeUtilities/GlobalVars
struct GlobalVars_t2485087241;
// Vuforia.VuforiaVRDeviceCameraConfiguration
struct VuforiaVRDeviceCameraConfiguration_t3308462389;
// Vuforia.WSAUnityPlayer
struct WSAUnityPlayer_t3135728299;
// Vuforia.WSAUnityPlayer/HoloLensApiImplementation
struct HoloLensApiImplementation_t262900719;
// Vuforia.WebCam
struct WebCam_t2427002488;
// Vuforia.WebCamARController
struct WebCamARController_t3718642882;
// Vuforia.WebCamARController/<>c
struct U3CU3Ec_t3582055403;
// Vuforia.WebCamProfile
struct WebCamProfile_t4166408645;
// Vuforia.WebCamTexAdaptor
struct WebCamTexAdaptor_t3430449046;
// Vuforia.WireframeBehaviour
struct WireframeBehaviour_t1831066704;
// Vuforia.WireframeBehaviour[]
struct WireframeBehaviourU5BU5D_t4114094193;
// Vuforia.WireframeTrackableEventHandler
struct WireframeTrackableEventHandler_t2143753312;
// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t632567575;
// VuforiaMonoBehaviour
struct VuforiaMonoBehaviour_t1150221792;

extern RuntimeClass* CameraConfigurationUtility_t1452827745_il2cpp_TypeInfo_var;
extern RuntimeClass* CameraDevice_t960297568_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* DefaultWebCamTexAdaptor_t2452636845_il2cpp_TypeInfo_var;
extern RuntimeClass* DeviceTrackerARController_t1095592542_il2cpp_TypeInfo_var;
extern RuntimeClass* DeviceTrackerConfiguration_t721467671_il2cpp_TypeInfo_var;
extern RuntimeClass* Device_t64880687_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t1141005148_il2cpp_TypeInfo_var;
extern RuntimeClass* DigitalEyewearARController_t1054226036_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_3_t3440825513_il2cpp_TypeInfo_var;
extern RuntimeClass* HoloLensApiImplementation_t262900719_il2cpp_TypeInfo_var;
extern RuntimeClass* IHoloLensApiAbstraction_t3268373165_il2cpp_TypeInfo_var;
extern RuntimeClass* IPlayModeEditorUtility_t752570519_il2cpp_TypeInfo_var;
extern RuntimeClass* IUnityPlayer_t3870301646_il2cpp_TypeInfo_var;
extern RuntimeClass* IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var;
extern RuntimeClass* IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1404457903_il2cpp_TypeInfo_var;
extern RuntimeClass* Material_t340375123_il2cpp_TypeInfo_var;
extern RuntimeClass* Math_t1671470975_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* Matrix4x4_t1817901843_il2cpp_TypeInfo_var;
extern RuntimeClass* NullHoloLensApiAbstraction_t2968904009_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* OnTrackingChangedDelegate_t3480415086_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* Regex_t3657309853_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* StereoProjMatrixStore_t888524276_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* SurfaceUtilities_t1841955943_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern RuntimeClass* TextureRenderer_t3278815845_il2cpp_TypeInfo_var;
extern RuntimeClass* TrackableBehaviourU5BU5D_t1497733925_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t3582055403_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityPlayer_t3127875071_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaManager_t1653423889_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaNativeWrapper_t2621726075_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaNullWrapper_t2343315499_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaRenderer_t3433045970_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaUnity_t1788908542_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var;
extern RuntimeClass* WSAUnityPlayer_t3135728299_il2cpp_TypeInfo_var;
extern RuntimeClass* WebCamARController_t3718642882_il2cpp_TypeInfo_var;
extern RuntimeClass* WebCamProfile_t4166408645_il2cpp_TypeInfo_var;
extern RuntimeClass* WebCamTexAdaptor_t3430449046_il2cpp_TypeInfo_var;
extern RuntimeClass* WebCamTexture_t1514609158_il2cpp_TypeInfo_var;
extern RuntimeClass* WebCam_t2427002488_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1206345658;
extern String_t* _stringLiteral1365285002;
extern String_t* _stringLiteral1366632535;
extern String_t* _stringLiteral1571861241;
extern String_t* _stringLiteral1601630912;
extern String_t* _stringLiteral2036431799;
extern String_t* _stringLiteral2896697054;
extern String_t* _stringLiteral3007346115;
extern String_t* _stringLiteral3073488411;
extern String_t* _stringLiteral3081076223;
extern String_t* _stringLiteral3452614529;
extern String_t* _stringLiteral3483481617;
extern String_t* _stringLiteral3820270571;
extern String_t* _stringLiteral3957048425;
extern String_t* _stringLiteral70419937;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral92849142;
extern const RuntimeMethod* Action_2_Invoke_m3936037408_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisMeshFilter_t3523625662_m569847836_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisWorldAnchor_t2161774153_m2159763270_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisWireframeBehaviour_t1831066704_m2022065013_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m3931265510_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m4190276240_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsValue_m3973620170_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m4020718675_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m722751029_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1260807329_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2463376224_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m479432706_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m3931702618_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m651737360_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Any_TisDataSet_t3286034874_m2986703799_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Any_TisImageTarget_t3707016494_m18292949_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3537662908_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3617080421_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2371253146_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m335914463_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1400196701_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2497996742_RuntimeMethod_var;
extern const RuntimeMethod* Func_3_Invoke_m2574976179_RuntimeMethod_var;
extern const RuntimeMethod* Func_3__ctor_m3165450366_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisWorldAnchor_t2161774153_m1146425241_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponentsInChildren_TisCamera_t4157153871_m926460427_RuntimeMethod_var;
extern const RuntimeMethod* HoloLensApiImplementation_OnWorldAnchorTrackingChanged_m813234441_RuntimeMethod_var;
extern const RuntimeMethod* ITrackerManager_GetTracker_TisObjectTracker_t4177997237_m1548597255_RuntimeMethod_var;
extern const RuntimeMethod* ITrackerManager_GetTracker_TisPositionalDeviceTracker_t656722001_m1362359953_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m3336906090_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m3787101018_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1019040917_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3410319374_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m553929403_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__7_0_m3175983664_RuntimeMethod_var;
extern const RuntimeMethod* UnityComponentExtensions_GetComponentsOnlyInChildren_TisCamera_t4157153871_m2275549933_RuntimeMethod_var;
extern const RuntimeType* TrackableBehaviour_t1113559212_0_0_0_var;
extern const uint32_t HoloLensApiImplementation_DeleteWorldAnchor_m1964262436_MetadataUsageId;
extern const uint32_t HoloLensApiImplementation_DeleteWorldAnchor_m2499016255_MetadataUsageId;
extern const uint32_t HoloLensApiImplementation_InternalDeleteWA_m1699531741_MetadataUsageId;
extern const uint32_t HoloLensApiImplementation_OnWorldAnchorTrackingChanged_m813234441_MetadataUsageId;
extern const uint32_t HoloLensApiImplementation_SetWorldAnchor_m4030643753_MetadataUsageId;
extern const uint32_t HoloLensApiImplementation__ctor_m1467655506_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3C_ctorU3Eb__7_0_m3175983664_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m4266389493_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m3783275716_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m626826678_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_CheckNativePluginSupport_m3955787202_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_CleanTrackableFromUnwantedComponents_m881847735_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_DecodeUfoLicenseKey_m793702049_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_EncodeUfoLicenseKey_m619676087_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_ForceDisableTrackables_m3062194735_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_GetActiveFusionProvider_m3824252240_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_GetCameraState_m1262028323_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_GetStoragePath_m3854718746_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_IsNativePluginSupportAvailable_m4173160650_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_IsPositionalDeviceTrackerActive_m3052908928_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_IsWebCamUsed_m1354890003_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_PrepareCoordinateConversion_m4247151566_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_ReInitAndStartCamera_m352857609_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_ScreenSpaceToCameraFrameCoordinates_m1683766283_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_SelectRectTopLeftAndBottomRightForLandscapeLeft_m3094027904_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_SetAllowedFusionProviders_m243147468_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_StopAndDeinitCamera_m4256552813_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_StopCameraIfPossible_m1378908556_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_StripExtensionFromPath_m470692391_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_StripFileNameFromPath_m3879488773_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_StripStreamingAssetsFromPath_m413037888_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_ViewPortToCameraFrameCoordinatesNormalized_m125417336_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_get_IsLandscapeOrientation_m2557240032_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_get_IsPortraitOrientation_m1117343187_MetadataUsageId;
extern const uint32_t VuforiaRuntimeUtilities_get_ScreenOrientation_m2326897546_MetadataUsageId;
extern const uint32_t VuforiaUnity_Deinit_m1714227419_MetadataUsageId;
extern const uint32_t VuforiaUnity_GetHoloLensApiAbstraction_m3725012548_MetadataUsageId;
extern const uint32_t VuforiaUnity_GetVuforiaLibraryVersion_m2580526827_MetadataUsageId;
extern const uint32_t VuforiaUnity_IsRendererDirty_m4230899877_MetadataUsageId;
extern const uint32_t VuforiaUnity_OnPause_m325849098_MetadataUsageId;
extern const uint32_t VuforiaUnity_OnResume_m2059515051_MetadataUsageId;
extern const uint32_t VuforiaUnity_SetApplicationEnvironment_m2893355577_MetadataUsageId;
extern const uint32_t VuforiaUnity_SetHint_m1654650971_MetadataUsageId;
extern const uint32_t VuforiaUnity_SetHint_m74176957_MetadataUsageId;
extern const uint32_t VuforiaUnity_SetHoloLensApiAbstraction_m2124408801_MetadataUsageId;
extern const uint32_t VuforiaUnity_SetHolographicAppCoordinateSystem_m1027427466_MetadataUsageId;
extern const uint32_t VuforiaUnity_SetRendererDirty_m1269376789_MetadataUsageId;
extern const uint32_t VuforiaUnity__cctor_m398384037_MetadataUsageId;
extern const uint32_t VuforiaVRDeviceCameraConfiguration_Destroy_m1910297319_MetadataUsageId;
extern const uint32_t VuforiaVRDeviceCameraConfiguration_Init_m1502773221_MetadataUsageId;
extern const uint32_t VuforiaVRDeviceCameraConfiguration_IsVuforiaVRDeviceReady_m2144715820_MetadataUsageId;
extern const uint32_t VuforiaVRDeviceCameraConfiguration_ProjectionParamsChanged_m4277806698_MetadataUsageId;
extern const uint32_t VuforiaVRDeviceCameraConfiguration_UpdateProjection_m597620862_MetadataUsageId;
extern const uint32_t VuforiaVRDeviceCameraConfiguration__ctor_m3714078355_MetadataUsageId;
extern const uint32_t VuforiaWrapper_CreateCamIndependentInstance_m77460357_MetadataUsageId;
extern const uint32_t VuforiaWrapper_CreateRuntimeInstance_m1561005390_MetadataUsageId;
extern const uint32_t VuforiaWrapper_SetImplementation_m2123132207_MetadataUsageId;
extern const uint32_t VuforiaWrapper_get_CamIndependentInstance_m1623182226_MetadataUsageId;
extern const uint32_t VuforiaWrapper_get_Instance_m2947582594_MetadataUsageId;
extern const uint32_t WSAUnityPlayer_GetActualScreenOrientation_m1268631473_MetadataUsageId;
extern const uint32_t WSAUnityPlayer_InitializePlatform_m618442718_MetadataUsageId;
extern const uint32_t WSAUnityPlayer_InitializeSurface_m1007153949_MetadataUsageId;
extern const uint32_t WSAUnityPlayer_InitializeVuforia_m1469206804_MetadataUsageId;
extern const uint32_t WSAUnityPlayer_OnDestroy_m3595342806_MetadataUsageId;
extern const uint32_t WSAUnityPlayer_OnPause_m33757750_MetadataUsageId;
extern const uint32_t WSAUnityPlayer_OnResume_m1549828269_MetadataUsageId;
extern const uint32_t WSAUnityPlayer_SetUnityScreenOrientation_m1871021514_MetadataUsageId;
extern const uint32_t WSAUnityPlayer_StartScene_m426981829_MetadataUsageId;
extern const uint32_t WSAUnityPlayer_Update_m2619224026_MetadataUsageId;
extern const uint32_t WSAUnityPlayer__cctor_m3614377559_MetadataUsageId;
extern const uint32_t WebCamARController_Awake_m4020518652_MetadataUsageId;
extern const uint32_t WebCamARController_InitCamera_m1118184140_MetadataUsageId;
extern const uint32_t WebCamARController_OnDestroy_m1720525424_MetadataUsageId;
extern const uint32_t WebCamARController_OnLevelWasLoaded_m3407873239_MetadataUsageId;
extern const uint32_t WebCamARController_RegisterARController_m2119076139_MetadataUsageId;
extern const uint32_t WebCamARController_Update_m2251066661_MetadataUsageId;
extern const uint32_t WebCamARController__cctor_m3035936290_MetadataUsageId;
extern const uint32_t WebCamARController__ctor_m751483383_MetadataUsageId;
extern const uint32_t WebCamARController_get_Instance_m1980552932_MetadataUsageId;
extern const uint32_t WebCamProfile_GetProfile_m3959388229_MetadataUsageId;
extern const uint32_t WebCamProfile_ProfileAvailable_m801322015_MetadataUsageId;
extern const uint32_t WebCamProfile__ctor_m820471938_MetadataUsageId;
extern const uint32_t WebCamTexAdaptor_CheckPermissions_m4247082500_MetadataUsageId;
extern const uint32_t WebCamTexAdaptor__ctor_m852957585_MetadataUsageId;
extern const uint32_t WebCam_ComputeResampledTextureSize_m321498482_MetadataUsageId;
extern const uint32_t WebCam_OnDestroy_m332336637_MetadataUsageId;
extern const uint32_t WebCam_RenderFrame_m2496994751_MetadataUsageId;
extern const uint32_t WebCam_StartCamera_m784729827_MetadataUsageId;
extern const uint32_t WebCam_StopCamera_m1511219799_MetadataUsageId;
extern const uint32_t WebCam_Update_m3572144808_MetadataUsageId;
extern const uint32_t WebCam__ctor_m2427464772_MetadataUsageId;
extern const uint32_t WebCam_get_DidUpdateThisFrame_m2722596423_MetadataUsageId;
extern const uint32_t WebCam_get_IsPlaying_m2513986056_MetadataUsageId;
extern const uint32_t WireframeBehaviour_OnDrawGizmos_m1837418945_MetadataUsageId;
extern const uint32_t WireframeBehaviour_OnRenderObject_m913596852_MetadataUsageId;
extern const uint32_t WireframeBehaviour_Start_m3567912005_MetadataUsageId;
extern const uint32_t WireframeTrackableEventHandler_OnTrackingFound_m2813716415_MetadataUsageId;
extern const uint32_t WireframeTrackableEventHandler_OnTrackingLost_m1967211472_MetadataUsageId;
extern const uint32_t WireframeTrackableEventHandler_Start_m3436697873_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;
struct Int32U5BU5D_t385246372;
struct StringU5BU5D_t1281789340;
struct CameraU5BU5D_t1709987734;
struct ColliderU5BU5D_t4234922487;
struct Color32U5BU5D_t3850468773;
struct ObjectU5BU5D_t1417781964;
struct RendererU5BU5D_t3210418286;
struct Vector3U5BU5D_t1718750761;
struct WebCamDeviceU5BU5D_t4294070825;
struct TrackableBehaviourU5BU5D_t1497733925;
struct WireframeBehaviourU5BU5D_t4114094193;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_T3304648224_H
#define DICTIONARY_2_T3304648224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>
struct  Dictionary_2_t3304648224  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t4260740697* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t3494323695 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t725725246 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___entries_1)); }
	inline EntryU5BU5D_t4260740697* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t4260740697** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t4260740697* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___keys_7)); }
	inline KeyCollection_t3494323695 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3494323695 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3494323695 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___values_8)); }
	inline ValueCollection_t725725246 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t725725246 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t725725246 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3304648224_H
#ifndef DICTIONARY_2_T1076537327_H
#define DICTIONARY_2_T1076537327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>
struct  Dictionary_2_t1076537327  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t4047155310* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1266212798 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2792581645 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1076537327, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1076537327, ___entries_1)); }
	inline EntryU5BU5D_t4047155310* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t4047155310** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t4047155310* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1076537327, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1076537327, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1076537327, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1076537327, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1076537327, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1076537327, ___keys_7)); }
	inline KeyCollection_t1266212798 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1266212798 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1266212798 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1076537327, ___values_8)); }
	inline ValueCollection_t2792581645 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2792581645 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2792581645 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1076537327, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1076537327_H
#ifndef DICTIONARY_2_T1141005148_H
#define DICTIONARY_2_T1141005148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,UnityEngine.XR.WSA.WorldAnchor>
struct  Dictionary_2_t1141005148  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3737004205* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1330680619 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2857049466 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1141005148, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1141005148, ___entries_1)); }
	inline EntryU5BU5D_t3737004205* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3737004205** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3737004205* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1141005148, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1141005148, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1141005148, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1141005148, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1141005148, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1141005148, ___keys_7)); }
	inline KeyCollection_t1330680619 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1330680619 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1330680619 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1141005148, ___values_8)); }
	inline ValueCollection_t2857049466 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2857049466 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2857049466 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1141005148, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1141005148_H
#ifndef LIST_1_T1404457903_H
#define LIST_1_T1404457903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Vuforia.VuforiaManager/TrackableIdPair>
struct  List_1_t1404457903  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TrackableIdPairU5BU5D_t475764036* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1404457903, ____items_1)); }
	inline TrackableIdPairU5BU5D_t475764036* get__items_1() const { return ____items_1; }
	inline TrackableIdPairU5BU5D_t475764036** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TrackableIdPairU5BU5D_t475764036* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1404457903, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1404457903, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1404457903, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1404457903_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TrackableIdPairU5BU5D_t475764036* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1404457903_StaticFields, ____emptyArray_5)); }
	inline TrackableIdPairU5BU5D_t475764036* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TrackableIdPairU5BU5D_t475764036** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TrackableIdPairU5BU5D_t475764036* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1404457903_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t2285235057 * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t1188251036 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t3123823036 * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___dataItem_56)); }
	inline CodePageDataItem_t2285235057 * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t2285235057 ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t2285235057 * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((&___dataItem_56), value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoderFallback_59)); }
	inline EncoderFallback_t1188251036 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_t1188251036 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((&___encoderFallback_59), value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoderFallback_60)); }
	inline DecoderFallback_t3123823036 * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_t3123823036 * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((&___decoderFallback_60), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t1523322056 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t1523322056 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t1523322056 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t1853889766 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t1523322056 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t1523322056 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_0), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_1), value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t1523322056 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t1523322056 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUnicode_2), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t1523322056 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t1523322056 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_3), value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t1523322056 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t1523322056 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t1523322056 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___utf8Encoding_4), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t1523322056 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t1523322056 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_5), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t1523322056 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t1523322056 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_6), value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t1523322056 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t1523322056 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t1523322056 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___latin1Encoding_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_8)); }
	inline Hashtable_t1853889766 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t1853889766 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t1853889766 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_61), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t3528271667* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t3528271667* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t3528271667* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef ARCONTROLLER_T116632334_H
#define ARCONTROLLER_T116632334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ARController
struct  ARController_t116632334  : public RuntimeObject
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.ARController::mVuforiaBehaviour
	VuforiaBehaviour_t2151848540 * ___mVuforiaBehaviour_0;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_0() { return static_cast<int32_t>(offsetof(ARController_t116632334, ___mVuforiaBehaviour_0)); }
	inline VuforiaBehaviour_t2151848540 * get_mVuforiaBehaviour_0() const { return ___mVuforiaBehaviour_0; }
	inline VuforiaBehaviour_t2151848540 ** get_address_of_mVuforiaBehaviour_0() { return &___mVuforiaBehaviour_0; }
	inline void set_mVuforiaBehaviour_0(VuforiaBehaviour_t2151848540 * value)
	{
		___mVuforiaBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARCONTROLLER_T116632334_H
#ifndef DEVICE_T64880687_H
#define DEVICE_T64880687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Device
struct  Device_t64880687  : public RuntimeObject
{
public:

public:
};

struct Device_t64880687_StaticFields
{
public:
	// Vuforia.Device Vuforia.Device::mInstance
	Device_t64880687 * ___mInstance_0;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(Device_t64880687_StaticFields, ___mInstance_0)); }
	inline Device_t64880687 * get_mInstance_0() const { return ___mInstance_0; }
	inline Device_t64880687 ** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(Device_t64880687 * value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICE_T64880687_H
#ifndef IMAGETARGETBUILDER_T2430893908_H
#define IMAGETARGETBUILDER_T2430893908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ImageTargetBuilder
struct  ImageTargetBuilder_t2430893908  : public RuntimeObject
{
public:
	// Vuforia.TrackableSource Vuforia.ImageTargetBuilder::mTrackableSource
	TrackableSource_t2567074243 * ___mTrackableSource_0;
	// System.Boolean Vuforia.ImageTargetBuilder::mIsScanning
	bool ___mIsScanning_1;

public:
	inline static int32_t get_offset_of_mTrackableSource_0() { return static_cast<int32_t>(offsetof(ImageTargetBuilder_t2430893908, ___mTrackableSource_0)); }
	inline TrackableSource_t2567074243 * get_mTrackableSource_0() const { return ___mTrackableSource_0; }
	inline TrackableSource_t2567074243 ** get_address_of_mTrackableSource_0() { return &___mTrackableSource_0; }
	inline void set_mTrackableSource_0(TrackableSource_t2567074243 * value)
	{
		___mTrackableSource_0 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableSource_0), value);
	}

	inline static int32_t get_offset_of_mIsScanning_1() { return static_cast<int32_t>(offsetof(ImageTargetBuilder_t2430893908, ___mIsScanning_1)); }
	inline bool get_mIsScanning_1() const { return ___mIsScanning_1; }
	inline bool* get_address_of_mIsScanning_1() { return &___mIsScanning_1; }
	inline void set_mIsScanning_1(bool value)
	{
		___mIsScanning_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGETARGETBUILDER_T2430893908_H
#ifndef NULLHOLOLENSAPIABSTRACTION_T2968904009_H
#define NULLHOLOLENSAPIABSTRACTION_T2968904009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.NullHoloLensApiAbstraction
struct  NullHoloLensApiAbstraction_t2968904009  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLHOLOLENSAPIABSTRACTION_T2968904009_H
#ifndef TEXTURERENDERER_T3278815845_H
#define TEXTURERENDERER_T3278815845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TextureRenderer
struct  TextureRenderer_t3278815845  : public RuntimeObject
{
public:
	// UnityEngine.Camera Vuforia.TextureRenderer::mTextureBufferCamera
	Camera_t4157153871 * ___mTextureBufferCamera_0;
	// System.Int32 Vuforia.TextureRenderer::mTextureWidth
	int32_t ___mTextureWidth_1;
	// System.Int32 Vuforia.TextureRenderer::mTextureHeight
	int32_t ___mTextureHeight_2;

public:
	inline static int32_t get_offset_of_mTextureBufferCamera_0() { return static_cast<int32_t>(offsetof(TextureRenderer_t3278815845, ___mTextureBufferCamera_0)); }
	inline Camera_t4157153871 * get_mTextureBufferCamera_0() const { return ___mTextureBufferCamera_0; }
	inline Camera_t4157153871 ** get_address_of_mTextureBufferCamera_0() { return &___mTextureBufferCamera_0; }
	inline void set_mTextureBufferCamera_0(Camera_t4157153871 * value)
	{
		___mTextureBufferCamera_0 = value;
		Il2CppCodeGenWriteBarrier((&___mTextureBufferCamera_0), value);
	}

	inline static int32_t get_offset_of_mTextureWidth_1() { return static_cast<int32_t>(offsetof(TextureRenderer_t3278815845, ___mTextureWidth_1)); }
	inline int32_t get_mTextureWidth_1() const { return ___mTextureWidth_1; }
	inline int32_t* get_address_of_mTextureWidth_1() { return &___mTextureWidth_1; }
	inline void set_mTextureWidth_1(int32_t value)
	{
		___mTextureWidth_1 = value;
	}

	inline static int32_t get_offset_of_mTextureHeight_2() { return static_cast<int32_t>(offsetof(TextureRenderer_t3278815845, ___mTextureHeight_2)); }
	inline int32_t get_mTextureHeight_2() const { return ___mTextureHeight_2; }
	inline int32_t* get_address_of_mTextureHeight_2() { return &___mTextureHeight_2; }
	inline void set_mTextureHeight_2(int32_t value)
	{
		___mTextureHeight_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURERENDERER_T3278815845_H
#ifndef TRACKER_T2709586299_H
#define TRACKER_T2709586299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Tracker
struct  Tracker_t2709586299  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_t2709586299, ___U3CIsActiveU3Ek__BackingField_0)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_0() const { return ___U3CIsActiveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_0() { return &___U3CIsActiveU3Ek__BackingField_0; }
	inline void set_U3CIsActiveU3Ek__BackingField_0(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKER_T2709586299_H
#ifndef VRDEVICECONTROLLER_T3863472269_H
#define VRDEVICECONTROLLER_T3863472269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VRDeviceController
struct  VRDeviceController_t3863472269  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.String> Vuforia.VRDeviceController::mHeadPoseDisablingClasses
	HashSet_1_t412400163 * ___mHeadPoseDisablingClasses_0;
	// System.Boolean Vuforia.VRDeviceController::mHeadPosesEnabledOnce
	bool ___mHeadPosesEnabledOnce_1;

public:
	inline static int32_t get_offset_of_mHeadPoseDisablingClasses_0() { return static_cast<int32_t>(offsetof(VRDeviceController_t3863472269, ___mHeadPoseDisablingClasses_0)); }
	inline HashSet_1_t412400163 * get_mHeadPoseDisablingClasses_0() const { return ___mHeadPoseDisablingClasses_0; }
	inline HashSet_1_t412400163 ** get_address_of_mHeadPoseDisablingClasses_0() { return &___mHeadPoseDisablingClasses_0; }
	inline void set_mHeadPoseDisablingClasses_0(HashSet_1_t412400163 * value)
	{
		___mHeadPoseDisablingClasses_0 = value;
		Il2CppCodeGenWriteBarrier((&___mHeadPoseDisablingClasses_0), value);
	}

	inline static int32_t get_offset_of_mHeadPosesEnabledOnce_1() { return static_cast<int32_t>(offsetof(VRDeviceController_t3863472269, ___mHeadPosesEnabledOnce_1)); }
	inline bool get_mHeadPosesEnabledOnce_1() const { return ___mHeadPosesEnabledOnce_1; }
	inline bool* get_address_of_mHeadPosesEnabledOnce_1() { return &___mHeadPosesEnabledOnce_1; }
	inline void set_mHeadPosesEnabledOnce_1(bool value)
	{
		___mHeadPosesEnabledOnce_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VRDEVICECONTROLLER_T3863472269_H
#ifndef TRACKERCONFIGURATION_T3072429111_H
#define TRACKERCONFIGURATION_T3072429111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/TrackerConfiguration
struct  TrackerConfiguration_t3072429111  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.VuforiaConfiguration/TrackerConfiguration::autoInitTracker
	bool ___autoInitTracker_0;
	// System.Boolean Vuforia.VuforiaConfiguration/TrackerConfiguration::autoStartTracker
	bool ___autoStartTracker_1;

public:
	inline static int32_t get_offset_of_autoInitTracker_0() { return static_cast<int32_t>(offsetof(TrackerConfiguration_t3072429111, ___autoInitTracker_0)); }
	inline bool get_autoInitTracker_0() const { return ___autoInitTracker_0; }
	inline bool* get_address_of_autoInitTracker_0() { return &___autoInitTracker_0; }
	inline void set_autoInitTracker_0(bool value)
	{
		___autoInitTracker_0 = value;
	}

	inline static int32_t get_offset_of_autoStartTracker_1() { return static_cast<int32_t>(offsetof(TrackerConfiguration_t3072429111, ___autoStartTracker_1)); }
	inline bool get_autoStartTracker_1() const { return ___autoStartTracker_1; }
	inline bool* get_address_of_autoStartTracker_1() { return &___autoStartTracker_1; }
	inline void set_autoStartTracker_1(bool value)
	{
		___autoStartTracker_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKERCONFIGURATION_T3072429111_H
#ifndef WEBCAMCONFIGURATION_T1101614731_H
#define WEBCAMCONFIGURATION_T1101614731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct  WebCamConfiguration_t1101614731  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/WebCamConfiguration::deviceNameSetInEditor
	String_t* ___deviceNameSetInEditor_0;
	// System.Boolean Vuforia.VuforiaConfiguration/WebCamConfiguration::flipHorizontally
	bool ___flipHorizontally_1;
	// System.Boolean Vuforia.VuforiaConfiguration/WebCamConfiguration::turnOffWebCam
	bool ___turnOffWebCam_2;
	// System.Int32 Vuforia.VuforiaConfiguration/WebCamConfiguration::renderTextureLayer
	int32_t ___renderTextureLayer_3;

public:
	inline static int32_t get_offset_of_deviceNameSetInEditor_0() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t1101614731, ___deviceNameSetInEditor_0)); }
	inline String_t* get_deviceNameSetInEditor_0() const { return ___deviceNameSetInEditor_0; }
	inline String_t** get_address_of_deviceNameSetInEditor_0() { return &___deviceNameSetInEditor_0; }
	inline void set_deviceNameSetInEditor_0(String_t* value)
	{
		___deviceNameSetInEditor_0 = value;
		Il2CppCodeGenWriteBarrier((&___deviceNameSetInEditor_0), value);
	}

	inline static int32_t get_offset_of_flipHorizontally_1() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t1101614731, ___flipHorizontally_1)); }
	inline bool get_flipHorizontally_1() const { return ___flipHorizontally_1; }
	inline bool* get_address_of_flipHorizontally_1() { return &___flipHorizontally_1; }
	inline void set_flipHorizontally_1(bool value)
	{
		___flipHorizontally_1 = value;
	}

	inline static int32_t get_offset_of_turnOffWebCam_2() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t1101614731, ___turnOffWebCam_2)); }
	inline bool get_turnOffWebCam_2() const { return ___turnOffWebCam_2; }
	inline bool* get_address_of_turnOffWebCam_2() { return &___turnOffWebCam_2; }
	inline void set_turnOffWebCam_2(bool value)
	{
		___turnOffWebCam_2 = value;
	}

	inline static int32_t get_offset_of_renderTextureLayer_3() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t1101614731, ___renderTextureLayer_3)); }
	inline int32_t get_renderTextureLayer_3() const { return ___renderTextureLayer_3; }
	inline int32_t* get_address_of_renderTextureLayer_3() { return &___renderTextureLayer_3; }
	inline void set_renderTextureLayer_3(int32_t value)
	{
		___renderTextureLayer_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMCONFIGURATION_T1101614731_H
#ifndef VUFORIANATIVEWRAPPER_T2621726075_H
#define VUFORIANATIVEWRAPPER_T2621726075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaNativeWrapper
struct  VuforiaNativeWrapper_t2621726075  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIANATIVEWRAPPER_T2621726075_H
#ifndef VUFORIANULLWRAPPER_T2343315499_H
#define VUFORIANULLWRAPPER_T2343315499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaNullWrapper
struct  VuforiaNullWrapper_t2343315499  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIANULLWRAPPER_T2343315499_H
#ifndef GLOBALVARS_T2485087241_H
#define GLOBALVARS_T2485087241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntimeUtilities/GlobalVars
struct  GlobalVars_t2485087241  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBALVARS_T2485087241_H
#ifndef VUFORIAUNITY_T1788908542_H
#define VUFORIAUNITY_T1788908542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity
struct  VuforiaUnity_t1788908542  : public RuntimeObject
{
public:

public:
};

struct VuforiaUnity_t1788908542_StaticFields
{
public:
	// Vuforia.IHoloLensApiAbstraction Vuforia.VuforiaUnity::mHoloLensApiAbstraction
	RuntimeObject* ___mHoloLensApiAbstraction_0;
	// System.Boolean Vuforia.VuforiaUnity::mRendererDirty
	bool ___mRendererDirty_2;
	// System.Int32 Vuforia.VuforiaUnity::mWrapperType
	int32_t ___mWrapperType_3;

public:
	inline static int32_t get_offset_of_mHoloLensApiAbstraction_0() { return static_cast<int32_t>(offsetof(VuforiaUnity_t1788908542_StaticFields, ___mHoloLensApiAbstraction_0)); }
	inline RuntimeObject* get_mHoloLensApiAbstraction_0() const { return ___mHoloLensApiAbstraction_0; }
	inline RuntimeObject** get_address_of_mHoloLensApiAbstraction_0() { return &___mHoloLensApiAbstraction_0; }
	inline void set_mHoloLensApiAbstraction_0(RuntimeObject* value)
	{
		___mHoloLensApiAbstraction_0 = value;
		Il2CppCodeGenWriteBarrier((&___mHoloLensApiAbstraction_0), value);
	}

	inline static int32_t get_offset_of_mRendererDirty_2() { return static_cast<int32_t>(offsetof(VuforiaUnity_t1788908542_StaticFields, ___mRendererDirty_2)); }
	inline bool get_mRendererDirty_2() const { return ___mRendererDirty_2; }
	inline bool* get_address_of_mRendererDirty_2() { return &___mRendererDirty_2; }
	inline void set_mRendererDirty_2(bool value)
	{
		___mRendererDirty_2 = value;
	}

	inline static int32_t get_offset_of_mWrapperType_3() { return static_cast<int32_t>(offsetof(VuforiaUnity_t1788908542_StaticFields, ___mWrapperType_3)); }
	inline int32_t get_mWrapperType_3() const { return ___mWrapperType_3; }
	inline int32_t* get_address_of_mWrapperType_3() { return &___mWrapperType_3; }
	inline void set_mWrapperType_3(int32_t value)
	{
		___mWrapperType_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAUNITY_T1788908542_H
#ifndef VUFORIAWRAPPER_T2763746413_H
#define VUFORIAWRAPPER_T2763746413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaWrapper
struct  VuforiaWrapper_t2763746413  : public RuntimeObject
{
public:

public:
};

struct VuforiaWrapper_t2763746413_StaticFields
{
public:
	// Vuforia.IVuforiaWrapper Vuforia.VuforiaWrapper::sWrapper
	RuntimeObject* ___sWrapper_0;
	// Vuforia.IVuforiaWrapper Vuforia.VuforiaWrapper::sCamIndependentWrapper
	RuntimeObject* ___sCamIndependentWrapper_1;

public:
	inline static int32_t get_offset_of_sWrapper_0() { return static_cast<int32_t>(offsetof(VuforiaWrapper_t2763746413_StaticFields, ___sWrapper_0)); }
	inline RuntimeObject* get_sWrapper_0() const { return ___sWrapper_0; }
	inline RuntimeObject** get_address_of_sWrapper_0() { return &___sWrapper_0; }
	inline void set_sWrapper_0(RuntimeObject* value)
	{
		___sWrapper_0 = value;
		Il2CppCodeGenWriteBarrier((&___sWrapper_0), value);
	}

	inline static int32_t get_offset_of_sCamIndependentWrapper_1() { return static_cast<int32_t>(offsetof(VuforiaWrapper_t2763746413_StaticFields, ___sCamIndependentWrapper_1)); }
	inline RuntimeObject* get_sCamIndependentWrapper_1() const { return ___sCamIndependentWrapper_1; }
	inline RuntimeObject** get_address_of_sCamIndependentWrapper_1() { return &___sCamIndependentWrapper_1; }
	inline void set_sCamIndependentWrapper_1(RuntimeObject* value)
	{
		___sCamIndependentWrapper_1 = value;
		Il2CppCodeGenWriteBarrier((&___sCamIndependentWrapper_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAWRAPPER_T2763746413_H
#ifndef HOLOLENSAPIIMPLEMENTATION_T262900719_H
#define HOLOLENSAPIIMPLEMENTATION_T262900719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WSAUnityPlayer/HoloLensApiImplementation
struct  HoloLensApiImplementation_t262900719  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,UnityEngine.XR.WSA.WorldAnchor> Vuforia.WSAUnityPlayer/HoloLensApiImplementation::mWorldAnchors
	Dictionary_2_t1141005148 * ___mWorldAnchors_0;
	// System.Action`2<Vuforia.VuforiaManager/TrackableIdPair,System.Boolean> Vuforia.WSAUnityPlayer/HoloLensApiImplementation::mHoloLensTrackingCallback
	Action_2_t1413982646 * ___mHoloLensTrackingCallback_1;

public:
	inline static int32_t get_offset_of_mWorldAnchors_0() { return static_cast<int32_t>(offsetof(HoloLensApiImplementation_t262900719, ___mWorldAnchors_0)); }
	inline Dictionary_2_t1141005148 * get_mWorldAnchors_0() const { return ___mWorldAnchors_0; }
	inline Dictionary_2_t1141005148 ** get_address_of_mWorldAnchors_0() { return &___mWorldAnchors_0; }
	inline void set_mWorldAnchors_0(Dictionary_2_t1141005148 * value)
	{
		___mWorldAnchors_0 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldAnchors_0), value);
	}

	inline static int32_t get_offset_of_mHoloLensTrackingCallback_1() { return static_cast<int32_t>(offsetof(HoloLensApiImplementation_t262900719, ___mHoloLensTrackingCallback_1)); }
	inline Action_2_t1413982646 * get_mHoloLensTrackingCallback_1() const { return ___mHoloLensTrackingCallback_1; }
	inline Action_2_t1413982646 ** get_address_of_mHoloLensTrackingCallback_1() { return &___mHoloLensTrackingCallback_1; }
	inline void set_mHoloLensTrackingCallback_1(Action_2_t1413982646 * value)
	{
		___mHoloLensTrackingCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___mHoloLensTrackingCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLOLENSAPIIMPLEMENTATION_T262900719_H
#ifndef U3CU3EC_T3582055403_H
#define U3CU3EC_T3582055403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamARController/<>c
struct  U3CU3Ec_t3582055403  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3582055403_StaticFields
{
public:
	// Vuforia.WebCamARController/<>c Vuforia.WebCamARController/<>c::<>9
	U3CU3Ec_t3582055403 * ___U3CU3E9_0;
	// System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor> Vuforia.WebCamARController/<>c::<>9__7_0
	Func_3_t3440825513 * ___U3CU3E9__7_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3582055403_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3582055403 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3582055403 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3582055403 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3582055403_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Func_3_t3440825513 * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Func_3_t3440825513 ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Func_3_t3440825513 * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__7_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T3582055403_H
#ifndef WEBCAMTEXADAPTOR_T3430449046_H
#define WEBCAMTEXADAPTOR_T3430449046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamTexAdaptor
struct  WebCamTexAdaptor_t3430449046  : public RuntimeObject
{
public:
	// UnityEngine.WebCamTexture Vuforia.WebCamTexAdaptor::mWebCamTexture
	WebCamTexture_t1514609158 * ___mWebCamTexture_0;
	// UnityEngine.AsyncOperation Vuforia.WebCamTexAdaptor::mCheckCameraPermissions
	AsyncOperation_t1445031843 * ___mCheckCameraPermissions_1;

public:
	inline static int32_t get_offset_of_mWebCamTexture_0() { return static_cast<int32_t>(offsetof(WebCamTexAdaptor_t3430449046, ___mWebCamTexture_0)); }
	inline WebCamTexture_t1514609158 * get_mWebCamTexture_0() const { return ___mWebCamTexture_0; }
	inline WebCamTexture_t1514609158 ** get_address_of_mWebCamTexture_0() { return &___mWebCamTexture_0; }
	inline void set_mWebCamTexture_0(WebCamTexture_t1514609158 * value)
	{
		___mWebCamTexture_0 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCamTexture_0), value);
	}

	inline static int32_t get_offset_of_mCheckCameraPermissions_1() { return static_cast<int32_t>(offsetof(WebCamTexAdaptor_t3430449046, ___mCheckCameraPermissions_1)); }
	inline AsyncOperation_t1445031843 * get_mCheckCameraPermissions_1() const { return ___mCheckCameraPermissions_1; }
	inline AsyncOperation_t1445031843 ** get_address_of_mCheckCameraPermissions_1() { return &___mCheckCameraPermissions_1; }
	inline void set_mCheckCameraPermissions_1(AsyncOperation_t1445031843 * value)
	{
		___mCheckCameraPermissions_1 = value;
		Il2CppCodeGenWriteBarrier((&___mCheckCameraPermissions_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMTEXADAPTOR_T3430449046_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_t4116647657* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_t4116647657* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_t4116647657* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_31)); }
	inline DateTime_t3738529785  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t3738529785 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t3738529785  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_32)); }
	inline DateTime_t3738529785  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t3738529785  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef COLOR32_T2600501292_H
#define COLOR32_T2600501292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t2600501292 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2600501292_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef WEBCAMDEVICE_T1322781432_H
#define WEBCAMDEVICE_T1322781432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamDevice
struct  WebCamDevice_t1322781432 
{
public:
	// System.String UnityEngine.WebCamDevice::m_Name
	String_t* ___m_Name_0;
	// System.Int32 UnityEngine.WebCamDevice::m_Flags
	int32_t ___m_Flags_1;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(WebCamDevice_t1322781432, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Flags_1() { return static_cast<int32_t>(offsetof(WebCamDevice_t1322781432, ___m_Flags_1)); }
	inline int32_t get_m_Flags_1() const { return ___m_Flags_1; }
	inline int32_t* get_address_of_m_Flags_1() { return &___m_Flags_1; }
	inline void set_m_Flags_1(int32_t value)
	{
		___m_Flags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t1322781432_marshaled_pinvoke
{
	char* ___m_Name_0;
	int32_t ___m_Flags_1;
};
// Native definition for COM marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t1322781432_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	int32_t ___m_Flags_1;
};
#endif // WEBCAMDEVICE_T1322781432_H
#ifndef VIDEOMODEDATA_T2066817255_H
#define VIDEOMODEDATA_T2066817255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/VideoModeData
#pragma pack(push, tp, 1)
struct  VideoModeData_t2066817255 
{
public:
	// System.Int32 Vuforia.CameraDevice/VideoModeData::width
	int32_t ___width_0;
	// System.Int32 Vuforia.CameraDevice/VideoModeData::height
	int32_t ___height_1;
	// System.Single Vuforia.CameraDevice/VideoModeData::frameRate
	float ___frameRate_2;
	// System.Int32 Vuforia.CameraDevice/VideoModeData::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_frameRate_2() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___frameRate_2)); }
	inline float get_frameRate_2() const { return ___frameRate_2; }
	inline float* get_address_of_frameRate_2() { return &___frameRate_2; }
	inline void set_frameRate_2(float value)
	{
		___frameRate_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOMODEDATA_T2066817255_H
#ifndef DEVICETRACKER_T2315692373_H
#define DEVICETRACKER_T2315692373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DeviceTracker
struct  DeviceTracker_t2315692373  : public Tracker_t2709586299
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICETRACKER_T2315692373_H
#ifndef OBJECTTRACKER_T4177997237_H
#define OBJECTTRACKER_T4177997237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTracker
struct  ObjectTracker_t4177997237  : public Tracker_t2709586299
{
public:
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTracker::mActiveDataSets
	List_1_t463142320 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTracker::mDataSets
	List_1_t463142320 * ___mDataSets_2;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTracker::mImageTargetBuilder
	ImageTargetBuilder_t2430893908 * ___mImageTargetBuilder_3;
	// Vuforia.TargetFinder Vuforia.ObjectTracker::mTargetFinder
	TargetFinder_t2439332195 * ___mTargetFinder_4;

public:
	inline static int32_t get_offset_of_mActiveDataSets_1() { return static_cast<int32_t>(offsetof(ObjectTracker_t4177997237, ___mActiveDataSets_1)); }
	inline List_1_t463142320 * get_mActiveDataSets_1() const { return ___mActiveDataSets_1; }
	inline List_1_t463142320 ** get_address_of_mActiveDataSets_1() { return &___mActiveDataSets_1; }
	inline void set_mActiveDataSets_1(List_1_t463142320 * value)
	{
		___mActiveDataSets_1 = value;
		Il2CppCodeGenWriteBarrier((&___mActiveDataSets_1), value);
	}

	inline static int32_t get_offset_of_mDataSets_2() { return static_cast<int32_t>(offsetof(ObjectTracker_t4177997237, ___mDataSets_2)); }
	inline List_1_t463142320 * get_mDataSets_2() const { return ___mDataSets_2; }
	inline List_1_t463142320 ** get_address_of_mDataSets_2() { return &___mDataSets_2; }
	inline void set_mDataSets_2(List_1_t463142320 * value)
	{
		___mDataSets_2 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSets_2), value);
	}

	inline static int32_t get_offset_of_mImageTargetBuilder_3() { return static_cast<int32_t>(offsetof(ObjectTracker_t4177997237, ___mImageTargetBuilder_3)); }
	inline ImageTargetBuilder_t2430893908 * get_mImageTargetBuilder_3() const { return ___mImageTargetBuilder_3; }
	inline ImageTargetBuilder_t2430893908 ** get_address_of_mImageTargetBuilder_3() { return &___mImageTargetBuilder_3; }
	inline void set_mImageTargetBuilder_3(ImageTargetBuilder_t2430893908 * value)
	{
		___mImageTargetBuilder_3 = value;
		Il2CppCodeGenWriteBarrier((&___mImageTargetBuilder_3), value);
	}

	inline static int32_t get_offset_of_mTargetFinder_4() { return static_cast<int32_t>(offsetof(ObjectTracker_t4177997237, ___mTargetFinder_4)); }
	inline TargetFinder_t2439332195 * get_mTargetFinder_4() const { return ___mTargetFinder_4; }
	inline TargetFinder_t2439332195 ** get_address_of_mTargetFinder_4() { return &___mTargetFinder_4; }
	inline void set_mTargetFinder_4(TargetFinder_t2439332195 * value)
	{
		___mTargetFinder_4 = value;
		Il2CppCodeGenWriteBarrier((&___mTargetFinder_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTRACKER_T4177997237_H
#ifndef TARGETFINDERSTATE_T3286805956_H
#define TARGETFINDERSTATE_T3286805956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder/TargetFinderState
#pragma pack(push, tp, 1)
struct  TargetFinderState_t3286805956 
{
public:
	// System.Int32 Vuforia.TargetFinder/TargetFinderState::IsRequesting
	int32_t ___IsRequesting_0;
	// System.Int32 Vuforia.TargetFinder/TargetFinderState::UpdateState
	int32_t ___UpdateState_1;
	// System.Int32 Vuforia.TargetFinder/TargetFinderState::ResultCount
	int32_t ___ResultCount_2;
	// System.Int32 Vuforia.TargetFinder/TargetFinderState::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_IsRequesting_0() { return static_cast<int32_t>(offsetof(TargetFinderState_t3286805956, ___IsRequesting_0)); }
	inline int32_t get_IsRequesting_0() const { return ___IsRequesting_0; }
	inline int32_t* get_address_of_IsRequesting_0() { return &___IsRequesting_0; }
	inline void set_IsRequesting_0(int32_t value)
	{
		___IsRequesting_0 = value;
	}

	inline static int32_t get_offset_of_UpdateState_1() { return static_cast<int32_t>(offsetof(TargetFinderState_t3286805956, ___UpdateState_1)); }
	inline int32_t get_UpdateState_1() const { return ___UpdateState_1; }
	inline int32_t* get_address_of_UpdateState_1() { return &___UpdateState_1; }
	inline void set_UpdateState_1(int32_t value)
	{
		___UpdateState_1 = value;
	}

	inline static int32_t get_offset_of_ResultCount_2() { return static_cast<int32_t>(offsetof(TargetFinderState_t3286805956, ___ResultCount_2)); }
	inline int32_t get_ResultCount_2() const { return ___ResultCount_2; }
	inline int32_t* get_address_of_ResultCount_2() { return &___ResultCount_2; }
	inline void set_ResultCount_2(int32_t value)
	{
		___ResultCount_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(TargetFinderState_t3286805956, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETFINDERSTATE_T3286805956_H
#ifndef AUTOROTATIONSTATE_T2150317116_H
#define AUTOROTATIONSTATE_T2150317116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManager/AutoRotationState
struct  AutoRotationState_t2150317116 
{
public:
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::setOnPause
	bool ___setOnPause_0;
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::autorotateToPortrait
	bool ___autorotateToPortrait_1;
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::autorotateToPortraitUpsideDown
	bool ___autorotateToPortraitUpsideDown_2;
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::autorotateToLandscapeLeft
	bool ___autorotateToLandscapeLeft_3;
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::autorotateToLandscapeRight
	bool ___autorotateToLandscapeRight_4;

public:
	inline static int32_t get_offset_of_setOnPause_0() { return static_cast<int32_t>(offsetof(AutoRotationState_t2150317116, ___setOnPause_0)); }
	inline bool get_setOnPause_0() const { return ___setOnPause_0; }
	inline bool* get_address_of_setOnPause_0() { return &___setOnPause_0; }
	inline void set_setOnPause_0(bool value)
	{
		___setOnPause_0 = value;
	}

	inline static int32_t get_offset_of_autorotateToPortrait_1() { return static_cast<int32_t>(offsetof(AutoRotationState_t2150317116, ___autorotateToPortrait_1)); }
	inline bool get_autorotateToPortrait_1() const { return ___autorotateToPortrait_1; }
	inline bool* get_address_of_autorotateToPortrait_1() { return &___autorotateToPortrait_1; }
	inline void set_autorotateToPortrait_1(bool value)
	{
		___autorotateToPortrait_1 = value;
	}

	inline static int32_t get_offset_of_autorotateToPortraitUpsideDown_2() { return static_cast<int32_t>(offsetof(AutoRotationState_t2150317116, ___autorotateToPortraitUpsideDown_2)); }
	inline bool get_autorotateToPortraitUpsideDown_2() const { return ___autorotateToPortraitUpsideDown_2; }
	inline bool* get_address_of_autorotateToPortraitUpsideDown_2() { return &___autorotateToPortraitUpsideDown_2; }
	inline void set_autorotateToPortraitUpsideDown_2(bool value)
	{
		___autorotateToPortraitUpsideDown_2 = value;
	}

	inline static int32_t get_offset_of_autorotateToLandscapeLeft_3() { return static_cast<int32_t>(offsetof(AutoRotationState_t2150317116, ___autorotateToLandscapeLeft_3)); }
	inline bool get_autorotateToLandscapeLeft_3() const { return ___autorotateToLandscapeLeft_3; }
	inline bool* get_address_of_autorotateToLandscapeLeft_3() { return &___autorotateToLandscapeLeft_3; }
	inline void set_autorotateToLandscapeLeft_3(bool value)
	{
		___autorotateToLandscapeLeft_3 = value;
	}

	inline static int32_t get_offset_of_autorotateToLandscapeRight_4() { return static_cast<int32_t>(offsetof(AutoRotationState_t2150317116, ___autorotateToLandscapeRight_4)); }
	inline bool get_autorotateToLandscapeRight_4() const { return ___autorotateToLandscapeRight_4; }
	inline bool* get_address_of_autorotateToLandscapeRight_4() { return &___autorotateToLandscapeRight_4; }
	inline void set_autorotateToLandscapeRight_4(bool value)
	{
		___autorotateToLandscapeRight_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.VuforiaManager/AutoRotationState
struct AutoRotationState_t2150317116_marshaled_pinvoke
{
	int32_t ___setOnPause_0;
	int32_t ___autorotateToPortrait_1;
	int32_t ___autorotateToPortraitUpsideDown_2;
	int32_t ___autorotateToLandscapeLeft_3;
	int32_t ___autorotateToLandscapeRight_4;
};
// Native definition for COM marshalling of Vuforia.VuforiaManager/AutoRotationState
struct AutoRotationState_t2150317116_marshaled_com
{
	int32_t ___setOnPause_0;
	int32_t ___autorotateToPortrait_1;
	int32_t ___autorotateToPortraitUpsideDown_2;
	int32_t ___autorotateToLandscapeLeft_3;
	int32_t ___autorotateToLandscapeRight_4;
};
#endif // AUTOROTATIONSTATE_T2150317116_H
#ifndef TRACKABLEIDPAIR_T4227350457_H
#define TRACKABLEIDPAIR_T4227350457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManager/TrackableIdPair
struct  TrackableIdPair_t4227350457 
{
public:
	// System.Int32 Vuforia.VuforiaManager/TrackableIdPair::TrackableId
	int32_t ___TrackableId_0;
	// System.Int32 Vuforia.VuforiaManager/TrackableIdPair::ResultId
	int32_t ___ResultId_1;

public:
	inline static int32_t get_offset_of_TrackableId_0() { return static_cast<int32_t>(offsetof(TrackableIdPair_t4227350457, ___TrackableId_0)); }
	inline int32_t get_TrackableId_0() const { return ___TrackableId_0; }
	inline int32_t* get_address_of_TrackableId_0() { return &___TrackableId_0; }
	inline void set_TrackableId_0(int32_t value)
	{
		___TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_ResultId_1() { return static_cast<int32_t>(offsetof(TrackableIdPair_t4227350457, ___ResultId_1)); }
	inline int32_t get_ResultId_1() const { return ___ResultId_1; }
	inline int32_t* get_address_of_ResultId_1() { return &___ResultId_1; }
	inline void set_ResultId_1(int32_t value)
	{
		___ResultId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEIDPAIR_T4227350457_H
#ifndef VEC2I_T3527036565_H
#define VEC2I_T3527036565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/Vec2I
#pragma pack(push, tp, 1)
struct  Vec2I_t3527036565 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::x
	int32_t ___x_0;
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vec2I_t3527036565, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vec2I_t3527036565, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VEC2I_T3527036565_H
#ifndef WEBCAMARCONTROLLER_T3718642882_H
#define WEBCAMARCONTROLLER_T3718642882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamARController
struct  WebCamARController_t3718642882  : public ARController_t116632334
{
public:
	// System.Int32 Vuforia.WebCamARController::RenderTextureLayer
	int32_t ___RenderTextureLayer_1;
	// System.String Vuforia.WebCamARController::mDeviceNameSetInEditor
	String_t* ___mDeviceNameSetInEditor_2;
	// System.Boolean Vuforia.WebCamARController::mFlipHorizontally
	bool ___mFlipHorizontally_3;
	// Vuforia.WebCam Vuforia.WebCamARController::mWebCamImpl
	WebCam_t2427002488 * ___mWebCamImpl_4;
	// System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor> Vuforia.WebCamARController::mWebCamTexAdaptorProvider
	Func_3_t3440825513 * ___mWebCamTexAdaptorProvider_5;

public:
	inline static int32_t get_offset_of_RenderTextureLayer_1() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882, ___RenderTextureLayer_1)); }
	inline int32_t get_RenderTextureLayer_1() const { return ___RenderTextureLayer_1; }
	inline int32_t* get_address_of_RenderTextureLayer_1() { return &___RenderTextureLayer_1; }
	inline void set_RenderTextureLayer_1(int32_t value)
	{
		___RenderTextureLayer_1 = value;
	}

	inline static int32_t get_offset_of_mDeviceNameSetInEditor_2() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882, ___mDeviceNameSetInEditor_2)); }
	inline String_t* get_mDeviceNameSetInEditor_2() const { return ___mDeviceNameSetInEditor_2; }
	inline String_t** get_address_of_mDeviceNameSetInEditor_2() { return &___mDeviceNameSetInEditor_2; }
	inline void set_mDeviceNameSetInEditor_2(String_t* value)
	{
		___mDeviceNameSetInEditor_2 = value;
		Il2CppCodeGenWriteBarrier((&___mDeviceNameSetInEditor_2), value);
	}

	inline static int32_t get_offset_of_mFlipHorizontally_3() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882, ___mFlipHorizontally_3)); }
	inline bool get_mFlipHorizontally_3() const { return ___mFlipHorizontally_3; }
	inline bool* get_address_of_mFlipHorizontally_3() { return &___mFlipHorizontally_3; }
	inline void set_mFlipHorizontally_3(bool value)
	{
		___mFlipHorizontally_3 = value;
	}

	inline static int32_t get_offset_of_mWebCamImpl_4() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882, ___mWebCamImpl_4)); }
	inline WebCam_t2427002488 * get_mWebCamImpl_4() const { return ___mWebCamImpl_4; }
	inline WebCam_t2427002488 ** get_address_of_mWebCamImpl_4() { return &___mWebCamImpl_4; }
	inline void set_mWebCamImpl_4(WebCam_t2427002488 * value)
	{
		___mWebCamImpl_4 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCamImpl_4), value);
	}

	inline static int32_t get_offset_of_mWebCamTexAdaptorProvider_5() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882, ___mWebCamTexAdaptorProvider_5)); }
	inline Func_3_t3440825513 * get_mWebCamTexAdaptorProvider_5() const { return ___mWebCamTexAdaptorProvider_5; }
	inline Func_3_t3440825513 ** get_address_of_mWebCamTexAdaptorProvider_5() { return &___mWebCamTexAdaptorProvider_5; }
	inline void set_mWebCamTexAdaptorProvider_5(Func_3_t3440825513 * value)
	{
		___mWebCamTexAdaptorProvider_5 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCamTexAdaptorProvider_5), value);
	}
};

struct WebCamARController_t3718642882_StaticFields
{
public:
	// Vuforia.WebCamARController Vuforia.WebCamARController::mInstance
	WebCamARController_t3718642882 * ___mInstance_6;
	// System.Object Vuforia.WebCamARController::mPadlock
	RuntimeObject * ___mPadlock_7;

public:
	inline static int32_t get_offset_of_mInstance_6() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882_StaticFields, ___mInstance_6)); }
	inline WebCamARController_t3718642882 * get_mInstance_6() const { return ___mInstance_6; }
	inline WebCamARController_t3718642882 ** get_address_of_mInstance_6() { return &___mInstance_6; }
	inline void set_mInstance_6(WebCamARController_t3718642882 * value)
	{
		___mInstance_6 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_6), value);
	}

	inline static int32_t get_offset_of_mPadlock_7() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882_StaticFields, ___mPadlock_7)); }
	inline RuntimeObject * get_mPadlock_7() const { return ___mPadlock_7; }
	inline RuntimeObject ** get_address_of_mPadlock_7() { return &___mPadlock_7; }
	inline void set_mPadlock_7(RuntimeObject * value)
	{
		___mPadlock_7 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMARCONTROLLER_T3718642882_H
#ifndef KEYVALUEPAIR_2_T162042030_H
#define KEYVALUEPAIR_2_T162042030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,System.Object>
struct  KeyValuePair_2_t162042030 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableIdPair_t4227350457  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t162042030, ___key_0)); }
	inline TrackableIdPair_t4227350457  get_key_0() const { return ___key_0; }
	inline TrackableIdPair_t4227350457 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TrackableIdPair_t4227350457  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t162042030, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T162042030_H
#ifndef KEYVALUEPAIR_2_T3538677315_H
#define KEYVALUEPAIR_2_T3538677315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,UnityEngine.XR.WSA.WorldAnchor>
struct  KeyValuePair_2_t3538677315 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableIdPair_t4227350457  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WorldAnchor_t2161774153 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3538677315, ___key_0)); }
	inline TrackableIdPair_t4227350457  get_key_0() const { return ___key_0; }
	inline TrackableIdPair_t4227350457 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TrackableIdPair_t4227350457  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3538677315, ___value_1)); }
	inline WorldAnchor_t2161774153 * get_value_1() const { return ___value_1; }
	inline WorldAnchor_t2161774153 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(WorldAnchor_t2161774153 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3538677315_H
#ifndef ENUMERATOR_T3293701780_H
#define ENUMERATOR_T3293701780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Vuforia.VuforiaManager/TrackableIdPair>
struct  Enumerator_t3293701780 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t1404457903 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	TrackableIdPair_t4227350457  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3293701780, ___list_0)); }
	inline List_1_t1404457903 * get_list_0() const { return ___list_0; }
	inline List_1_t1404457903 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t1404457903 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3293701780, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3293701780, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3293701780, ___current_3)); }
	inline TrackableIdPair_t4227350457  get_current_3() const { return ___current_3; }
	inline TrackableIdPair_t4227350457 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(TrackableIdPair_t4227350457  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3293701780_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef ASYNCOPERATION_T1445031843_H
#define ASYNCOPERATION_T1445031843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1445031843  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_t1617499438 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_completeCallback_1)); }
	inline Action_1_t1617499438 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_t1617499438 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_t1617499438 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T1445031843_H
#ifndef STEREOSCOPICEYE_T2238664036_H
#define STEREOSCOPICEYE_T2238664036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera/StereoscopicEye
struct  StereoscopicEye_t2238664036 
{
public:
	// System.Int32 UnityEngine.Camera/StereoscopicEye::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoscopicEye_t2238664036, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEREOSCOPICEYE_T2238664036_H
#ifndef DEVICEORIENTATION_T3526859474_H
#define DEVICEORIENTATION_T3526859474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DeviceOrientation
struct  DeviceOrientation_t3526859474 
{
public:
	// System.Int32 UnityEngine.DeviceOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceOrientation_t3526859474, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICEORIENTATION_T3526859474_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef RUNTIMEPLATFORM_T4159857903_H
#define RUNTIMEPLATFORM_T4159857903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t4159857903 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_t4159857903, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPLATFORM_T4159857903_H
#ifndef SCREENORIENTATION_T1705519499_H
#define SCREENORIENTATION_T1705519499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScreenOrientation
struct  ScreenOrientation_t1705519499 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenOrientation_t1705519499, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENORIENTATION_T1705519499_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef USERAUTHORIZATION_T2950000085_H
#define USERAUTHORIZATION_T2950000085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UserAuthorization
struct  UserAuthorization_t2950000085 
{
public:
	// System.Int32 UnityEngine.UserAuthorization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserAuthorization_t2950000085, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERAUTHORIZATION_T2950000085_H
#ifndef CAMERADEVICEMODE_T2478715656_H
#define CAMERADEVICEMODE_T2478715656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDeviceMode
struct  CameraDeviceMode_t2478715656 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDeviceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraDeviceMode_t2478715656, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICEMODE_T2478715656_H
#ifndef CAMERADIRECTION_T637748435_H
#define CAMERADIRECTION_T637748435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDirection
struct  CameraDirection_t637748435 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraDirection_t637748435, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADIRECTION_T637748435_H
#ifndef DEFAULTWEBCAMTEXADAPTOR_T2452636845_H
#define DEFAULTWEBCAMTEXADAPTOR_T2452636845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DefaultWebCamTexAdaptor
struct  DefaultWebCamTexAdaptor_t2452636845  : public RuntimeObject
{
public:
	// UnityEngine.Texture2D Vuforia.DefaultWebCamTexAdaptor::mTexture
	Texture2D_t3840446185 * ___mTexture_0;
	// System.Boolean Vuforia.DefaultWebCamTexAdaptor::mPseudoPlaying
	bool ___mPseudoPlaying_1;
	// System.Double Vuforia.DefaultWebCamTexAdaptor::mMsBetweenFrames
	double ___mMsBetweenFrames_2;
	// System.DateTime Vuforia.DefaultWebCamTexAdaptor::mLastFrame
	DateTime_t3738529785  ___mLastFrame_3;

public:
	inline static int32_t get_offset_of_mTexture_0() { return static_cast<int32_t>(offsetof(DefaultWebCamTexAdaptor_t2452636845, ___mTexture_0)); }
	inline Texture2D_t3840446185 * get_mTexture_0() const { return ___mTexture_0; }
	inline Texture2D_t3840446185 ** get_address_of_mTexture_0() { return &___mTexture_0; }
	inline void set_mTexture_0(Texture2D_t3840446185 * value)
	{
		___mTexture_0 = value;
		Il2CppCodeGenWriteBarrier((&___mTexture_0), value);
	}

	inline static int32_t get_offset_of_mPseudoPlaying_1() { return static_cast<int32_t>(offsetof(DefaultWebCamTexAdaptor_t2452636845, ___mPseudoPlaying_1)); }
	inline bool get_mPseudoPlaying_1() const { return ___mPseudoPlaying_1; }
	inline bool* get_address_of_mPseudoPlaying_1() { return &___mPseudoPlaying_1; }
	inline void set_mPseudoPlaying_1(bool value)
	{
		___mPseudoPlaying_1 = value;
	}

	inline static int32_t get_offset_of_mMsBetweenFrames_2() { return static_cast<int32_t>(offsetof(DefaultWebCamTexAdaptor_t2452636845, ___mMsBetweenFrames_2)); }
	inline double get_mMsBetweenFrames_2() const { return ___mMsBetweenFrames_2; }
	inline double* get_address_of_mMsBetweenFrames_2() { return &___mMsBetweenFrames_2; }
	inline void set_mMsBetweenFrames_2(double value)
	{
		___mMsBetweenFrames_2 = value;
	}

	inline static int32_t get_offset_of_mLastFrame_3() { return static_cast<int32_t>(offsetof(DefaultWebCamTexAdaptor_t2452636845, ___mLastFrame_3)); }
	inline DateTime_t3738529785  get_mLastFrame_3() const { return ___mLastFrame_3; }
	inline DateTime_t3738529785 * get_address_of_mLastFrame_3() { return &___mLastFrame_3; }
	inline void set_mLastFrame_3(DateTime_t3738529785  value)
	{
		___mLastFrame_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTWEBCAMTEXADAPTOR_T2452636845_H
#ifndef TRACKING_MODE_T4048578679_H
#define TRACKING_MODE_T4048578679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DeviceTracker/TRACKING_MODE
struct  TRACKING_MODE_t4048578679 
{
public:
	// System.Int32 Vuforia.DeviceTracker/TRACKING_MODE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TRACKING_MODE_t4048578679, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKING_MODE_T4048578679_H
#ifndef EYEWEARTYPE_T2277580470_H
#define EYEWEARTYPE_T2277580470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/EyewearType
struct  EyewearType_t2277580470 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/EyewearType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EyewearType_t2277580470, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEWEARTYPE_T2277580470_H
#ifndef SEETHROUGHCONFIGURATION_T568665021_H
#define SEETHROUGHCONFIGURATION_T568665021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/SeeThroughConfiguration
struct  SeeThroughConfiguration_t568665021 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/SeeThroughConfiguration::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeeThroughConfiguration_t568665021, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEETHROUGHCONFIGURATION_T568665021_H
#ifndef STEREOFRAMEWORK_T3144873991_H
#define STEREOFRAMEWORK_T3144873991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/StereoFramework
struct  StereoFramework_t3144873991 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/StereoFramework::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoFramework_t3144873991, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEREOFRAMEWORK_T3144873991_H
#ifndef FUSIONPROVIDERTYPE_T4010899297_H
#define FUSIONPROVIDERTYPE_T4010899297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.FusionProviderType
struct  FusionProviderType_t4010899297 
{
public:
	// System.Int32 Vuforia.FusionProviderType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FusionProviderType_t4010899297, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUSIONPROVIDERTYPE_T4010899297_H
#ifndef PIXEL_FORMAT_T3209881435_H
#define PIXEL_FORMAT_T3209881435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Image/PIXEL_FORMAT
struct  PIXEL_FORMAT_t3209881435 
{
public:
	// System.Int32 Vuforia.Image/PIXEL_FORMAT::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PIXEL_FORMAT_t3209881435, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PIXEL_FORMAT_T3209881435_H
#ifndef ORIENTEDBOUNDINGBOX_T2769728497_H
#define ORIENTEDBOUNDINGBOX_T2769728497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.OrientedBoundingBox
struct  OrientedBoundingBox_t2769728497 
{
public:
	// UnityEngine.Vector2 Vuforia.OrientedBoundingBox::<Center>k__BackingField
	Vector2_t2156229523  ___U3CCenterU3Ek__BackingField_0;
	// UnityEngine.Vector2 Vuforia.OrientedBoundingBox::<HalfExtents>k__BackingField
	Vector2_t2156229523  ___U3CHalfExtentsU3Ek__BackingField_1;
	// System.Single Vuforia.OrientedBoundingBox::<Rotation>k__BackingField
	float ___U3CRotationU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(OrientedBoundingBox_t2769728497, ___U3CCenterU3Ek__BackingField_0)); }
	inline Vector2_t2156229523  get_U3CCenterU3Ek__BackingField_0() const { return ___U3CCenterU3Ek__BackingField_0; }
	inline Vector2_t2156229523 * get_address_of_U3CCenterU3Ek__BackingField_0() { return &___U3CCenterU3Ek__BackingField_0; }
	inline void set_U3CCenterU3Ek__BackingField_0(Vector2_t2156229523  value)
	{
		___U3CCenterU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CHalfExtentsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(OrientedBoundingBox_t2769728497, ___U3CHalfExtentsU3Ek__BackingField_1)); }
	inline Vector2_t2156229523  get_U3CHalfExtentsU3Ek__BackingField_1() const { return ___U3CHalfExtentsU3Ek__BackingField_1; }
	inline Vector2_t2156229523 * get_address_of_U3CHalfExtentsU3Ek__BackingField_1() { return &___U3CHalfExtentsU3Ek__BackingField_1; }
	inline void set_U3CHalfExtentsU3Ek__BackingField_1(Vector2_t2156229523  value)
	{
		___U3CHalfExtentsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CRotationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(OrientedBoundingBox_t2769728497, ___U3CRotationU3Ek__BackingField_2)); }
	inline float get_U3CRotationU3Ek__BackingField_2() const { return ___U3CRotationU3Ek__BackingField_2; }
	inline float* get_address_of_U3CRotationU3Ek__BackingField_2() { return &___U3CRotationU3Ek__BackingField_2; }
	inline void set_U3CRotationU3Ek__BackingField_2(float value)
	{
		___U3CRotationU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORIENTEDBOUNDINGBOX_T2769728497_H
#ifndef POSITIONALDEVICETRACKER_T656722001_H
#define POSITIONALDEVICETRACKER_T656722001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PositionalDeviceTracker
struct  PositionalDeviceTracker_t656722001  : public DeviceTracker_t2315692373
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONALDEVICETRACKER_T656722001_H
#ifndef MODEL_CORRECTION_MODE_T1953038946_H
#define MODEL_CORRECTION_MODE_T1953038946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE
struct  MODEL_CORRECTION_MODE_t1953038946 
{
public:
	// System.Int32 Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MODEL_CORRECTION_MODE_t1953038946, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODEL_CORRECTION_MODE_T1953038946_H
#ifndef MODE_T2291249183_H
#define MODE_T2291249183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.StereoProjMatrixStore/Mode
struct  Mode_t2291249183 
{
public:
	// System.Int32 Vuforia.StereoProjMatrixStore/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t2291249183, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T2291249183_H
#ifndef TARGETFINDER_T2439332195_H
#define TARGETFINDER_T2439332195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder
struct  TargetFinder_t2439332195  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderStatePtr
	intptr_t ___mTargetFinderStatePtr_0;
	// Vuforia.TargetFinder/TargetFinderState Vuforia.TargetFinder::mTargetFinderState
	TargetFinderState_t3286805956  ___mTargetFinderState_1;
	// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinder::mNewResults
	List_1_t619090059 * ___mNewResults_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget> Vuforia.TargetFinder::mImageTargets
	Dictionary_2_t2595729825 * ___mImageTargets_3;

public:
	inline static int32_t get_offset_of_mTargetFinderStatePtr_0() { return static_cast<int32_t>(offsetof(TargetFinder_t2439332195, ___mTargetFinderStatePtr_0)); }
	inline intptr_t get_mTargetFinderStatePtr_0() const { return ___mTargetFinderStatePtr_0; }
	inline intptr_t* get_address_of_mTargetFinderStatePtr_0() { return &___mTargetFinderStatePtr_0; }
	inline void set_mTargetFinderStatePtr_0(intptr_t value)
	{
		___mTargetFinderStatePtr_0 = value;
	}

	inline static int32_t get_offset_of_mTargetFinderState_1() { return static_cast<int32_t>(offsetof(TargetFinder_t2439332195, ___mTargetFinderState_1)); }
	inline TargetFinderState_t3286805956  get_mTargetFinderState_1() const { return ___mTargetFinderState_1; }
	inline TargetFinderState_t3286805956 * get_address_of_mTargetFinderState_1() { return &___mTargetFinderState_1; }
	inline void set_mTargetFinderState_1(TargetFinderState_t3286805956  value)
	{
		___mTargetFinderState_1 = value;
	}

	inline static int32_t get_offset_of_mNewResults_2() { return static_cast<int32_t>(offsetof(TargetFinder_t2439332195, ___mNewResults_2)); }
	inline List_1_t619090059 * get_mNewResults_2() const { return ___mNewResults_2; }
	inline List_1_t619090059 ** get_address_of_mNewResults_2() { return &___mNewResults_2; }
	inline void set_mNewResults_2(List_1_t619090059 * value)
	{
		___mNewResults_2 = value;
		Il2CppCodeGenWriteBarrier((&___mNewResults_2), value);
	}

	inline static int32_t get_offset_of_mImageTargets_3() { return static_cast<int32_t>(offsetof(TargetFinder_t2439332195, ___mImageTargets_3)); }
	inline Dictionary_2_t2595729825 * get_mImageTargets_3() const { return ___mImageTargets_3; }
	inline Dictionary_2_t2595729825 ** get_address_of_mImageTargets_3() { return &___mImageTargets_3; }
	inline void set_mImageTargets_3(Dictionary_2_t2595729825 * value)
	{
		___mImageTargets_3 = value;
		Il2CppCodeGenWriteBarrier((&___mImageTargets_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETFINDER_T2439332195_H
#ifndef INITSTATE_T538152685_H
#define INITSTATE_T538152685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder/InitState
struct  InitState_t538152685 
{
public:
	// System.Int32 Vuforia.TargetFinder/InitState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitState_t538152685, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITSTATE_T538152685_H
#ifndef STATUS_T1100905814_H
#define STATUS_T1100905814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t1100905814 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t1100905814, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATUS_T1100905814_H
#ifndef FRAMESTATE_T2717258284_H
#define FRAMESTATE_T2717258284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/FrameState
#pragma pack(push, tp, 1)
struct  FrameState_t2717258284 
{
public:
	// System.IntPtr Vuforia.TrackerData/FrameState::trackableDataArray
	intptr_t ___trackableDataArray_0;
	// System.IntPtr Vuforia.TrackerData/FrameState::vbDataArray
	intptr_t ___vbDataArray_1;
	// System.IntPtr Vuforia.TrackerData/FrameState::vuMarkResultArray
	intptr_t ___vuMarkResultArray_2;
	// System.IntPtr Vuforia.TrackerData/FrameState::newVuMarkDataArray
	intptr_t ___newVuMarkDataArray_3;
	// System.IntPtr Vuforia.TrackerData/FrameState::illuminationData
	intptr_t ___illuminationData_4;
	// System.Int32 Vuforia.TrackerData/FrameState::numTrackableResults
	int32_t ___numTrackableResults_5;
	// System.Int32 Vuforia.TrackerData/FrameState::numVirtualButtonResults
	int32_t ___numVirtualButtonResults_6;
	// System.Int32 Vuforia.TrackerData/FrameState::frameIndex
	int32_t ___frameIndex_7;
	// System.Int32 Vuforia.TrackerData/FrameState::numVuMarkResults
	int32_t ___numVuMarkResults_8;
	// System.Int32 Vuforia.TrackerData/FrameState::numNewVuMarks
	int32_t ___numNewVuMarks_9;
	// System.Int32 Vuforia.TrackerData/FrameState::deviceTrackableId
	int32_t ___deviceTrackableId_10;
	// System.Int32 Vuforia.TrackerData/FrameState::deviceTrackableStatusInfo
	int32_t ___deviceTrackableStatusInfo_11;
	// UnityEngine.Vector4 Vuforia.TrackerData/FrameState::minCameraCalibration
	Vector4_t3319028937  ___minCameraCalibration_12;

public:
	inline static int32_t get_offset_of_trackableDataArray_0() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___trackableDataArray_0)); }
	inline intptr_t get_trackableDataArray_0() const { return ___trackableDataArray_0; }
	inline intptr_t* get_address_of_trackableDataArray_0() { return &___trackableDataArray_0; }
	inline void set_trackableDataArray_0(intptr_t value)
	{
		___trackableDataArray_0 = value;
	}

	inline static int32_t get_offset_of_vbDataArray_1() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___vbDataArray_1)); }
	inline intptr_t get_vbDataArray_1() const { return ___vbDataArray_1; }
	inline intptr_t* get_address_of_vbDataArray_1() { return &___vbDataArray_1; }
	inline void set_vbDataArray_1(intptr_t value)
	{
		___vbDataArray_1 = value;
	}

	inline static int32_t get_offset_of_vuMarkResultArray_2() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___vuMarkResultArray_2)); }
	inline intptr_t get_vuMarkResultArray_2() const { return ___vuMarkResultArray_2; }
	inline intptr_t* get_address_of_vuMarkResultArray_2() { return &___vuMarkResultArray_2; }
	inline void set_vuMarkResultArray_2(intptr_t value)
	{
		___vuMarkResultArray_2 = value;
	}

	inline static int32_t get_offset_of_newVuMarkDataArray_3() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___newVuMarkDataArray_3)); }
	inline intptr_t get_newVuMarkDataArray_3() const { return ___newVuMarkDataArray_3; }
	inline intptr_t* get_address_of_newVuMarkDataArray_3() { return &___newVuMarkDataArray_3; }
	inline void set_newVuMarkDataArray_3(intptr_t value)
	{
		___newVuMarkDataArray_3 = value;
	}

	inline static int32_t get_offset_of_illuminationData_4() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___illuminationData_4)); }
	inline intptr_t get_illuminationData_4() const { return ___illuminationData_4; }
	inline intptr_t* get_address_of_illuminationData_4() { return &___illuminationData_4; }
	inline void set_illuminationData_4(intptr_t value)
	{
		___illuminationData_4 = value;
	}

	inline static int32_t get_offset_of_numTrackableResults_5() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numTrackableResults_5)); }
	inline int32_t get_numTrackableResults_5() const { return ___numTrackableResults_5; }
	inline int32_t* get_address_of_numTrackableResults_5() { return &___numTrackableResults_5; }
	inline void set_numTrackableResults_5(int32_t value)
	{
		___numTrackableResults_5 = value;
	}

	inline static int32_t get_offset_of_numVirtualButtonResults_6() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numVirtualButtonResults_6)); }
	inline int32_t get_numVirtualButtonResults_6() const { return ___numVirtualButtonResults_6; }
	inline int32_t* get_address_of_numVirtualButtonResults_6() { return &___numVirtualButtonResults_6; }
	inline void set_numVirtualButtonResults_6(int32_t value)
	{
		___numVirtualButtonResults_6 = value;
	}

	inline static int32_t get_offset_of_frameIndex_7() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___frameIndex_7)); }
	inline int32_t get_frameIndex_7() const { return ___frameIndex_7; }
	inline int32_t* get_address_of_frameIndex_7() { return &___frameIndex_7; }
	inline void set_frameIndex_7(int32_t value)
	{
		___frameIndex_7 = value;
	}

	inline static int32_t get_offset_of_numVuMarkResults_8() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numVuMarkResults_8)); }
	inline int32_t get_numVuMarkResults_8() const { return ___numVuMarkResults_8; }
	inline int32_t* get_address_of_numVuMarkResults_8() { return &___numVuMarkResults_8; }
	inline void set_numVuMarkResults_8(int32_t value)
	{
		___numVuMarkResults_8 = value;
	}

	inline static int32_t get_offset_of_numNewVuMarks_9() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numNewVuMarks_9)); }
	inline int32_t get_numNewVuMarks_9() const { return ___numNewVuMarks_9; }
	inline int32_t* get_address_of_numNewVuMarks_9() { return &___numNewVuMarks_9; }
	inline void set_numNewVuMarks_9(int32_t value)
	{
		___numNewVuMarks_9 = value;
	}

	inline static int32_t get_offset_of_deviceTrackableId_10() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___deviceTrackableId_10)); }
	inline int32_t get_deviceTrackableId_10() const { return ___deviceTrackableId_10; }
	inline int32_t* get_address_of_deviceTrackableId_10() { return &___deviceTrackableId_10; }
	inline void set_deviceTrackableId_10(int32_t value)
	{
		___deviceTrackableId_10 = value;
	}

	inline static int32_t get_offset_of_deviceTrackableStatusInfo_11() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___deviceTrackableStatusInfo_11)); }
	inline int32_t get_deviceTrackableStatusInfo_11() const { return ___deviceTrackableStatusInfo_11; }
	inline int32_t* get_address_of_deviceTrackableStatusInfo_11() { return &___deviceTrackableStatusInfo_11; }
	inline void set_deviceTrackableStatusInfo_11(int32_t value)
	{
		___deviceTrackableStatusInfo_11 = value;
	}

	inline static int32_t get_offset_of_minCameraCalibration_12() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___minCameraCalibration_12)); }
	inline Vector4_t3319028937  get_minCameraCalibration_12() const { return ___minCameraCalibration_12; }
	inline Vector4_t3319028937 * get_address_of_minCameraCalibration_12() { return &___minCameraCalibration_12; }
	inline void set_minCameraCalibration_12(Vector4_t3319028937  value)
	{
		___minCameraCalibration_12 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMESTATE_T2717258284_H
#ifndef VIEW_T3879626884_H
#define VIEW_T3879626884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.View
struct  View_t3879626884 
{
public:
	// System.Int32 Vuforia.View::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(View_t3879626884, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIEW_T3879626884_H
#ifndef WORLDCENTERMODE_T3672819471_H
#define WORLDCENTERMODE_T3672819471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController/WorldCenterMode
struct  WorldCenterMode_t3672819471 
{
public:
	// System.Int32 Vuforia.VuforiaARController/WorldCenterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WorldCenterMode_t3672819471, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDCENTERMODE_T3672819471_H
#ifndef VIDEOBGCFGDATA_T994527297_H
#define VIDEOBGCFGDATA_T994527297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBGCfgData
#pragma pack(push, tp, 1)
struct  VideoBGCfgData_t994527297 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoBGCfgData::position
	Vec2I_t3527036565  ___position_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoBGCfgData::size
	Vec2I_t3527036565  ___size_1;
	// System.Int32 Vuforia.VuforiaRenderer/VideoBGCfgData::reflectionInteger
	int32_t ___reflectionInteger_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t994527297, ___position_0)); }
	inline Vec2I_t3527036565  get_position_0() const { return ___position_0; }
	inline Vec2I_t3527036565 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vec2I_t3527036565  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t994527297, ___size_1)); }
	inline Vec2I_t3527036565  get_size_1() const { return ___size_1; }
	inline Vec2I_t3527036565 * get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(Vec2I_t3527036565  value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_reflectionInteger_2() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t994527297, ___reflectionInteger_2)); }
	inline int32_t get_reflectionInteger_2() const { return ___reflectionInteger_2; }
	inline int32_t* get_address_of_reflectionInteger_2() { return &___reflectionInteger_2; }
	inline void set_reflectionInteger_2(int32_t value)
	{
		___reflectionInteger_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBGCFGDATA_T994527297_H
#ifndef VIDEOBACKGROUNDREFLECTION_T736962841_H
#define VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBackgroundReflection
struct  VideoBackgroundReflection_t736962841 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/VideoBackgroundReflection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoBackgroundReflection_t736962841, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifndef VIDEOTEXTUREINFO_T1805965052_H
#define VIDEOTEXTUREINFO_T1805965052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoTextureInfo
#pragma pack(push, tp, 1)
struct  VideoTextureInfo_t1805965052 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoTextureInfo::textureSize
	Vec2I_t3527036565  ___textureSize_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoTextureInfo::imageSize
	Vec2I_t3527036565  ___imageSize_1;

public:
	inline static int32_t get_offset_of_textureSize_0() { return static_cast<int32_t>(offsetof(VideoTextureInfo_t1805965052, ___textureSize_0)); }
	inline Vec2I_t3527036565  get_textureSize_0() const { return ___textureSize_0; }
	inline Vec2I_t3527036565 * get_address_of_textureSize_0() { return &___textureSize_0; }
	inline void set_textureSize_0(Vec2I_t3527036565  value)
	{
		___textureSize_0 = value;
	}

	inline static int32_t get_offset_of_imageSize_1() { return static_cast<int32_t>(offsetof(VideoTextureInfo_t1805965052, ___imageSize_1)); }
	inline Vec2I_t3527036565  get_imageSize_1() const { return ___imageSize_1; }
	inline Vec2I_t3527036565 * get_address_of_imageSize_1() { return &___imageSize_1; }
	inline void set_imageSize_1(Vec2I_t3527036565  value)
	{
		___imageSize_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOTEXTUREINFO_T1805965052_H
#ifndef INITSTATE_T3374939742_H
#define INITSTATE_T3374939742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntime/InitState
struct  InitState_t3374939742 
{
public:
	// System.Int32 Vuforia.VuforiaRuntime/InitState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitState_t3374939742, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITSTATE_T3374939742_H
#ifndef INITIALIZABLEBOOL_T3274999204_H
#define INITIALIZABLEBOOL_T3274999204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntimeUtilities/InitializableBool
struct  InitializableBool_t3274999204 
{
public:
	// System.Int32 Vuforia.VuforiaRuntimeUtilities/InitializableBool::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitializableBool_t3274999204, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITIALIZABLEBOOL_T3274999204_H
#ifndef INITERROR_T3420749710_H
#define INITERROR_T3420749710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/InitError
struct  InitError_t3420749710 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/InitError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitError_t3420749710, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITERROR_T3420749710_H
#ifndef STORAGETYPE_T857810839_H
#define STORAGETYPE_T857810839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/StorageType
struct  StorageType_t857810839 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/StorageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StorageType_t857810839, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STORAGETYPE_T857810839_H
#ifndef VUFORIAHINT_T545805519_H
#define VUFORIAHINT_T545805519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/VuforiaHint
struct  VuforiaHint_t545805519 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/VuforiaHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuforiaHint_t545805519, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAHINT_T545805519_H
#ifndef PROFILEDATA_T3519391925_H
#define PROFILEDATA_T3519391925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamProfile/ProfileData
struct  ProfileData_t3519391925 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::RequestedTextureSize
	Vec2I_t3527036565  ___RequestedTextureSize_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::ResampledTextureSize
	Vec2I_t3527036565  ___ResampledTextureSize_1;
	// System.Int32 Vuforia.WebCamProfile/ProfileData::RequestedFPS
	int32_t ___RequestedFPS_2;

public:
	inline static int32_t get_offset_of_RequestedTextureSize_0() { return static_cast<int32_t>(offsetof(ProfileData_t3519391925, ___RequestedTextureSize_0)); }
	inline Vec2I_t3527036565  get_RequestedTextureSize_0() const { return ___RequestedTextureSize_0; }
	inline Vec2I_t3527036565 * get_address_of_RequestedTextureSize_0() { return &___RequestedTextureSize_0; }
	inline void set_RequestedTextureSize_0(Vec2I_t3527036565  value)
	{
		___RequestedTextureSize_0 = value;
	}

	inline static int32_t get_offset_of_ResampledTextureSize_1() { return static_cast<int32_t>(offsetof(ProfileData_t3519391925, ___ResampledTextureSize_1)); }
	inline Vec2I_t3527036565  get_ResampledTextureSize_1() const { return ___ResampledTextureSize_1; }
	inline Vec2I_t3527036565 * get_address_of_ResampledTextureSize_1() { return &___ResampledTextureSize_1; }
	inline void set_ResampledTextureSize_1(Vec2I_t3527036565  value)
	{
		___ResampledTextureSize_1 = value;
	}

	inline static int32_t get_offset_of_RequestedFPS_2() { return static_cast<int32_t>(offsetof(ProfileData_t3519391925, ___RequestedFPS_2)); }
	inline int32_t get_RequestedFPS_2() const { return ___RequestedFPS_2; }
	inline int32_t* get_address_of_RequestedFPS_2() { return &___RequestedFPS_2; }
	inline void set_RequestedFPS_2(int32_t value)
	{
		___RequestedFPS_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILEDATA_T3519391925_H
#ifndef ENUMERATOR_T4013519934_H
#define ENUMERATOR_T4013519934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<Vuforia.VuforiaManager/TrackableIdPair,System.Object>
struct  Enumerator_t4013519934 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t2059337159 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t162042030  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t4013519934, ___dictionary_0)); }
	inline Dictionary_2_t2059337159 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2059337159 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2059337159 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t4013519934, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t4013519934, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4013519934, ___current_3)); }
	inline KeyValuePair_2_t162042030  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t162042030 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t162042030  value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t4013519934, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T4013519934_H
#ifndef ENUMERATOR_T3095187923_H
#define ENUMERATOR_T3095187923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<Vuforia.VuforiaManager/TrackableIdPair,UnityEngine.XR.WSA.WorldAnchor>
struct  Enumerator_t3095187923 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t1141005148 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t3538677315  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3095187923, ___dictionary_0)); }
	inline Dictionary_2_t1141005148 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1141005148 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1141005148 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t3095187923, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t3095187923, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3095187923, ___current_3)); }
	inline KeyValuePair_2_t3538677315  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t3538677315 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t3538677315  value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t3095187923, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3095187923_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2999457153 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t426314064 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t426314064 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2999457153 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2999457153 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2999457153 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef BASECAMERACONFIGURATION_T3118151474_H
#define BASECAMERACONFIGURATION_T3118151474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.BaseCameraConfiguration
struct  BaseCameraConfiguration_t3118151474  : public RuntimeObject
{
public:
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.BaseCameraConfiguration::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_0;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.BaseCameraConfiguration::mLastVideoBackGroundMirroredFromSDK
	int32_t ___mLastVideoBackGroundMirroredFromSDK_1;
	// System.Action Vuforia.BaseCameraConfiguration::mOnVideoBackgroundConfigChanged
	Action_t1264377477 * ___mOnVideoBackgroundConfigChanged_2;
	// Vuforia.VideoBackgroundBehaviour Vuforia.BaseCameraConfiguration::mVideoBackgroundBehaviour
	VideoBackgroundBehaviour_t1552899074 * ___mVideoBackgroundBehaviour_3;
	// UnityEngine.Rect Vuforia.BaseCameraConfiguration::mVideoBackgroundViewportRect
	Rect_t2360479859  ___mVideoBackgroundViewportRect_4;
	// System.Boolean Vuforia.BaseCameraConfiguration::mRenderVideoBackground
	bool ___mRenderVideoBackground_5;
	// UnityEngine.ScreenOrientation Vuforia.BaseCameraConfiguration::mProjectionOrientation
	int32_t ___mProjectionOrientation_6;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.BaseCameraConfiguration::mInitialReflection
	int32_t ___mInitialReflection_7;
	// Vuforia.BackgroundPlaneBehaviour Vuforia.BaseCameraConfiguration::mBackgroundPlaneBehaviour
	BackgroundPlaneBehaviour_t3333547397 * ___mBackgroundPlaneBehaviour_8;
	// System.Boolean Vuforia.BaseCameraConfiguration::mDeviceModeChanged
	bool ___mDeviceModeChanged_9;
	// System.Boolean Vuforia.BaseCameraConfiguration::mProjectionParamsChanged
	bool ___mProjectionParamsChanged_10;

public:
	inline static int32_t get_offset_of_mCameraDeviceMode_0() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mCameraDeviceMode_0)); }
	inline int32_t get_mCameraDeviceMode_0() const { return ___mCameraDeviceMode_0; }
	inline int32_t* get_address_of_mCameraDeviceMode_0() { return &___mCameraDeviceMode_0; }
	inline void set_mCameraDeviceMode_0(int32_t value)
	{
		___mCameraDeviceMode_0 = value;
	}

	inline static int32_t get_offset_of_mLastVideoBackGroundMirroredFromSDK_1() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mLastVideoBackGroundMirroredFromSDK_1)); }
	inline int32_t get_mLastVideoBackGroundMirroredFromSDK_1() const { return ___mLastVideoBackGroundMirroredFromSDK_1; }
	inline int32_t* get_address_of_mLastVideoBackGroundMirroredFromSDK_1() { return &___mLastVideoBackGroundMirroredFromSDK_1; }
	inline void set_mLastVideoBackGroundMirroredFromSDK_1(int32_t value)
	{
		___mLastVideoBackGroundMirroredFromSDK_1 = value;
	}

	inline static int32_t get_offset_of_mOnVideoBackgroundConfigChanged_2() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mOnVideoBackgroundConfigChanged_2)); }
	inline Action_t1264377477 * get_mOnVideoBackgroundConfigChanged_2() const { return ___mOnVideoBackgroundConfigChanged_2; }
	inline Action_t1264377477 ** get_address_of_mOnVideoBackgroundConfigChanged_2() { return &___mOnVideoBackgroundConfigChanged_2; }
	inline void set_mOnVideoBackgroundConfigChanged_2(Action_t1264377477 * value)
	{
		___mOnVideoBackgroundConfigChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVideoBackgroundConfigChanged_2), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundBehaviour_3() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mVideoBackgroundBehaviour_3)); }
	inline VideoBackgroundBehaviour_t1552899074 * get_mVideoBackgroundBehaviour_3() const { return ___mVideoBackgroundBehaviour_3; }
	inline VideoBackgroundBehaviour_t1552899074 ** get_address_of_mVideoBackgroundBehaviour_3() { return &___mVideoBackgroundBehaviour_3; }
	inline void set_mVideoBackgroundBehaviour_3(VideoBackgroundBehaviour_t1552899074 * value)
	{
		___mVideoBackgroundBehaviour_3 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundBehaviour_3), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundViewportRect_4() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mVideoBackgroundViewportRect_4)); }
	inline Rect_t2360479859  get_mVideoBackgroundViewportRect_4() const { return ___mVideoBackgroundViewportRect_4; }
	inline Rect_t2360479859 * get_address_of_mVideoBackgroundViewportRect_4() { return &___mVideoBackgroundViewportRect_4; }
	inline void set_mVideoBackgroundViewportRect_4(Rect_t2360479859  value)
	{
		___mVideoBackgroundViewportRect_4 = value;
	}

	inline static int32_t get_offset_of_mRenderVideoBackground_5() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mRenderVideoBackground_5)); }
	inline bool get_mRenderVideoBackground_5() const { return ___mRenderVideoBackground_5; }
	inline bool* get_address_of_mRenderVideoBackground_5() { return &___mRenderVideoBackground_5; }
	inline void set_mRenderVideoBackground_5(bool value)
	{
		___mRenderVideoBackground_5 = value;
	}

	inline static int32_t get_offset_of_mProjectionOrientation_6() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mProjectionOrientation_6)); }
	inline int32_t get_mProjectionOrientation_6() const { return ___mProjectionOrientation_6; }
	inline int32_t* get_address_of_mProjectionOrientation_6() { return &___mProjectionOrientation_6; }
	inline void set_mProjectionOrientation_6(int32_t value)
	{
		___mProjectionOrientation_6 = value;
	}

	inline static int32_t get_offset_of_mInitialReflection_7() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mInitialReflection_7)); }
	inline int32_t get_mInitialReflection_7() const { return ___mInitialReflection_7; }
	inline int32_t* get_address_of_mInitialReflection_7() { return &___mInitialReflection_7; }
	inline void set_mInitialReflection_7(int32_t value)
	{
		___mInitialReflection_7 = value;
	}

	inline static int32_t get_offset_of_mBackgroundPlaneBehaviour_8() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mBackgroundPlaneBehaviour_8)); }
	inline BackgroundPlaneBehaviour_t3333547397 * get_mBackgroundPlaneBehaviour_8() const { return ___mBackgroundPlaneBehaviour_8; }
	inline BackgroundPlaneBehaviour_t3333547397 ** get_address_of_mBackgroundPlaneBehaviour_8() { return &___mBackgroundPlaneBehaviour_8; }
	inline void set_mBackgroundPlaneBehaviour_8(BackgroundPlaneBehaviour_t3333547397 * value)
	{
		___mBackgroundPlaneBehaviour_8 = value;
		Il2CppCodeGenWriteBarrier((&___mBackgroundPlaneBehaviour_8), value);
	}

	inline static int32_t get_offset_of_mDeviceModeChanged_9() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mDeviceModeChanged_9)); }
	inline bool get_mDeviceModeChanged_9() const { return ___mDeviceModeChanged_9; }
	inline bool* get_address_of_mDeviceModeChanged_9() { return &___mDeviceModeChanged_9; }
	inline void set_mDeviceModeChanged_9(bool value)
	{
		___mDeviceModeChanged_9 = value;
	}

	inline static int32_t get_offset_of_mProjectionParamsChanged_10() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mProjectionParamsChanged_10)); }
	inline bool get_mProjectionParamsChanged_10() const { return ___mProjectionParamsChanged_10; }
	inline bool* get_address_of_mProjectionParamsChanged_10() { return &___mProjectionParamsChanged_10; }
	inline void set_mProjectionParamsChanged_10(bool value)
	{
		___mProjectionParamsChanged_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASECAMERACONFIGURATION_T3118151474_H
#ifndef CAMERADEVICE_T960297568_H
#define CAMERADEVICE_T960297568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice
struct  CameraDevice_t960297568  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image> Vuforia.CameraDevice::mCameraImages
	Dictionary_2_t3630620928 * ___mCameraImages_1;
	// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT> Vuforia.CameraDevice::mForcedCameraFormats
	List_1_t386988881 * ___mForcedCameraFormats_2;
	// System.Boolean Vuforia.CameraDevice::mCameraReady
	bool ___mCameraReady_4;
	// System.Boolean Vuforia.CameraDevice::mIsDirty
	bool ___mIsDirty_5;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDevice::mActualCameraDirection
	int32_t ___mActualCameraDirection_6;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDevice::mSelectedCameraDirection
	int32_t ___mSelectedCameraDirection_7;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.CameraDevice::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_8;
	// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDevice::mVideoModeData
	VideoModeData_t2066817255  ___mVideoModeData_9;
	// System.Boolean Vuforia.CameraDevice::mVideoModeDataNeedsUpdate
	bool ___mVideoModeDataNeedsUpdate_10;
	// System.Boolean Vuforia.CameraDevice::mHasCameraDeviceModeBeenSet
	bool ___mHasCameraDeviceModeBeenSet_11;
	// System.Boolean Vuforia.CameraDevice::mCameraActive
	bool ___mCameraActive_12;
	// System.Boolean Vuforia.CameraDevice::mIsCameraMocked
	bool ___mIsCameraMocked_13;

public:
	inline static int32_t get_offset_of_mCameraImages_1() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraImages_1)); }
	inline Dictionary_2_t3630620928 * get_mCameraImages_1() const { return ___mCameraImages_1; }
	inline Dictionary_2_t3630620928 ** get_address_of_mCameraImages_1() { return &___mCameraImages_1; }
	inline void set_mCameraImages_1(Dictionary_2_t3630620928 * value)
	{
		___mCameraImages_1 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraImages_1), value);
	}

	inline static int32_t get_offset_of_mForcedCameraFormats_2() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mForcedCameraFormats_2)); }
	inline List_1_t386988881 * get_mForcedCameraFormats_2() const { return ___mForcedCameraFormats_2; }
	inline List_1_t386988881 ** get_address_of_mForcedCameraFormats_2() { return &___mForcedCameraFormats_2; }
	inline void set_mForcedCameraFormats_2(List_1_t386988881 * value)
	{
		___mForcedCameraFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___mForcedCameraFormats_2), value);
	}

	inline static int32_t get_offset_of_mCameraReady_4() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraReady_4)); }
	inline bool get_mCameraReady_4() const { return ___mCameraReady_4; }
	inline bool* get_address_of_mCameraReady_4() { return &___mCameraReady_4; }
	inline void set_mCameraReady_4(bool value)
	{
		___mCameraReady_4 = value;
	}

	inline static int32_t get_offset_of_mIsDirty_5() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mIsDirty_5)); }
	inline bool get_mIsDirty_5() const { return ___mIsDirty_5; }
	inline bool* get_address_of_mIsDirty_5() { return &___mIsDirty_5; }
	inline void set_mIsDirty_5(bool value)
	{
		___mIsDirty_5 = value;
	}

	inline static int32_t get_offset_of_mActualCameraDirection_6() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mActualCameraDirection_6)); }
	inline int32_t get_mActualCameraDirection_6() const { return ___mActualCameraDirection_6; }
	inline int32_t* get_address_of_mActualCameraDirection_6() { return &___mActualCameraDirection_6; }
	inline void set_mActualCameraDirection_6(int32_t value)
	{
		___mActualCameraDirection_6 = value;
	}

	inline static int32_t get_offset_of_mSelectedCameraDirection_7() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mSelectedCameraDirection_7)); }
	inline int32_t get_mSelectedCameraDirection_7() const { return ___mSelectedCameraDirection_7; }
	inline int32_t* get_address_of_mSelectedCameraDirection_7() { return &___mSelectedCameraDirection_7; }
	inline void set_mSelectedCameraDirection_7(int32_t value)
	{
		___mSelectedCameraDirection_7 = value;
	}

	inline static int32_t get_offset_of_mCameraDeviceMode_8() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraDeviceMode_8)); }
	inline int32_t get_mCameraDeviceMode_8() const { return ___mCameraDeviceMode_8; }
	inline int32_t* get_address_of_mCameraDeviceMode_8() { return &___mCameraDeviceMode_8; }
	inline void set_mCameraDeviceMode_8(int32_t value)
	{
		___mCameraDeviceMode_8 = value;
	}

	inline static int32_t get_offset_of_mVideoModeData_9() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mVideoModeData_9)); }
	inline VideoModeData_t2066817255  get_mVideoModeData_9() const { return ___mVideoModeData_9; }
	inline VideoModeData_t2066817255 * get_address_of_mVideoModeData_9() { return &___mVideoModeData_9; }
	inline void set_mVideoModeData_9(VideoModeData_t2066817255  value)
	{
		___mVideoModeData_9 = value;
	}

	inline static int32_t get_offset_of_mVideoModeDataNeedsUpdate_10() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mVideoModeDataNeedsUpdate_10)); }
	inline bool get_mVideoModeDataNeedsUpdate_10() const { return ___mVideoModeDataNeedsUpdate_10; }
	inline bool* get_address_of_mVideoModeDataNeedsUpdate_10() { return &___mVideoModeDataNeedsUpdate_10; }
	inline void set_mVideoModeDataNeedsUpdate_10(bool value)
	{
		___mVideoModeDataNeedsUpdate_10 = value;
	}

	inline static int32_t get_offset_of_mHasCameraDeviceModeBeenSet_11() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mHasCameraDeviceModeBeenSet_11)); }
	inline bool get_mHasCameraDeviceModeBeenSet_11() const { return ___mHasCameraDeviceModeBeenSet_11; }
	inline bool* get_address_of_mHasCameraDeviceModeBeenSet_11() { return &___mHasCameraDeviceModeBeenSet_11; }
	inline void set_mHasCameraDeviceModeBeenSet_11(bool value)
	{
		___mHasCameraDeviceModeBeenSet_11 = value;
	}

	inline static int32_t get_offset_of_mCameraActive_12() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraActive_12)); }
	inline bool get_mCameraActive_12() const { return ___mCameraActive_12; }
	inline bool* get_address_of_mCameraActive_12() { return &___mCameraActive_12; }
	inline void set_mCameraActive_12(bool value)
	{
		___mCameraActive_12 = value;
	}

	inline static int32_t get_offset_of_mIsCameraMocked_13() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mIsCameraMocked_13)); }
	inline bool get_mIsCameraMocked_13() const { return ___mIsCameraMocked_13; }
	inline bool* get_address_of_mIsCameraMocked_13() { return &___mIsCameraMocked_13; }
	inline void set_mIsCameraMocked_13(bool value)
	{
		___mIsCameraMocked_13 = value;
	}
};

struct CameraDevice_t960297568_StaticFields
{
public:
	// Vuforia.CameraDevice Vuforia.CameraDevice::mInstance
	CameraDevice_t960297568 * ___mInstance_0;
	// Vuforia.IWebCam Vuforia.CameraDevice::mWebCam
	RuntimeObject* ___mWebCam_3;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568_StaticFields, ___mInstance_0)); }
	inline CameraDevice_t960297568 * get_mInstance_0() const { return ___mInstance_0; }
	inline CameraDevice_t960297568 ** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(CameraDevice_t960297568 * value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_0), value);
	}

	inline static int32_t get_offset_of_mWebCam_3() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568_StaticFields, ___mWebCam_3)); }
	inline RuntimeObject* get_mWebCam_3() const { return ___mWebCam_3; }
	inline RuntimeObject** get_address_of_mWebCam_3() { return &___mWebCam_3; }
	inline void set_mWebCam_3(RuntimeObject* value)
	{
		___mWebCam_3 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCam_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICE_T960297568_H
#ifndef DEVICETRACKERARCONTROLLER_T1095592542_H
#define DEVICETRACKERARCONTROLLER_T1095592542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DeviceTrackerARController
struct  DeviceTrackerARController_t1095592542  : public ARController_t116632334
{
public:
	// Vuforia.DeviceTracker/TRACKING_MODE Vuforia.DeviceTrackerARController::mTrackingMode
	int32_t ___mTrackingMode_3;
	// System.Boolean Vuforia.DeviceTrackerARController::mAutoInitTracker
	bool ___mAutoInitTracker_4;
	// System.Boolean Vuforia.DeviceTrackerARController::mAutoStartTracker
	bool ___mAutoStartTracker_5;
	// System.Boolean Vuforia.DeviceTrackerARController::mPosePrediction
	bool ___mPosePrediction_6;
	// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE Vuforia.DeviceTrackerARController::mModelCorrectionMode
	int32_t ___mModelCorrectionMode_7;
	// System.Boolean Vuforia.DeviceTrackerARController::mModelTransformEnabled
	bool ___mModelTransformEnabled_8;
	// UnityEngine.Vector3 Vuforia.DeviceTrackerARController::mModelTransform
	Vector3_t3722313464  ___mModelTransform_9;
	// Vuforia.FusionProviderType Vuforia.DeviceTrackerARController::mFusionProviderType
	int32_t ___mFusionProviderType_10;
	// System.Action Vuforia.DeviceTrackerARController::mTrackerStarted
	Action_t1264377477 * ___mTrackerStarted_11;
	// System.Boolean Vuforia.DeviceTrackerARController::mTrackerWasActiveBeforePause
	bool ___mTrackerWasActiveBeforePause_12;
	// System.Boolean Vuforia.DeviceTrackerARController::mTrackerWasActiveBeforeDisabling
	bool ___mTrackerWasActiveBeforeDisabling_13;
	// System.Single Vuforia.DeviceTrackerARController::mEmulatorPositionVelocity
	float ___mEmulatorPositionVelocity_14;
	// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration Vuforia.DeviceTrackerARController::mDeviceTrackerConfiguration
	DeviceTrackerConfiguration_t721467671 * ___mDeviceTrackerConfiguration_15;

public:
	inline static int32_t get_offset_of_mTrackingMode_3() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mTrackingMode_3)); }
	inline int32_t get_mTrackingMode_3() const { return ___mTrackingMode_3; }
	inline int32_t* get_address_of_mTrackingMode_3() { return &___mTrackingMode_3; }
	inline void set_mTrackingMode_3(int32_t value)
	{
		___mTrackingMode_3 = value;
	}

	inline static int32_t get_offset_of_mAutoInitTracker_4() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mAutoInitTracker_4)); }
	inline bool get_mAutoInitTracker_4() const { return ___mAutoInitTracker_4; }
	inline bool* get_address_of_mAutoInitTracker_4() { return &___mAutoInitTracker_4; }
	inline void set_mAutoInitTracker_4(bool value)
	{
		___mAutoInitTracker_4 = value;
	}

	inline static int32_t get_offset_of_mAutoStartTracker_5() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mAutoStartTracker_5)); }
	inline bool get_mAutoStartTracker_5() const { return ___mAutoStartTracker_5; }
	inline bool* get_address_of_mAutoStartTracker_5() { return &___mAutoStartTracker_5; }
	inline void set_mAutoStartTracker_5(bool value)
	{
		___mAutoStartTracker_5 = value;
	}

	inline static int32_t get_offset_of_mPosePrediction_6() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mPosePrediction_6)); }
	inline bool get_mPosePrediction_6() const { return ___mPosePrediction_6; }
	inline bool* get_address_of_mPosePrediction_6() { return &___mPosePrediction_6; }
	inline void set_mPosePrediction_6(bool value)
	{
		___mPosePrediction_6 = value;
	}

	inline static int32_t get_offset_of_mModelCorrectionMode_7() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mModelCorrectionMode_7)); }
	inline int32_t get_mModelCorrectionMode_7() const { return ___mModelCorrectionMode_7; }
	inline int32_t* get_address_of_mModelCorrectionMode_7() { return &___mModelCorrectionMode_7; }
	inline void set_mModelCorrectionMode_7(int32_t value)
	{
		___mModelCorrectionMode_7 = value;
	}

	inline static int32_t get_offset_of_mModelTransformEnabled_8() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mModelTransformEnabled_8)); }
	inline bool get_mModelTransformEnabled_8() const { return ___mModelTransformEnabled_8; }
	inline bool* get_address_of_mModelTransformEnabled_8() { return &___mModelTransformEnabled_8; }
	inline void set_mModelTransformEnabled_8(bool value)
	{
		___mModelTransformEnabled_8 = value;
	}

	inline static int32_t get_offset_of_mModelTransform_9() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mModelTransform_9)); }
	inline Vector3_t3722313464  get_mModelTransform_9() const { return ___mModelTransform_9; }
	inline Vector3_t3722313464 * get_address_of_mModelTransform_9() { return &___mModelTransform_9; }
	inline void set_mModelTransform_9(Vector3_t3722313464  value)
	{
		___mModelTransform_9 = value;
	}

	inline static int32_t get_offset_of_mFusionProviderType_10() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mFusionProviderType_10)); }
	inline int32_t get_mFusionProviderType_10() const { return ___mFusionProviderType_10; }
	inline int32_t* get_address_of_mFusionProviderType_10() { return &___mFusionProviderType_10; }
	inline void set_mFusionProviderType_10(int32_t value)
	{
		___mFusionProviderType_10 = value;
	}

	inline static int32_t get_offset_of_mTrackerStarted_11() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mTrackerStarted_11)); }
	inline Action_t1264377477 * get_mTrackerStarted_11() const { return ___mTrackerStarted_11; }
	inline Action_t1264377477 ** get_address_of_mTrackerStarted_11() { return &___mTrackerStarted_11; }
	inline void set_mTrackerStarted_11(Action_t1264377477 * value)
	{
		___mTrackerStarted_11 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackerStarted_11), value);
	}

	inline static int32_t get_offset_of_mTrackerWasActiveBeforePause_12() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mTrackerWasActiveBeforePause_12)); }
	inline bool get_mTrackerWasActiveBeforePause_12() const { return ___mTrackerWasActiveBeforePause_12; }
	inline bool* get_address_of_mTrackerWasActiveBeforePause_12() { return &___mTrackerWasActiveBeforePause_12; }
	inline void set_mTrackerWasActiveBeforePause_12(bool value)
	{
		___mTrackerWasActiveBeforePause_12 = value;
	}

	inline static int32_t get_offset_of_mTrackerWasActiveBeforeDisabling_13() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mTrackerWasActiveBeforeDisabling_13)); }
	inline bool get_mTrackerWasActiveBeforeDisabling_13() const { return ___mTrackerWasActiveBeforeDisabling_13; }
	inline bool* get_address_of_mTrackerWasActiveBeforeDisabling_13() { return &___mTrackerWasActiveBeforeDisabling_13; }
	inline void set_mTrackerWasActiveBeforeDisabling_13(bool value)
	{
		___mTrackerWasActiveBeforeDisabling_13 = value;
	}

	inline static int32_t get_offset_of_mEmulatorPositionVelocity_14() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mEmulatorPositionVelocity_14)); }
	inline float get_mEmulatorPositionVelocity_14() const { return ___mEmulatorPositionVelocity_14; }
	inline float* get_address_of_mEmulatorPositionVelocity_14() { return &___mEmulatorPositionVelocity_14; }
	inline void set_mEmulatorPositionVelocity_14(float value)
	{
		___mEmulatorPositionVelocity_14 = value;
	}

	inline static int32_t get_offset_of_mDeviceTrackerConfiguration_15() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mDeviceTrackerConfiguration_15)); }
	inline DeviceTrackerConfiguration_t721467671 * get_mDeviceTrackerConfiguration_15() const { return ___mDeviceTrackerConfiguration_15; }
	inline DeviceTrackerConfiguration_t721467671 ** get_address_of_mDeviceTrackerConfiguration_15() { return &___mDeviceTrackerConfiguration_15; }
	inline void set_mDeviceTrackerConfiguration_15(DeviceTrackerConfiguration_t721467671 * value)
	{
		___mDeviceTrackerConfiguration_15 = value;
		Il2CppCodeGenWriteBarrier((&___mDeviceTrackerConfiguration_15), value);
	}
};

struct DeviceTrackerARController_t1095592542_StaticFields
{
public:
	// UnityEngine.Vector3 Vuforia.DeviceTrackerARController::DEFAULT_HEAD_PIVOT
	Vector3_t3722313464  ___DEFAULT_HEAD_PIVOT_1;
	// UnityEngine.Vector3 Vuforia.DeviceTrackerARController::DEFAULT_HANDHELD_PIVOT
	Vector3_t3722313464  ___DEFAULT_HANDHELD_PIVOT_2;
	// Vuforia.DeviceTrackerARController Vuforia.DeviceTrackerARController::mInstance
	DeviceTrackerARController_t1095592542 * ___mInstance_16;
	// System.Object Vuforia.DeviceTrackerARController::mPadlock
	RuntimeObject * ___mPadlock_17;

public:
	inline static int32_t get_offset_of_DEFAULT_HEAD_PIVOT_1() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542_StaticFields, ___DEFAULT_HEAD_PIVOT_1)); }
	inline Vector3_t3722313464  get_DEFAULT_HEAD_PIVOT_1() const { return ___DEFAULT_HEAD_PIVOT_1; }
	inline Vector3_t3722313464 * get_address_of_DEFAULT_HEAD_PIVOT_1() { return &___DEFAULT_HEAD_PIVOT_1; }
	inline void set_DEFAULT_HEAD_PIVOT_1(Vector3_t3722313464  value)
	{
		___DEFAULT_HEAD_PIVOT_1 = value;
	}

	inline static int32_t get_offset_of_DEFAULT_HANDHELD_PIVOT_2() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542_StaticFields, ___DEFAULT_HANDHELD_PIVOT_2)); }
	inline Vector3_t3722313464  get_DEFAULT_HANDHELD_PIVOT_2() const { return ___DEFAULT_HANDHELD_PIVOT_2; }
	inline Vector3_t3722313464 * get_address_of_DEFAULT_HANDHELD_PIVOT_2() { return &___DEFAULT_HANDHELD_PIVOT_2; }
	inline void set_DEFAULT_HANDHELD_PIVOT_2(Vector3_t3722313464  value)
	{
		___DEFAULT_HANDHELD_PIVOT_2 = value;
	}

	inline static int32_t get_offset_of_mInstance_16() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542_StaticFields, ___mInstance_16)); }
	inline DeviceTrackerARController_t1095592542 * get_mInstance_16() const { return ___mInstance_16; }
	inline DeviceTrackerARController_t1095592542 ** get_address_of_mInstance_16() { return &___mInstance_16; }
	inline void set_mInstance_16(DeviceTrackerARController_t1095592542 * value)
	{
		___mInstance_16 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_16), value);
	}

	inline static int32_t get_offset_of_mPadlock_17() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542_StaticFields, ___mPadlock_17)); }
	inline RuntimeObject * get_mPadlock_17() const { return ___mPadlock_17; }
	inline RuntimeObject ** get_address_of_mPadlock_17() { return &___mPadlock_17; }
	inline void set_mPadlock_17(RuntimeObject * value)
	{
		___mPadlock_17 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICETRACKERARCONTROLLER_T1095592542_H
#ifndef DIGITALEYEWEARARCONTROLLER_T1054226036_H
#define DIGITALEYEWEARARCONTROLLER_T1054226036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController
struct  DigitalEyewearARController_t1054226036  : public ARController_t116632334
{
public:
	// System.Single Vuforia.DigitalEyewearARController::mCameraOffset
	float ___mCameraOffset_5;
	// System.Int32 Vuforia.DigitalEyewearARController::mDistortionRenderingLayer
	int32_t ___mDistortionRenderingLayer_6;
	// Vuforia.DigitalEyewearARController/EyewearType Vuforia.DigitalEyewearARController::mEyewearType
	int32_t ___mEyewearType_7;
	// Vuforia.DigitalEyewearARController/StereoFramework Vuforia.DigitalEyewearARController::mStereoFramework
	int32_t ___mStereoFramework_8;
	// Vuforia.DigitalEyewearARController/SeeThroughConfiguration Vuforia.DigitalEyewearARController::mSeeThroughConfiguration
	int32_t ___mSeeThroughConfiguration_9;
	// System.String Vuforia.DigitalEyewearARController::mViewerName
	String_t* ___mViewerName_10;
	// System.String Vuforia.DigitalEyewearARController::mViewerManufacturer
	String_t* ___mViewerManufacturer_11;
	// System.Boolean Vuforia.DigitalEyewearARController::mUseCustomViewer
	bool ___mUseCustomViewer_12;
	// Vuforia.DigitalEyewearARController/SerializableViewerParameters Vuforia.DigitalEyewearARController::mCustomViewer
	SerializableViewerParameters_t2043332680 * ___mCustomViewer_13;
	// UnityEngine.Transform Vuforia.DigitalEyewearARController::mCentralAnchorPoint
	Transform_t3600365921 * ___mCentralAnchorPoint_14;
	// UnityEngine.Camera Vuforia.DigitalEyewearARController::mPrimaryCamera
	Camera_t4157153871 * ___mPrimaryCamera_15;
	// Vuforia.VuforiaARController Vuforia.DigitalEyewearARController::mVuforiaBehaviour
	VuforiaARController_t1876945237 * ___mVuforiaBehaviour_16;
	// Vuforia.VRDeviceController Vuforia.DigitalEyewearARController::mVRDeviceController
	VRDeviceController_t3863472269 * ___mVRDeviceController_17;
	// UnityEngine.Vector3 Vuforia.DigitalEyewearARController::mCamPositionAtSceneStart
	Vector3_t3722313464  ___mCamPositionAtSceneStart_18;
	// UnityEngine.Quaternion Vuforia.DigitalEyewearARController::mCamRotationAtSceneStart
	Quaternion_t2301928331  ___mCamRotationAtSceneStart_19;

public:
	inline static int32_t get_offset_of_mCameraOffset_5() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mCameraOffset_5)); }
	inline float get_mCameraOffset_5() const { return ___mCameraOffset_5; }
	inline float* get_address_of_mCameraOffset_5() { return &___mCameraOffset_5; }
	inline void set_mCameraOffset_5(float value)
	{
		___mCameraOffset_5 = value;
	}

	inline static int32_t get_offset_of_mDistortionRenderingLayer_6() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mDistortionRenderingLayer_6)); }
	inline int32_t get_mDistortionRenderingLayer_6() const { return ___mDistortionRenderingLayer_6; }
	inline int32_t* get_address_of_mDistortionRenderingLayer_6() { return &___mDistortionRenderingLayer_6; }
	inline void set_mDistortionRenderingLayer_6(int32_t value)
	{
		___mDistortionRenderingLayer_6 = value;
	}

	inline static int32_t get_offset_of_mEyewearType_7() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mEyewearType_7)); }
	inline int32_t get_mEyewearType_7() const { return ___mEyewearType_7; }
	inline int32_t* get_address_of_mEyewearType_7() { return &___mEyewearType_7; }
	inline void set_mEyewearType_7(int32_t value)
	{
		___mEyewearType_7 = value;
	}

	inline static int32_t get_offset_of_mStereoFramework_8() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mStereoFramework_8)); }
	inline int32_t get_mStereoFramework_8() const { return ___mStereoFramework_8; }
	inline int32_t* get_address_of_mStereoFramework_8() { return &___mStereoFramework_8; }
	inline void set_mStereoFramework_8(int32_t value)
	{
		___mStereoFramework_8 = value;
	}

	inline static int32_t get_offset_of_mSeeThroughConfiguration_9() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mSeeThroughConfiguration_9)); }
	inline int32_t get_mSeeThroughConfiguration_9() const { return ___mSeeThroughConfiguration_9; }
	inline int32_t* get_address_of_mSeeThroughConfiguration_9() { return &___mSeeThroughConfiguration_9; }
	inline void set_mSeeThroughConfiguration_9(int32_t value)
	{
		___mSeeThroughConfiguration_9 = value;
	}

	inline static int32_t get_offset_of_mViewerName_10() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mViewerName_10)); }
	inline String_t* get_mViewerName_10() const { return ___mViewerName_10; }
	inline String_t** get_address_of_mViewerName_10() { return &___mViewerName_10; }
	inline void set_mViewerName_10(String_t* value)
	{
		___mViewerName_10 = value;
		Il2CppCodeGenWriteBarrier((&___mViewerName_10), value);
	}

	inline static int32_t get_offset_of_mViewerManufacturer_11() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mViewerManufacturer_11)); }
	inline String_t* get_mViewerManufacturer_11() const { return ___mViewerManufacturer_11; }
	inline String_t** get_address_of_mViewerManufacturer_11() { return &___mViewerManufacturer_11; }
	inline void set_mViewerManufacturer_11(String_t* value)
	{
		___mViewerManufacturer_11 = value;
		Il2CppCodeGenWriteBarrier((&___mViewerManufacturer_11), value);
	}

	inline static int32_t get_offset_of_mUseCustomViewer_12() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mUseCustomViewer_12)); }
	inline bool get_mUseCustomViewer_12() const { return ___mUseCustomViewer_12; }
	inline bool* get_address_of_mUseCustomViewer_12() { return &___mUseCustomViewer_12; }
	inline void set_mUseCustomViewer_12(bool value)
	{
		___mUseCustomViewer_12 = value;
	}

	inline static int32_t get_offset_of_mCustomViewer_13() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mCustomViewer_13)); }
	inline SerializableViewerParameters_t2043332680 * get_mCustomViewer_13() const { return ___mCustomViewer_13; }
	inline SerializableViewerParameters_t2043332680 ** get_address_of_mCustomViewer_13() { return &___mCustomViewer_13; }
	inline void set_mCustomViewer_13(SerializableViewerParameters_t2043332680 * value)
	{
		___mCustomViewer_13 = value;
		Il2CppCodeGenWriteBarrier((&___mCustomViewer_13), value);
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_14() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mCentralAnchorPoint_14)); }
	inline Transform_t3600365921 * get_mCentralAnchorPoint_14() const { return ___mCentralAnchorPoint_14; }
	inline Transform_t3600365921 ** get_address_of_mCentralAnchorPoint_14() { return &___mCentralAnchorPoint_14; }
	inline void set_mCentralAnchorPoint_14(Transform_t3600365921 * value)
	{
		___mCentralAnchorPoint_14 = value;
		Il2CppCodeGenWriteBarrier((&___mCentralAnchorPoint_14), value);
	}

	inline static int32_t get_offset_of_mPrimaryCamera_15() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mPrimaryCamera_15)); }
	inline Camera_t4157153871 * get_mPrimaryCamera_15() const { return ___mPrimaryCamera_15; }
	inline Camera_t4157153871 ** get_address_of_mPrimaryCamera_15() { return &___mPrimaryCamera_15; }
	inline void set_mPrimaryCamera_15(Camera_t4157153871 * value)
	{
		___mPrimaryCamera_15 = value;
		Il2CppCodeGenWriteBarrier((&___mPrimaryCamera_15), value);
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_16() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mVuforiaBehaviour_16)); }
	inline VuforiaARController_t1876945237 * get_mVuforiaBehaviour_16() const { return ___mVuforiaBehaviour_16; }
	inline VuforiaARController_t1876945237 ** get_address_of_mVuforiaBehaviour_16() { return &___mVuforiaBehaviour_16; }
	inline void set_mVuforiaBehaviour_16(VuforiaARController_t1876945237 * value)
	{
		___mVuforiaBehaviour_16 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_16), value);
	}

	inline static int32_t get_offset_of_mVRDeviceController_17() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mVRDeviceController_17)); }
	inline VRDeviceController_t3863472269 * get_mVRDeviceController_17() const { return ___mVRDeviceController_17; }
	inline VRDeviceController_t3863472269 ** get_address_of_mVRDeviceController_17() { return &___mVRDeviceController_17; }
	inline void set_mVRDeviceController_17(VRDeviceController_t3863472269 * value)
	{
		___mVRDeviceController_17 = value;
		Il2CppCodeGenWriteBarrier((&___mVRDeviceController_17), value);
	}

	inline static int32_t get_offset_of_mCamPositionAtSceneStart_18() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mCamPositionAtSceneStart_18)); }
	inline Vector3_t3722313464  get_mCamPositionAtSceneStart_18() const { return ___mCamPositionAtSceneStart_18; }
	inline Vector3_t3722313464 * get_address_of_mCamPositionAtSceneStart_18() { return &___mCamPositionAtSceneStart_18; }
	inline void set_mCamPositionAtSceneStart_18(Vector3_t3722313464  value)
	{
		___mCamPositionAtSceneStart_18 = value;
	}

	inline static int32_t get_offset_of_mCamRotationAtSceneStart_19() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mCamRotationAtSceneStart_19)); }
	inline Quaternion_t2301928331  get_mCamRotationAtSceneStart_19() const { return ___mCamRotationAtSceneStart_19; }
	inline Quaternion_t2301928331 * get_address_of_mCamRotationAtSceneStart_19() { return &___mCamRotationAtSceneStart_19; }
	inline void set_mCamRotationAtSceneStart_19(Quaternion_t2301928331  value)
	{
		___mCamRotationAtSceneStart_19 = value;
	}
};

struct DigitalEyewearARController_t1054226036_StaticFields
{
public:
	// Vuforia.DigitalEyewearARController Vuforia.DigitalEyewearARController::mInstance
	DigitalEyewearARController_t1054226036 * ___mInstance_20;
	// System.Object Vuforia.DigitalEyewearARController::mPadlock
	RuntimeObject * ___mPadlock_21;

public:
	inline static int32_t get_offset_of_mInstance_20() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036_StaticFields, ___mInstance_20)); }
	inline DigitalEyewearARController_t1054226036 * get_mInstance_20() const { return ___mInstance_20; }
	inline DigitalEyewearARController_t1054226036 ** get_address_of_mInstance_20() { return &___mInstance_20; }
	inline void set_mInstance_20(DigitalEyewearARController_t1054226036 * value)
	{
		___mInstance_20 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_20), value);
	}

	inline static int32_t get_offset_of_mPadlock_21() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036_StaticFields, ___mPadlock_21)); }
	inline RuntimeObject * get_mPadlock_21() const { return ___mPadlock_21; }
	inline RuntimeObject ** get_address_of_mPadlock_21() { return &___mPadlock_21; }
	inline void set_mPadlock_21(RuntimeObject * value)
	{
		___mPadlock_21 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIGITALEYEWEARARCONTROLLER_T1054226036_H
#ifndef IMAGE_T745056343_H
#define IMAGE_T745056343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Image
struct  Image_t745056343  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.Image::mWidth
	int32_t ___mWidth_0;
	// System.Int32 Vuforia.Image::mHeight
	int32_t ___mHeight_1;
	// System.Int32 Vuforia.Image::mStride
	int32_t ___mStride_2;
	// System.Int32 Vuforia.Image::mBufferWidth
	int32_t ___mBufferWidth_3;
	// System.Int32 Vuforia.Image::mBufferHeight
	int32_t ___mBufferHeight_4;
	// Vuforia.Image/PIXEL_FORMAT Vuforia.Image::mPixelFormat
	int32_t ___mPixelFormat_5;
	// System.Byte[] Vuforia.Image::mData
	ByteU5BU5D_t4116647657* ___mData_6;
	// System.IntPtr Vuforia.Image::mUnmanagedData
	intptr_t ___mUnmanagedData_7;
	// System.Boolean Vuforia.Image::mDataSet
	bool ___mDataSet_8;
	// UnityEngine.Color32[] Vuforia.Image::mPixel32
	Color32U5BU5D_t3850468773* ___mPixel32_9;

public:
	inline static int32_t get_offset_of_mWidth_0() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mWidth_0)); }
	inline int32_t get_mWidth_0() const { return ___mWidth_0; }
	inline int32_t* get_address_of_mWidth_0() { return &___mWidth_0; }
	inline void set_mWidth_0(int32_t value)
	{
		___mWidth_0 = value;
	}

	inline static int32_t get_offset_of_mHeight_1() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mHeight_1)); }
	inline int32_t get_mHeight_1() const { return ___mHeight_1; }
	inline int32_t* get_address_of_mHeight_1() { return &___mHeight_1; }
	inline void set_mHeight_1(int32_t value)
	{
		___mHeight_1 = value;
	}

	inline static int32_t get_offset_of_mStride_2() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mStride_2)); }
	inline int32_t get_mStride_2() const { return ___mStride_2; }
	inline int32_t* get_address_of_mStride_2() { return &___mStride_2; }
	inline void set_mStride_2(int32_t value)
	{
		___mStride_2 = value;
	}

	inline static int32_t get_offset_of_mBufferWidth_3() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mBufferWidth_3)); }
	inline int32_t get_mBufferWidth_3() const { return ___mBufferWidth_3; }
	inline int32_t* get_address_of_mBufferWidth_3() { return &___mBufferWidth_3; }
	inline void set_mBufferWidth_3(int32_t value)
	{
		___mBufferWidth_3 = value;
	}

	inline static int32_t get_offset_of_mBufferHeight_4() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mBufferHeight_4)); }
	inline int32_t get_mBufferHeight_4() const { return ___mBufferHeight_4; }
	inline int32_t* get_address_of_mBufferHeight_4() { return &___mBufferHeight_4; }
	inline void set_mBufferHeight_4(int32_t value)
	{
		___mBufferHeight_4 = value;
	}

	inline static int32_t get_offset_of_mPixelFormat_5() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mPixelFormat_5)); }
	inline int32_t get_mPixelFormat_5() const { return ___mPixelFormat_5; }
	inline int32_t* get_address_of_mPixelFormat_5() { return &___mPixelFormat_5; }
	inline void set_mPixelFormat_5(int32_t value)
	{
		___mPixelFormat_5 = value;
	}

	inline static int32_t get_offset_of_mData_6() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mData_6)); }
	inline ByteU5BU5D_t4116647657* get_mData_6() const { return ___mData_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_mData_6() { return &___mData_6; }
	inline void set_mData_6(ByteU5BU5D_t4116647657* value)
	{
		___mData_6 = value;
		Il2CppCodeGenWriteBarrier((&___mData_6), value);
	}

	inline static int32_t get_offset_of_mUnmanagedData_7() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mUnmanagedData_7)); }
	inline intptr_t get_mUnmanagedData_7() const { return ___mUnmanagedData_7; }
	inline intptr_t* get_address_of_mUnmanagedData_7() { return &___mUnmanagedData_7; }
	inline void set_mUnmanagedData_7(intptr_t value)
	{
		___mUnmanagedData_7 = value;
	}

	inline static int32_t get_offset_of_mDataSet_8() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mDataSet_8)); }
	inline bool get_mDataSet_8() const { return ___mDataSet_8; }
	inline bool* get_address_of_mDataSet_8() { return &___mDataSet_8; }
	inline void set_mDataSet_8(bool value)
	{
		___mDataSet_8 = value;
	}

	inline static int32_t get_offset_of_mPixel32_9() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mPixel32_9)); }
	inline Color32U5BU5D_t3850468773* get_mPixel32_9() const { return ___mPixel32_9; }
	inline Color32U5BU5D_t3850468773** get_address_of_mPixel32_9() { return &___mPixel32_9; }
	inline void set_mPixel32_9(Color32U5BU5D_t3850468773* value)
	{
		___mPixel32_9 = value;
		Il2CppCodeGenWriteBarrier((&___mPixel32_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T745056343_H
#ifndef STEREOPROJMATRIXSTORE_T888524276_H
#define STEREOPROJMATRIXSTORE_T888524276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.StereoProjMatrixStore
struct  StereoProjMatrixStore_t888524276  : public RuntimeObject
{
public:
	// UnityEngine.Camera Vuforia.StereoProjMatrixStore::mCamera
	Camera_t4157153871 * ___mCamera_0;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4> Vuforia.StereoProjMatrixStore::mProjectionMatrices
	Dictionary_2_t738209647 * ___mProjectionMatrices_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,System.Single> Vuforia.StereoProjMatrixStore::mAppliedVerticalFoVs
	Dictionary_2_t317574578 * ___mAppliedVerticalFoVs_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,System.Single> Vuforia.StereoProjMatrixStore::mCurrentVerticalFoVs
	Dictionary_2_t317574578 * ___mCurrentVerticalFoVs_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,System.Single> Vuforia.StereoProjMatrixStore::mAppliedHorizontalFoVs
	Dictionary_2_t317574578 * ___mAppliedHorizontalFoVs_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,System.Single> Vuforia.StereoProjMatrixStore::mCurrentHorizontalFoVs
	Dictionary_2_t317574578 * ___mCurrentHorizontalFoVs_5;
	// UnityEngine.Matrix4x4 Vuforia.StereoProjMatrixStore::mSharedCullingProjectionMatrix
	Matrix4x4_t1817901843  ___mSharedCullingProjectionMatrix_6;
	// UnityEngine.Matrix4x4 Vuforia.StereoProjMatrixStore::mSharedCullingViewMatrix
	Matrix4x4_t1817901843  ___mSharedCullingViewMatrix_7;
	// UnityEngine.Matrix4x4 Vuforia.StereoProjMatrixStore::mLeftEyeOffsetMatrix
	Matrix4x4_t1817901843  ___mLeftEyeOffsetMatrix_8;
	// UnityEngine.Matrix4x4 Vuforia.StereoProjMatrixStore::mRightEyeOffsetMatrix
	Matrix4x4_t1817901843  ___mRightEyeOffsetMatrix_9;
	// Vuforia.StereoProjMatrixStore/Mode Vuforia.StereoProjMatrixStore::mMode
	int32_t ___mMode_10;

public:
	inline static int32_t get_offset_of_mCamera_0() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t888524276, ___mCamera_0)); }
	inline Camera_t4157153871 * get_mCamera_0() const { return ___mCamera_0; }
	inline Camera_t4157153871 ** get_address_of_mCamera_0() { return &___mCamera_0; }
	inline void set_mCamera_0(Camera_t4157153871 * value)
	{
		___mCamera_0 = value;
		Il2CppCodeGenWriteBarrier((&___mCamera_0), value);
	}

	inline static int32_t get_offset_of_mProjectionMatrices_1() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t888524276, ___mProjectionMatrices_1)); }
	inline Dictionary_2_t738209647 * get_mProjectionMatrices_1() const { return ___mProjectionMatrices_1; }
	inline Dictionary_2_t738209647 ** get_address_of_mProjectionMatrices_1() { return &___mProjectionMatrices_1; }
	inline void set_mProjectionMatrices_1(Dictionary_2_t738209647 * value)
	{
		___mProjectionMatrices_1 = value;
		Il2CppCodeGenWriteBarrier((&___mProjectionMatrices_1), value);
	}

	inline static int32_t get_offset_of_mAppliedVerticalFoVs_2() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t888524276, ___mAppliedVerticalFoVs_2)); }
	inline Dictionary_2_t317574578 * get_mAppliedVerticalFoVs_2() const { return ___mAppliedVerticalFoVs_2; }
	inline Dictionary_2_t317574578 ** get_address_of_mAppliedVerticalFoVs_2() { return &___mAppliedVerticalFoVs_2; }
	inline void set_mAppliedVerticalFoVs_2(Dictionary_2_t317574578 * value)
	{
		___mAppliedVerticalFoVs_2 = value;
		Il2CppCodeGenWriteBarrier((&___mAppliedVerticalFoVs_2), value);
	}

	inline static int32_t get_offset_of_mCurrentVerticalFoVs_3() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t888524276, ___mCurrentVerticalFoVs_3)); }
	inline Dictionary_2_t317574578 * get_mCurrentVerticalFoVs_3() const { return ___mCurrentVerticalFoVs_3; }
	inline Dictionary_2_t317574578 ** get_address_of_mCurrentVerticalFoVs_3() { return &___mCurrentVerticalFoVs_3; }
	inline void set_mCurrentVerticalFoVs_3(Dictionary_2_t317574578 * value)
	{
		___mCurrentVerticalFoVs_3 = value;
		Il2CppCodeGenWriteBarrier((&___mCurrentVerticalFoVs_3), value);
	}

	inline static int32_t get_offset_of_mAppliedHorizontalFoVs_4() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t888524276, ___mAppliedHorizontalFoVs_4)); }
	inline Dictionary_2_t317574578 * get_mAppliedHorizontalFoVs_4() const { return ___mAppliedHorizontalFoVs_4; }
	inline Dictionary_2_t317574578 ** get_address_of_mAppliedHorizontalFoVs_4() { return &___mAppliedHorizontalFoVs_4; }
	inline void set_mAppliedHorizontalFoVs_4(Dictionary_2_t317574578 * value)
	{
		___mAppliedHorizontalFoVs_4 = value;
		Il2CppCodeGenWriteBarrier((&___mAppliedHorizontalFoVs_4), value);
	}

	inline static int32_t get_offset_of_mCurrentHorizontalFoVs_5() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t888524276, ___mCurrentHorizontalFoVs_5)); }
	inline Dictionary_2_t317574578 * get_mCurrentHorizontalFoVs_5() const { return ___mCurrentHorizontalFoVs_5; }
	inline Dictionary_2_t317574578 ** get_address_of_mCurrentHorizontalFoVs_5() { return &___mCurrentHorizontalFoVs_5; }
	inline void set_mCurrentHorizontalFoVs_5(Dictionary_2_t317574578 * value)
	{
		___mCurrentHorizontalFoVs_5 = value;
		Il2CppCodeGenWriteBarrier((&___mCurrentHorizontalFoVs_5), value);
	}

	inline static int32_t get_offset_of_mSharedCullingProjectionMatrix_6() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t888524276, ___mSharedCullingProjectionMatrix_6)); }
	inline Matrix4x4_t1817901843  get_mSharedCullingProjectionMatrix_6() const { return ___mSharedCullingProjectionMatrix_6; }
	inline Matrix4x4_t1817901843 * get_address_of_mSharedCullingProjectionMatrix_6() { return &___mSharedCullingProjectionMatrix_6; }
	inline void set_mSharedCullingProjectionMatrix_6(Matrix4x4_t1817901843  value)
	{
		___mSharedCullingProjectionMatrix_6 = value;
	}

	inline static int32_t get_offset_of_mSharedCullingViewMatrix_7() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t888524276, ___mSharedCullingViewMatrix_7)); }
	inline Matrix4x4_t1817901843  get_mSharedCullingViewMatrix_7() const { return ___mSharedCullingViewMatrix_7; }
	inline Matrix4x4_t1817901843 * get_address_of_mSharedCullingViewMatrix_7() { return &___mSharedCullingViewMatrix_7; }
	inline void set_mSharedCullingViewMatrix_7(Matrix4x4_t1817901843  value)
	{
		___mSharedCullingViewMatrix_7 = value;
	}

	inline static int32_t get_offset_of_mLeftEyeOffsetMatrix_8() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t888524276, ___mLeftEyeOffsetMatrix_8)); }
	inline Matrix4x4_t1817901843  get_mLeftEyeOffsetMatrix_8() const { return ___mLeftEyeOffsetMatrix_8; }
	inline Matrix4x4_t1817901843 * get_address_of_mLeftEyeOffsetMatrix_8() { return &___mLeftEyeOffsetMatrix_8; }
	inline void set_mLeftEyeOffsetMatrix_8(Matrix4x4_t1817901843  value)
	{
		___mLeftEyeOffsetMatrix_8 = value;
	}

	inline static int32_t get_offset_of_mRightEyeOffsetMatrix_9() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t888524276, ___mRightEyeOffsetMatrix_9)); }
	inline Matrix4x4_t1817901843  get_mRightEyeOffsetMatrix_9() const { return ___mRightEyeOffsetMatrix_9; }
	inline Matrix4x4_t1817901843 * get_address_of_mRightEyeOffsetMatrix_9() { return &___mRightEyeOffsetMatrix_9; }
	inline void set_mRightEyeOffsetMatrix_9(Matrix4x4_t1817901843  value)
	{
		___mRightEyeOffsetMatrix_9 = value;
	}

	inline static int32_t get_offset_of_mMode_10() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t888524276, ___mMode_10)); }
	inline int32_t get_mMode_10() const { return ___mMode_10; }
	inline int32_t* get_address_of_mMode_10() { return &___mMode_10; }
	inline void set_mMode_10(int32_t value)
	{
		___mMode_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEREOPROJMATRIXSTORE_T888524276_H
#ifndef DEVICETRACKERCONFIGURATION_T721467671_H
#define DEVICETRACKERCONFIGURATION_T721467671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct  DeviceTrackerConfiguration_t721467671  : public TrackerConfiguration_t3072429111
{
public:
	// Vuforia.DeviceTracker/TRACKING_MODE Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::trackingMode
	int32_t ___trackingMode_2;
	// System.Boolean Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::posePrediction
	bool ___posePrediction_3;
	// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::modelCorrectionMode
	int32_t ___modelCorrectionMode_4;
	// System.Boolean Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::modelTransformEnabled
	bool ___modelTransformEnabled_5;
	// UnityEngine.Vector3 Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::modelTransform
	Vector3_t3722313464  ___modelTransform_6;
	// Vuforia.FusionProviderType Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::fusionMode
	int32_t ___fusionMode_7;

public:
	inline static int32_t get_offset_of_trackingMode_2() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_t721467671, ___trackingMode_2)); }
	inline int32_t get_trackingMode_2() const { return ___trackingMode_2; }
	inline int32_t* get_address_of_trackingMode_2() { return &___trackingMode_2; }
	inline void set_trackingMode_2(int32_t value)
	{
		___trackingMode_2 = value;
	}

	inline static int32_t get_offset_of_posePrediction_3() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_t721467671, ___posePrediction_3)); }
	inline bool get_posePrediction_3() const { return ___posePrediction_3; }
	inline bool* get_address_of_posePrediction_3() { return &___posePrediction_3; }
	inline void set_posePrediction_3(bool value)
	{
		___posePrediction_3 = value;
	}

	inline static int32_t get_offset_of_modelCorrectionMode_4() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_t721467671, ___modelCorrectionMode_4)); }
	inline int32_t get_modelCorrectionMode_4() const { return ___modelCorrectionMode_4; }
	inline int32_t* get_address_of_modelCorrectionMode_4() { return &___modelCorrectionMode_4; }
	inline void set_modelCorrectionMode_4(int32_t value)
	{
		___modelCorrectionMode_4 = value;
	}

	inline static int32_t get_offset_of_modelTransformEnabled_5() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_t721467671, ___modelTransformEnabled_5)); }
	inline bool get_modelTransformEnabled_5() const { return ___modelTransformEnabled_5; }
	inline bool* get_address_of_modelTransformEnabled_5() { return &___modelTransformEnabled_5; }
	inline void set_modelTransformEnabled_5(bool value)
	{
		___modelTransformEnabled_5 = value;
	}

	inline static int32_t get_offset_of_modelTransform_6() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_t721467671, ___modelTransform_6)); }
	inline Vector3_t3722313464  get_modelTransform_6() const { return ___modelTransform_6; }
	inline Vector3_t3722313464 * get_address_of_modelTransform_6() { return &___modelTransform_6; }
	inline void set_modelTransform_6(Vector3_t3722313464  value)
	{
		___modelTransform_6 = value;
	}

	inline static int32_t get_offset_of_fusionMode_7() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_t721467671, ___fusionMode_7)); }
	inline int32_t get_fusionMode_7() const { return ___fusionMode_7; }
	inline int32_t* get_address_of_fusionMode_7() { return &___fusionMode_7; }
	inline void set_fusionMode_7(int32_t value)
	{
		___fusionMode_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICETRACKERCONFIGURATION_T721467671_H
#ifndef VUFORIAMANAGER_T1653423889_H
#define VUFORIAMANAGER_T1653423889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManager
struct  VuforiaManager_t1653423889  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.VuforiaManager::<VideoBackgroundTextureSet>k__BackingField
	bool ___U3CVideoBackgroundTextureSetU3Ek__BackingField_0;
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaManager::mWorldCenterMode
	int32_t ___mWorldCenterMode_2;
	// Vuforia.WorldCenterTrackableBehaviour Vuforia.VuforiaManager::mWorldCenter
	RuntimeObject* ___mWorldCenter_3;
	// Vuforia.VuMarkBehaviour Vuforia.VuforiaManager::mVuMarkWorldCenter
	VuMarkBehaviour_t1178230459 * ___mVuMarkWorldCenter_4;
	// UnityEngine.Transform Vuforia.VuforiaManager::mARCameraTransform
	Transform_t3600365921 * ___mARCameraTransform_5;
	// UnityEngine.Transform Vuforia.VuforiaManager::mCentralAnchorPoint
	Transform_t3600365921 * ___mCentralAnchorPoint_6;
	// Vuforia.TrackerData/TrackableResultData[] Vuforia.VuforiaManager::mTrackableResultDataArray
	TrackableResultDataU5BU5D_t4273811049* ___mTrackableResultDataArray_7;
	// Vuforia.TrackerData/VuMarkTargetData[] Vuforia.VuforiaManager::mVuMarkDataArray
	VuMarkTargetDataU5BU5D_t4015091482* ___mVuMarkDataArray_8;
	// Vuforia.TrackerData/VuMarkTargetResultData[] Vuforia.VuforiaManager::mVuMarkResultDataArray
	VuMarkTargetResultDataU5BU5D_t2157423781* ___mVuMarkResultDataArray_9;
	// System.Collections.Generic.LinkedList`1<Vuforia.VuforiaManager/TrackableIdPair> Vuforia.VuforiaManager::mWCTrackableFoundQueue
	LinkedList_1_t3066996466 * ___mWCTrackableFoundQueue_10;
	// System.IntPtr Vuforia.VuforiaManager::mImageHeaderData
	intptr_t ___mImageHeaderData_11;
	// System.Int32 Vuforia.VuforiaManager::mNumImageHeaders
	int32_t ___mNumImageHeaders_12;
	// System.Int32 Vuforia.VuforiaManager::mInjectedFrameIdx
	int32_t ___mInjectedFrameIdx_13;
	// System.IntPtr Vuforia.VuforiaManager::mLastProcessedFrameStatePtr
	intptr_t ___mLastProcessedFrameStatePtr_14;
	// System.Boolean Vuforia.VuforiaManager::mInitialized
	bool ___mInitialized_15;
	// System.Boolean Vuforia.VuforiaManager::mPaused
	bool ___mPaused_16;
	// Vuforia.TrackerData/FrameState Vuforia.VuforiaManager::mFrameState
	FrameState_t2717258284  ___mFrameState_17;
	// Vuforia.VuforiaManager/AutoRotationState Vuforia.VuforiaManager::mAutoRotationState
	AutoRotationState_t2150317116  ___mAutoRotationState_18;
	// System.Boolean Vuforia.VuforiaManager::mVideoBackgroundNeedsRedrawing
	bool ___mVideoBackgroundNeedsRedrawing_19;
	// System.Int32 Vuforia.VuforiaManager::mDiscardStatesForRendering
	int32_t ___mDiscardStatesForRendering_20;
	// System.Int32 Vuforia.VuforiaManager::mLastFrameIdx
	int32_t ___mLastFrameIdx_21;
	// System.Boolean Vuforia.VuforiaManager::mIsSeeThroughDevice
	bool ___mIsSeeThroughDevice_22;
	// Vuforia.LateLatchingManager Vuforia.VuforiaManager::mLateLatchingManager
	LateLatchingManager_t3198550161 * ___mLateLatchingManager_23;
	// Vuforia.CameraCalibrationComparer Vuforia.VuforiaManager::mCameraCalibrationComparer
	CameraCalibrationComparer_t2990055837 * ___mCameraCalibrationComparer_24;
	// UnityEngine.Vector3 Vuforia.VuforiaManager::mPosePositionalOffset
	Vector3_t3722313464  ___mPosePositionalOffset_25;
	// UnityEngine.Quaternion Vuforia.VuforiaManager::mPoseRotationalOffset
	Quaternion_t2301928331  ___mPoseRotationalOffset_26;

public:
	inline static int32_t get_offset_of_U3CVideoBackgroundTextureSetU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___U3CVideoBackgroundTextureSetU3Ek__BackingField_0)); }
	inline bool get_U3CVideoBackgroundTextureSetU3Ek__BackingField_0() const { return ___U3CVideoBackgroundTextureSetU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CVideoBackgroundTextureSetU3Ek__BackingField_0() { return &___U3CVideoBackgroundTextureSetU3Ek__BackingField_0; }
	inline void set_U3CVideoBackgroundTextureSetU3Ek__BackingField_0(bool value)
	{
		___U3CVideoBackgroundTextureSetU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_mWorldCenterMode_2() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mWorldCenterMode_2)); }
	inline int32_t get_mWorldCenterMode_2() const { return ___mWorldCenterMode_2; }
	inline int32_t* get_address_of_mWorldCenterMode_2() { return &___mWorldCenterMode_2; }
	inline void set_mWorldCenterMode_2(int32_t value)
	{
		___mWorldCenterMode_2 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_3() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mWorldCenter_3)); }
	inline RuntimeObject* get_mWorldCenter_3() const { return ___mWorldCenter_3; }
	inline RuntimeObject** get_address_of_mWorldCenter_3() { return &___mWorldCenter_3; }
	inline void set_mWorldCenter_3(RuntimeObject* value)
	{
		___mWorldCenter_3 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldCenter_3), value);
	}

	inline static int32_t get_offset_of_mVuMarkWorldCenter_4() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mVuMarkWorldCenter_4)); }
	inline VuMarkBehaviour_t1178230459 * get_mVuMarkWorldCenter_4() const { return ___mVuMarkWorldCenter_4; }
	inline VuMarkBehaviour_t1178230459 ** get_address_of_mVuMarkWorldCenter_4() { return &___mVuMarkWorldCenter_4; }
	inline void set_mVuMarkWorldCenter_4(VuMarkBehaviour_t1178230459 * value)
	{
		___mVuMarkWorldCenter_4 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkWorldCenter_4), value);
	}

	inline static int32_t get_offset_of_mARCameraTransform_5() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mARCameraTransform_5)); }
	inline Transform_t3600365921 * get_mARCameraTransform_5() const { return ___mARCameraTransform_5; }
	inline Transform_t3600365921 ** get_address_of_mARCameraTransform_5() { return &___mARCameraTransform_5; }
	inline void set_mARCameraTransform_5(Transform_t3600365921 * value)
	{
		___mARCameraTransform_5 = value;
		Il2CppCodeGenWriteBarrier((&___mARCameraTransform_5), value);
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_6() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mCentralAnchorPoint_6)); }
	inline Transform_t3600365921 * get_mCentralAnchorPoint_6() const { return ___mCentralAnchorPoint_6; }
	inline Transform_t3600365921 ** get_address_of_mCentralAnchorPoint_6() { return &___mCentralAnchorPoint_6; }
	inline void set_mCentralAnchorPoint_6(Transform_t3600365921 * value)
	{
		___mCentralAnchorPoint_6 = value;
		Il2CppCodeGenWriteBarrier((&___mCentralAnchorPoint_6), value);
	}

	inline static int32_t get_offset_of_mTrackableResultDataArray_7() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mTrackableResultDataArray_7)); }
	inline TrackableResultDataU5BU5D_t4273811049* get_mTrackableResultDataArray_7() const { return ___mTrackableResultDataArray_7; }
	inline TrackableResultDataU5BU5D_t4273811049** get_address_of_mTrackableResultDataArray_7() { return &___mTrackableResultDataArray_7; }
	inline void set_mTrackableResultDataArray_7(TrackableResultDataU5BU5D_t4273811049* value)
	{
		___mTrackableResultDataArray_7 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableResultDataArray_7), value);
	}

	inline static int32_t get_offset_of_mVuMarkDataArray_8() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mVuMarkDataArray_8)); }
	inline VuMarkTargetDataU5BU5D_t4015091482* get_mVuMarkDataArray_8() const { return ___mVuMarkDataArray_8; }
	inline VuMarkTargetDataU5BU5D_t4015091482** get_address_of_mVuMarkDataArray_8() { return &___mVuMarkDataArray_8; }
	inline void set_mVuMarkDataArray_8(VuMarkTargetDataU5BU5D_t4015091482* value)
	{
		___mVuMarkDataArray_8 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkDataArray_8), value);
	}

	inline static int32_t get_offset_of_mVuMarkResultDataArray_9() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mVuMarkResultDataArray_9)); }
	inline VuMarkTargetResultDataU5BU5D_t2157423781* get_mVuMarkResultDataArray_9() const { return ___mVuMarkResultDataArray_9; }
	inline VuMarkTargetResultDataU5BU5D_t2157423781** get_address_of_mVuMarkResultDataArray_9() { return &___mVuMarkResultDataArray_9; }
	inline void set_mVuMarkResultDataArray_9(VuMarkTargetResultDataU5BU5D_t2157423781* value)
	{
		___mVuMarkResultDataArray_9 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkResultDataArray_9), value);
	}

	inline static int32_t get_offset_of_mWCTrackableFoundQueue_10() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mWCTrackableFoundQueue_10)); }
	inline LinkedList_1_t3066996466 * get_mWCTrackableFoundQueue_10() const { return ___mWCTrackableFoundQueue_10; }
	inline LinkedList_1_t3066996466 ** get_address_of_mWCTrackableFoundQueue_10() { return &___mWCTrackableFoundQueue_10; }
	inline void set_mWCTrackableFoundQueue_10(LinkedList_1_t3066996466 * value)
	{
		___mWCTrackableFoundQueue_10 = value;
		Il2CppCodeGenWriteBarrier((&___mWCTrackableFoundQueue_10), value);
	}

	inline static int32_t get_offset_of_mImageHeaderData_11() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mImageHeaderData_11)); }
	inline intptr_t get_mImageHeaderData_11() const { return ___mImageHeaderData_11; }
	inline intptr_t* get_address_of_mImageHeaderData_11() { return &___mImageHeaderData_11; }
	inline void set_mImageHeaderData_11(intptr_t value)
	{
		___mImageHeaderData_11 = value;
	}

	inline static int32_t get_offset_of_mNumImageHeaders_12() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mNumImageHeaders_12)); }
	inline int32_t get_mNumImageHeaders_12() const { return ___mNumImageHeaders_12; }
	inline int32_t* get_address_of_mNumImageHeaders_12() { return &___mNumImageHeaders_12; }
	inline void set_mNumImageHeaders_12(int32_t value)
	{
		___mNumImageHeaders_12 = value;
	}

	inline static int32_t get_offset_of_mInjectedFrameIdx_13() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mInjectedFrameIdx_13)); }
	inline int32_t get_mInjectedFrameIdx_13() const { return ___mInjectedFrameIdx_13; }
	inline int32_t* get_address_of_mInjectedFrameIdx_13() { return &___mInjectedFrameIdx_13; }
	inline void set_mInjectedFrameIdx_13(int32_t value)
	{
		___mInjectedFrameIdx_13 = value;
	}

	inline static int32_t get_offset_of_mLastProcessedFrameStatePtr_14() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mLastProcessedFrameStatePtr_14)); }
	inline intptr_t get_mLastProcessedFrameStatePtr_14() const { return ___mLastProcessedFrameStatePtr_14; }
	inline intptr_t* get_address_of_mLastProcessedFrameStatePtr_14() { return &___mLastProcessedFrameStatePtr_14; }
	inline void set_mLastProcessedFrameStatePtr_14(intptr_t value)
	{
		___mLastProcessedFrameStatePtr_14 = value;
	}

	inline static int32_t get_offset_of_mInitialized_15() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mInitialized_15)); }
	inline bool get_mInitialized_15() const { return ___mInitialized_15; }
	inline bool* get_address_of_mInitialized_15() { return &___mInitialized_15; }
	inline void set_mInitialized_15(bool value)
	{
		___mInitialized_15 = value;
	}

	inline static int32_t get_offset_of_mPaused_16() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mPaused_16)); }
	inline bool get_mPaused_16() const { return ___mPaused_16; }
	inline bool* get_address_of_mPaused_16() { return &___mPaused_16; }
	inline void set_mPaused_16(bool value)
	{
		___mPaused_16 = value;
	}

	inline static int32_t get_offset_of_mFrameState_17() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mFrameState_17)); }
	inline FrameState_t2717258284  get_mFrameState_17() const { return ___mFrameState_17; }
	inline FrameState_t2717258284 * get_address_of_mFrameState_17() { return &___mFrameState_17; }
	inline void set_mFrameState_17(FrameState_t2717258284  value)
	{
		___mFrameState_17 = value;
	}

	inline static int32_t get_offset_of_mAutoRotationState_18() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mAutoRotationState_18)); }
	inline AutoRotationState_t2150317116  get_mAutoRotationState_18() const { return ___mAutoRotationState_18; }
	inline AutoRotationState_t2150317116 * get_address_of_mAutoRotationState_18() { return &___mAutoRotationState_18; }
	inline void set_mAutoRotationState_18(AutoRotationState_t2150317116  value)
	{
		___mAutoRotationState_18 = value;
	}

	inline static int32_t get_offset_of_mVideoBackgroundNeedsRedrawing_19() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mVideoBackgroundNeedsRedrawing_19)); }
	inline bool get_mVideoBackgroundNeedsRedrawing_19() const { return ___mVideoBackgroundNeedsRedrawing_19; }
	inline bool* get_address_of_mVideoBackgroundNeedsRedrawing_19() { return &___mVideoBackgroundNeedsRedrawing_19; }
	inline void set_mVideoBackgroundNeedsRedrawing_19(bool value)
	{
		___mVideoBackgroundNeedsRedrawing_19 = value;
	}

	inline static int32_t get_offset_of_mDiscardStatesForRendering_20() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mDiscardStatesForRendering_20)); }
	inline int32_t get_mDiscardStatesForRendering_20() const { return ___mDiscardStatesForRendering_20; }
	inline int32_t* get_address_of_mDiscardStatesForRendering_20() { return &___mDiscardStatesForRendering_20; }
	inline void set_mDiscardStatesForRendering_20(int32_t value)
	{
		___mDiscardStatesForRendering_20 = value;
	}

	inline static int32_t get_offset_of_mLastFrameIdx_21() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mLastFrameIdx_21)); }
	inline int32_t get_mLastFrameIdx_21() const { return ___mLastFrameIdx_21; }
	inline int32_t* get_address_of_mLastFrameIdx_21() { return &___mLastFrameIdx_21; }
	inline void set_mLastFrameIdx_21(int32_t value)
	{
		___mLastFrameIdx_21 = value;
	}

	inline static int32_t get_offset_of_mIsSeeThroughDevice_22() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mIsSeeThroughDevice_22)); }
	inline bool get_mIsSeeThroughDevice_22() const { return ___mIsSeeThroughDevice_22; }
	inline bool* get_address_of_mIsSeeThroughDevice_22() { return &___mIsSeeThroughDevice_22; }
	inline void set_mIsSeeThroughDevice_22(bool value)
	{
		___mIsSeeThroughDevice_22 = value;
	}

	inline static int32_t get_offset_of_mLateLatchingManager_23() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mLateLatchingManager_23)); }
	inline LateLatchingManager_t3198550161 * get_mLateLatchingManager_23() const { return ___mLateLatchingManager_23; }
	inline LateLatchingManager_t3198550161 ** get_address_of_mLateLatchingManager_23() { return &___mLateLatchingManager_23; }
	inline void set_mLateLatchingManager_23(LateLatchingManager_t3198550161 * value)
	{
		___mLateLatchingManager_23 = value;
		Il2CppCodeGenWriteBarrier((&___mLateLatchingManager_23), value);
	}

	inline static int32_t get_offset_of_mCameraCalibrationComparer_24() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mCameraCalibrationComparer_24)); }
	inline CameraCalibrationComparer_t2990055837 * get_mCameraCalibrationComparer_24() const { return ___mCameraCalibrationComparer_24; }
	inline CameraCalibrationComparer_t2990055837 ** get_address_of_mCameraCalibrationComparer_24() { return &___mCameraCalibrationComparer_24; }
	inline void set_mCameraCalibrationComparer_24(CameraCalibrationComparer_t2990055837 * value)
	{
		___mCameraCalibrationComparer_24 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraCalibrationComparer_24), value);
	}

	inline static int32_t get_offset_of_mPosePositionalOffset_25() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mPosePositionalOffset_25)); }
	inline Vector3_t3722313464  get_mPosePositionalOffset_25() const { return ___mPosePositionalOffset_25; }
	inline Vector3_t3722313464 * get_address_of_mPosePositionalOffset_25() { return &___mPosePositionalOffset_25; }
	inline void set_mPosePositionalOffset_25(Vector3_t3722313464  value)
	{
		___mPosePositionalOffset_25 = value;
	}

	inline static int32_t get_offset_of_mPoseRotationalOffset_26() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mPoseRotationalOffset_26)); }
	inline Quaternion_t2301928331  get_mPoseRotationalOffset_26() const { return ___mPoseRotationalOffset_26; }
	inline Quaternion_t2301928331 * get_address_of_mPoseRotationalOffset_26() { return &___mPoseRotationalOffset_26; }
	inline void set_mPoseRotationalOffset_26(Quaternion_t2301928331  value)
	{
		___mPoseRotationalOffset_26 = value;
	}
};

struct VuforiaManager_t1653423889_StaticFields
{
public:
	// Vuforia.VuforiaManager Vuforia.VuforiaManager::sInstance
	VuforiaManager_t1653423889 * ___sInstance_1;

public:
	inline static int32_t get_offset_of_sInstance_1() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889_StaticFields, ___sInstance_1)); }
	inline VuforiaManager_t1653423889 * get_sInstance_1() const { return ___sInstance_1; }
	inline VuforiaManager_t1653423889 ** get_address_of_sInstance_1() { return &___sInstance_1; }
	inline void set_sInstance_1(VuforiaManager_t1653423889 * value)
	{
		___sInstance_1 = value;
		Il2CppCodeGenWriteBarrier((&___sInstance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAMANAGER_T1653423889_H
#ifndef VUFORIARENDERER_T3433045970_H
#define VUFORIARENDERER_T3433045970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer
struct  VuforiaRenderer_t3433045970  : public RuntimeObject
{
public:
	// Vuforia.VuforiaRenderer/VideoBGCfgData Vuforia.VuforiaRenderer::mVideoBGConfig
	VideoBGCfgData_t994527297  ___mVideoBGConfig_1;
	// System.Boolean Vuforia.VuforiaRenderer::mVideoBGConfigSet
	bool ___mVideoBGConfigSet_2;
	// UnityEngine.Texture Vuforia.VuforiaRenderer::mVideoBackgroundTexture
	Texture_t3661962703 * ___mVideoBackgroundTexture_3;
	// System.Boolean Vuforia.VuforiaRenderer::mBackgroundTextureHasChanged
	bool ___mBackgroundTextureHasChanged_4;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaRenderer::mLastSetReflection
	int32_t ___mLastSetReflection_5;
	// System.IntPtr Vuforia.VuforiaRenderer::mNativeRenderingCallback
	intptr_t ___mNativeRenderingCallback_6;

public:
	inline static int32_t get_offset_of_mVideoBGConfig_1() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mVideoBGConfig_1)); }
	inline VideoBGCfgData_t994527297  get_mVideoBGConfig_1() const { return ___mVideoBGConfig_1; }
	inline VideoBGCfgData_t994527297 * get_address_of_mVideoBGConfig_1() { return &___mVideoBGConfig_1; }
	inline void set_mVideoBGConfig_1(VideoBGCfgData_t994527297  value)
	{
		___mVideoBGConfig_1 = value;
	}

	inline static int32_t get_offset_of_mVideoBGConfigSet_2() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mVideoBGConfigSet_2)); }
	inline bool get_mVideoBGConfigSet_2() const { return ___mVideoBGConfigSet_2; }
	inline bool* get_address_of_mVideoBGConfigSet_2() { return &___mVideoBGConfigSet_2; }
	inline void set_mVideoBGConfigSet_2(bool value)
	{
		___mVideoBGConfigSet_2 = value;
	}

	inline static int32_t get_offset_of_mVideoBackgroundTexture_3() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mVideoBackgroundTexture_3)); }
	inline Texture_t3661962703 * get_mVideoBackgroundTexture_3() const { return ___mVideoBackgroundTexture_3; }
	inline Texture_t3661962703 ** get_address_of_mVideoBackgroundTexture_3() { return &___mVideoBackgroundTexture_3; }
	inline void set_mVideoBackgroundTexture_3(Texture_t3661962703 * value)
	{
		___mVideoBackgroundTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundTexture_3), value);
	}

	inline static int32_t get_offset_of_mBackgroundTextureHasChanged_4() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mBackgroundTextureHasChanged_4)); }
	inline bool get_mBackgroundTextureHasChanged_4() const { return ___mBackgroundTextureHasChanged_4; }
	inline bool* get_address_of_mBackgroundTextureHasChanged_4() { return &___mBackgroundTextureHasChanged_4; }
	inline void set_mBackgroundTextureHasChanged_4(bool value)
	{
		___mBackgroundTextureHasChanged_4 = value;
	}

	inline static int32_t get_offset_of_mLastSetReflection_5() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mLastSetReflection_5)); }
	inline int32_t get_mLastSetReflection_5() const { return ___mLastSetReflection_5; }
	inline int32_t* get_address_of_mLastSetReflection_5() { return &___mLastSetReflection_5; }
	inline void set_mLastSetReflection_5(int32_t value)
	{
		___mLastSetReflection_5 = value;
	}

	inline static int32_t get_offset_of_mNativeRenderingCallback_6() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mNativeRenderingCallback_6)); }
	inline intptr_t get_mNativeRenderingCallback_6() const { return ___mNativeRenderingCallback_6; }
	inline intptr_t* get_address_of_mNativeRenderingCallback_6() { return &___mNativeRenderingCallback_6; }
	inline void set_mNativeRenderingCallback_6(intptr_t value)
	{
		___mNativeRenderingCallback_6 = value;
	}
};

struct VuforiaRenderer_t3433045970_StaticFields
{
public:
	// Vuforia.VuforiaRenderer Vuforia.VuforiaRenderer::sInstance
	VuforiaRenderer_t3433045970 * ___sInstance_0;

public:
	inline static int32_t get_offset_of_sInstance_0() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970_StaticFields, ___sInstance_0)); }
	inline VuforiaRenderer_t3433045970 * get_sInstance_0() const { return ___sInstance_0; }
	inline VuforiaRenderer_t3433045970 ** get_address_of_sInstance_0() { return &___sInstance_0; }
	inline void set_sInstance_0(VuforiaRenderer_t3433045970 * value)
	{
		___sInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___sInstance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIARENDERER_T3433045970_H
#ifndef VUFORIARUNTIMEUTILITIES_T399660591_H
#define VUFORIARUNTIMEUTILITIES_T399660591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntimeUtilities
struct  VuforiaRuntimeUtilities_t399660591  : public RuntimeObject
{
public:

public:
};

struct VuforiaRuntimeUtilities_t399660591_StaticFields
{
public:
	// Vuforia.VuforiaRuntimeUtilities/InitializableBool Vuforia.VuforiaRuntimeUtilities::sWebCamUsed
	int32_t ___sWebCamUsed_0;
	// Vuforia.VuforiaRuntimeUtilities/InitializableBool Vuforia.VuforiaRuntimeUtilities::sNativePluginSupport
	int32_t ___sNativePluginSupport_1;

public:
	inline static int32_t get_offset_of_sWebCamUsed_0() { return static_cast<int32_t>(offsetof(VuforiaRuntimeUtilities_t399660591_StaticFields, ___sWebCamUsed_0)); }
	inline int32_t get_sWebCamUsed_0() const { return ___sWebCamUsed_0; }
	inline int32_t* get_address_of_sWebCamUsed_0() { return &___sWebCamUsed_0; }
	inline void set_sWebCamUsed_0(int32_t value)
	{
		___sWebCamUsed_0 = value;
	}

	inline static int32_t get_offset_of_sNativePluginSupport_1() { return static_cast<int32_t>(offsetof(VuforiaRuntimeUtilities_t399660591_StaticFields, ___sNativePluginSupport_1)); }
	inline int32_t get_sNativePluginSupport_1() const { return ___sNativePluginSupport_1; }
	inline int32_t* get_address_of_sNativePluginSupport_1() { return &___sNativePluginSupport_1; }
	inline void set_sNativePluginSupport_1(int32_t value)
	{
		___sNativePluginSupport_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIARUNTIMEUTILITIES_T399660591_H
#ifndef CAMERASTATE_T1646041879_H
#define CAMERASTATE_T1646041879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntimeUtilities/CameraState
struct  CameraState_t1646041879 
{
public:
	// System.Boolean Vuforia.VuforiaRuntimeUtilities/CameraState::<Initialized>k__BackingField
	bool ___U3CInitializedU3Ek__BackingField_0;
	// System.Boolean Vuforia.VuforiaRuntimeUtilities/CameraState::<Active>k__BackingField
	bool ___U3CActiveU3Ek__BackingField_1;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaRuntimeUtilities/CameraState::<CameraDirection>k__BackingField
	int32_t ___U3CCameraDirectionU3Ek__BackingField_2;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaRuntimeUtilities/CameraState::<DeviceMode>k__BackingField
	int32_t ___U3CDeviceModeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CInitializedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CameraState_t1646041879, ___U3CInitializedU3Ek__BackingField_0)); }
	inline bool get_U3CInitializedU3Ek__BackingField_0() const { return ___U3CInitializedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CInitializedU3Ek__BackingField_0() { return &___U3CInitializedU3Ek__BackingField_0; }
	inline void set_U3CInitializedU3Ek__BackingField_0(bool value)
	{
		___U3CInitializedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CActiveU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CameraState_t1646041879, ___U3CActiveU3Ek__BackingField_1)); }
	inline bool get_U3CActiveU3Ek__BackingField_1() const { return ___U3CActiveU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CActiveU3Ek__BackingField_1() { return &___U3CActiveU3Ek__BackingField_1; }
	inline void set_U3CActiveU3Ek__BackingField_1(bool value)
	{
		___U3CActiveU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CCameraDirectionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CameraState_t1646041879, ___U3CCameraDirectionU3Ek__BackingField_2)); }
	inline int32_t get_U3CCameraDirectionU3Ek__BackingField_2() const { return ___U3CCameraDirectionU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CCameraDirectionU3Ek__BackingField_2() { return &___U3CCameraDirectionU3Ek__BackingField_2; }
	inline void set_U3CCameraDirectionU3Ek__BackingField_2(int32_t value)
	{
		___U3CCameraDirectionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CDeviceModeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CameraState_t1646041879, ___U3CDeviceModeU3Ek__BackingField_3)); }
	inline int32_t get_U3CDeviceModeU3Ek__BackingField_3() const { return ___U3CDeviceModeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CDeviceModeU3Ek__BackingField_3() { return &___U3CDeviceModeU3Ek__BackingField_3; }
	inline void set_U3CDeviceModeU3Ek__BackingField_3(int32_t value)
	{
		___U3CDeviceModeU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.VuforiaRuntimeUtilities/CameraState
struct CameraState_t1646041879_marshaled_pinvoke
{
	int32_t ___U3CInitializedU3Ek__BackingField_0;
	int32_t ___U3CActiveU3Ek__BackingField_1;
	int32_t ___U3CCameraDirectionU3Ek__BackingField_2;
	int32_t ___U3CDeviceModeU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Vuforia.VuforiaRuntimeUtilities/CameraState
struct CameraState_t1646041879_marshaled_com
{
	int32_t ___U3CInitializedU3Ek__BackingField_0;
	int32_t ___U3CActiveU3Ek__BackingField_1;
	int32_t ___U3CCameraDirectionU3Ek__BackingField_2;
	int32_t ___U3CDeviceModeU3Ek__BackingField_3;
};
#endif // CAMERASTATE_T1646041879_H
#ifndef WSAUNITYPLAYER_T3135728299_H
#define WSAUNITYPLAYER_T3135728299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WSAUnityPlayer
struct  WSAUnityPlayer_t3135728299  : public RuntimeObject
{
public:
	// UnityEngine.ScreenOrientation Vuforia.WSAUnityPlayer::mScreenOrientation
	int32_t ___mScreenOrientation_1;

public:
	inline static int32_t get_offset_of_mScreenOrientation_1() { return static_cast<int32_t>(offsetof(WSAUnityPlayer_t3135728299, ___mScreenOrientation_1)); }
	inline int32_t get_mScreenOrientation_1() const { return ___mScreenOrientation_1; }
	inline int32_t* get_address_of_mScreenOrientation_1() { return &___mScreenOrientation_1; }
	inline void set_mScreenOrientation_1(int32_t value)
	{
		___mScreenOrientation_1 = value;
	}
};

struct WSAUnityPlayer_t3135728299_StaticFields
{
public:
	// System.String Vuforia.WSAUnityPlayer::UNITY_WINDOWSMR_IDENTIFIER
	String_t* ___UNITY_WINDOWSMR_IDENTIFIER_0;

public:
	inline static int32_t get_offset_of_UNITY_WINDOWSMR_IDENTIFIER_0() { return static_cast<int32_t>(offsetof(WSAUnityPlayer_t3135728299_StaticFields, ___UNITY_WINDOWSMR_IDENTIFIER_0)); }
	inline String_t* get_UNITY_WINDOWSMR_IDENTIFIER_0() const { return ___UNITY_WINDOWSMR_IDENTIFIER_0; }
	inline String_t** get_address_of_UNITY_WINDOWSMR_IDENTIFIER_0() { return &___UNITY_WINDOWSMR_IDENTIFIER_0; }
	inline void set_UNITY_WINDOWSMR_IDENTIFIER_0(String_t* value)
	{
		___UNITY_WINDOWSMR_IDENTIFIER_0 = value;
		Il2CppCodeGenWriteBarrier((&___UNITY_WINDOWSMR_IDENTIFIER_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WSAUNITYPLAYER_T3135728299_H
#ifndef WEBCAM_T2427002488_H
#define WEBCAM_T2427002488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCam
struct  WebCam_t2427002488  : public RuntimeObject
{
public:
	// UnityEngine.Camera[] Vuforia.WebCam::mARCameras
	CameraU5BU5D_t1709987734* ___mARCameras_0;
	// System.Int32[] Vuforia.WebCam::mOriginalCameraCullMask
	Int32U5BU5D_t385246372* ___mOriginalCameraCullMask_1;
	// Vuforia.IWebCamTexAdaptor Vuforia.WebCam::mWebCamTexture
	RuntimeObject* ___mWebCamTexture_2;
	// Vuforia.CameraDevice/VideoModeData Vuforia.WebCam::mVideoModeData
	VideoModeData_t2066817255  ___mVideoModeData_3;
	// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.WebCam::mVideoTextureInfo
	VideoTextureInfo_t1805965052  ___mVideoTextureInfo_4;
	// Vuforia.TextureRenderer Vuforia.WebCam::mTextureRenderer
	TextureRenderer_t3278815845 * ___mTextureRenderer_5;
	// UnityEngine.Texture2D Vuforia.WebCam::mBufferReadTexture
	Texture2D_t3840446185 * ___mBufferReadTexture_6;
	// UnityEngine.Rect Vuforia.WebCam::mReadPixelsRect
	Rect_t2360479859  ___mReadPixelsRect_7;
	// Vuforia.WebCamProfile/ProfileData Vuforia.WebCam::mWebCamProfile
	ProfileData_t3519391925  ___mWebCamProfile_8;
	// System.Boolean Vuforia.WebCam::mFlipHorizontally
	bool ___mFlipHorizontally_9;
	// System.Boolean Vuforia.WebCam::mIsDirty
	bool ___mIsDirty_10;
	// System.Int32 Vuforia.WebCam::mLastFrameIdx
	int32_t ___mLastFrameIdx_11;
	// System.Int32 Vuforia.WebCam::mRenderTextureLayer
	int32_t ___mRenderTextureLayer_12;
	// System.Boolean Vuforia.WebCam::mWebcamPlaying
	bool ___mWebcamPlaying_13;
	// System.Boolean Vuforia.WebCam::<IsTextureSizeAvailable>k__BackingField
	bool ___U3CIsTextureSizeAvailableU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_mARCameras_0() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mARCameras_0)); }
	inline CameraU5BU5D_t1709987734* get_mARCameras_0() const { return ___mARCameras_0; }
	inline CameraU5BU5D_t1709987734** get_address_of_mARCameras_0() { return &___mARCameras_0; }
	inline void set_mARCameras_0(CameraU5BU5D_t1709987734* value)
	{
		___mARCameras_0 = value;
		Il2CppCodeGenWriteBarrier((&___mARCameras_0), value);
	}

	inline static int32_t get_offset_of_mOriginalCameraCullMask_1() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mOriginalCameraCullMask_1)); }
	inline Int32U5BU5D_t385246372* get_mOriginalCameraCullMask_1() const { return ___mOriginalCameraCullMask_1; }
	inline Int32U5BU5D_t385246372** get_address_of_mOriginalCameraCullMask_1() { return &___mOriginalCameraCullMask_1; }
	inline void set_mOriginalCameraCullMask_1(Int32U5BU5D_t385246372* value)
	{
		___mOriginalCameraCullMask_1 = value;
		Il2CppCodeGenWriteBarrier((&___mOriginalCameraCullMask_1), value);
	}

	inline static int32_t get_offset_of_mWebCamTexture_2() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mWebCamTexture_2)); }
	inline RuntimeObject* get_mWebCamTexture_2() const { return ___mWebCamTexture_2; }
	inline RuntimeObject** get_address_of_mWebCamTexture_2() { return &___mWebCamTexture_2; }
	inline void set_mWebCamTexture_2(RuntimeObject* value)
	{
		___mWebCamTexture_2 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCamTexture_2), value);
	}

	inline static int32_t get_offset_of_mVideoModeData_3() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mVideoModeData_3)); }
	inline VideoModeData_t2066817255  get_mVideoModeData_3() const { return ___mVideoModeData_3; }
	inline VideoModeData_t2066817255 * get_address_of_mVideoModeData_3() { return &___mVideoModeData_3; }
	inline void set_mVideoModeData_3(VideoModeData_t2066817255  value)
	{
		___mVideoModeData_3 = value;
	}

	inline static int32_t get_offset_of_mVideoTextureInfo_4() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mVideoTextureInfo_4)); }
	inline VideoTextureInfo_t1805965052  get_mVideoTextureInfo_4() const { return ___mVideoTextureInfo_4; }
	inline VideoTextureInfo_t1805965052 * get_address_of_mVideoTextureInfo_4() { return &___mVideoTextureInfo_4; }
	inline void set_mVideoTextureInfo_4(VideoTextureInfo_t1805965052  value)
	{
		___mVideoTextureInfo_4 = value;
	}

	inline static int32_t get_offset_of_mTextureRenderer_5() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mTextureRenderer_5)); }
	inline TextureRenderer_t3278815845 * get_mTextureRenderer_5() const { return ___mTextureRenderer_5; }
	inline TextureRenderer_t3278815845 ** get_address_of_mTextureRenderer_5() { return &___mTextureRenderer_5; }
	inline void set_mTextureRenderer_5(TextureRenderer_t3278815845 * value)
	{
		___mTextureRenderer_5 = value;
		Il2CppCodeGenWriteBarrier((&___mTextureRenderer_5), value);
	}

	inline static int32_t get_offset_of_mBufferReadTexture_6() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mBufferReadTexture_6)); }
	inline Texture2D_t3840446185 * get_mBufferReadTexture_6() const { return ___mBufferReadTexture_6; }
	inline Texture2D_t3840446185 ** get_address_of_mBufferReadTexture_6() { return &___mBufferReadTexture_6; }
	inline void set_mBufferReadTexture_6(Texture2D_t3840446185 * value)
	{
		___mBufferReadTexture_6 = value;
		Il2CppCodeGenWriteBarrier((&___mBufferReadTexture_6), value);
	}

	inline static int32_t get_offset_of_mReadPixelsRect_7() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mReadPixelsRect_7)); }
	inline Rect_t2360479859  get_mReadPixelsRect_7() const { return ___mReadPixelsRect_7; }
	inline Rect_t2360479859 * get_address_of_mReadPixelsRect_7() { return &___mReadPixelsRect_7; }
	inline void set_mReadPixelsRect_7(Rect_t2360479859  value)
	{
		___mReadPixelsRect_7 = value;
	}

	inline static int32_t get_offset_of_mWebCamProfile_8() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mWebCamProfile_8)); }
	inline ProfileData_t3519391925  get_mWebCamProfile_8() const { return ___mWebCamProfile_8; }
	inline ProfileData_t3519391925 * get_address_of_mWebCamProfile_8() { return &___mWebCamProfile_8; }
	inline void set_mWebCamProfile_8(ProfileData_t3519391925  value)
	{
		___mWebCamProfile_8 = value;
	}

	inline static int32_t get_offset_of_mFlipHorizontally_9() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mFlipHorizontally_9)); }
	inline bool get_mFlipHorizontally_9() const { return ___mFlipHorizontally_9; }
	inline bool* get_address_of_mFlipHorizontally_9() { return &___mFlipHorizontally_9; }
	inline void set_mFlipHorizontally_9(bool value)
	{
		___mFlipHorizontally_9 = value;
	}

	inline static int32_t get_offset_of_mIsDirty_10() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mIsDirty_10)); }
	inline bool get_mIsDirty_10() const { return ___mIsDirty_10; }
	inline bool* get_address_of_mIsDirty_10() { return &___mIsDirty_10; }
	inline void set_mIsDirty_10(bool value)
	{
		___mIsDirty_10 = value;
	}

	inline static int32_t get_offset_of_mLastFrameIdx_11() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mLastFrameIdx_11)); }
	inline int32_t get_mLastFrameIdx_11() const { return ___mLastFrameIdx_11; }
	inline int32_t* get_address_of_mLastFrameIdx_11() { return &___mLastFrameIdx_11; }
	inline void set_mLastFrameIdx_11(int32_t value)
	{
		___mLastFrameIdx_11 = value;
	}

	inline static int32_t get_offset_of_mRenderTextureLayer_12() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mRenderTextureLayer_12)); }
	inline int32_t get_mRenderTextureLayer_12() const { return ___mRenderTextureLayer_12; }
	inline int32_t* get_address_of_mRenderTextureLayer_12() { return &___mRenderTextureLayer_12; }
	inline void set_mRenderTextureLayer_12(int32_t value)
	{
		___mRenderTextureLayer_12 = value;
	}

	inline static int32_t get_offset_of_mWebcamPlaying_13() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mWebcamPlaying_13)); }
	inline bool get_mWebcamPlaying_13() const { return ___mWebcamPlaying_13; }
	inline bool* get_address_of_mWebcamPlaying_13() { return &___mWebcamPlaying_13; }
	inline void set_mWebcamPlaying_13(bool value)
	{
		___mWebcamPlaying_13 = value;
	}

	inline static int32_t get_offset_of_U3CIsTextureSizeAvailableU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___U3CIsTextureSizeAvailableU3Ek__BackingField_14)); }
	inline bool get_U3CIsTextureSizeAvailableU3Ek__BackingField_14() const { return ___U3CIsTextureSizeAvailableU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsTextureSizeAvailableU3Ek__BackingField_14() { return &___U3CIsTextureSizeAvailableU3Ek__BackingField_14; }
	inline void set_U3CIsTextureSizeAvailableU3Ek__BackingField_14(bool value)
	{
		___U3CIsTextureSizeAvailableU3Ek__BackingField_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAM_T2427002488_H
#ifndef PROFILECOLLECTION_T901995765_H
#define PROFILECOLLECTION_T901995765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamProfile/ProfileCollection
struct  ProfileCollection_t901995765 
{
public:
	// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile/ProfileCollection::DefaultProfile
	ProfileData_t3519391925  ___DefaultProfile_0;
	// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData> Vuforia.WebCamProfile/ProfileCollection::Profiles
	Dictionary_2_t3304648224 * ___Profiles_1;

public:
	inline static int32_t get_offset_of_DefaultProfile_0() { return static_cast<int32_t>(offsetof(ProfileCollection_t901995765, ___DefaultProfile_0)); }
	inline ProfileData_t3519391925  get_DefaultProfile_0() const { return ___DefaultProfile_0; }
	inline ProfileData_t3519391925 * get_address_of_DefaultProfile_0() { return &___DefaultProfile_0; }
	inline void set_DefaultProfile_0(ProfileData_t3519391925  value)
	{
		___DefaultProfile_0 = value;
	}

	inline static int32_t get_offset_of_Profiles_1() { return static_cast<int32_t>(offsetof(ProfileCollection_t901995765, ___Profiles_1)); }
	inline Dictionary_2_t3304648224 * get_Profiles_1() const { return ___Profiles_1; }
	inline Dictionary_2_t3304648224 ** get_address_of_Profiles_1() { return &___Profiles_1; }
	inline void set_Profiles_1(Dictionary_2_t3304648224 * value)
	{
		___Profiles_1 = value;
		Il2CppCodeGenWriteBarrier((&___Profiles_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_t901995765_marshaled_pinvoke
{
	ProfileData_t3519391925  ___DefaultProfile_0;
	Dictionary_2_t3304648224 * ___Profiles_1;
};
// Native definition for COM marshalling of Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_t901995765_marshaled_com
{
	ProfileData_t3519391925  ___DefaultProfile_0;
	Dictionary_2_t3304648224 * ___Profiles_1;
};
#endif // PROFILECOLLECTION_T901995765_H
#ifndef ACTION_2_T1413982646_H
#define ACTION_2_T1413982646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<Vuforia.VuforiaManager/TrackableIdPair,System.Boolean>
struct  Action_2_t1413982646  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T1413982646_H
#ifndef FUNC_3_T3440825513_H
#define FUNC_3_T3440825513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>
struct  Func_3_t3440825513  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T3440825513_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef MESHFILTER_T3523625662_H
#define MESHFILTER_T3523625662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t3523625662  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T3523625662_H
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:
	// System.Int32 UnityEngine.Transform::<hierarchyCount>k__BackingField
	int32_t ___U3ChierarchyCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ChierarchyCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Transform_t3600365921, ___U3ChierarchyCountU3Ek__BackingField_4)); }
	inline int32_t get_U3ChierarchyCountU3Ek__BackingField_4() const { return ___U3ChierarchyCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3ChierarchyCountU3Ek__BackingField_4() { return &___U3ChierarchyCountU3Ek__BackingField_4; }
	inline void set_U3ChierarchyCountU3Ek__BackingField_4(int32_t value)
	{
		___U3ChierarchyCountU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef WEBCAMTEXTURE_T1514609158_H
#define WEBCAMTEXTURE_T1514609158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamTexture
struct  WebCamTexture_t1514609158  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMTEXTURE_T1514609158_H
#ifndef WORLDANCHOR_T2161774153_H
#define WORLDANCHOR_T2161774153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WorldAnchor
struct  WorldAnchor_t2161774153  : public Component_t1923634451
{
public:
	// UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate UnityEngine.XR.WSA.WorldAnchor::OnTrackingChanged
	OnTrackingChangedDelegate_t3480415086 * ___OnTrackingChanged_4;

public:
	inline static int32_t get_offset_of_OnTrackingChanged_4() { return static_cast<int32_t>(offsetof(WorldAnchor_t2161774153, ___OnTrackingChanged_4)); }
	inline OnTrackingChangedDelegate_t3480415086 * get_OnTrackingChanged_4() const { return ___OnTrackingChanged_4; }
	inline OnTrackingChangedDelegate_t3480415086 ** get_address_of_OnTrackingChanged_4() { return &___OnTrackingChanged_4; }
	inline void set_OnTrackingChanged_4(OnTrackingChangedDelegate_t3480415086 * value)
	{
		___OnTrackingChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnTrackingChanged_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDANCHOR_T2161774153_H
#ifndef ONTRACKINGCHANGEDDELEGATE_T3480415086_H
#define ONTRACKINGCHANGEDDELEGATE_T3480415086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate
struct  OnTrackingChangedDelegate_t3480415086  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONTRACKINGCHANGEDDELEGATE_T3480415086_H
#ifndef VRDEVICECAMERACONFIGURATION_T3015543037_H
#define VRDEVICECAMERACONFIGURATION_T3015543037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VRDeviceCameraConfiguration
struct  VRDeviceCameraConfiguration_t3015543037  : public BaseCameraConfiguration_t3118151474
{
public:
	// UnityEngine.Camera Vuforia.VRDeviceCameraConfiguration::mCamera
	Camera_t4157153871 * ___mCamera_12;
	// Vuforia.StereoProjMatrixStore Vuforia.VRDeviceCameraConfiguration::mMatrixStore
	StereoProjMatrixStore_t888524276 * ___mMatrixStore_13;
	// UnityEngine.Matrix4x4 Vuforia.VRDeviceCameraConfiguration::mLeftMatrixUsedForVBPlacement
	Matrix4x4_t1817901843  ___mLeftMatrixUsedForVBPlacement_14;
	// System.Single Vuforia.VRDeviceCameraConfiguration::mLastAppliedNearClipPlane
	float ___mLastAppliedNearClipPlane_15;
	// System.Single Vuforia.VRDeviceCameraConfiguration::mLastAppliedFarClipPlane
	float ___mLastAppliedFarClipPlane_16;
	// System.Single Vuforia.VRDeviceCameraConfiguration::mMaxDepthForVideoBackground
	float ___mMaxDepthForVideoBackground_17;
	// System.Single Vuforia.VRDeviceCameraConfiguration::mMinDepthForVideoBackground
	float ___mMinDepthForVideoBackground_18;
	// System.Int32 Vuforia.VRDeviceCameraConfiguration::mScreenWidth
	int32_t ___mScreenWidth_19;
	// System.Int32 Vuforia.VRDeviceCameraConfiguration::mScreenHeight
	int32_t ___mScreenHeight_20;
	// System.Single Vuforia.VRDeviceCameraConfiguration::mStereoDepth
	float ___mStereoDepth_21;
	// System.Boolean Vuforia.VRDeviceCameraConfiguration::mResetMatrix
	bool ___mResetMatrix_22;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2> Vuforia.VRDeviceCameraConfiguration::mVuforiaFrustumSkew
	Dictionary_2_t1076537327 * ___mVuforiaFrustumSkew_23;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2> Vuforia.VRDeviceCameraConfiguration::mCenterToEyeAxis
	Dictionary_2_t1076537327 * ___mCenterToEyeAxis_24;
	// Vuforia.VRDeviceController Vuforia.VRDeviceCameraConfiguration::mVrDeviceController
	VRDeviceController_t3863472269 * ___mVrDeviceController_25;

public:
	inline static int32_t get_offset_of_mCamera_12() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3015543037, ___mCamera_12)); }
	inline Camera_t4157153871 * get_mCamera_12() const { return ___mCamera_12; }
	inline Camera_t4157153871 ** get_address_of_mCamera_12() { return &___mCamera_12; }
	inline void set_mCamera_12(Camera_t4157153871 * value)
	{
		___mCamera_12 = value;
		Il2CppCodeGenWriteBarrier((&___mCamera_12), value);
	}

	inline static int32_t get_offset_of_mMatrixStore_13() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3015543037, ___mMatrixStore_13)); }
	inline StereoProjMatrixStore_t888524276 * get_mMatrixStore_13() const { return ___mMatrixStore_13; }
	inline StereoProjMatrixStore_t888524276 ** get_address_of_mMatrixStore_13() { return &___mMatrixStore_13; }
	inline void set_mMatrixStore_13(StereoProjMatrixStore_t888524276 * value)
	{
		___mMatrixStore_13 = value;
		Il2CppCodeGenWriteBarrier((&___mMatrixStore_13), value);
	}

	inline static int32_t get_offset_of_mLeftMatrixUsedForVBPlacement_14() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3015543037, ___mLeftMatrixUsedForVBPlacement_14)); }
	inline Matrix4x4_t1817901843  get_mLeftMatrixUsedForVBPlacement_14() const { return ___mLeftMatrixUsedForVBPlacement_14; }
	inline Matrix4x4_t1817901843 * get_address_of_mLeftMatrixUsedForVBPlacement_14() { return &___mLeftMatrixUsedForVBPlacement_14; }
	inline void set_mLeftMatrixUsedForVBPlacement_14(Matrix4x4_t1817901843  value)
	{
		___mLeftMatrixUsedForVBPlacement_14 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedNearClipPlane_15() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3015543037, ___mLastAppliedNearClipPlane_15)); }
	inline float get_mLastAppliedNearClipPlane_15() const { return ___mLastAppliedNearClipPlane_15; }
	inline float* get_address_of_mLastAppliedNearClipPlane_15() { return &___mLastAppliedNearClipPlane_15; }
	inline void set_mLastAppliedNearClipPlane_15(float value)
	{
		___mLastAppliedNearClipPlane_15 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedFarClipPlane_16() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3015543037, ___mLastAppliedFarClipPlane_16)); }
	inline float get_mLastAppliedFarClipPlane_16() const { return ___mLastAppliedFarClipPlane_16; }
	inline float* get_address_of_mLastAppliedFarClipPlane_16() { return &___mLastAppliedFarClipPlane_16; }
	inline void set_mLastAppliedFarClipPlane_16(float value)
	{
		___mLastAppliedFarClipPlane_16 = value;
	}

	inline static int32_t get_offset_of_mMaxDepthForVideoBackground_17() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3015543037, ___mMaxDepthForVideoBackground_17)); }
	inline float get_mMaxDepthForVideoBackground_17() const { return ___mMaxDepthForVideoBackground_17; }
	inline float* get_address_of_mMaxDepthForVideoBackground_17() { return &___mMaxDepthForVideoBackground_17; }
	inline void set_mMaxDepthForVideoBackground_17(float value)
	{
		___mMaxDepthForVideoBackground_17 = value;
	}

	inline static int32_t get_offset_of_mMinDepthForVideoBackground_18() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3015543037, ___mMinDepthForVideoBackground_18)); }
	inline float get_mMinDepthForVideoBackground_18() const { return ___mMinDepthForVideoBackground_18; }
	inline float* get_address_of_mMinDepthForVideoBackground_18() { return &___mMinDepthForVideoBackground_18; }
	inline void set_mMinDepthForVideoBackground_18(float value)
	{
		___mMinDepthForVideoBackground_18 = value;
	}

	inline static int32_t get_offset_of_mScreenWidth_19() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3015543037, ___mScreenWidth_19)); }
	inline int32_t get_mScreenWidth_19() const { return ___mScreenWidth_19; }
	inline int32_t* get_address_of_mScreenWidth_19() { return &___mScreenWidth_19; }
	inline void set_mScreenWidth_19(int32_t value)
	{
		___mScreenWidth_19 = value;
	}

	inline static int32_t get_offset_of_mScreenHeight_20() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3015543037, ___mScreenHeight_20)); }
	inline int32_t get_mScreenHeight_20() const { return ___mScreenHeight_20; }
	inline int32_t* get_address_of_mScreenHeight_20() { return &___mScreenHeight_20; }
	inline void set_mScreenHeight_20(int32_t value)
	{
		___mScreenHeight_20 = value;
	}

	inline static int32_t get_offset_of_mStereoDepth_21() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3015543037, ___mStereoDepth_21)); }
	inline float get_mStereoDepth_21() const { return ___mStereoDepth_21; }
	inline float* get_address_of_mStereoDepth_21() { return &___mStereoDepth_21; }
	inline void set_mStereoDepth_21(float value)
	{
		___mStereoDepth_21 = value;
	}

	inline static int32_t get_offset_of_mResetMatrix_22() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3015543037, ___mResetMatrix_22)); }
	inline bool get_mResetMatrix_22() const { return ___mResetMatrix_22; }
	inline bool* get_address_of_mResetMatrix_22() { return &___mResetMatrix_22; }
	inline void set_mResetMatrix_22(bool value)
	{
		___mResetMatrix_22 = value;
	}

	inline static int32_t get_offset_of_mVuforiaFrustumSkew_23() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3015543037, ___mVuforiaFrustumSkew_23)); }
	inline Dictionary_2_t1076537327 * get_mVuforiaFrustumSkew_23() const { return ___mVuforiaFrustumSkew_23; }
	inline Dictionary_2_t1076537327 ** get_address_of_mVuforiaFrustumSkew_23() { return &___mVuforiaFrustumSkew_23; }
	inline void set_mVuforiaFrustumSkew_23(Dictionary_2_t1076537327 * value)
	{
		___mVuforiaFrustumSkew_23 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaFrustumSkew_23), value);
	}

	inline static int32_t get_offset_of_mCenterToEyeAxis_24() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3015543037, ___mCenterToEyeAxis_24)); }
	inline Dictionary_2_t1076537327 * get_mCenterToEyeAxis_24() const { return ___mCenterToEyeAxis_24; }
	inline Dictionary_2_t1076537327 ** get_address_of_mCenterToEyeAxis_24() { return &___mCenterToEyeAxis_24; }
	inline void set_mCenterToEyeAxis_24(Dictionary_2_t1076537327 * value)
	{
		___mCenterToEyeAxis_24 = value;
		Il2CppCodeGenWriteBarrier((&___mCenterToEyeAxis_24), value);
	}

	inline static int32_t get_offset_of_mVrDeviceController_25() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t3015543037, ___mVrDeviceController_25)); }
	inline VRDeviceController_t3863472269 * get_mVrDeviceController_25() const { return ___mVrDeviceController_25; }
	inline VRDeviceController_t3863472269 ** get_address_of_mVrDeviceController_25() { return &___mVrDeviceController_25; }
	inline void set_mVrDeviceController_25(VRDeviceController_t3863472269 * value)
	{
		___mVrDeviceController_25 = value;
		Il2CppCodeGenWriteBarrier((&___mVrDeviceController_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VRDEVICECAMERACONFIGURATION_T3015543037_H
#ifndef VUFORIACONFIGURATION_T1763229349_H
#define VUFORIACONFIGURATION_T1763229349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration
struct  VuforiaConfiguration_t1763229349  : public ScriptableObject_t2528358522
{
public:
	// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::vuforia
	GenericVuforiaConfiguration_t3697830469 * ___vuforia_6;
	// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration Vuforia.VuforiaConfiguration::digitalEyewear
	DigitalEyewearConfiguration_t546560202 * ___digitalEyewear_7;
	// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration Vuforia.VuforiaConfiguration::videoBackground
	VideoBackgroundConfiguration_t3392414655 * ___videoBackground_8;
	// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration Vuforia.VuforiaConfiguration::deviceTracker
	DeviceTrackerConfiguration_t721467671 * ___deviceTracker_9;
	// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration Vuforia.VuforiaConfiguration::smartTerrain
	SmartTerrainConfiguration_t1514074484 * ___smartTerrain_10;
	// Vuforia.VuforiaConfiguration/WebCamConfiguration Vuforia.VuforiaConfiguration::webcam
	WebCamConfiguration_t1101614731 * ___webcam_11;

public:
	inline static int32_t get_offset_of_vuforia_6() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___vuforia_6)); }
	inline GenericVuforiaConfiguration_t3697830469 * get_vuforia_6() const { return ___vuforia_6; }
	inline GenericVuforiaConfiguration_t3697830469 ** get_address_of_vuforia_6() { return &___vuforia_6; }
	inline void set_vuforia_6(GenericVuforiaConfiguration_t3697830469 * value)
	{
		___vuforia_6 = value;
		Il2CppCodeGenWriteBarrier((&___vuforia_6), value);
	}

	inline static int32_t get_offset_of_digitalEyewear_7() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___digitalEyewear_7)); }
	inline DigitalEyewearConfiguration_t546560202 * get_digitalEyewear_7() const { return ___digitalEyewear_7; }
	inline DigitalEyewearConfiguration_t546560202 ** get_address_of_digitalEyewear_7() { return &___digitalEyewear_7; }
	inline void set_digitalEyewear_7(DigitalEyewearConfiguration_t546560202 * value)
	{
		___digitalEyewear_7 = value;
		Il2CppCodeGenWriteBarrier((&___digitalEyewear_7), value);
	}

	inline static int32_t get_offset_of_videoBackground_8() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___videoBackground_8)); }
	inline VideoBackgroundConfiguration_t3392414655 * get_videoBackground_8() const { return ___videoBackground_8; }
	inline VideoBackgroundConfiguration_t3392414655 ** get_address_of_videoBackground_8() { return &___videoBackground_8; }
	inline void set_videoBackground_8(VideoBackgroundConfiguration_t3392414655 * value)
	{
		___videoBackground_8 = value;
		Il2CppCodeGenWriteBarrier((&___videoBackground_8), value);
	}

	inline static int32_t get_offset_of_deviceTracker_9() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___deviceTracker_9)); }
	inline DeviceTrackerConfiguration_t721467671 * get_deviceTracker_9() const { return ___deviceTracker_9; }
	inline DeviceTrackerConfiguration_t721467671 ** get_address_of_deviceTracker_9() { return &___deviceTracker_9; }
	inline void set_deviceTracker_9(DeviceTrackerConfiguration_t721467671 * value)
	{
		___deviceTracker_9 = value;
		Il2CppCodeGenWriteBarrier((&___deviceTracker_9), value);
	}

	inline static int32_t get_offset_of_smartTerrain_10() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___smartTerrain_10)); }
	inline SmartTerrainConfiguration_t1514074484 * get_smartTerrain_10() const { return ___smartTerrain_10; }
	inline SmartTerrainConfiguration_t1514074484 ** get_address_of_smartTerrain_10() { return &___smartTerrain_10; }
	inline void set_smartTerrain_10(SmartTerrainConfiguration_t1514074484 * value)
	{
		___smartTerrain_10 = value;
		Il2CppCodeGenWriteBarrier((&___smartTerrain_10), value);
	}

	inline static int32_t get_offset_of_webcam_11() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___webcam_11)); }
	inline WebCamConfiguration_t1101614731 * get_webcam_11() const { return ___webcam_11; }
	inline WebCamConfiguration_t1101614731 ** get_address_of_webcam_11() { return &___webcam_11; }
	inline void set_webcam_11(WebCamConfiguration_t1101614731 * value)
	{
		___webcam_11 = value;
		Il2CppCodeGenWriteBarrier((&___webcam_11), value);
	}
};

struct VuforiaConfiguration_t1763229349_StaticFields
{
public:
	// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::mInstance
	VuforiaConfiguration_t1763229349 * ___mInstance_4;
	// System.Object Vuforia.VuforiaConfiguration::mPadlock
	RuntimeObject * ___mPadlock_5;

public:
	inline static int32_t get_offset_of_mInstance_4() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mInstance_4)); }
	inline VuforiaConfiguration_t1763229349 * get_mInstance_4() const { return ___mInstance_4; }
	inline VuforiaConfiguration_t1763229349 ** get_address_of_mInstance_4() { return &___mInstance_4; }
	inline void set_mInstance_4(VuforiaConfiguration_t1763229349 * value)
	{
		___mInstance_4 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_4), value);
	}

	inline static int32_t get_offset_of_mPadlock_5() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mPadlock_5)); }
	inline RuntimeObject * get_mPadlock_5() const { return ___mPadlock_5; }
	inline RuntimeObject ** get_address_of_mPadlock_5() { return &___mPadlock_5; }
	inline void set_mPadlock_5(RuntimeObject * value)
	{
		___mPadlock_5 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIACONFIGURATION_T1763229349_H
#ifndef WEBCAMPROFILE_T4166408645_H
#define WEBCAMPROFILE_T4166408645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamProfile
struct  WebCamProfile_t4166408645  : public RuntimeObject
{
public:
	// Vuforia.WebCamProfile/ProfileCollection Vuforia.WebCamProfile::mProfileCollection
	ProfileCollection_t901995765  ___mProfileCollection_0;

public:
	inline static int32_t get_offset_of_mProfileCollection_0() { return static_cast<int32_t>(offsetof(WebCamProfile_t4166408645, ___mProfileCollection_0)); }
	inline ProfileCollection_t901995765  get_mProfileCollection_0() const { return ___mProfileCollection_0; }
	inline ProfileCollection_t901995765 * get_address_of_mProfileCollection_0() { return &___mProfileCollection_0; }
	inline void set_mProfileCollection_0(ProfileCollection_t901995765  value)
	{
		___mProfileCollection_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMPROFILE_T4166408645_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef VUFORIAVRDEVICECAMERACONFIGURATION_T3308462389_H
#define VUFORIAVRDEVICECAMERACONFIGURATION_T3308462389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaVRDeviceCameraConfiguration
struct  VuforiaVRDeviceCameraConfiguration_t3308462389  : public VRDeviceCameraConfiguration_t3015543037
{
public:
	// System.Single Vuforia.VuforiaVRDeviceCameraConfiguration::mStereoOffset
	float ___mStereoOffset_27;
	// System.Boolean Vuforia.VuforiaVRDeviceCameraConfiguration::mDelayedVideoBackgroundEnabledChanged
	bool ___mDelayedVideoBackgroundEnabledChanged_28;

public:
	inline static int32_t get_offset_of_mStereoOffset_27() { return static_cast<int32_t>(offsetof(VuforiaVRDeviceCameraConfiguration_t3308462389, ___mStereoOffset_27)); }
	inline float get_mStereoOffset_27() const { return ___mStereoOffset_27; }
	inline float* get_address_of_mStereoOffset_27() { return &___mStereoOffset_27; }
	inline void set_mStereoOffset_27(float value)
	{
		___mStereoOffset_27 = value;
	}

	inline static int32_t get_offset_of_mDelayedVideoBackgroundEnabledChanged_28() { return static_cast<int32_t>(offsetof(VuforiaVRDeviceCameraConfiguration_t3308462389, ___mDelayedVideoBackgroundEnabledChanged_28)); }
	inline bool get_mDelayedVideoBackgroundEnabledChanged_28() const { return ___mDelayedVideoBackgroundEnabledChanged_28; }
	inline bool* get_address_of_mDelayedVideoBackgroundEnabledChanged_28() { return &___mDelayedVideoBackgroundEnabledChanged_28; }
	inline void set_mDelayedVideoBackgroundEnabledChanged_28(bool value)
	{
		___mDelayedVideoBackgroundEnabledChanged_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAVRDEVICECAMERACONFIGURATION_T3308462389_H
#ifndef VUFORIAMONOBEHAVIOUR_T1150221792_H
#define VUFORIAMONOBEHAVIOUR_T1150221792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuforiaMonoBehaviour
struct  VuforiaMonoBehaviour_t1150221792  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAMONOBEHAVIOUR_T1150221792_H
#ifndef TRACKABLEBEHAVIOUR_T1113559212_H
#define TRACKABLEBEHAVIOUR_T1113559212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t1113559212  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_4;
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_5;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_6;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_7;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_t3722313464  ___mPreviousScale_8;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_9;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	RuntimeObject* ___mTrackable_10;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_t2968050330 * ___mTrackableEventHandlers_11;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___U3CTimeStampU3Ek__BackingField_4)); }
	inline double get_U3CTimeStampU3Ek__BackingField_4() const { return ___U3CTimeStampU3Ek__BackingField_4; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_4() { return &___U3CTimeStampU3Ek__BackingField_4; }
	inline void set_U3CTimeStampU3Ek__BackingField_4(double value)
	{
		___U3CTimeStampU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableName_5)); }
	inline String_t* get_mTrackableName_5() const { return ___mTrackableName_5; }
	inline String_t** get_address_of_mTrackableName_5() { return &___mTrackableName_5; }
	inline void set_mTrackableName_5(String_t* value)
	{
		___mTrackableName_5 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableName_5), value);
	}

	inline static int32_t get_offset_of_mPreserveChildSize_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreserveChildSize_6)); }
	inline bool get_mPreserveChildSize_6() const { return ___mPreserveChildSize_6; }
	inline bool* get_address_of_mPreserveChildSize_6() { return &___mPreserveChildSize_6; }
	inline void set_mPreserveChildSize_6(bool value)
	{
		___mPreserveChildSize_6 = value;
	}

	inline static int32_t get_offset_of_mInitializedInEditor_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mInitializedInEditor_7)); }
	inline bool get_mInitializedInEditor_7() const { return ___mInitializedInEditor_7; }
	inline bool* get_address_of_mInitializedInEditor_7() { return &___mInitializedInEditor_7; }
	inline void set_mInitializedInEditor_7(bool value)
	{
		___mInitializedInEditor_7 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreviousScale_8)); }
	inline Vector3_t3722313464  get_mPreviousScale_8() const { return ___mPreviousScale_8; }
	inline Vector3_t3722313464 * get_address_of_mPreviousScale_8() { return &___mPreviousScale_8; }
	inline void set_mPreviousScale_8(Vector3_t3722313464  value)
	{
		___mPreviousScale_8 = value;
	}

	inline static int32_t get_offset_of_mStatus_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mStatus_9)); }
	inline int32_t get_mStatus_9() const { return ___mStatus_9; }
	inline int32_t* get_address_of_mStatus_9() { return &___mStatus_9; }
	inline void set_mStatus_9(int32_t value)
	{
		___mStatus_9 = value;
	}

	inline static int32_t get_offset_of_mTrackable_10() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackable_10)); }
	inline RuntimeObject* get_mTrackable_10() const { return ___mTrackable_10; }
	inline RuntimeObject** get_address_of_mTrackable_10() { return &___mTrackable_10; }
	inline void set_mTrackable_10(RuntimeObject* value)
	{
		___mTrackable_10 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackable_10), value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_11() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableEventHandlers_11)); }
	inline List_1_t2968050330 * get_mTrackableEventHandlers_11() const { return ___mTrackableEventHandlers_11; }
	inline List_1_t2968050330 ** get_address_of_mTrackableEventHandlers_11() { return &___mTrackableEventHandlers_11; }
	inline void set_mTrackableEventHandlers_11(List_1_t2968050330 * value)
	{
		___mTrackableEventHandlers_11 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableEventHandlers_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEBEHAVIOUR_T1113559212_H
#ifndef VUFORIABEHAVIOUR_T2151848540_H
#define VUFORIABEHAVIOUR_T2151848540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaBehaviour
struct  VuforiaBehaviour_t2151848540  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaBehaviour::mWorldCenterMode
	int32_t ___mWorldCenterMode_5;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaBehaviour::mWorldCenter
	TrackableBehaviour_t1113559212 * ___mWorldCenter_6;
	// System.Boolean Vuforia.VuforiaBehaviour::mAppIsQuitting
	bool ___mAppIsQuitting_7;
	// System.Action Vuforia.VuforiaBehaviour::AwakeEvent
	Action_t1264377477 * ___AwakeEvent_10;
	// System.Action Vuforia.VuforiaBehaviour::OnEnableEvent
	Action_t1264377477 * ___OnEnableEvent_11;
	// System.Action Vuforia.VuforiaBehaviour::StartEvent
	Action_t1264377477 * ___StartEvent_12;
	// System.Action Vuforia.VuforiaBehaviour::UpdateEvent
	Action_t1264377477 * ___UpdateEvent_13;
	// System.Action Vuforia.VuforiaBehaviour::OnLevelWasLoadedEvent
	Action_t1264377477 * ___OnLevelWasLoadedEvent_14;
	// System.Action`1<System.Boolean> Vuforia.VuforiaBehaviour::OnApplicationPauseEvent
	Action_1_t269755560 * ___OnApplicationPauseEvent_15;
	// System.Action Vuforia.VuforiaBehaviour::OnDisableEvent
	Action_t1264377477 * ___OnDisableEvent_16;
	// System.Action Vuforia.VuforiaBehaviour::OnDestroyEvent
	Action_t1264377477 * ___OnDestroyEvent_17;

public:
	inline static int32_t get_offset_of_mWorldCenterMode_5() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___mWorldCenterMode_5)); }
	inline int32_t get_mWorldCenterMode_5() const { return ___mWorldCenterMode_5; }
	inline int32_t* get_address_of_mWorldCenterMode_5() { return &___mWorldCenterMode_5; }
	inline void set_mWorldCenterMode_5(int32_t value)
	{
		___mWorldCenterMode_5 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_6() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___mWorldCenter_6)); }
	inline TrackableBehaviour_t1113559212 * get_mWorldCenter_6() const { return ___mWorldCenter_6; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mWorldCenter_6() { return &___mWorldCenter_6; }
	inline void set_mWorldCenter_6(TrackableBehaviour_t1113559212 * value)
	{
		___mWorldCenter_6 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldCenter_6), value);
	}

	inline static int32_t get_offset_of_mAppIsQuitting_7() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___mAppIsQuitting_7)); }
	inline bool get_mAppIsQuitting_7() const { return ___mAppIsQuitting_7; }
	inline bool* get_address_of_mAppIsQuitting_7() { return &___mAppIsQuitting_7; }
	inline void set_mAppIsQuitting_7(bool value)
	{
		___mAppIsQuitting_7 = value;
	}

	inline static int32_t get_offset_of_AwakeEvent_10() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___AwakeEvent_10)); }
	inline Action_t1264377477 * get_AwakeEvent_10() const { return ___AwakeEvent_10; }
	inline Action_t1264377477 ** get_address_of_AwakeEvent_10() { return &___AwakeEvent_10; }
	inline void set_AwakeEvent_10(Action_t1264377477 * value)
	{
		___AwakeEvent_10 = value;
		Il2CppCodeGenWriteBarrier((&___AwakeEvent_10), value);
	}

	inline static int32_t get_offset_of_OnEnableEvent_11() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnEnableEvent_11)); }
	inline Action_t1264377477 * get_OnEnableEvent_11() const { return ___OnEnableEvent_11; }
	inline Action_t1264377477 ** get_address_of_OnEnableEvent_11() { return &___OnEnableEvent_11; }
	inline void set_OnEnableEvent_11(Action_t1264377477 * value)
	{
		___OnEnableEvent_11 = value;
		Il2CppCodeGenWriteBarrier((&___OnEnableEvent_11), value);
	}

	inline static int32_t get_offset_of_StartEvent_12() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___StartEvent_12)); }
	inline Action_t1264377477 * get_StartEvent_12() const { return ___StartEvent_12; }
	inline Action_t1264377477 ** get_address_of_StartEvent_12() { return &___StartEvent_12; }
	inline void set_StartEvent_12(Action_t1264377477 * value)
	{
		___StartEvent_12 = value;
		Il2CppCodeGenWriteBarrier((&___StartEvent_12), value);
	}

	inline static int32_t get_offset_of_UpdateEvent_13() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___UpdateEvent_13)); }
	inline Action_t1264377477 * get_UpdateEvent_13() const { return ___UpdateEvent_13; }
	inline Action_t1264377477 ** get_address_of_UpdateEvent_13() { return &___UpdateEvent_13; }
	inline void set_UpdateEvent_13(Action_t1264377477 * value)
	{
		___UpdateEvent_13 = value;
		Il2CppCodeGenWriteBarrier((&___UpdateEvent_13), value);
	}

	inline static int32_t get_offset_of_OnLevelWasLoadedEvent_14() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnLevelWasLoadedEvent_14)); }
	inline Action_t1264377477 * get_OnLevelWasLoadedEvent_14() const { return ___OnLevelWasLoadedEvent_14; }
	inline Action_t1264377477 ** get_address_of_OnLevelWasLoadedEvent_14() { return &___OnLevelWasLoadedEvent_14; }
	inline void set_OnLevelWasLoadedEvent_14(Action_t1264377477 * value)
	{
		___OnLevelWasLoadedEvent_14 = value;
		Il2CppCodeGenWriteBarrier((&___OnLevelWasLoadedEvent_14), value);
	}

	inline static int32_t get_offset_of_OnApplicationPauseEvent_15() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnApplicationPauseEvent_15)); }
	inline Action_1_t269755560 * get_OnApplicationPauseEvent_15() const { return ___OnApplicationPauseEvent_15; }
	inline Action_1_t269755560 ** get_address_of_OnApplicationPauseEvent_15() { return &___OnApplicationPauseEvent_15; }
	inline void set_OnApplicationPauseEvent_15(Action_1_t269755560 * value)
	{
		___OnApplicationPauseEvent_15 = value;
		Il2CppCodeGenWriteBarrier((&___OnApplicationPauseEvent_15), value);
	}

	inline static int32_t get_offset_of_OnDisableEvent_16() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnDisableEvent_16)); }
	inline Action_t1264377477 * get_OnDisableEvent_16() const { return ___OnDisableEvent_16; }
	inline Action_t1264377477 ** get_address_of_OnDisableEvent_16() { return &___OnDisableEvent_16; }
	inline void set_OnDisableEvent_16(Action_t1264377477 * value)
	{
		___OnDisableEvent_16 = value;
		Il2CppCodeGenWriteBarrier((&___OnDisableEvent_16), value);
	}

	inline static int32_t get_offset_of_OnDestroyEvent_17() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnDestroyEvent_17)); }
	inline Action_t1264377477 * get_OnDestroyEvent_17() const { return ___OnDestroyEvent_17; }
	inline Action_t1264377477 ** get_address_of_OnDestroyEvent_17() { return &___OnDestroyEvent_17; }
	inline void set_OnDestroyEvent_17(Action_t1264377477 * value)
	{
		___OnDestroyEvent_17 = value;
		Il2CppCodeGenWriteBarrier((&___OnDestroyEvent_17), value);
	}
};

struct VuforiaBehaviour_t2151848540_StaticFields
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.VuforiaBehaviour::mVuforiaBehaviour
	VuforiaBehaviour_t2151848540 * ___mVuforiaBehaviour_4;
	// System.Action`1<Vuforia.VuforiaBehaviour> Vuforia.VuforiaBehaviour::BehaviourCreated
	Action_1_t2324316135 * ___BehaviourCreated_8;
	// System.Action`1<Vuforia.VuforiaBehaviour> Vuforia.VuforiaBehaviour::BehaviourDestroyed
	Action_1_t2324316135 * ___BehaviourDestroyed_9;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_4() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540_StaticFields, ___mVuforiaBehaviour_4)); }
	inline VuforiaBehaviour_t2151848540 * get_mVuforiaBehaviour_4() const { return ___mVuforiaBehaviour_4; }
	inline VuforiaBehaviour_t2151848540 ** get_address_of_mVuforiaBehaviour_4() { return &___mVuforiaBehaviour_4; }
	inline void set_mVuforiaBehaviour_4(VuforiaBehaviour_t2151848540 * value)
	{
		___mVuforiaBehaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_4), value);
	}

	inline static int32_t get_offset_of_BehaviourCreated_8() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540_StaticFields, ___BehaviourCreated_8)); }
	inline Action_1_t2324316135 * get_BehaviourCreated_8() const { return ___BehaviourCreated_8; }
	inline Action_1_t2324316135 ** get_address_of_BehaviourCreated_8() { return &___BehaviourCreated_8; }
	inline void set_BehaviourCreated_8(Action_1_t2324316135 * value)
	{
		___BehaviourCreated_8 = value;
		Il2CppCodeGenWriteBarrier((&___BehaviourCreated_8), value);
	}

	inline static int32_t get_offset_of_BehaviourDestroyed_9() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540_StaticFields, ___BehaviourDestroyed_9)); }
	inline Action_1_t2324316135 * get_BehaviourDestroyed_9() const { return ___BehaviourDestroyed_9; }
	inline Action_1_t2324316135 ** get_address_of_BehaviourDestroyed_9() { return &___BehaviourDestroyed_9; }
	inline void set_BehaviourDestroyed_9(Action_1_t2324316135 * value)
	{
		___BehaviourDestroyed_9 = value;
		Il2CppCodeGenWriteBarrier((&___BehaviourDestroyed_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIABEHAVIOUR_T2151848540_H
#ifndef WIREFRAMEBEHAVIOUR_T1831066704_H
#define WIREFRAMEBEHAVIOUR_T1831066704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WireframeBehaviour
struct  WireframeBehaviour_t1831066704  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// UnityEngine.Material Vuforia.WireframeBehaviour::lineMaterial
	Material_t340375123 * ___lineMaterial_4;
	// System.Boolean Vuforia.WireframeBehaviour::ShowLines
	bool ___ShowLines_5;
	// UnityEngine.Color Vuforia.WireframeBehaviour::LineColor
	Color_t2555686324  ___LineColor_6;
	// UnityEngine.Material Vuforia.WireframeBehaviour::mLineMaterial
	Material_t340375123 * ___mLineMaterial_7;

public:
	inline static int32_t get_offset_of_lineMaterial_4() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t1831066704, ___lineMaterial_4)); }
	inline Material_t340375123 * get_lineMaterial_4() const { return ___lineMaterial_4; }
	inline Material_t340375123 ** get_address_of_lineMaterial_4() { return &___lineMaterial_4; }
	inline void set_lineMaterial_4(Material_t340375123 * value)
	{
		___lineMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___lineMaterial_4), value);
	}

	inline static int32_t get_offset_of_ShowLines_5() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t1831066704, ___ShowLines_5)); }
	inline bool get_ShowLines_5() const { return ___ShowLines_5; }
	inline bool* get_address_of_ShowLines_5() { return &___ShowLines_5; }
	inline void set_ShowLines_5(bool value)
	{
		___ShowLines_5 = value;
	}

	inline static int32_t get_offset_of_LineColor_6() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t1831066704, ___LineColor_6)); }
	inline Color_t2555686324  get_LineColor_6() const { return ___LineColor_6; }
	inline Color_t2555686324 * get_address_of_LineColor_6() { return &___LineColor_6; }
	inline void set_LineColor_6(Color_t2555686324  value)
	{
		___LineColor_6 = value;
	}

	inline static int32_t get_offset_of_mLineMaterial_7() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t1831066704, ___mLineMaterial_7)); }
	inline Material_t340375123 * get_mLineMaterial_7() const { return ___mLineMaterial_7; }
	inline Material_t340375123 ** get_address_of_mLineMaterial_7() { return &___mLineMaterial_7; }
	inline void set_mLineMaterial_7(Material_t340375123 * value)
	{
		___mLineMaterial_7 = value;
		Il2CppCodeGenWriteBarrier((&___mLineMaterial_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIREFRAMEBEHAVIOUR_T1831066704_H
#ifndef WIREFRAMETRACKABLEEVENTHANDLER_T2143753312_H
#define WIREFRAMETRACKABLEEVENTHANDLER_T2143753312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WireframeTrackableEventHandler
struct  WireframeTrackableEventHandler_t2143753312  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// Vuforia.TrackableBehaviour Vuforia.WireframeTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1113559212 * ___mTrackableBehaviour_4;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_4() { return static_cast<int32_t>(offsetof(WireframeTrackableEventHandler_t2143753312, ___mTrackableBehaviour_4)); }
	inline TrackableBehaviour_t1113559212 * get_mTrackableBehaviour_4() const { return ___mTrackableBehaviour_4; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mTrackableBehaviour_4() { return &___mTrackableBehaviour_4; }
	inline void set_mTrackableBehaviour_4(TrackableBehaviour_t1113559212 * value)
	{
		___mTrackableBehaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIREFRAMETRACKABLEEVENTHANDLER_T2143753312_H
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Vuforia.TrackableBehaviour[]
struct TrackableBehaviourU5BU5D_t1497733925  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TrackableBehaviour_t1113559212 * m_Items[1];

public:
	inline TrackableBehaviour_t1113559212 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrackableBehaviour_t1113559212 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrackableBehaviour_t1113559212 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline TrackableBehaviour_t1113559212 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrackableBehaviour_t1113559212 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrackableBehaviour_t1113559212 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_t1417781964  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_t631007953 * m_Items[1];

public:
	inline Object_t631007953 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_t631007953 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_t631007953 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Object_t631007953 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_t631007953 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_t631007953 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t4294070825  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WebCamDevice_t1322781432  m_Items[1];

public:
	inline WebCamDevice_t1322781432  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_t1322781432 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_t1322781432  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WebCamDevice_t1322781432  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_t1322781432 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_t1322781432  value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Camera[]
struct CameraU5BU5D_t1709987734  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Camera_t4157153871 * m_Items[1];

public:
	inline Camera_t4157153871 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_t4157153871 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_t4157153871 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Camera_t4157153871 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_t4157153871 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_t4157153871 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t2600501292  m_Items[1];

public:
	inline Color32_t2600501292  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t2600501292  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t1773347010 * m_Items[1];

public:
	inline Collider_t1773347010 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider_t1773347010 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Vuforia.WireframeBehaviour[]
struct WireframeBehaviourU5BU5D_t4114094193  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WireframeBehaviour_t1831066704 * m_Items[1];

public:
	inline WireframeBehaviour_t1831066704 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WireframeBehaviour_t1831066704 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WireframeBehaviour_t1831066704 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline WireframeBehaviour_t1831066704 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WireframeBehaviour_t1831066704 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WireframeBehaviour_t1831066704 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t2627027031 * m_Items[1];

public:
	inline Renderer_t2627027031 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Renderer_t2627027031 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m3173759778_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m651737360_gshared (Dictionary_2_t1076537327 * __this, int32_t p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m290381969_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2011026989_gshared (Dictionary_2_t2059337159 * __this, TrackableIdPair_t4227350457  p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m147173929_gshared (Dictionary_2_t2059337159 * __this, TrackableIdPair_t4227350457  p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m2627653100_gshared (Dictionary_2_t2059337159 * __this, TrackableIdPair_t4227350457  p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2166441642_gshared (Dictionary_2_t2059337159 * __this, TrackableIdPair_t4227350457  p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,System.Object>::ContainsValue(!1)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m186574738_gshared (Dictionary_2_t2059337159 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Vuforia.VuforiaManager/TrackableIdPair>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m553929403_gshared (List_1_t1404457903 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t4013519934  Dictionary_2_GetEnumerator_m3881382093_gshared (Dictionary_2_t2059337159 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<Vuforia.VuforiaManager/TrackableIdPair,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t162042030  Enumerator_get_Current_m1790165184_gshared (Enumerator_t4013519934 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m451832980_gshared (KeyValuePair_2_t162042030 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR TrackableIdPair_t4227350457  KeyValuePair_2_get_Key_m2831188205_gshared (KeyValuePair_2_t162042030 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Vuforia.VuforiaManager/TrackableIdPair>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m1019040917_gshared (List_1_t1404457903 * __this, TrackableIdPair_t4227350457  p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Vuforia.VuforiaManager/TrackableIdPair,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1529889041_gshared (Enumerator_t4013519934 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Vuforia.VuforiaManager/TrackableIdPair,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m2725096567_gshared (Enumerator_t4013519934 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Vuforia.VuforiaManager/TrackableIdPair>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t3293701780  List_1_GetEnumerator_m3410319374_gshared (List_1_t1404457903 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<Vuforia.VuforiaManager/TrackableIdPair>::get_Current()
extern "C" IL2CPP_METHOD_ATTR TrackableIdPair_t4227350457  Enumerator_get_Current_m2497996742_gshared (Enumerator_t3293701780 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Vuforia.VuforiaManager/TrackableIdPair>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m335914463_gshared (Enumerator_t3293701780 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.VuforiaManager/TrackableIdPair>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3617080421_gshared (Enumerator_t3293701780 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<Vuforia.VuforiaManager/TrackableIdPair,System.Boolean>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Action_2_Invoke_m3936037408_gshared (Action_2_t1413982646 * __this, TrackableIdPair_t4227350457  p0, bool p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3796398253_gshared (Dictionary_2_t2059337159 * __this, const RuntimeMethod* method);
// !2 System.Func`3<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Func_3_Invoke_m1449428670_gshared (Func_3_t917206208 * __this, RuntimeObject * p0, ProfileData_t3519391925  p1, const RuntimeMethod* method);
// System.Void System.Func`3<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_3__ctor_m839136182_gshared (Func_3_t917206208 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// T[] Vuforia.UnityComponentExtensions::GetComponentsOnlyInChildren<System.Object>(UnityEngine.Component)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m2620794288_gshared (RuntimeObject * __this /* static, unused */, Component_t1923634451 * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3004143623_gshared (Dictionary_2_t571830913 * __this, RuntimeObject * p0, ProfileData_t3519391925 * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m757242677_gshared (Dictionary_2_t571830913 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* GameObject_GetComponentsInChildren_TisRuntimeObject_m678395080_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m3951560249_gshared (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method);

// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsWSARuntime()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsWSARuntime_m2144315235 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsPlayMode()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsPlayMode_m4165764373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// UnityEngine.ScreenOrientation Vuforia.SurfaceUtilities::GetSurfaceOrientation()
extern "C" IL2CPP_METHOD_ATTR int32_t SurfaceUtilities_GetSurfaceOrientation_m1170243099 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.ScreenOrientation Vuforia.VuforiaRuntimeUtilities::get_ScreenOrientation()
extern "C" IL2CPP_METHOD_ATTR int32_t VuforiaRuntimeUtilities_get_ScreenOrientation_m2326897546 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaRuntimeUtilities::get_IsLandscapeOrientation()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_get_IsLandscapeOrientation_m2557240032 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t1417781964* Object_FindObjectsOfType_m2295101757 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isEditor_m857789090 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" IL2CPP_METHOD_ATTR int32_t Application_get_platform_m2150679437 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsWebCamUsed()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsWebCamUsed_m1354890003 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::get_Instance()
extern "C" IL2CPP_METHOD_ATTR VuforiaConfiguration_t1763229349 * VuforiaConfiguration_get_Instance_m3335903280 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Vuforia.VuforiaConfiguration/WebCamConfiguration Vuforia.VuforiaConfiguration::get_WebCam()
extern "C" IL2CPP_METHOD_ATTR WebCamConfiguration_t1101614731 * VuforiaConfiguration_get_WebCam_m946983315 (VuforiaConfiguration_t1763229349 * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaConfiguration/WebCamConfiguration::get_TurnOffWebCam()
extern "C" IL2CPP_METHOD_ATTR bool WebCamConfiguration_get_TurnOffWebCam_m3008159002 (WebCamConfiguration_t1101614731 * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaRuntimeUtilities::CheckNativePluginSupport()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_CheckNativePluginSupport_m3955787202 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
extern "C" IL2CPP_METHOD_ATTR WebCamDeviceU5BU5D_t4294070825* WebCamTexture_get_devices_m844246756 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMin()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_xMin_m581135837 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMin()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_yMin_m2601414109 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_width_m3421484486 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_height_m1358425599 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// Vuforia.DigitalEyewearARController Vuforia.DigitalEyewearARController::get_Instance()
extern "C" IL2CPP_METHOD_ATTR DigitalEyewearARController_t1054226036 * DigitalEyewearARController_get_Instance_m3573866503 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Camera Vuforia.DigitalEyewearARController::get_PrimaryCamera()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * DigitalEyewearARController_get_PrimaryCamera_m3122713263 (DigitalEyewearARController_t1054226036 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToScreenPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Camera_ViewportToScreenPoint_m2264305958 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaRuntimeUtilities::PrepareCoordinateConversion(System.Boolean,System.Single&,System.Single&,System.Single&,System.Single&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR void VuforiaRuntimeUtilities_PrepareCoordinateConversion_m4247151566 (RuntimeObject * __this /* static, unused */, bool ___isTextureMirrored0, float* ___prefixX1, float* ___prefixY2, float* ___inversionMultiplierX3, float* ___inversionMultiplierY4, bool* ___isPortrait5, const RuntimeMethod* method);
// UnityEngine.Vector2 Vuforia.VuforiaRuntimeUtilities::ScreenSpaceToCameraFrameCoordinatesNormalized(UnityEngine.Vector2,UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  VuforiaRuntimeUtilities_ScreenSpaceToCameraFrameCoordinatesNormalized_m3818702030 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___screenSpaceCoordinate0, Rect_t2360479859  ___bgTextureViewPortRect1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m1874334613 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaRenderer/Vec2I::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Vec2I__ctor_m1553072655 (Vec2I_t3527036565 * __this, int32_t ___v10, int32_t ___v21, const RuntimeMethod* method);
// UnityEngine.Vector2 Vuforia.OrientedBoundingBox::get_Center()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  OrientedBoundingBox_get_Center_m2859290232 (OrientedBoundingBox_t2769728497 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Vuforia.VuforiaRuntimeUtilities::CameraFrameToScreenSpaceCoordinates(UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m3783275716 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___cameraFrameCoordinate0, Rect_t2360479859  ___bgTextureViewPortRect1, bool ___isTextureMirrored2, VideoModeData_t2066817255  ___videoModeData3, const RuntimeMethod* method);
// UnityEngine.Vector2 Vuforia.OrientedBoundingBox::get_HalfExtents()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  OrientedBoundingBox_get_HalfExtents_m2496086635 (OrientedBoundingBox_t2769728497 * __this, const RuntimeMethod* method);
// System.Single Vuforia.OrientedBoundingBox::get_Rotation()
extern "C" IL2CPP_METHOD_ATTR float OrientedBoundingBox_get_Rotation_m1713103466 (OrientedBoundingBox_t2769728497 * __this, const RuntimeMethod* method);
// System.Void Vuforia.OrientedBoundingBox::.ctor(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR void OrientedBoundingBox__ctor_m1736506094 (OrientedBoundingBox_t2769728497 * __this, Vector2_t2156229523  ___center0, Vector2_t2156229523  ___halfExtents1, float ___rotation2, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMax()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_xMax_m3018144503 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMax()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_yMax_m743455479 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_m2277210665 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_m134152955 (Matrix4x4_t1817901843 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Single::IsNaN(System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Single_IsNaN_m4024467661 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// Vuforia.IVuforiaWrapper Vuforia.VuforiaWrapper::get_Instance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VuforiaWrapper_get_Instance_m2947582594 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 Vuforia.VuforiaRuntimeUtilities::qcarCheckNativePluginSupport()
extern "C" IL2CPP_METHOD_ATTR int32_t VuforiaRuntimeUtilities_qcarCheckNativePluginSupport_m1077402821 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Vuforia.CameraDevice Vuforia.CameraDevice::get_Instance()
extern "C" IL2CPP_METHOD_ATTR CameraDevice_t960297568 * CameraDevice_get_Instance_m2002290155 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Vuforia.CameraDevice::IsActive()
extern "C" IL2CPP_METHOD_ATTR bool CameraDevice_IsActive_m3060040988 (CameraDevice_t960297568 * __this, const RuntimeMethod* method);
// Vuforia.ITrackerManager Vuforia.TrackerManager::get_Instance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TrackerManager_get_Instance_m777262631 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTracker::GetActiveDataSets()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ObjectTracker_GetActiveDataSets_m254019146 (ObjectTracker_t4177997237 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<Vuforia.DataSet>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisDataSet_t3286034874_m2986703799 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m3173759778_gshared)(__this /* static, unused */, p0, method);
}
// Vuforia.TargetFinder Vuforia.ObjectTracker::get_TargetFinder()
extern "C" IL2CPP_METHOD_ATTR TargetFinder_t2439332195 * ObjectTracker_get_TargetFinder_m2531194621 (ObjectTracker_t4177997237 * __this, const RuntimeMethod* method);
// Vuforia.TargetFinder/InitState Vuforia.TargetFinder::GetInitState()
extern "C" IL2CPP_METHOD_ATTR int32_t TargetFinder_GetInitState_m2212814286 (TargetFinder_t2439332195 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget> Vuforia.TargetFinder::GetImageTargets()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TargetFinder_GetImageTargets_m2676471060 (TargetFinder_t2439332195 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<Vuforia.ImageTarget>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisImageTarget_t3707016494_m18292949 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m3173759778_gshared)(__this /* static, unused */, p0, method);
}
// Vuforia.ImageTargetBuilder Vuforia.ObjectTracker::get_ImageTargetBuilder()
extern "C" IL2CPP_METHOD_ATTR ImageTargetBuilder_t2430893908 * ObjectTracker_get_ImageTargetBuilder_m1359968304 (ObjectTracker_t4177997237 * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.ImageTargetBuilder::IsScanning()
extern "C" IL2CPP_METHOD_ATTR bool ImageTargetBuilder_IsScanning_m3912541761 (ImageTargetBuilder_t2430893908 * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsPositionalDeviceTrackerActive()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsPositionalDeviceTrackerActive_m3052908928 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Vuforia.CameraDevice::Stop()
extern "C" IL2CPP_METHOD_ATTR bool CameraDevice_Stop_m1782631459 (CameraDevice_t960297568 * __this, const RuntimeMethod* method);
// Vuforia.IHoloLensApiAbstraction Vuforia.VuforiaUnity::GetHoloLensApiAbstraction()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VuforiaUnity_GetHoloLensApiAbstraction_m3725012548 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Byte[] System.Convert::FromBase64String(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Convert_FromBase64String_m3685135396 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.Convert::ToBase64String(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_m3839334935 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method);
// System.Boolean Vuforia.CameraDevice::get_CameraReady()
extern "C" IL2CPP_METHOD_ATTR bool CameraDevice_get_CameraReady_m2785241585 (CameraDevice_t960297568 * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.CameraDevice::GetSelectedCameraDirection(Vuforia.CameraDevice/CameraDirection&)
extern "C" IL2CPP_METHOD_ATTR bool CameraDevice_GetSelectedCameraDirection_m557891554 (CameraDevice_t960297568 * __this, int32_t* ___cameraDirection0, const RuntimeMethod* method);
// System.Boolean Vuforia.CameraDevice::GetSelectedVideoMode(Vuforia.CameraDevice/CameraDeviceMode&)
extern "C" IL2CPP_METHOD_ATTR bool CameraDevice_GetSelectedVideoMode_m3911637174 (CameraDevice_t960297568 * __this, int32_t* ___mode0, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaRuntimeUtilities/CameraState::.ctor(System.Boolean,System.Boolean,Vuforia.CameraDevice/CameraDirection,Vuforia.CameraDevice/CameraDeviceMode)
extern "C" IL2CPP_METHOD_ATTR void CameraState__ctor_m2095580676 (CameraState_t1646041879 * __this, bool ___initialized0, bool ___active1, int32_t ___cameraDirection2, int32_t ___deviceMode3, const RuntimeMethod* method);
// Vuforia.VuforiaRuntimeUtilities/CameraState Vuforia.VuforiaRuntimeUtilities::GetCameraState()
extern "C" IL2CPP_METHOD_ATTR CameraState_t1646041879  VuforiaRuntimeUtilities_GetCameraState_m1262028323 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaRuntimeUtilities/CameraState::get_Initialized()
extern "C" IL2CPP_METHOD_ATTR bool CameraState_get_Initialized_m468400558 (CameraState_t1646041879 * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaRuntimeUtilities/CameraState::get_Active()
extern "C" IL2CPP_METHOD_ATTR bool CameraState_get_Active_m552154702 (CameraState_t1646041879 * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.CameraDevice::Deinit()
extern "C" IL2CPP_METHOD_ATTR bool CameraDevice_Deinit_m726427492 (CameraDevice_t960297568 * __this, const RuntimeMethod* method);
// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaRuntimeUtilities/CameraState::get_CameraDirection()
extern "C" IL2CPP_METHOD_ATTR int32_t CameraState_get_CameraDirection_m2200184139 (CameraState_t1646041879 * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.CameraDevice::Init(Vuforia.CameraDevice/CameraDirection)
extern "C" IL2CPP_METHOD_ATTR bool CameraDevice_Init_m2722714107 (CameraDevice_t960297568 * __this, int32_t ___cameraDirection0, const RuntimeMethod* method);
// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaRuntimeUtilities/CameraState::get_DeviceMode()
extern "C" IL2CPP_METHOD_ATTR int32_t CameraState_get_DeviceMode_m2257768327 (CameraState_t1646041879 * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.CameraDevice::SelectVideoMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C" IL2CPP_METHOD_ATTR bool CameraDevice_SelectVideoMode_m3994320945 (CameraDevice_t960297568 * __this, int32_t ___mode0, const RuntimeMethod* method);
// System.Boolean Vuforia.CameraDevice::Start()
extern "C" IL2CPP_METHOD_ATTR bool CameraDevice_Start_m2947498176 (CameraDevice_t960297568 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.CameraDevice::IsDirty()
extern "C" IL2CPP_METHOD_ATTR bool CameraDevice_IsDirty_m446381236 (CameraDevice_t960297568 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2367297767 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_unityVersion()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m1068543125 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String[] System.Text.RegularExpressions.Regex::Split(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* Regex_Split_m3767700898 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Int32_Parse_m1033611559 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void Vuforia.NullHoloLensApiAbstraction::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NullHoloLensApiAbstraction__ctor_m1783196481 (NullHoloLensApiAbstraction_t2968904009 * __this, const RuntimeMethod* method);
// System.Void Vuforia.VRDeviceCameraConfiguration::.ctor(UnityEngine.Camera,Vuforia.VRDeviceController)
extern "C" IL2CPP_METHOD_ATTR void VRDeviceCameraConfiguration__ctor_m1851221678 (VRDeviceCameraConfiguration_t3015543037 * __this, Camera_t4157153871 * ___cam0, VRDeviceController_t3863472269 * ___vrDeviceController1, const RuntimeMethod* method);
// System.Void Vuforia.StereoProjMatrixStore::.ctor(UnityEngine.Camera,Vuforia.StereoProjMatrixStore/Mode)
extern "C" IL2CPP_METHOD_ATTR void StereoProjMatrixStore__ctor_m1594058727 (StereoProjMatrixStore_t888524276 * __this, Camera_t4157153871 * ___cam0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void Vuforia.VRDeviceCameraConfiguration::Init()
extern "C" IL2CPP_METHOD_ATTR void VRDeviceCameraConfiguration_Init_m1528532934 (VRDeviceCameraConfiguration_t3015543037 * __this, const RuntimeMethod* method);
// System.Void Vuforia.VRDeviceController::DisableHeadPoseUpdates(System.String)
extern "C" IL2CPP_METHOD_ATTR void VRDeviceController_DisableHeadPoseUpdates_m2210953270 (VRDeviceController_t3863472269 * __this, String_t* ___requestingClass0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Vuforia.CameraConfigurationUtility::SetVRDeviceStereoOffset(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void CameraConfigurationUtility_SetVRDeviceStereoOffset_m585534095 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___leftCameraPosition0, Quaternion_t2301928331  ___leftCameraRotation1, Vector3_t3722313464  ___rightCameraPosition2, Quaternion_t2301928331  ___rightCameraRotation3, const RuntimeMethod* method);
// System.Void Vuforia.StereoProjMatrixStore::SetDeviceOffset(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void StereoProjMatrixStore_SetDeviceOffset_m4045855105 (StereoProjMatrixStore_t888524276 * __this, Vector3_t3722313464  ___leftEyeOffsetPos0, Quaternion_t2301928331  ___leftEyeOffsetRot1, Vector3_t3722313464  ___rightEyeOffsetPos2, Quaternion_t2301928331  ___rightEyeOffsetRot3, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaVRDeviceCameraConfiguration::IsVuforiaVRDeviceReady()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaVRDeviceCameraConfiguration_IsVuforiaVRDeviceReady_m2144715820 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Vuforia.VRDeviceCameraConfiguration::CheckForSurfaceChanges()
extern "C" IL2CPP_METHOD_ATTR void VRDeviceCameraConfiguration_CheckForSurfaceChanges_m3256944383 (VRDeviceCameraConfiguration_t3015543037 * __this, const RuntimeMethod* method);
// System.Void Vuforia.VRDeviceCameraConfiguration::OnAfterUpdateState(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void VRDeviceCameraConfiguration_OnAfterUpdateState_m2749658649 (VRDeviceCameraConfiguration_t3015543037 * __this, Transform_t3600365921 * ___trackingReference0, const RuntimeMethod* method);
// System.Boolean Vuforia.BaseCameraConfiguration::IsVideoBackgroundEnabled()
extern "C" IL2CPP_METHOD_ATTR bool BaseCameraConfiguration_IsVideoBackgroundEnabled_m601870270 (BaseCameraConfiguration_t3118151474 * __this, const RuntimeMethod* method);
// System.Void Vuforia.VRDeviceCameraConfiguration::RestoreVuforiaFrustumSkewInMatrices()
extern "C" IL2CPP_METHOD_ATTR void VRDeviceCameraConfiguration_RestoreVuforiaFrustumSkewInMatrices_m1301323031 (VRDeviceCameraConfiguration_t3015543037 * __this, const RuntimeMethod* method);
// System.Void Vuforia.VRDeviceCameraConfiguration::OnVideoBackGroundEnabledChanged()
extern "C" IL2CPP_METHOD_ATTR void VRDeviceCameraConfiguration_OnVideoBackGroundEnabledChanged_m2975701053 (VRDeviceCameraConfiguration_t3015543037 * __this, const RuntimeMethod* method);
// System.Void Vuforia.VRDeviceCameraConfiguration::Destroy()
extern "C" IL2CPP_METHOD_ATTR void VRDeviceCameraConfiguration_Destroy_m2195074621 (VRDeviceCameraConfiguration_t3015543037 * __this, const RuntimeMethod* method);
// System.Void Vuforia.VRDeviceController::EnableHeadPoseUpdates(System.String)
extern "C" IL2CPP_METHOD_ATTR void VRDeviceController_EnableHeadPoseUpdates_m2887400636 (VRDeviceController_t3863472269 * __this, String_t* ___requestingClass0, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsVuforiaEnabled()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m837839537 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m538536689 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// Vuforia.Device Vuforia.Device::get_Instance()
extern "C" IL2CPP_METHOD_ATTR Device_t64880687 * Device_get_Instance_m641318052 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 Vuforia.Device::GetProjectionMatrix(Vuforia.View,System.Single,System.Single,UnityEngine.ScreenOrientation)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  Device_GetProjectionMatrix_m2279704666 (Device_t64880687 * __this, int32_t ___viewId0, float ___near1, float ___far2, int32_t ___screenOrientation3, const RuntimeMethod* method);
// System.Single Vuforia.StereoProjMatrixStore::GetCurrentVerticalFov(UnityEngine.Camera/StereoscopicEye)
extern "C" IL2CPP_METHOD_ATTR float StereoProjMatrixStore_GetCurrentVerticalFov_m3577900539 (StereoProjMatrixStore_t888524276 * __this, int32_t ___eye0, const RuntimeMethod* method);
// System.Single Vuforia.StereoProjMatrixStore::GetCurrentHorizontalFov(UnityEngine.Camera/StereoscopicEye)
extern "C" IL2CPP_METHOD_ATTR float StereoProjMatrixStore_GetCurrentHorizontalFov_m1027576027 (StereoProjMatrixStore_t888524276 * __this, int32_t ___eye0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 Vuforia.CameraConfigurationUtility::ScalePerspectiveProjectionMatrix(UnityEngine.Matrix4x4,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  CameraConfigurationUtility_ScalePerspectiveProjectionMatrix_m3287947876 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___inputMatrix0, float ___targetVerticalFoVDeg1, float ___targetHorizontalFoVDeg2, const RuntimeMethod* method);
// System.Void Vuforia.StereoProjMatrixStore::SetMatrix(UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR void StereoProjMatrixStore_SetMatrix_m1651838202 (StereoProjMatrixStore_t888524276 * __this, int32_t ___eye0, Matrix4x4_t1817901843  ___matrix1, const RuntimeMethod* method);
// UnityEngine.Vector2 Vuforia.Device::GetViewportCentreToEyeAxis(Vuforia.View)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Device_GetViewportCentreToEyeAxis_m1922693054 (Device_t64880687 * __this, int32_t ___viewId0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m651737360 (Dictionary_2_t1076537327 * __this, int32_t p0, Vector2_t2156229523  p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1076537327 *, int32_t, Vector2_t2156229523 , const RuntimeMethod*))Dictionary_2_set_Item_m651737360_gshared)(__this, p0, p1, method);
}
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  Matrix4x4_get_inverse_m1870592360 (Matrix4x4_t1817901843 * __this, const RuntimeMethod* method);
// System.Single Vuforia.CameraConfigurationUtility::GetMaxDepthForVideoBackground(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR float CameraConfigurationUtility_GetMaxDepthForVideoBackground_m4148360315 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___inverseProjMatrix0, const RuntimeMethod* method);
// System.Single Vuforia.CameraConfigurationUtility::GetMinDepthForVideoBackground(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR float CameraConfigurationUtility_GetMinDepthForVideoBackground_m1163416856 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___inverseProjMatrix0, const RuntimeMethod* method);
// System.Void Vuforia.VRDeviceCameraConfiguration::ApplyStereoDepthToMatrices()
extern "C" IL2CPP_METHOD_ATTR void VRDeviceCameraConfiguration_ApplyStereoDepthToMatrices_m1392834803 (VRDeviceCameraConfiguration_t3015543037 * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.BaseCameraConfiguration::ProjectionParamsChanged()
extern "C" IL2CPP_METHOD_ATTR bool BaseCameraConfiguration_ProjectionParamsChanged_m2207724039 (BaseCameraConfiguration_t3118151474 * __this, const RuntimeMethod* method);
// System.Single Vuforia.StereoProjMatrixStore::GetLastAppliedVerticalFov(UnityEngine.Camera/StereoscopicEye)
extern "C" IL2CPP_METHOD_ATTR float StereoProjMatrixStore_GetLastAppliedVerticalFov_m3152920336 (StereoProjMatrixStore_t888524276 * __this, int32_t ___eye0, const RuntimeMethod* method);
// Vuforia.IUnityPlayer Vuforia.UnityPlayer::get_Instance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityPlayer_get_Instance_m348759883 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaWrapper::CreateRuntimeInstance()
extern "C" IL2CPP_METHOD_ATTR void VuforiaWrapper_CreateRuntimeInstance_m1561005390 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaWrapper::CreateCamIndependentInstance()
extern "C" IL2CPP_METHOD_ATTR void VuforiaWrapper_CreateCamIndependentInstance_m77460357 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaNativeWrapper::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VuforiaNativeWrapper__ctor_m3689604155 (VuforiaNativeWrapper_t2621726075 * __this, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaNullWrapper::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VuforiaNullWrapper__ctor_m4220783226 (VuforiaNullWrapper_t2343315499 * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsNativePluginSupportAvailable()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsNativePluginSupportAvailable_m4173160650 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Vuforia.WSAUnityPlayer::setPlatFormNative()
extern "C" IL2CPP_METHOD_ATTR void WSAUnityPlayer_setPlatFormNative_m3566627842 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 Vuforia.WSAUnityPlayer::initVuforiaWSA(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t WSAUnityPlayer_initVuforiaWSA_m979993821 (RuntimeObject * __this /* static, unused */, String_t* ___licenseKey0, const RuntimeMethod* method);
// System.Void Vuforia.WSAUnityPlayer::InitializeSurface()
extern "C" IL2CPP_METHOD_ATTR void WSAUnityPlayer_InitializeSurface_m1007153949 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.XRSettings::get_loadedDeviceName()
extern "C" IL2CPP_METHOD_ATTR String_t* XRSettings_get_loadedDeviceName_m2020127682 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDevice::get_isPresent()
extern "C" IL2CPP_METHOD_ATTR bool XRDevice_get_isPresent_m3184523938 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Vuforia.WSAUnityPlayer/HoloLensApiImplementation::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HoloLensApiImplementation__ctor_m1467655506 (HoloLensApiImplementation_t262900719 * __this, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaUnity::SetHoloLensApiAbstraction(Vuforia.IHoloLensApiAbstraction)
extern "C" IL2CPP_METHOD_ATTR void VuforiaUnity_SetHoloLensApiAbstraction_m2124408801 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___holoLensApiAbstraction0, const RuntimeMethod* method);
// Vuforia.DeviceTrackerARController Vuforia.DeviceTrackerARController::get_Instance()
extern "C" IL2CPP_METHOD_ATTR DeviceTrackerARController_t1095592542 * DeviceTrackerARController_get_Instance_m1618232027 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DeviceTrackerConfiguration__ctor_m2810033191 (DeviceTrackerConfiguration_t721467671 * __this, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaConfiguration/TrackerConfiguration::set_AutoInitAndStartTracker(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TrackerConfiguration_set_AutoInitAndStartTracker_m1359034220 (TrackerConfiguration_t3072429111 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::set_TrackingMode(Vuforia.DeviceTracker/TRACKING_MODE)
extern "C" IL2CPP_METHOD_ATTR void DeviceTrackerConfiguration_set_TrackingMode_m2029048904 (DeviceTrackerConfiguration_t721467671 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Vuforia.DeviceTrackerARController::SetDeviceTrackerConfiguration(Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration)
extern "C" IL2CPP_METHOD_ATTR void DeviceTrackerARController_SetDeviceTrackerConfiguration_m1557799529 (DeviceTrackerARController_t1095592542 * __this, DeviceTrackerConfiguration_t721467671 * ___config0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.WSA.WorldManager::GetNativeISpatialCoordinateSystemPtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t WorldManager_GetNativeISpatialCoordinateSystemPtr_m2915101162 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaUnity::SetHolographicAppCoordinateSystem(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool VuforiaUnity_SetHolographicAppCoordinateSystem_m1027427466 (RuntimeObject * __this /* static, unused */, intptr_t ___appSpecifiedCS0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean Vuforia.SurfaceUtilities::HasSurfaceBeenRecreated()
extern "C" IL2CPP_METHOD_ATTR bool SurfaceUtilities_HasSurfaceBeenRecreated_m182283807 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.ScreenOrientation Vuforia.WSAUnityPlayer::GetActualScreenOrientation()
extern "C" IL2CPP_METHOD_ATTR int32_t WSAUnityPlayer_GetActualScreenOrientation_m1268631473 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method);
// System.Void Vuforia.WSAUnityPlayer::SetUnityScreenOrientation()
extern "C" IL2CPP_METHOD_ATTR void WSAUnityPlayer_SetUnityScreenOrientation_m1871021514 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaUnity::OnPause()
extern "C" IL2CPP_METHOD_ATTR void VuforiaUnity_OnPause_m325849098 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaUnity::OnResume()
extern "C" IL2CPP_METHOD_ATTR void VuforiaUnity_OnResume_m2059515051 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaUnity::Deinit()
extern "C" IL2CPP_METHOD_ATTR void VuforiaUnity_Deinit_m1714227419 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Vuforia.SurfaceUtilities::OnSurfaceCreated()
extern "C" IL2CPP_METHOD_ATTR void SurfaceUtilities_OnSurfaceCreated_m4147616086 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Vuforia.SurfaceUtilities::SetSurfaceOrientation(UnityEngine.ScreenOrientation)
extern "C" IL2CPP_METHOD_ATTR void SurfaceUtilities_SetSurfaceOrientation_m1970989629 (RuntimeObject * __this /* static, unused */, int32_t ___screenOrientation0, const RuntimeMethod* method);
// System.Void Vuforia.WSAUnityPlayer::setSurfaceOrientationWSA(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WSAUnityPlayer_setSurfaceOrientationWSA_m754964588 (RuntimeObject * __this /* static, unused */, int32_t ___screenOrientation0, const RuntimeMethod* method);
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_m3354122719 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.DeviceOrientation UnityEngine.Input::get_deviceOrientation()
extern "C" IL2CPP_METHOD_ATTR int32_t Input_get_deviceOrientation_m1569488603 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.XR.WSA.WorldAnchor>()
inline WorldAnchor_t2161774153 * GameObject_AddComponent_TisWorldAnchor_t2161774153_m1146425241 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  WorldAnchor_t2161774153 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m290381969_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,UnityEngine.XR.WSA.WorldAnchor>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m3931702618 (Dictionary_2_t1141005148 * __this, TrackableIdPair_t4227350457  p0, WorldAnchor_t2161774153 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1141005148 *, TrackableIdPair_t4227350457 , WorldAnchor_t2161774153 *, const RuntimeMethod*))Dictionary_2_set_Item_m2011026989_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate__ctor_m637460647 (OnTrackingChangedDelegate_t3480415086 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WorldAnchor::add_OnTrackingChanged(UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchor_add_OnTrackingChanged_m459279320 (WorldAnchor_t2161774153 * __this, OnTrackingChangedDelegate_t3480415086 * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,UnityEngine.XR.WSA.WorldAnchor>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m3931265510 (Dictionary_2_t1141005148 * __this, TrackableIdPair_t4227350457  p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1141005148 *, TrackableIdPair_t4227350457 , const RuntimeMethod*))Dictionary_2_ContainsKey_m147173929_gshared)(__this, p0, method);
}
// !1 System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,UnityEngine.XR.WSA.WorldAnchor>::get_Item(!0)
inline WorldAnchor_t2161774153 * Dictionary_2_get_Item_m479432706 (Dictionary_2_t1141005148 * __this, TrackableIdPair_t4227350457  p0, const RuntimeMethod* method)
{
	return ((  WorldAnchor_t2161774153 * (*) (Dictionary_2_t1141005148 *, TrackableIdPair_t4227350457 , const RuntimeMethod*))Dictionary_2_get_Item_m2627653100_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,UnityEngine.XR.WSA.WorldAnchor>::Remove(!0)
inline bool Dictionary_2_Remove_m722751029 (Dictionary_2_t1141005148 * __this, TrackableIdPair_t4227350457  p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1141005148 *, TrackableIdPair_t4227350457 , const RuntimeMethod*))Dictionary_2_Remove_m2166441642_gshared)(__this, p0, method);
}
// System.Void Vuforia.WSAUnityPlayer/HoloLensApiImplementation::InternalDeleteWA(UnityEngine.XR.WSA.WorldAnchor)
extern "C" IL2CPP_METHOD_ATTR void HoloLensApiImplementation_InternalDeleteWA_m1699531741 (HoloLensApiImplementation_t262900719 * __this, WorldAnchor_t2161774153 * ___wa0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.XR.WSA.WorldAnchor>()
inline WorldAnchor_t2161774153 * Component_GetComponent_TisWorldAnchor_t2161774153_m2159763270 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  WorldAnchor_t2161774153 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,UnityEngine.XR.WSA.WorldAnchor>::ContainsValue(!1)
inline bool Dictionary_2_ContainsValue_m3973620170 (Dictionary_2_t1141005148 * __this, WorldAnchor_t2161774153 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1141005148 *, WorldAnchor_t2161774153 *, const RuntimeMethod*))Dictionary_2_ContainsValue_m186574738_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<Vuforia.VuforiaManager/TrackableIdPair>::.ctor()
inline void List_1__ctor_m553929403 (List_1_t1404457903 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1404457903 *, const RuntimeMethod*))List_1__ctor_m553929403_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,UnityEngine.XR.WSA.WorldAnchor>::GetEnumerator()
inline Enumerator_t3095187923  Dictionary_2_GetEnumerator_m4020718675 (Dictionary_2_t1141005148 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3095187923  (*) (Dictionary_2_t1141005148 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3881382093_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<Vuforia.VuforiaManager/TrackableIdPair,UnityEngine.XR.WSA.WorldAnchor>::get_Current()
inline KeyValuePair_2_t3538677315  Enumerator_get_Current_m1400196701 (Enumerator_t3095187923 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t3538677315  (*) (Enumerator_t3095187923 *, const RuntimeMethod*))Enumerator_get_Current_m1790165184_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,UnityEngine.XR.WSA.WorldAnchor>::get_Value()
inline WorldAnchor_t2161774153 * KeyValuePair_2_get_Value_m3787101018 (KeyValuePair_2_t3538677315 * __this, const RuntimeMethod* method)
{
	return ((  WorldAnchor_t2161774153 * (*) (KeyValuePair_2_t3538677315 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m451832980_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,UnityEngine.XR.WSA.WorldAnchor>::get_Key()
inline TrackableIdPair_t4227350457  KeyValuePair_2_get_Key_m3336906090 (KeyValuePair_2_t3538677315 * __this, const RuntimeMethod* method)
{
	return ((  TrackableIdPair_t4227350457  (*) (KeyValuePair_2_t3538677315 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2831188205_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Vuforia.VuforiaManager/TrackableIdPair>::Add(!0)
inline void List_1_Add_m1019040917 (List_1_t1404457903 * __this, TrackableIdPair_t4227350457  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1404457903 *, TrackableIdPair_t4227350457 , const RuntimeMethod*))List_1_Add_m1019040917_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Vuforia.VuforiaManager/TrackableIdPair,UnityEngine.XR.WSA.WorldAnchor>::MoveNext()
inline bool Enumerator_MoveNext_m2371253146 (Enumerator_t3095187923 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3095187923 *, const RuntimeMethod*))Enumerator_MoveNext_m1529889041_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Vuforia.VuforiaManager/TrackableIdPair,UnityEngine.XR.WSA.WorldAnchor>::Dispose()
inline void Enumerator_Dispose_m3537662908 (Enumerator_t3095187923 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3095187923 *, const RuntimeMethod*))Enumerator_Dispose_m2725096567_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Vuforia.VuforiaManager/TrackableIdPair>::GetEnumerator()
inline Enumerator_t3293701780  List_1_GetEnumerator_m3410319374 (List_1_t1404457903 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3293701780  (*) (List_1_t1404457903 *, const RuntimeMethod*))List_1_GetEnumerator_m3410319374_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Vuforia.VuforiaManager/TrackableIdPair>::get_Current()
inline TrackableIdPair_t4227350457  Enumerator_get_Current_m2497996742 (Enumerator_t3293701780 * __this, const RuntimeMethod* method)
{
	return ((  TrackableIdPair_t4227350457  (*) (Enumerator_t3293701780 *, const RuntimeMethod*))Enumerator_get_Current_m2497996742_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Vuforia.VuforiaManager/TrackableIdPair>::MoveNext()
inline bool Enumerator_MoveNext_m335914463 (Enumerator_t3293701780 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3293701780 *, const RuntimeMethod*))Enumerator_MoveNext_m335914463_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.VuforiaManager/TrackableIdPair>::Dispose()
inline void Enumerator_Dispose_m3617080421 (Enumerator_t3293701780 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3293701780 *, const RuntimeMethod*))Enumerator_Dispose_m3617080421_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.WorldAnchor::remove_OnTrackingChanged(UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchor_remove_OnTrackingChanged_m4081248362 (WorldAnchor_t2161774153 * __this, OnTrackingChangedDelegate_t3480415086 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m3193525861 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void System.Action`2<Vuforia.VuforiaManager/TrackableIdPair,System.Boolean>::Invoke(!0,!1)
inline void Action_2_Invoke_m3936037408 (Action_2_t1413982646 * __this, TrackableIdPair_t4227350457  p0, bool p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t1413982646 *, TrackableIdPair_t4227350457 , bool, const RuntimeMethod*))Action_2_Invoke_m3936037408_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.VuforiaManager/TrackableIdPair,UnityEngine.XR.WSA.WorldAnchor>::.ctor()
inline void Dictionary_2__ctor_m2463376224 (Dictionary_2_t1141005148 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1141005148 *, const RuntimeMethod*))Dictionary_2__ctor_m3796398253_gshared)(__this, method);
}
// System.Boolean Vuforia.WebCam::get_IsTextureSizeAvailable()
extern "C" IL2CPP_METHOD_ATTR bool WebCam_get_IsTextureSizeAvailable_m2013217807 (WebCam_t2427002488 * __this, const RuntimeMethod* method);
// System.Int32 Vuforia.TextureRenderer::get_Width()
extern "C" IL2CPP_METHOD_ATTR int32_t TextureRenderer_get_Width_m3088621639 (TextureRenderer_t3278815845 * __this, const RuntimeMethod* method);
// System.Int32 Vuforia.TextureRenderer::get_Height()
extern "C" IL2CPP_METHOD_ATTR int32_t TextureRenderer_get_Height_m721659918 (TextureRenderer_t3278815845 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" IL2CPP_METHOD_ATTR int32_t Camera_get_cullingMask_m679085748 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_cullingMask_m1402455777 (Camera_t4157153871 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void Vuforia.WebCamProfile::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WebCamProfile__ctor_m820471938 (WebCamProfile_t4166408645 * __this, const RuntimeMethod* method);
// System.String UnityEngine.WebCamDevice::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* WebCamDevice_get_name_m3782173082 (WebCamDevice_t1322781432 * __this, const RuntimeMethod* method);
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::GetProfile(System.String)
extern "C" IL2CPP_METHOD_ATTR ProfileData_t3519391925  WebCamProfile_GetProfile_m3959388229 (WebCamProfile_t4166408645 * __this, String_t* ___webcamName0, const RuntimeMethod* method);
// !2 System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>::Invoke(!0,!1)
inline RuntimeObject* Func_3_Invoke_m2574976179 (Func_3_t3440825513 * __this, String_t* p0, ProfileData_t3519391925  p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_3_t3440825513 *, String_t*, ProfileData_t3519391925 , const RuntimeMethod*))Func_3_Invoke_m1449428670_gshared)(__this, p0, p1, method);
}
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::get_Default()
extern "C" IL2CPP_METHOD_ATTR ProfileData_t3519391925  WebCamProfile_get_Default_m3789142228 (WebCamProfile_t4166408645 * __this, const RuntimeMethod* method);
// System.Void Vuforia.DefaultWebCamTexAdaptor::.ctor(System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C" IL2CPP_METHOD_ATTR void DefaultWebCamTexAdaptor__ctor_m299475590 (DefaultWebCamTexAdaptor_t2452636845 * __this, int32_t ___requestedFPS0, Vec2I_t3527036565  ___requestedTextureSize1, const RuntimeMethod* method);
// System.Void Vuforia.WebCam::StartCamera()
extern "C" IL2CPP_METHOD_ATTR void WebCam_StartCamera_m784729827 (WebCam_t2427002488 * __this, const RuntimeMethod* method);
// System.Void Vuforia.WebCam::StopCamera()
extern "C" IL2CPP_METHOD_ATTR void WebCam_StopCamera_m1511219799 (WebCam_t2427002488 * __this, const RuntimeMethod* method);
// UnityEngine.RenderTexture Vuforia.TextureRenderer::Render()
extern "C" IL2CPP_METHOD_ATTR RenderTexture_t2108887433 * TextureRenderer_Render_m2768706254 (TextureRenderer_t3278815845 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void RenderTexture_set_active_m1437732586 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m1510783487 (Texture2D_t3840446185 * __this, Rect_t2360479859  p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method);
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
extern "C" IL2CPP_METHOD_ATTR Color32U5BU5D_t3850468773* Texture2D_GetPixels32_m647746242 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m2400081536 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * p0, const RuntimeMethod* method);
// Vuforia.VuforiaRenderer Vuforia.VuforiaRenderer::get_Instance()
extern "C" IL2CPP_METHOD_ATTR VuforiaRenderer_t3433045970 * VuforiaRenderer_get_Instance_m1013623488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Texture Vuforia.VuforiaRenderer::get_VideoBackgroundTexture()
extern "C" IL2CPP_METHOD_ATTR Texture_t3661962703 * VuforiaRenderer_get_VideoBackgroundTexture_m954851426 (VuforiaRenderer_t3433045970 * __this, const RuntimeMethod* method);
// Vuforia.Image Vuforia.CameraDevice::GetCameraImage(Vuforia.Image/PIXEL_FORMAT)
extern "C" IL2CPP_METHOD_ATTR Image_t745056343 * CameraDevice_GetCameraImage_m151166382 (CameraDevice_t960297568 * __this, int32_t ___format0, const RuntimeMethod* method);
// System.Int32 Vuforia.Image::get_BufferWidth()
extern "C" IL2CPP_METHOD_ATTR int32_t Image_get_BufferWidth_m2324972437 (Image_t745056343 * __this, const RuntimeMethod* method);
// System.Int32 Vuforia.Image::get_BufferHeight()
extern "C" IL2CPP_METHOD_ATTR int32_t Image_get_BufferHeight_m1709821308 (Image_t745056343 * __this, const RuntimeMethod* method);
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
extern "C" IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_m2371899271 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture2D::Resize(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool Texture2D_Resize_m2702227255 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method);
// UnityEngine.Color32[] Vuforia.Image::GetPixels32()
extern "C" IL2CPP_METHOD_ATTR Color32U5BU5D_t3850468773* Image_GetPixels32_m1416524729 (Image_t745056343 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[])
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixels32_m1141065075 (Texture2D_t3840446185 * __this, Color32U5BU5D_t3850468773* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// System.Void Vuforia.WebCam::set_IsTextureSizeAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WebCam_set_IsTextureSizeAvailable_m2087388218 (WebCam_t2427002488 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Vuforia.TextureRenderer::Destroy()
extern "C" IL2CPP_METHOD_ATTR void TextureRenderer_Destroy_m719921383 (TextureRenderer_t3278815845 * __this, const RuntimeMethod* method);
// System.Void Vuforia.WebCam::ComputeResampledTextureSize()
extern "C" IL2CPP_METHOD_ATTR void WebCam_ComputeResampledTextureSize_m321498482 (WebCam_t2427002488 * __this, const RuntimeMethod* method);
// System.Void Vuforia.TextureRenderer::.ctor(UnityEngine.Texture,System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C" IL2CPP_METHOD_ATTR void TextureRenderer__ctor_m495126481 (TextureRenderer_t3278815845 * __this, Texture_t3661962703 * ___textureToRender0, int32_t ___renderTextureLayer1, Vec2I_t3527036565  ___requestedTextureSize2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m373113269 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m3165450366 (Func_3_t3440825513 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t3440825513 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_m839136182_gshared)(__this, p0, p1, method);
}
// System.Void Vuforia.ARController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ARController__ctor_m2746373751 (ARController_t116632334 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Vuforia.WebCamARController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WebCamARController__ctor_m751483383 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// Vuforia.WebCamARController Vuforia.WebCamARController::get_Instance()
extern "C" IL2CPP_METHOD_ATTR WebCamARController_t3718642882 * WebCamARController_get_Instance_m1980552932 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Vuforia.ARController::Register(Vuforia.ARController)
extern "C" IL2CPP_METHOD_ATTR void ARController_Register_m1901857971 (RuntimeObject * __this /* static, unused */, ARController_t116632334 * ___controller0, const RuntimeMethod* method);
// System.Boolean Vuforia.WebCam::get_IsPlaying()
extern "C" IL2CPP_METHOD_ATTR bool WebCam_get_IsPlaying_m2513986056 (WebCam_t2427002488 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Application_set_runInBackground_m2169704730 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method);
// Vuforia.VuforiaBehaviour Vuforia.ARController::get_VuforiaBehaviour()
extern "C" IL2CPP_METHOD_ATTR VuforiaBehaviour_t2151848540 * ARController_get_VuforiaBehaviour_m4257639924 (ARController_t116632334 * __this, const RuntimeMethod* method);
// T[] Vuforia.UnityComponentExtensions::GetComponentsOnlyInChildren<UnityEngine.Camera>(UnityEngine.Component)
inline CameraU5BU5D_t1709987734* UnityComponentExtensions_GetComponentsOnlyInChildren_TisCamera_t4157153871_m2275549933 (RuntimeObject * __this /* static, unused */, Component_t1923634451 * ___obj0, const RuntimeMethod* method)
{
	return ((  CameraU5BU5D_t1709987734* (*) (RuntimeObject * /* static, unused */, Component_t1923634451 *, const RuntimeMethod*))UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m2620794288_gshared)(__this /* static, unused */, ___obj0, method);
}
// System.Void Vuforia.WebCam::.ctor(UnityEngine.Camera[],System.Int32,System.String,System.Boolean,System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>)
extern "C" IL2CPP_METHOD_ATTR void WebCam__ctor_m2427464772 (WebCam_t2427002488 * __this, CameraU5BU5D_t1709987734* ___arCameras0, int32_t ___renderTextureLayer1, String_t* ___webcamDeviceName2, bool ___flipHorizontally3, Func_3_t3440825513 * ___webCamTexProvider4, const RuntimeMethod* method);
// System.Int32 Vuforia.VuforiaConfiguration/WebCamConfiguration::get_RenderTextureLayer()
extern "C" IL2CPP_METHOD_ATTR int32_t WebCamConfiguration_get_RenderTextureLayer_m1149468349 (WebCamConfiguration_t1101614731 * __this, const RuntimeMethod* method);
// System.String Vuforia.VuforiaConfiguration/WebCamConfiguration::get_DeviceNameSetInEditor()
extern "C" IL2CPP_METHOD_ATTR String_t* WebCamConfiguration_get_DeviceNameSetInEditor_m553266002 (WebCamConfiguration_t1101614731 * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaConfiguration/WebCamConfiguration::get_FlipHorizontally()
extern "C" IL2CPP_METHOD_ATTR bool WebCamConfiguration_get_FlipHorizontally_m4118647777 (WebCamConfiguration_t1101614731 * __this, const RuntimeMethod* method);
// System.Void Vuforia.WebCam::ResetPlaying()
extern "C" IL2CPP_METHOD_ATTR void WebCam_ResetPlaying_m697251242 (WebCam_t2427002488 * __this, const RuntimeMethod* method);
// System.Void Vuforia.WebCam::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void WebCam_OnDestroy_m332336637 (WebCam_t2427002488 * __this, const RuntimeMethod* method);
// System.Void Vuforia.WebCam::Update()
extern "C" IL2CPP_METHOD_ATTR void WebCam_Update_m3572144808 (WebCam_t2427002488 * __this, const RuntimeMethod* method);
// System.Void Vuforia.WebCamARController/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3450078098 (U3CU3Ec_t3582055403 * __this, const RuntimeMethod* method);
// System.Void Vuforia.WebCamTexAdaptor::.ctor(System.String,Vuforia.WebCamProfile/ProfileData)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexAdaptor__ctor_m852957585 (WebCamTexAdaptor_t3430449046 * __this, String_t* ___deviceName0, ProfileData_t3519391925  ___profile1, const RuntimeMethod* method);
// Vuforia.IPlayModeEditorUtility Vuforia.PlayModeEditorUtility::get_Instance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PlayModeEditorUtility_get_Instance_m334266941 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::ToLower()
extern "C" IL2CPP_METHOD_ATTR String_t* String_ToLower_m2029374922 (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m1260807329 (Dictionary_2_t3304648224 * __this, String_t* p0, ProfileData_t3519391925 * p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3304648224 *, String_t*, ProfileData_t3519391925 *, const RuntimeMethod*))Dictionary_2_TryGetValue_m3004143623_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m4190276240 (Dictionary_2_t3304648224 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3304648224 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m757242677_gshared)(__this, p0, method);
}
// System.Void Vuforia.WebCamProfile/ProfileCollection::.ctor(Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>)
extern "C" IL2CPP_METHOD_ATTR void ProfileCollection__ctor_m3713293092 (ProfileCollection_t901995765 * __this, ProfileData_t3519391925  ___defaultProfile0, Dictionary_2_t3304648224 * ___profiles1, const RuntimeMethod* method);
// System.Boolean UnityEngine.WebCamTexture::get_didUpdateThisFrame()
extern "C" IL2CPP_METHOD_ATTR bool WebCamTexture_get_didUpdateThisFrame_m567567483 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.WebCamTexture::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool WebCamTexture_get_isPlaying_m3525118025 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture__ctor_m2601640589 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::set_deviceName(System.String)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_set_deviceName_m2479609938 (WebCamTexture_t1514609158 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::set_requestedFPS(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_set_requestedFPS_m1422816314 (WebCamTexture_t1514609158 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::set_requestedWidth(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_set_requestedWidth_m1301971691 (WebCamTexture_t1514609158 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::set_requestedHeight(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_set_requestedHeight_m3636279808 (WebCamTexture_t1514609158 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::HasUserAuthorization(UnityEngine.UserAuthorization)
extern "C" IL2CPP_METHOD_ATTR bool Application_HasUserAuthorization_m3146187033 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.Application::RequestUserAuthorization(UnityEngine.UserAuthorization)
extern "C" IL2CPP_METHOD_ATTR AsyncOperation_t1445031843 * Application_RequestUserAuthorization_m1407144003 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::Play()
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_Play_m3866603461 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::Stop()
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_Stop_m3471034432 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
extern "C" IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m412925263 (AsyncOperation_t1445031843 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m249231841 (Material_t340375123 * __this, Material_t340375123 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// Vuforia.VuforiaManager Vuforia.VuforiaManager::get_Instance()
extern "C" IL2CPP_METHOD_ATTR VuforiaManager_t1653423889 * VuforiaManager_get_Instance_m100367560 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Transform Vuforia.VuforiaManager::get_ARCameraTransform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * VuforiaManager_get_ARCameraTransform_m958890547 (VuforiaManager_t1653423889 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Camera>()
inline CameraU5BU5D_t1709987734* GameObject_GetComponentsInChildren_TisCamera_t4157153871_m926460427 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  CameraU5BU5D_t1709987734* (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m678395080_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_current()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * Camera_get_current_m929992396 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t3523625662 * Component_GetComponent_TisMeshFilter_t3523625662_m569847836 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t3523625662 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
extern "C" IL2CPP_METHOD_ATTR Mesh_t3648964284 * MeshFilter_get_sharedMesh_m1726897210 (MeshFilter_t3523625662 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* Mesh_get_vertices_m3585684815 (Mesh_t3648964284 * __this, const RuntimeMethod* method);
// System.Int32[] UnityEngine.Mesh::get_triangles()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* Mesh_get_triangles_m3059934743 (Mesh_t3648964284 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GL::PushMatrix()
extern "C" IL2CPP_METHOD_ATTR void GL_PushMatrix_m1848274883 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  Transform_get_localToWorldMatrix_m4155710351 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GL::MultMatrix(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR void GL_MultMatrix_m3576884247 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Material_SetPass_m686253719 (Material_t340375123 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Material_SetColor_m2020215303 (Material_t340375123 * __this, String_t* p0, Color_t2555686324  p1, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Begin(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GL_Begin_m1290681325 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Vertex(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void GL_Vertex_m691990801 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::End()
extern "C" IL2CPP_METHOD_ATTR void GL_End_m539612367 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GL::PopMatrix()
extern "C" IL2CPP_METHOD_ATTR void GL_PopMatrix_m3416050869 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m753527255 (Behaviour_t1437897464 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_lossyScale_m465496651 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  Matrix4x4_TRS_m3801934620 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Quaternion_t2301928331  p1, Vector3_t3722313464  p2, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR void Gizmos_set_matrix_m3287403258 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Gizmos_set_color_m3399737545 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Gizmos_DrawLine_m3273476787 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_green_m490390750 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void VuforiaMonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VuforiaMonoBehaviour__ctor_m348562674 (VuforiaMonoBehaviour_t1150221792 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Vuforia.TrackableBehaviour>()
inline TrackableBehaviour_t1113559212 * Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  TrackableBehaviour_t1113559212 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C" IL2CPP_METHOD_ATTR void TrackableBehaviour_RegisterTrackableEventHandler_m2462783619 (TrackableBehaviour_t1113559212 * __this, RuntimeObject* ___trackableEventHandler0, const RuntimeMethod* method);
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackingFound()
extern "C" IL2CPP_METHOD_ATTR void WireframeTrackableEventHandler_OnTrackingFound_m2813716415 (WireframeTrackableEventHandler_t2143753312 * __this, const RuntimeMethod* method);
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackingLost()
extern "C" IL2CPP_METHOD_ATTR void WireframeTrackableEventHandler_OnTrackingLost_m1967211472 (WireframeTrackableEventHandler_t2143753312 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
inline RendererU5BU5D_t3210418286* Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911 (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t3210418286* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m3951560249_gshared)(__this, p0, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>(System.Boolean)
inline ColliderU5BU5D_t4234922487* Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426 (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t4234922487* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m3951560249_gshared)(__this, p0, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<Vuforia.WireframeBehaviour>(System.Boolean)
inline WireframeBehaviourU5BU5D_t4114094193* Component_GetComponentsInChildren_TisWireframeBehaviour_t1831066704_m2022065013 (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  WireframeBehaviourU5BU5D_t4114094193* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m3951560249_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_enabled_m1517463283 (Collider_t1773347010 * __this, bool p0, const RuntimeMethod* method);
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C" IL2CPP_METHOD_ATTR String_t* TrackableBehaviour_get_TrackableName_m3644057705 (TrackableBehaviour_t1113559212 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Vuforia.VuforiaRuntimeUtilities::GetStoragePath(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C" IL2CPP_METHOD_ATTR String_t* VuforiaRuntimeUtilities_GetStoragePath_m3854718746 (RuntimeObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_GetStoragePath_m3854718746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___path0;
		V_0 = L_0;
		int32_t L_1 = ___storageType1;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_2 = VuforiaRuntimeUtilities_IsWSARuntime_m2144315235(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_3 = ___path0;
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3081076223, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_5 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_6 = ___path0;
		String_t* L_7 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3007346115, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_002c:
	{
		String_t* L_8 = V_0;
		return L_8;
	}
}
// System.String Vuforia.VuforiaRuntimeUtilities::StripFileNameFromPath(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* VuforiaRuntimeUtilities_StripFileNameFromPath_m3879488773 (RuntimeObject * __this /* static, unused */, String_t* ___fullPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_StripFileNameFromPath_m3879488773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___fullPath0;
		CharU5BU5D_t3528271667* L_1 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)47));
		NullCheck(L_0);
		StringU5BU5D_t1281789340* L_3 = String_Split_m3646115398(L_0, L_2, /*hidden argument*/NULL);
		StringU5BU5D_t1281789340* L_4 = L_3;
		NullCheck(L_4);
		NullCheck(L_4);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), (int32_t)1));
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
// System.String Vuforia.VuforiaRuntimeUtilities::StripStreamingAssetsFromPath(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* VuforiaRuntimeUtilities_StripStreamingAssetsFromPath_m413037888 (RuntimeObject * __this /* static, unused */, String_t* ___fullPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_StripStreamingAssetsFromPath_m413037888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___fullPath0;
		CharU5BU5D_t3528271667* L_1 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)47));
		NullCheck(L_0);
		StringU5BU5D_t1281789340* L_3 = String_Split_m3646115398(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_4;
		V_2 = 2;
		goto IL_003e;
	}

IL_001c:
	{
		String_t* L_5 = V_1;
		StringU5BU5D_t1281789340* L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		String_t* L_10 = String_Concat_m3937257545(NULL /*static, unused*/, L_5, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_2;
		StringU5BU5D_t1281789340* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))), (int32_t)1)))))
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_13 = V_1;
		String_t* L_14 = String_Concat_m3937257545(NULL /*static, unused*/, L_13, _stringLiteral3452614529, /*hidden argument*/NULL);
		V_1 = L_14;
	}

IL_003a:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_16 = V_2;
		StringU5BU5D_t1281789340* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_18 = V_1;
		return L_18;
	}
}
// System.String Vuforia.VuforiaRuntimeUtilities::StripExtensionFromPath(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* VuforiaRuntimeUtilities_StripExtensionFromPath_m470692391 (RuntimeObject * __this /* static, unused */, String_t* ___fullPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_StripExtensionFromPath_m470692391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	{
		String_t* L_0 = ___fullPath0;
		CharU5BU5D_t3528271667* L_1 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_0);
		StringU5BU5D_t1281789340* L_3 = String_Split_m3646115398(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		StringU5BU5D_t1281789340* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))) > ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		return _stringLiteral757602046;
	}

IL_001e:
	{
		StringU5BU5D_t1281789340* L_5 = V_0;
		StringU5BU5D_t1281789340* L_6 = V_0;
		NullCheck(L_6);
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))), (int32_t)1));
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		return L_8;
	}
}
// UnityEngine.ScreenOrientation Vuforia.VuforiaRuntimeUtilities::get_ScreenOrientation()
extern "C" IL2CPP_METHOD_ATTR int32_t VuforiaRuntimeUtilities_get_ScreenOrientation_m2326897546 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_get_ScreenOrientation_m2326897546_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SurfaceUtilities_t1841955943_il2cpp_TypeInfo_var);
		int32_t L_0 = SurfaceUtilities_GetSurfaceOrientation_m1170243099(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities::get_IsLandscapeOrientation()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_get_IsLandscapeOrientation_m2557240032 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_get_IsLandscapeOrientation_m2557240032_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		int32_t L_0 = VuforiaRuntimeUtilities_get_ScreenOrientation_m2326897546(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		return (bool)((((int32_t)L_3) == ((int32_t)4))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
	}
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities::get_IsPortraitOrientation()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_get_IsPortraitOrientation_m1117343187 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_get_IsPortraitOrientation_m1117343187_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_get_IsLandscapeOrientation_m2557240032(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Vuforia.VuforiaRuntimeUtilities::ForceDisableTrackables()
extern "C" IL2CPP_METHOD_ATTR void VuforiaRuntimeUtilities_ForceDisableTrackables_m3062194735 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_ForceDisableTrackables_m3062194735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TrackableBehaviourU5BU5D_t1497733925* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (TrackableBehaviour_t1113559212_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t1417781964* L_2 = Object_FindObjectsOfType_m2295101757(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = ((TrackableBehaviourU5BU5D_t1497733925*)Castclass((RuntimeObject*)L_2, TrackableBehaviourU5BU5D_t1497733925_il2cpp_TypeInfo_var));
		TrackableBehaviourU5BU5D_t1497733925* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		V_1 = 0;
		goto IL_0029;
	}

IL_001c:
	{
		TrackableBehaviourU5BU5D_t1497733925* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		TrackableBehaviour_t1113559212 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Behaviour_set_enabled_m20417929(L_7, (bool)0, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_9 = V_1;
		TrackableBehaviourU5BU5D_t1497733925* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_001c;
		}
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsPlayMode()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsPlayMode_m4165764373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		bool L_0 = Application_get_isEditor_m857789090(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsWSARuntime()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsWSARuntime_m2144315235 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)18))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)19))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)((int32_t)20)))? 1 : 0);
	}

IL_001c:
	{
		return (bool)1;
	}
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsVuforiaEnabled()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		int32_t L_1 = ((VuforiaRuntimeUtilities_t399660591_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var))->get_sWebCamUsed_0();
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_2 = VuforiaRuntimeUtilities_IsWebCamUsed_m1354890003(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		((VuforiaRuntimeUtilities_t399660591_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var))->set_sWebCamUsed_0(1);
		goto IL_0023;
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		((VuforiaRuntimeUtilities_t399660591_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var))->set_sWebCamUsed_0(2);
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		int32_t L_3 = ((VuforiaRuntimeUtilities_t399660591_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var))->get_sWebCamUsed_0();
		return (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
	}

IL_002c:
	{
		return (bool)1;
	}
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsWebCamUsed()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsWebCamUsed_m1354890003 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_IsWebCamUsed_m1354890003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t1763229349 * L_0 = VuforiaConfiguration_get_Instance_m3335903280(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		WebCamConfiguration_t1101614731 * L_1 = VuforiaConfiguration_get_WebCam_m946983315(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = WebCamConfiguration_get_TurnOffWebCam_m3008159002(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_3 = VuforiaRuntimeUtilities_CheckNativePluginSupport_m3955787202(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		WebCamDeviceU5BU5D_t4294070825* L_4 = WebCamTexture_get_devices_m844246756(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		return (bool)((!(((uint32_t)(((RuntimeArray *)L_4)->max_length)) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0022:
	{
		return (bool)0;
	}
}
// UnityEngine.Vector2 Vuforia.VuforiaRuntimeUtilities::ScreenSpaceToCameraFrameCoordinatesNormalized(UnityEngine.Vector2,UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  VuforiaRuntimeUtilities_ScreenSpaceToCameraFrameCoordinatesNormalized_m3818702030 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___screenSpaceCoordinate0, Rect_t2360479859  ___bgTextureViewPortRect1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		float L_0 = Rect_get_xMin_m581135837((Rect_t2360479859 *)(&___bgTextureViewPortRect1), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Rect_get_yMin_m2601414109((Rect_t2360479859 *)(&___bgTextureViewPortRect1), /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&___bgTextureViewPortRect1), /*hidden argument*/NULL);
		V_2 = L_2;
		float L_3 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&___bgTextureViewPortRect1), /*hidden argument*/NULL);
		V_3 = L_3;
		Vector2_t2156229523  L_4 = ___screenSpaceCoordinate0;
		float L_5 = L_4.get_x_0();
		float L_6 = V_0;
		float L_7 = V_2;
		Vector2_t2156229523  L_8 = ___screenSpaceCoordinate0;
		float L_9 = L_8.get_y_1();
		float L_10 = V_1;
		float L_11 = V_3;
		V_4 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_9, (float)L_10))/(float)L_11));
		float L_12 = V_4;
		Vector2_t2156229523  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector2__ctor_m3970636864((&L_13), ((float)((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_6))/(float)L_7)), L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// UnityEngine.Vector2 Vuforia.VuforiaRuntimeUtilities::ViewPortToCameraFrameCoordinatesNormalized(UnityEngine.Vector2,UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  VuforiaRuntimeUtilities_ViewPortToCameraFrameCoordinatesNormalized_m125417336 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___unityViewPortCoordinates0, Rect_t2360479859  ___bgTextureViewPortRect1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_ViewPortToCameraFrameCoordinatesNormalized_m125417336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	{
		float L_0 = Rect_get_xMin_m581135837((Rect_t2360479859 *)(&___bgTextureViewPortRect1), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Rect_get_yMin_m2601414109((Rect_t2360479859 *)(&___bgTextureViewPortRect1), /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&___bgTextureViewPortRect1), /*hidden argument*/NULL);
		V_2 = L_2;
		float L_3 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&___bgTextureViewPortRect1), /*hidden argument*/NULL);
		V_3 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(DigitalEyewearARController_t1054226036_il2cpp_TypeInfo_var);
		DigitalEyewearARController_t1054226036 * L_4 = DigitalEyewearARController_get_Instance_m3573866503(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		Camera_t4157153871 * L_5 = DigitalEyewearARController_get_PrimaryCamera_m3122713263(L_4, /*hidden argument*/NULL);
		Camera_t4157153871 * L_6 = L_5;
		Vector2_t2156229523  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector2__ctor_m3970636864((&L_7), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_9 = Camera_ViewportToScreenPoint_m2264305958(L_6, L_8, /*hidden argument*/NULL);
		V_4 = L_9;
		Vector2_t2156229523  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector2__ctor_m3970636864((&L_10), (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_12 = Camera_ViewportToScreenPoint_m2264305958(L_6, L_11, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = L_12;
		float L_14 = L_13.get_x_2();
		Vector3_t3722313464  L_15 = V_4;
		float L_16 = L_15.get_x_2();
		V_5 = ((float)il2cpp_codegen_subtract((float)L_14, (float)L_16));
		float L_17 = L_13.get_y_3();
		Vector3_t3722313464  L_18 = V_4;
		float L_19 = L_18.get_y_3();
		V_6 = ((float)il2cpp_codegen_subtract((float)L_17, (float)L_19));
		Vector2_t2156229523  L_20 = ___unityViewPortCoordinates0;
		float L_21 = L_20.get_x_0();
		float L_22 = V_5;
		Vector2_t2156229523  L_23 = ___unityViewPortCoordinates0;
		float L_24 = L_23.get_y_1();
		float L_25 = V_6;
		Vector2_t2156229523  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Vector2__ctor_m3970636864((&L_26), ((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)), ((float)il2cpp_codegen_multiply((float)L_24, (float)L_25)), /*hidden argument*/NULL);
		Vector2_t2156229523  L_27 = L_26;
		float L_28 = L_27.get_x_0();
		float L_29 = V_0;
		float L_30 = V_2;
		V_7 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_28, (float)L_29))/(float)L_30));
		float L_31 = L_27.get_y_1();
		float L_32 = V_1;
		float L_33 = V_3;
		V_8 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_31, (float)L_32))/(float)L_33));
		float L_34 = V_7;
		float L_35 = V_8;
		Vector2_t2156229523  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Vector2__ctor_m3970636864((&L_36), L_34, L_35, /*hidden argument*/NULL);
		return L_36;
	}
}
// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRuntimeUtilities::ScreenSpaceToCameraFrameCoordinates(UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C" IL2CPP_METHOD_ATTR Vec2I_t3527036565  VuforiaRuntimeUtilities_ScreenSpaceToCameraFrameCoordinates_m1683766283 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___screenSpaceCoordinate0, Rect_t2360479859  ___bgTextureViewPortRect1, bool ___isTextureMirrored2, VideoModeData_t2066817255  ___videoModeData3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_ScreenSpaceToCameraFrameCoordinates_m1683766283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector2_t2156229523  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vec2I_t3527036565  V_8;
	memset(&V_8, 0, sizeof(V_8));
	{
		V_0 = (bool)0;
		VideoModeData_t2066817255  L_0 = ___videoModeData3;
		int32_t L_1 = L_0.get_width_0();
		V_1 = L_1;
		VideoModeData_t2066817255  L_2 = ___videoModeData3;
		int32_t L_3 = L_2.get_height_1();
		V_2 = L_3;
		V_3 = (0.0f);
		V_4 = (0.0f);
		V_5 = (0.0f);
		V_6 = (0.0f);
		bool L_4 = ___isTextureMirrored2;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		VuforiaRuntimeUtilities_PrepareCoordinateConversion_m4247151566(NULL /*static, unused*/, L_4, (float*)(&V_3), (float*)(&V_4), (float*)(&V_5), (float*)(&V_6), (bool*)(&V_0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_5 = ___screenSpaceCoordinate0;
		Rect_t2360479859  L_6 = ___bgTextureViewPortRect1;
		Vector2_t2156229523  L_7 = VuforiaRuntimeUtilities_ScreenSpaceToCameraFrameCoordinatesNormalized_m3818702030(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_7 = L_7;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0079;
		}
	}
	{
		float L_9 = V_3;
		float L_10 = V_5;
		Vector2_t2156229523  L_11 = V_7;
		float L_12 = L_11.get_y_1();
		int32_t L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_14 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_9, (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_12)))), (float)(((float)((float)L_13))))), /*hidden argument*/NULL);
		float L_15 = V_4;
		float L_16 = V_6;
		Vector2_t2156229523  L_17 = V_7;
		float L_18 = L_17.get_x_0();
		int32_t L_19 = V_2;
		int32_t L_20 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_15, (float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_18)))), (float)(((float)((float)L_19))))), /*hidden argument*/NULL);
		Vec2I__ctor_m1553072655((Vec2I_t3527036565 *)(&V_8), L_14, L_20, /*hidden argument*/NULL);
		goto IL_00a9;
	}

IL_0079:
	{
		float L_21 = V_3;
		float L_22 = V_5;
		Vector2_t2156229523  L_23 = V_7;
		float L_24 = L_23.get_x_0();
		int32_t L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_26 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_21, (float)((float)il2cpp_codegen_multiply((float)L_22, (float)L_24)))), (float)(((float)((float)L_25))))), /*hidden argument*/NULL);
		float L_27 = V_4;
		float L_28 = V_6;
		Vector2_t2156229523  L_29 = V_7;
		float L_30 = L_29.get_y_1();
		int32_t L_31 = V_2;
		int32_t L_32 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_27, (float)((float)il2cpp_codegen_multiply((float)L_28, (float)L_30)))), (float)(((float)((float)L_31))))), /*hidden argument*/NULL);
		Vec2I__ctor_m1553072655((Vec2I_t3527036565 *)(&V_8), L_26, L_32, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		Vec2I_t3527036565  L_33 = V_8;
		return L_33;
	}
}
// UnityEngine.Vector2 Vuforia.VuforiaRuntimeUtilities::CameraFrameToScreenSpaceCoordinates(UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m3783275716 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___cameraFrameCoordinate0, Rect_t2360479859  ___bgTextureViewPortRect1, bool ___isTextureMirrored2, VideoModeData_t2066817255  ___videoModeData3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m3783275716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t2156229523  V_13;
	memset(&V_13, 0, sizeof(V_13));
	{
		float L_0 = Rect_get_xMin_m581135837((Rect_t2360479859 *)(&___bgTextureViewPortRect1), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Rect_get_yMin_m2601414109((Rect_t2360479859 *)(&___bgTextureViewPortRect1), /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&___bgTextureViewPortRect1), /*hidden argument*/NULL);
		V_2 = L_2;
		float L_3 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&___bgTextureViewPortRect1), /*hidden argument*/NULL);
		V_3 = L_3;
		V_4 = (bool)0;
		VideoModeData_t2066817255  L_4 = ___videoModeData3;
		int32_t L_5 = L_4.get_width_0();
		V_5 = (((float)((float)L_5)));
		VideoModeData_t2066817255  L_6 = ___videoModeData3;
		int32_t L_7 = L_6.get_height_1();
		V_6 = (((float)((float)L_7)));
		V_7 = (0.0f);
		V_8 = (0.0f);
		V_9 = (0.0f);
		V_10 = (0.0f);
		bool L_8 = ___isTextureMirrored2;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		VuforiaRuntimeUtilities_PrepareCoordinateConversion_m4247151566(NULL /*static, unused*/, L_8, (float*)(&V_7), (float*)(&V_8), (float*)(&V_9), (float*)(&V_10), (bool*)(&V_4), /*hidden argument*/NULL);
		Vector2_t2156229523  L_9 = ___cameraFrameCoordinate0;
		float L_10 = L_9.get_x_0();
		float L_11 = V_5;
		float L_12 = V_7;
		float L_13 = V_9;
		V_11 = ((float)((float)((float)il2cpp_codegen_subtract((float)((float)((float)L_10/(float)L_11)), (float)L_12))/(float)L_13));
		Vector2_t2156229523  L_14 = ___cameraFrameCoordinate0;
		float L_15 = L_14.get_y_1();
		float L_16 = V_6;
		float L_17 = V_8;
		float L_18 = V_10;
		V_12 = ((float)((float)((float)il2cpp_codegen_subtract((float)((float)((float)L_15/(float)L_16)), (float)L_17))/(float)L_18));
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_009c;
		}
	}
	{
		float L_20 = V_2;
		float L_21 = V_12;
		float L_22 = V_0;
		float L_23 = V_3;
		float L_24 = V_11;
		float L_25 = V_1;
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_13), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_20, (float)L_21)), (float)L_22)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_23, (float)L_24)), (float)L_25)), /*hidden argument*/NULL);
		goto IL_00af;
	}

IL_009c:
	{
		float L_26 = V_2;
		float L_27 = V_11;
		float L_28 = V_0;
		float L_29 = V_3;
		float L_30 = V_12;
		float L_31 = V_1;
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_13), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_26, (float)L_27)), (float)L_28)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_29, (float)L_30)), (float)L_31)), /*hidden argument*/NULL);
	}

IL_00af:
	{
		Vector2_t2156229523  L_32 = V_13;
		return L_32;
	}
}
// Vuforia.OrientedBoundingBox Vuforia.VuforiaRuntimeUtilities::CameraFrameToScreenSpaceCoordinates(Vuforia.OrientedBoundingBox,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C" IL2CPP_METHOD_ATTR OrientedBoundingBox_t2769728497  VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m626826678 (RuntimeObject * __this /* static, unused */, OrientedBoundingBox_t2769728497  ___cameraFrameObb0, Rect_t2360479859  ___bgTextureViewPortRect1, bool ___isTextureMirrored2, VideoModeData_t2066817255  ___videoModeData3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m626826678_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector2_t2156229523  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	float G_B7_0 = 0.0f;
	float G_B6_0 = 0.0f;
	int32_t G_B8_0 = 0;
	float G_B8_1 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B9_0 = 0.0f;
	int32_t G_B11_0 = 0;
	float G_B11_1 = 0.0f;
	Vector2_t2156229523  G_B13_0;
	memset(&G_B13_0, 0, sizeof(G_B13_0));
	Vector2_t2156229523  G_B12_0;
	memset(&G_B12_0, 0, sizeof(G_B12_0));
	{
		V_0 = (bool)0;
		V_1 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		int32_t L_0 = VuforiaRuntimeUtilities_get_ScreenOrientation_m2326897546(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_6 = L_0;
		int32_t L_1 = V_6;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0040;
			}
			case 2:
			{
				goto IL_004a;
			}
			case 3:
			{
				goto IL_0036;
			}
		}
	}
	{
		goto IL_004a;
	}

IL_002a:
	{
		float L_2 = V_1;
		V_1 = ((float)il2cpp_codegen_add((float)L_2, (float)(90.0f)));
		V_0 = (bool)1;
		goto IL_004a;
	}

IL_0036:
	{
		float L_3 = V_1;
		V_1 = ((float)il2cpp_codegen_add((float)L_3, (float)(180.0f)));
		goto IL_004a;
	}

IL_0040:
	{
		float L_4 = V_1;
		V_1 = ((float)il2cpp_codegen_add((float)L_4, (float)(270.0f)));
		V_0 = (bool)1;
	}

IL_004a:
	{
		float L_5 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&___bgTextureViewPortRect1), /*hidden argument*/NULL);
		bool L_6 = V_0;
		G_B6_0 = L_5;
		if (L_6)
		{
			G_B7_0 = L_5;
			goto IL_005c;
		}
	}
	{
		VideoModeData_t2066817255  L_7 = ___videoModeData3;
		int32_t L_8 = L_7.get_width_0();
		G_B8_0 = L_8;
		G_B8_1 = G_B6_0;
		goto IL_0062;
	}

IL_005c:
	{
		VideoModeData_t2066817255  L_9 = ___videoModeData3;
		int32_t L_10 = L_9.get_height_1();
		G_B8_0 = L_10;
		G_B8_1 = G_B7_0;
	}

IL_0062:
	{
		V_2 = ((float)((float)G_B8_1/(float)(((float)((float)G_B8_0)))));
		float L_11 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&___bgTextureViewPortRect1), /*hidden argument*/NULL);
		bool L_12 = V_0;
		G_B9_0 = L_11;
		if (L_12)
		{
			G_B10_0 = L_11;
			goto IL_0077;
		}
	}
	{
		VideoModeData_t2066817255  L_13 = ___videoModeData3;
		int32_t L_14 = L_13.get_height_1();
		G_B11_0 = L_14;
		G_B11_1 = G_B9_0;
		goto IL_007d;
	}

IL_0077:
	{
		VideoModeData_t2066817255  L_15 = ___videoModeData3;
		int32_t L_16 = L_15.get_width_0();
		G_B11_0 = L_16;
		G_B11_1 = G_B10_0;
	}

IL_007d:
	{
		V_3 = ((float)((float)G_B11_1/(float)(((float)((float)G_B11_0)))));
		Vector2_t2156229523  L_17 = OrientedBoundingBox_get_Center_m2859290232((OrientedBoundingBox_t2769728497 *)(&___cameraFrameObb0), /*hidden argument*/NULL);
		Rect_t2360479859  L_18 = ___bgTextureViewPortRect1;
		bool L_19 = ___isTextureMirrored2;
		VideoModeData_t2066817255  L_20 = ___videoModeData3;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_21 = VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m3783275716(NULL /*static, unused*/, L_17, L_18, L_19, L_20, /*hidden argument*/NULL);
		Vector2_t2156229523  L_22 = OrientedBoundingBox_get_HalfExtents_m2496086635((OrientedBoundingBox_t2769728497 *)(&___cameraFrameObb0), /*hidden argument*/NULL);
		float L_23 = L_22.get_x_0();
		float L_24 = V_2;
		Vector2_t2156229523  L_25 = OrientedBoundingBox_get_HalfExtents_m2496086635((OrientedBoundingBox_t2769728497 *)(&___cameraFrameObb0), /*hidden argument*/NULL);
		float L_26 = L_25.get_y_1();
		float L_27 = V_3;
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_4), ((float)il2cpp_codegen_multiply((float)L_23, (float)L_24)), ((float)il2cpp_codegen_multiply((float)L_26, (float)L_27)), /*hidden argument*/NULL);
		float L_28 = OrientedBoundingBox_get_Rotation_m1713103466((OrientedBoundingBox_t2769728497 *)(&___cameraFrameObb0), /*hidden argument*/NULL);
		V_5 = L_28;
		bool L_29 = ___isTextureMirrored2;
		G_B12_0 = L_21;
		if (!L_29)
		{
			G_B13_0 = L_21;
			goto IL_00c3;
		}
	}
	{
		float L_30 = V_5;
		V_5 = ((-L_30));
		G_B13_0 = G_B12_0;
	}

IL_00c3:
	{
		float L_31 = V_5;
		float L_32 = V_1;
		V_5 = ((float)il2cpp_codegen_add((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_31, (float)(180.0f)))/(float)(3.14159274f))), (float)L_32));
		Vector2_t2156229523  L_33 = V_4;
		float L_34 = V_5;
		OrientedBoundingBox_t2769728497  L_35;
		memset(&L_35, 0, sizeof(L_35));
		OrientedBoundingBox__ctor_m1736506094((&L_35), G_B13_0, L_33, L_34, /*hidden argument*/NULL);
		return L_35;
	}
}
// System.Void Vuforia.VuforiaRuntimeUtilities::SelectRectTopLeftAndBottomRightForLandscapeLeft(UnityEngine.Rect,System.Boolean,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C" IL2CPP_METHOD_ATTR void VuforiaRuntimeUtilities_SelectRectTopLeftAndBottomRightForLandscapeLeft_m3094027904 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  ___screenSpaceRect0, bool ___isMirrored1, Vector2_t2156229523 * ___topLeft2, Vector2_t2156229523 * ___bottomRight3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_SelectRectTopLeftAndBottomRightForLandscapeLeft_m3094027904_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = ___isMirrored1;
		if (L_0)
		{
			goto IL_00f5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		int32_t L_1 = VuforiaRuntimeUtilities_get_ScreenOrientation_m2326897546(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_005c;
			}
			case 1:
			{
				goto IL_008f;
			}
			case 2:
			{
				goto IL_00c2;
			}
			case 3:
			{
				goto IL_0029;
			}
		}
	}
	{
		goto IL_00c2;
	}

IL_0029:
	{
		Vector2_t2156229523 * L_3 = ___topLeft2;
		float L_4 = Rect_get_xMax_m3018144503((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		float L_5 = Rect_get_yMax_m743455479((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector2__ctor_m3970636864((&L_6), L_4, L_5, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)L_3 = L_6;
		Vector2_t2156229523 * L_7 = ___bottomRight3;
		float L_8 = Rect_get_xMin_m581135837((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		float L_9 = Rect_get_yMin_m2601414109((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector2__ctor_m3970636864((&L_10), L_8, L_9, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)L_7 = L_10;
		return;
	}

IL_005c:
	{
		Vector2_t2156229523 * L_11 = ___topLeft2;
		float L_12 = Rect_get_xMax_m3018144503((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		float L_13 = Rect_get_yMin_m2601414109((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector2__ctor_m3970636864((&L_14), L_12, L_13, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)L_11 = L_14;
		Vector2_t2156229523 * L_15 = ___bottomRight3;
		float L_16 = Rect_get_xMin_m581135837((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		float L_17 = Rect_get_yMax_m743455479((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Vector2__ctor_m3970636864((&L_18), L_16, L_17, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)L_15 = L_18;
		return;
	}

IL_008f:
	{
		Vector2_t2156229523 * L_19 = ___topLeft2;
		float L_20 = Rect_get_xMin_m581135837((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		float L_21 = Rect_get_yMax_m743455479((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_22;
		memset(&L_22, 0, sizeof(L_22));
		Vector2__ctor_m3970636864((&L_22), L_20, L_21, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)L_19 = L_22;
		Vector2_t2156229523 * L_23 = ___bottomRight3;
		float L_24 = Rect_get_xMax_m3018144503((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		float L_25 = Rect_get_yMin_m2601414109((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Vector2__ctor_m3970636864((&L_26), L_24, L_25, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)L_23 = L_26;
		return;
	}

IL_00c2:
	{
		Vector2_t2156229523 * L_27 = ___topLeft2;
		float L_28 = Rect_get_xMin_m581135837((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		float L_29 = Rect_get_yMin_m2601414109((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_30;
		memset(&L_30, 0, sizeof(L_30));
		Vector2__ctor_m3970636864((&L_30), L_28, L_29, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)L_27 = L_30;
		Vector2_t2156229523 * L_31 = ___bottomRight3;
		float L_32 = Rect_get_xMax_m3018144503((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		float L_33 = Rect_get_yMax_m743455479((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_34;
		memset(&L_34, 0, sizeof(L_34));
		Vector2__ctor_m3970636864((&L_34), L_32, L_33, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)L_31 = L_34;
		return;
	}

IL_00f5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		int32_t L_35 = VuforiaRuntimeUtilities_get_ScreenOrientation_m2326897546(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_35;
		int32_t L_36 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)1)))
		{
			case 0:
			{
				goto IL_014b;
			}
			case 1:
			{
				goto IL_017e;
			}
			case 2:
			{
				goto IL_01b1;
			}
			case 3:
			{
				goto IL_0118;
			}
		}
	}
	{
		goto IL_01b1;
	}

IL_0118:
	{
		Vector2_t2156229523 * L_37 = ___topLeft2;
		float L_38 = Rect_get_xMin_m581135837((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		float L_39 = Rect_get_yMax_m743455479((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_40;
		memset(&L_40, 0, sizeof(L_40));
		Vector2__ctor_m3970636864((&L_40), L_38, L_39, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)L_37 = L_40;
		Vector2_t2156229523 * L_41 = ___bottomRight3;
		float L_42 = Rect_get_xMax_m3018144503((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		float L_43 = Rect_get_yMin_m2601414109((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_44;
		memset(&L_44, 0, sizeof(L_44));
		Vector2__ctor_m3970636864((&L_44), L_42, L_43, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)L_41 = L_44;
		return;
	}

IL_014b:
	{
		Vector2_t2156229523 * L_45 = ___topLeft2;
		float L_46 = Rect_get_xMax_m3018144503((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		float L_47 = Rect_get_yMax_m743455479((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_48;
		memset(&L_48, 0, sizeof(L_48));
		Vector2__ctor_m3970636864((&L_48), L_46, L_47, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)L_45 = L_48;
		Vector2_t2156229523 * L_49 = ___bottomRight3;
		float L_50 = Rect_get_xMin_m581135837((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		float L_51 = Rect_get_yMin_m2601414109((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_52;
		memset(&L_52, 0, sizeof(L_52));
		Vector2__ctor_m3970636864((&L_52), L_50, L_51, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)L_49 = L_52;
		return;
	}

IL_017e:
	{
		Vector2_t2156229523 * L_53 = ___topLeft2;
		float L_54 = Rect_get_xMin_m581135837((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		float L_55 = Rect_get_yMin_m2601414109((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_56;
		memset(&L_56, 0, sizeof(L_56));
		Vector2__ctor_m3970636864((&L_56), L_54, L_55, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)L_53 = L_56;
		Vector2_t2156229523 * L_57 = ___bottomRight3;
		float L_58 = Rect_get_xMax_m3018144503((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		float L_59 = Rect_get_yMax_m743455479((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_60;
		memset(&L_60, 0, sizeof(L_60));
		Vector2__ctor_m3970636864((&L_60), L_58, L_59, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)L_57 = L_60;
		return;
	}

IL_01b1:
	{
		Vector2_t2156229523 * L_61 = ___topLeft2;
		float L_62 = Rect_get_xMax_m3018144503((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		float L_63 = Rect_get_yMin_m2601414109((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_64;
		memset(&L_64, 0, sizeof(L_64));
		Vector2__ctor_m3970636864((&L_64), L_62, L_63, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)L_61 = L_64;
		Vector2_t2156229523 * L_65 = ___bottomRight3;
		float L_66 = Rect_get_xMin_m581135837((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		float L_67 = Rect_get_yMax_m743455479((Rect_t2360479859 *)(&___screenSpaceRect0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_68;
		memset(&L_68, 0, sizeof(L_68));
		Vector2__ctor_m3970636864((&L_68), L_66, L_67, /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)L_65 = L_68;
		return;
	}
}
// System.Void Vuforia.VuforiaRuntimeUtilities::DisableSleepMode()
extern "C" IL2CPP_METHOD_ATTR void VuforiaRuntimeUtilities_DisableSleepMode_m603020439 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Screen_set_sleepTimeout_m2277210665(NULL /*static, unused*/, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaRuntimeUtilities::ResetSleepMode()
extern "C" IL2CPP_METHOD_ATTR void VuforiaRuntimeUtilities_ResetSleepMode_m3847391961 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Screen_set_sleepTimeout_m2277210665(NULL /*static, unused*/, ((int32_t)-2), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities::MatrixIsNaN(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_MatrixIsNaN_m721180326 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___matrix0, const RuntimeMethod* method)
{
	{
		float L_0 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___matrix0), 0, 0, /*hidden argument*/NULL);
		bool L_1 = Single_IsNaN_m4024467661(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0114;
		}
	}
	{
		float L_2 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___matrix0), 0, 1, /*hidden argument*/NULL);
		bool L_3 = Single_IsNaN_m4024467661(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0114;
		}
	}
	{
		float L_4 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___matrix0), 0, 2, /*hidden argument*/NULL);
		bool L_5 = Single_IsNaN_m4024467661(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0114;
		}
	}
	{
		float L_6 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___matrix0), 0, 3, /*hidden argument*/NULL);
		bool L_7 = Single_IsNaN_m4024467661(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0114;
		}
	}
	{
		float L_8 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___matrix0), 1, 0, /*hidden argument*/NULL);
		bool L_9 = Single_IsNaN_m4024467661(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0114;
		}
	}
	{
		float L_10 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___matrix0), 1, 1, /*hidden argument*/NULL);
		bool L_11 = Single_IsNaN_m4024467661(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0114;
		}
	}
	{
		float L_12 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___matrix0), 1, 2, /*hidden argument*/NULL);
		bool L_13 = Single_IsNaN_m4024467661(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0114;
		}
	}
	{
		float L_14 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___matrix0), 1, 3, /*hidden argument*/NULL);
		bool L_15 = Single_IsNaN_m4024467661(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0114;
		}
	}
	{
		float L_16 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___matrix0), 2, 0, /*hidden argument*/NULL);
		bool L_17 = Single_IsNaN_m4024467661(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0114;
		}
	}
	{
		float L_18 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___matrix0), 2, 1, /*hidden argument*/NULL);
		bool L_19 = Single_IsNaN_m4024467661(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0114;
		}
	}
	{
		float L_20 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___matrix0), 2, 2, /*hidden argument*/NULL);
		bool L_21 = Single_IsNaN_m4024467661(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0114;
		}
	}
	{
		float L_22 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___matrix0), 2, 3, /*hidden argument*/NULL);
		bool L_23 = Single_IsNaN_m4024467661(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0114;
		}
	}
	{
		float L_24 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___matrix0), 3, 0, /*hidden argument*/NULL);
		bool L_25 = Single_IsNaN_m4024467661(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_0114;
		}
	}
	{
		float L_26 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___matrix0), 3, 1, /*hidden argument*/NULL);
		bool L_27 = Single_IsNaN_m4024467661(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_0114;
		}
	}
	{
		float L_28 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___matrix0), 3, 2, /*hidden argument*/NULL);
		bool L_29 = Single_IsNaN_m4024467661(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_0114;
		}
	}
	{
		float L_30 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___matrix0), 3, 3, /*hidden argument*/NULL);
		bool L_31 = Single_IsNaN_m4024467661(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		return L_31;
	}

IL_0114:
	{
		return (bool)1;
	}
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsUfoEnabled(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsUfoEnabled_m3395723299 (RuntimeObject * __this /* static, unused */, String_t* ___licenseKey0, String_t* ___ufoKey1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___ufoKey1;
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_2 = ___licenseKey0;
		bool L_3 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_000f:
	{
		return (bool)0;
	}
}
// Vuforia.FusionProviderType Vuforia.VuforiaRuntimeUtilities::SetAllowedFusionProviders(Vuforia.FusionProviderType)
extern "C" IL2CPP_METHOD_ATTR int32_t VuforiaRuntimeUtilities_SetAllowedFusionProviders_m243147468 (RuntimeObject * __this /* static, unused */, int32_t ___providerTypes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_SetAllowedFusionProviders_m243147468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = ___providerTypes0;
		NullCheck(L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(147 /* System.Int32 Vuforia.IVuforiaWrapper::QcarSetAllowedFusionProviders(System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0, L_1);
		return (int32_t)(L_2);
	}
}
// Vuforia.FusionProviderType Vuforia.VuforiaRuntimeUtilities::GetActiveFusionProvider()
extern "C" IL2CPP_METHOD_ATTR int32_t VuforiaRuntimeUtilities_GetActiveFusionProvider_m3824252240 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_GetActiveFusionProvider_m3824252240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(144 /* System.Int32 Vuforia.IVuforiaWrapper::QcarGetActiveFusionProvider() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0);
		return (int32_t)(L_1);
	}
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities::CheckNativePluginSupport()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_CheckNativePluginSupport_m3955787202 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_CheckNativePluginSupport_m3955787202_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		V_0 = 0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		int32_t L_1 = VuforiaRuntimeUtilities_qcarCheckNativePluginSupport_m1077402821(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0016;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0011;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.Exception)
		V_0 = 0;
		goto IL_0016;
	} // end catch (depth: 1)

IL_0016:
	{
		int32_t L_2 = V_0;
		return (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
	}

IL_001b:
	{
		return (bool)1;
	}
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsNativePluginSupportAvailable()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsNativePluginSupportAvailable_m4173160650 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_IsNativePluginSupportAvailable_m4173160650_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		int32_t L_1 = ((VuforiaRuntimeUtilities_t399660591_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var))->get_sNativePluginSupport_1();
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_2 = VuforiaRuntimeUtilities_CheckNativePluginSupport_m3955787202(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		G_B5_0 = 2;
		goto IL_0019;
	}

IL_0018:
	{
		G_B5_0 = 1;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		((VuforiaRuntimeUtilities_t399660591_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var))->set_sNativePluginSupport_1(G_B5_0);
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		int32_t L_3 = ((VuforiaRuntimeUtilities_t399660591_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var))->get_sNativePluginSupport_1();
		return (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
	}

IL_0027:
	{
		return (bool)1;
	}
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities::StopCameraIfPossible(System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_StopCameraIfPossible_m1378908556 (RuntimeObject * __this /* static, unused */, bool* ___objectTrackerWasStopped0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_StopCameraIfPossible_m1378908556_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	ObjectTracker_t4177997237 * V_3 = NULL;
	int32_t V_4 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_0 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = CameraDevice_IsActive_m3060040988(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0089;
		}
	}
	{
		V_2 = (bool)0;
		RuntimeObject* L_2 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		ObjectTracker_t4177997237 * L_3 = GenericInterfaceFuncInvoker0< ObjectTracker_t4177997237 * >::Invoke(ITrackerManager_GetTracker_TisObjectTracker_t4177997237_m1548597255_RuntimeMethod_var, L_2);
		V_3 = L_3;
		ObjectTracker_t4177997237 * L_4 = V_3;
		if (!L_4)
		{
			goto IL_007d;
		}
	}
	{
		ObjectTracker_t4177997237 * L_5 = V_3;
		NullCheck(L_5);
		bool L_6 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean Vuforia.Tracker::get_IsActive() */, L_5);
		if (!L_6)
		{
			goto IL_007d;
		}
	}
	{
		ObjectTracker_t4177997237 * L_7 = V_3;
		NullCheck(L_7);
		RuntimeObject* L_8 = ObjectTracker_GetActiveDataSets_m254019146(L_7, /*hidden argument*/NULL);
		bool L_9 = Enumerable_Any_TisDataSet_t3286034874_m2986703799(NULL /*static, unused*/, L_8, /*hidden argument*/Enumerable_Any_TisDataSet_t3286034874_m2986703799_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_007d;
	}

IL_0039:
	{
		ObjectTracker_t4177997237 * L_10 = V_3;
		NullCheck(L_10);
		TargetFinder_t2439332195 * L_11 = ObjectTracker_get_TargetFinder_m2531194621(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = TargetFinder_GetInitState_m2212814286(L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		int32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = V_4;
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_0054;
		}
	}

IL_0050:
	{
		V_2 = (bool)1;
		goto IL_007d;
	}

IL_0054:
	{
		ObjectTracker_t4177997237 * L_15 = V_3;
		NullCheck(L_15);
		TargetFinder_t2439332195 * L_16 = ObjectTracker_get_TargetFinder_m2531194621(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		RuntimeObject* L_17 = TargetFinder_GetImageTargets_m2676471060(L_16, /*hidden argument*/NULL);
		bool L_18 = Enumerable_Any_TisImageTarget_t3707016494_m18292949(NULL /*static, unused*/, L_17, /*hidden argument*/Enumerable_Any_TisImageTarget_t3707016494_m18292949_RuntimeMethod_var);
		if (!L_18)
		{
			goto IL_006a;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_007d;
	}

IL_006a:
	{
		ObjectTracker_t4177997237 * L_19 = V_3;
		NullCheck(L_19);
		ImageTargetBuilder_t2430893908 * L_20 = ObjectTracker_get_ImageTargetBuilder_m1359968304(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		bool L_21 = ImageTargetBuilder_IsScanning_m3912541761(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_007b;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_007d;
	}

IL_007b:
	{
		V_1 = (bool)1;
	}

IL_007d:
	{
		bool L_22 = V_2;
		if (L_22)
		{
			goto IL_0089;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_23 = VuforiaRuntimeUtilities_IsPositionalDeviceTrackerActive_m3052908928(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0089;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0089:
	{
		bool L_24 = V_1;
		if (!L_24)
		{
			goto IL_009b;
		}
	}
	{
		RuntimeObject* L_25 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_25);
		ObjectTracker_t4177997237 * L_26 = GenericInterfaceFuncInvoker0< ObjectTracker_t4177997237 * >::Invoke(ITrackerManager_GetTracker_TisObjectTracker_t4177997237_m1548597255_RuntimeMethod_var, L_25);
		NullCheck(L_26);
		VirtActionInvoker0::Invoke(5 /* System.Void Vuforia.Tracker::Stop() */, L_26);
	}

IL_009b:
	{
		bool L_27 = V_0;
		if (!L_27)
		{
			goto IL_00a9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_28 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_28);
		CameraDevice_Stop_m1782631459(L_28, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		bool* L_29 = ___objectTrackerWasStopped0;
		bool L_30 = V_1;
		*((int8_t*)(L_29)) = (int8_t)L_30;
		bool L_31 = V_0;
		return L_31;
	}
}
// System.Void Vuforia.VuforiaRuntimeUtilities::CleanTrackableFromUnwantedComponents(Vuforia.TrackableBehaviour)
extern "C" IL2CPP_METHOD_ATTR void VuforiaRuntimeUtilities_CleanTrackableFromUnwantedComponents_m881847735 (RuntimeObject * __this /* static, unused */, TrackableBehaviour_t1113559212 * ___trackableBehaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_CleanTrackableFromUnwantedComponents_m881847735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaUnity_GetHoloLensApiAbstraction_m3725012548(NULL /*static, unused*/, /*hidden argument*/NULL);
		TrackableBehaviour_t1113559212 * L_1 = ___trackableBehaviour0;
		NullCheck(L_0);
		InterfaceActionInvoker1< TrackableBehaviour_t1113559212 * >::Invoke(2 /* System.Void Vuforia.IHoloLensApiAbstraction::DeleteWorldAnchor(Vuforia.TrackableBehaviour) */, IHoloLensApiAbstraction_t3268373165_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.String Vuforia.VuforiaRuntimeUtilities::DecodeUfoLicenseKey(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* VuforiaRuntimeUtilities_DecodeUfoLicenseKey_m793702049 (RuntimeObject * __this /* static, unused */, String_t* ___ufoKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_DecodeUfoLicenseKey_m793702049_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_t1523322056 * L_0 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___ufoKey0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_2 = Convert_FromBase64String_m3685135396(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_3 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(42 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_2);
		return L_3;
	}
}
// System.String Vuforia.VuforiaRuntimeUtilities::EncodeUfoLicenseKey(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* VuforiaRuntimeUtilities_EncodeUfoLicenseKey_m619676087 (RuntimeObject * __this /* static, unused */, String_t* ___ufoKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_EncodeUfoLicenseKey_m619676087_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_t1523322056 * L_0 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___ufoKey0;
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_2 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_3 = Convert_ToBase64String_m3839334935(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Vuforia.VuforiaRuntimeUtilities/CameraState Vuforia.VuforiaRuntimeUtilities::GetCameraState()
extern "C" IL2CPP_METHOD_ATTR CameraState_t1646041879  VuforiaRuntimeUtilities_GetCameraState_m1262028323 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_GetCameraState_m1262028323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_0 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = CameraDevice_get_CameraReady_m2785241585(L_0, /*hidden argument*/NULL);
		CameraDevice_t960297568 * L_2 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = CameraDevice_IsActive_m3060040988(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		CameraDevice_t960297568 * L_4 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		CameraDevice_GetSelectedCameraDirection_m557891554(L_4, (int32_t*)(&V_1), /*hidden argument*/NULL);
		CameraDevice_t960297568 * L_5 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		CameraDevice_GetSelectedVideoMode_m3911637174(L_5, (int32_t*)(&V_2), /*hidden argument*/NULL);
		bool L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		CameraState_t1646041879  L_9;
		memset(&L_9, 0, sizeof(L_9));
		CameraState__ctor_m2095580676((&L_9), L_1, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void Vuforia.VuforiaRuntimeUtilities::StopAndDeinitCamera()
extern "C" IL2CPP_METHOD_ATTR void VuforiaRuntimeUtilities_StopAndDeinitCamera_m4256552813 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_StopAndDeinitCamera_m4256552813_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CameraState_t1646041879  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		CameraState_t1646041879  L_0 = VuforiaRuntimeUtilities_GetCameraState_m1262028323(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = CameraState_get_Initialized_m468400558((CameraState_t1646041879 *)(&V_0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		bool L_2 = CameraState_get_Active_m552154702((CameraState_t1646041879 *)(&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_3 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		CameraDevice_Stop_m1782631459(L_3, /*hidden argument*/NULL);
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_4 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		CameraDevice_Deinit_m726427492(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaRuntimeUtilities::ReInitAndStartCamera(Vuforia.VuforiaRuntimeUtilities/CameraState)
extern "C" IL2CPP_METHOD_ATTR void VuforiaRuntimeUtilities_ReInitAndStartCamera_m352857609 (RuntimeObject * __this /* static, unused */, CameraState_t1646041879  ___stateToRestore0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_ReInitAndStartCamera_m352857609_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = CameraState_get_Initialized_m468400558((CameraState_t1646041879 *)(&___stateToRestore0), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_1 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = CameraState_get_CameraDirection_m2200184139((CameraState_t1646041879 *)(&___stateToRestore0), /*hidden argument*/NULL);
		NullCheck(L_1);
		CameraDevice_Init_m2722714107(L_1, L_2, /*hidden argument*/NULL);
		CameraDevice_t960297568 * L_3 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = CameraState_get_DeviceMode_m2257768327((CameraState_t1646041879 *)(&___stateToRestore0), /*hidden argument*/NULL);
		NullCheck(L_3);
		CameraDevice_SelectVideoMode_m3994320945(L_3, L_4, /*hidden argument*/NULL);
		bool L_5 = CameraState_get_Active_m552154702((CameraState_t1646041879 *)(&___stateToRestore0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_6 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		CameraDevice_Start_m2947498176(L_6, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void Vuforia.VuforiaRuntimeUtilities::PrepareCoordinateConversion(System.Boolean,System.Single&,System.Single&,System.Single&,System.Single&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR void VuforiaRuntimeUtilities_PrepareCoordinateConversion_m4247151566 (RuntimeObject * __this /* static, unused */, bool ___isTextureMirrored0, float* ___prefixX1, float* ___prefixY2, float* ___inversionMultiplierX3, float* ___inversionMultiplierY4, bool* ___isPortrait5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_PrepareCoordinateConversion_m4247151566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		int32_t L_0 = VuforiaRuntimeUtilities_get_ScreenOrientation_m2326897546(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_0066;
			}
			case 2:
			{
				goto IL_00ec;
			}
			case 3:
			{
				goto IL_00a9;
			}
		}
	}
	{
		goto IL_00ec;
	}

IL_0023:
	{
		bool* L_2 = ___isPortrait5;
		*((int8_t*)(L_2)) = (int8_t)1;
		bool L_3 = ___isTextureMirrored0;
		if (L_3)
		{
			goto IL_0048;
		}
	}
	{
		float* L_4 = ___prefixX1;
		*((float*)(L_4)) = (float)(0.0f);
		float* L_5 = ___prefixY2;
		*((float*)(L_5)) = (float)(1.0f);
		float* L_6 = ___inversionMultiplierX3;
		*((float*)(L_6)) = (float)(1.0f);
		float* L_7 = ___inversionMultiplierY4;
		*((float*)(L_7)) = (float)(-1.0f);
		return;
	}

IL_0048:
	{
		float* L_8 = ___prefixX1;
		*((float*)(L_8)) = (float)(1.0f);
		float* L_9 = ___prefixY2;
		*((float*)(L_9)) = (float)(1.0f);
		float* L_10 = ___inversionMultiplierX3;
		*((float*)(L_10)) = (float)(-1.0f);
		float* L_11 = ___inversionMultiplierY4;
		*((float*)(L_11)) = (float)(-1.0f);
		return;
	}

IL_0066:
	{
		bool* L_12 = ___isPortrait5;
		*((int8_t*)(L_12)) = (int8_t)1;
		bool L_13 = ___isTextureMirrored0;
		if (L_13)
		{
			goto IL_008b;
		}
	}
	{
		float* L_14 = ___prefixX1;
		*((float*)(L_14)) = (float)(1.0f);
		float* L_15 = ___prefixY2;
		*((float*)(L_15)) = (float)(0.0f);
		float* L_16 = ___inversionMultiplierX3;
		*((float*)(L_16)) = (float)(-1.0f);
		float* L_17 = ___inversionMultiplierY4;
		*((float*)(L_17)) = (float)(1.0f);
		return;
	}

IL_008b:
	{
		float* L_18 = ___prefixX1;
		*((float*)(L_18)) = (float)(0.0f);
		float* L_19 = ___prefixY2;
		*((float*)(L_19)) = (float)(0.0f);
		float* L_20 = ___inversionMultiplierX3;
		*((float*)(L_20)) = (float)(1.0f);
		float* L_21 = ___inversionMultiplierY4;
		*((float*)(L_21)) = (float)(1.0f);
		return;
	}

IL_00a9:
	{
		bool* L_22 = ___isPortrait5;
		*((int8_t*)(L_22)) = (int8_t)0;
		bool L_23 = ___isTextureMirrored0;
		if (L_23)
		{
			goto IL_00ce;
		}
	}
	{
		float* L_24 = ___prefixX1;
		*((float*)(L_24)) = (float)(1.0f);
		float* L_25 = ___prefixY2;
		*((float*)(L_25)) = (float)(1.0f);
		float* L_26 = ___inversionMultiplierX3;
		*((float*)(L_26)) = (float)(-1.0f);
		float* L_27 = ___inversionMultiplierY4;
		*((float*)(L_27)) = (float)(-1.0f);
		return;
	}

IL_00ce:
	{
		float* L_28 = ___prefixX1;
		*((float*)(L_28)) = (float)(0.0f);
		float* L_29 = ___prefixY2;
		*((float*)(L_29)) = (float)(1.0f);
		float* L_30 = ___inversionMultiplierX3;
		*((float*)(L_30)) = (float)(1.0f);
		float* L_31 = ___inversionMultiplierY4;
		*((float*)(L_31)) = (float)(-1.0f);
		return;
	}

IL_00ec:
	{
		bool* L_32 = ___isPortrait5;
		*((int8_t*)(L_32)) = (int8_t)0;
		bool L_33 = ___isTextureMirrored0;
		if (L_33)
		{
			goto IL_0111;
		}
	}
	{
		float* L_34 = ___prefixX1;
		*((float*)(L_34)) = (float)(0.0f);
		float* L_35 = ___prefixY2;
		*((float*)(L_35)) = (float)(0.0f);
		float* L_36 = ___inversionMultiplierX3;
		*((float*)(L_36)) = (float)(1.0f);
		float* L_37 = ___inversionMultiplierY4;
		*((float*)(L_37)) = (float)(1.0f);
		return;
	}

IL_0111:
	{
		float* L_38 = ___prefixX1;
		*((float*)(L_38)) = (float)(1.0f);
		float* L_39 = ___prefixY2;
		*((float*)(L_39)) = (float)(0.0f);
		float* L_40 = ___inversionMultiplierX3;
		*((float*)(L_40)) = (float)(-1.0f);
		float* L_41 = ___inversionMultiplierY4;
		*((float*)(L_41)) = (float)(1.0f);
		return;
	}
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsPositionalDeviceTrackerActive()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsPositionalDeviceTrackerActive_m3052908928 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaRuntimeUtilities_IsPositionalDeviceTrackerActive_m3052908928_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PositionalDeviceTracker_t656722001 * V_0 = NULL;
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		PositionalDeviceTracker_t656722001 * L_1 = GenericInterfaceFuncInvoker0< PositionalDeviceTracker_t656722001 * >::Invoke(ITrackerManager_GetTracker_TisPositionalDeviceTracker_t656722001_m1362359953_RuntimeMethod_var, L_0);
		V_0 = L_1;
		PositionalDeviceTracker_t656722001 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		PositionalDeviceTracker_t656722001 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean Vuforia.Tracker::get_IsActive() */, L_3);
		return L_4;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Int32 Vuforia.VuforiaRuntimeUtilities::qcarCheckNativePluginSupport()
extern "C" IL2CPP_METHOD_ATTR int32_t VuforiaRuntimeUtilities_qcarCheckNativePluginSupport_m1077402821 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("VuforiaWrapper"), "qcarCheckNativePluginSupport", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'qcarCheckNativePluginSupport'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void Vuforia.VuforiaRuntimeUtilities::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VuforiaRuntimeUtilities__ctor_m244806454 (VuforiaRuntimeUtilities_t399660591 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaRuntimeUtilities::.cctor()
extern "C" IL2CPP_METHOD_ATTR void VuforiaRuntimeUtilities__cctor_m2073954156 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Vuforia.VuforiaRuntimeUtilities/CameraState
extern "C" void CameraState_t1646041879_marshal_pinvoke(const CameraState_t1646041879& unmarshaled, CameraState_t1646041879_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CInitializedU3Ek__BackingField_0 = static_cast<int32_t>(unmarshaled.get_U3CInitializedU3Ek__BackingField_0());
	marshaled.___U3CActiveU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.get_U3CActiveU3Ek__BackingField_1());
	marshaled.___U3CCameraDirectionU3Ek__BackingField_2 = unmarshaled.get_U3CCameraDirectionU3Ek__BackingField_2();
	marshaled.___U3CDeviceModeU3Ek__BackingField_3 = unmarshaled.get_U3CDeviceModeU3Ek__BackingField_3();
}
extern "C" void CameraState_t1646041879_marshal_pinvoke_back(const CameraState_t1646041879_marshaled_pinvoke& marshaled, CameraState_t1646041879& unmarshaled)
{
	bool unmarshaled_U3CInitializedU3Ek__BackingField_temp_0 = false;
	unmarshaled_U3CInitializedU3Ek__BackingField_temp_0 = static_cast<bool>(marshaled.___U3CInitializedU3Ek__BackingField_0);
	unmarshaled.set_U3CInitializedU3Ek__BackingField_0(unmarshaled_U3CInitializedU3Ek__BackingField_temp_0);
	bool unmarshaled_U3CActiveU3Ek__BackingField_temp_1 = false;
	unmarshaled_U3CActiveU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CActiveU3Ek__BackingField_1);
	unmarshaled.set_U3CActiveU3Ek__BackingField_1(unmarshaled_U3CActiveU3Ek__BackingField_temp_1);
	int32_t unmarshaled_U3CCameraDirectionU3Ek__BackingField_temp_2 = 0;
	unmarshaled_U3CCameraDirectionU3Ek__BackingField_temp_2 = marshaled.___U3CCameraDirectionU3Ek__BackingField_2;
	unmarshaled.set_U3CCameraDirectionU3Ek__BackingField_2(unmarshaled_U3CCameraDirectionU3Ek__BackingField_temp_2);
	int32_t unmarshaled_U3CDeviceModeU3Ek__BackingField_temp_3 = 0;
	unmarshaled_U3CDeviceModeU3Ek__BackingField_temp_3 = marshaled.___U3CDeviceModeU3Ek__BackingField_3;
	unmarshaled.set_U3CDeviceModeU3Ek__BackingField_3(unmarshaled_U3CDeviceModeU3Ek__BackingField_temp_3);
}
// Conversion method for clean up from marshalling of: Vuforia.VuforiaRuntimeUtilities/CameraState
extern "C" void CameraState_t1646041879_marshal_pinvoke_cleanup(CameraState_t1646041879_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Vuforia.VuforiaRuntimeUtilities/CameraState
extern "C" void CameraState_t1646041879_marshal_com(const CameraState_t1646041879& unmarshaled, CameraState_t1646041879_marshaled_com& marshaled)
{
	marshaled.___U3CInitializedU3Ek__BackingField_0 = static_cast<int32_t>(unmarshaled.get_U3CInitializedU3Ek__BackingField_0());
	marshaled.___U3CActiveU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.get_U3CActiveU3Ek__BackingField_1());
	marshaled.___U3CCameraDirectionU3Ek__BackingField_2 = unmarshaled.get_U3CCameraDirectionU3Ek__BackingField_2();
	marshaled.___U3CDeviceModeU3Ek__BackingField_3 = unmarshaled.get_U3CDeviceModeU3Ek__BackingField_3();
}
extern "C" void CameraState_t1646041879_marshal_com_back(const CameraState_t1646041879_marshaled_com& marshaled, CameraState_t1646041879& unmarshaled)
{
	bool unmarshaled_U3CInitializedU3Ek__BackingField_temp_0 = false;
	unmarshaled_U3CInitializedU3Ek__BackingField_temp_0 = static_cast<bool>(marshaled.___U3CInitializedU3Ek__BackingField_0);
	unmarshaled.set_U3CInitializedU3Ek__BackingField_0(unmarshaled_U3CInitializedU3Ek__BackingField_temp_0);
	bool unmarshaled_U3CActiveU3Ek__BackingField_temp_1 = false;
	unmarshaled_U3CActiveU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CActiveU3Ek__BackingField_1);
	unmarshaled.set_U3CActiveU3Ek__BackingField_1(unmarshaled_U3CActiveU3Ek__BackingField_temp_1);
	int32_t unmarshaled_U3CCameraDirectionU3Ek__BackingField_temp_2 = 0;
	unmarshaled_U3CCameraDirectionU3Ek__BackingField_temp_2 = marshaled.___U3CCameraDirectionU3Ek__BackingField_2;
	unmarshaled.set_U3CCameraDirectionU3Ek__BackingField_2(unmarshaled_U3CCameraDirectionU3Ek__BackingField_temp_2);
	int32_t unmarshaled_U3CDeviceModeU3Ek__BackingField_temp_3 = 0;
	unmarshaled_U3CDeviceModeU3Ek__BackingField_temp_3 = marshaled.___U3CDeviceModeU3Ek__BackingField_3;
	unmarshaled.set_U3CDeviceModeU3Ek__BackingField_3(unmarshaled_U3CDeviceModeU3Ek__BackingField_temp_3);
}
// Conversion method for clean up from marshalling of: Vuforia.VuforiaRuntimeUtilities/CameraState
extern "C" void CameraState_t1646041879_marshal_com_cleanup(CameraState_t1646041879_marshaled_com& marshaled)
{
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities/CameraState::get_Initialized()
extern "C" IL2CPP_METHOD_ATTR bool CameraState_get_Initialized_m468400558 (CameraState_t1646041879 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CInitializedU3Ek__BackingField_0();
		return L_0;
	}
}
extern "C"  bool CameraState_get_Initialized_m468400558_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraState_t1646041879 * _thisAdjusted = reinterpret_cast<CameraState_t1646041879 *>(__this + 1);
	return CameraState_get_Initialized_m468400558(_thisAdjusted, method);
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities/CameraState::get_Active()
extern "C" IL2CPP_METHOD_ATTR bool CameraState_get_Active_m552154702 (CameraState_t1646041879 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CActiveU3Ek__BackingField_1();
		return L_0;
	}
}
extern "C"  bool CameraState_get_Active_m552154702_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraState_t1646041879 * _thisAdjusted = reinterpret_cast<CameraState_t1646041879 *>(__this + 1);
	return CameraState_get_Active_m552154702(_thisAdjusted, method);
}
// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaRuntimeUtilities/CameraState::get_CameraDirection()
extern "C" IL2CPP_METHOD_ATTR int32_t CameraState_get_CameraDirection_m2200184139 (CameraState_t1646041879 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CCameraDirectionU3Ek__BackingField_2();
		return L_0;
	}
}
extern "C"  int32_t CameraState_get_CameraDirection_m2200184139_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraState_t1646041879 * _thisAdjusted = reinterpret_cast<CameraState_t1646041879 *>(__this + 1);
	return CameraState_get_CameraDirection_m2200184139(_thisAdjusted, method);
}
// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaRuntimeUtilities/CameraState::get_DeviceMode()
extern "C" IL2CPP_METHOD_ATTR int32_t CameraState_get_DeviceMode_m2257768327 (CameraState_t1646041879 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CDeviceModeU3Ek__BackingField_3();
		return L_0;
	}
}
extern "C"  int32_t CameraState_get_DeviceMode_m2257768327_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraState_t1646041879 * _thisAdjusted = reinterpret_cast<CameraState_t1646041879 *>(__this + 1);
	return CameraState_get_DeviceMode_m2257768327(_thisAdjusted, method);
}
// System.Void Vuforia.VuforiaRuntimeUtilities/CameraState::.ctor(System.Boolean,System.Boolean,Vuforia.CameraDevice/CameraDirection,Vuforia.CameraDevice/CameraDeviceMode)
extern "C" IL2CPP_METHOD_ATTR void CameraState__ctor_m2095580676 (CameraState_t1646041879 * __this, bool ___initialized0, bool ___active1, int32_t ___cameraDirection2, int32_t ___deviceMode3, const RuntimeMethod* method)
{
	{
		bool L_0 = ___initialized0;
		__this->set_U3CInitializedU3Ek__BackingField_0(L_0);
		bool L_1 = ___active1;
		__this->set_U3CActiveU3Ek__BackingField_1(L_1);
		int32_t L_2 = ___cameraDirection2;
		__this->set_U3CCameraDirectionU3Ek__BackingField_2(L_2);
		int32_t L_3 = ___deviceMode3;
		__this->set_U3CDeviceModeU3Ek__BackingField_3(L_3);
		return;
	}
}
extern "C"  void CameraState__ctor_m2095580676_AdjustorThunk (RuntimeObject * __this, bool ___initialized0, bool ___active1, int32_t ___cameraDirection2, int32_t ___deviceMode3, const RuntimeMethod* method)
{
	CameraState_t1646041879 * _thisAdjusted = reinterpret_cast<CameraState_t1646041879 *>(__this + 1);
	CameraState__ctor_m2095580676(_thisAdjusted, ___initialized0, ___active1, ___cameraDirection2, ___deviceMode3, method);
}
// Vuforia.VuforiaRuntimeUtilities/CameraState Vuforia.VuforiaRuntimeUtilities/CameraState::get_UnInitialized()
extern "C" IL2CPP_METHOD_ATTR CameraState_t1646041879  CameraState_get_UnInitialized_m313348583 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	CameraState_t1646041879  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CameraState_t1646041879 ));
		CameraState_t1646041879  L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.VuforiaRuntimeUtilities/GlobalVars::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GlobalVars__ctor_m1251797938 (GlobalVars_t2485087241 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.VuforiaUnity::Deinit()
extern "C" IL2CPP_METHOD_ATTR void VuforiaUnity_Deinit_m1714227419 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaUnity_Deinit_m1714227419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(143 /* System.Void Vuforia.IVuforiaWrapper::QcarDeinit() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Boolean Vuforia.VuforiaUnity::IsRendererDirty()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaUnity_IsRendererDirty_m4230899877 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaUnity_IsRendererDirty_m4230899877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_0 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var);
		bool L_1 = ((VuforiaUnity_t1788908542_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var))->get_mRendererDirty_2();
		V_0 = L_1;
		((VuforiaUnity_t1788908542_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var))->set_mRendererDirty_2((bool)0);
		NullCheck(L_0);
		bool L_2 = CameraDevice_IsDirty_m446381236(L_0, /*hidden argument*/NULL);
		bool L_3 = V_0;
		return (bool)((int32_t)((int32_t)L_2|(int32_t)L_3));
	}
}
// System.Boolean Vuforia.VuforiaUnity::SetHint(Vuforia.VuforiaUnity/VuforiaHint,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool VuforiaUnity_SetHint_m74176957 (RuntimeObject * __this /* static, unused */, int32_t ___hint0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaUnity_SetHint_m74176957_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = ___hint0;
		int32_t L_2 = ___value1;
		NullCheck(L_0);
		int32_t L_3 = InterfaceFuncInvoker2< int32_t, uint32_t, int32_t >::Invoke(149 /* System.Int32 Vuforia.IVuforiaWrapper::QcarSetHint(System.UInt32,System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Vuforia.VuforiaUnity::SetHint(System.UInt32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool VuforiaUnity_SetHint_m1654650971 (RuntimeObject * __this /* static, unused */, uint32_t ___hint0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaUnity_SetHint_m1654650971_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint32_t L_1 = ___hint0;
		int32_t L_2 = ___value1;
		NullCheck(L_0);
		int32_t L_3 = InterfaceFuncInvoker2< int32_t, uint32_t, int32_t >::Invoke(149 /* System.Int32 Vuforia.IVuforiaWrapper::QcarSetHint(System.UInt32,System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void Vuforia.VuforiaUnity::OnPause()
extern "C" IL2CPP_METHOD_ATTR void VuforiaUnity_OnPause_m325849098 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaUnity_OnPause_m325849098_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(135 /* System.Void Vuforia.IVuforiaWrapper::OnPause() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void Vuforia.VuforiaUnity::OnResume()
extern "C" IL2CPP_METHOD_ATTR void VuforiaUnity_OnResume_m2059515051 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaUnity_OnResume_m2059515051_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(136 /* System.Void Vuforia.IVuforiaWrapper::OnResume() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void Vuforia.VuforiaUnity::SetRendererDirty()
extern "C" IL2CPP_METHOD_ATTR void VuforiaUnity_SetRendererDirty_m1269376789 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaUnity_SetRendererDirty_m1269376789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var);
		((VuforiaUnity_t1788908542_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var))->set_mRendererDirty_2((bool)1);
		return;
	}
}
// System.String Vuforia.VuforiaUnity::GetVuforiaLibraryVersion()
extern "C" IL2CPP_METHOD_ATTR String_t* VuforiaUnity_GetVuforiaLibraryVersion_m2580526827 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaUnity_GetVuforiaLibraryVersion_m2580526827_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_0, ((int32_t)64), /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = V_0;
		NullCheck(L_1);
		InterfaceActionInvoker2< StringBuilder_t *, int32_t >::Invoke(92 /* System.Void Vuforia.IVuforiaWrapper::GetVuforiaLibraryVersion(System.Text.StringBuilder,System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_1, L_2, ((int32_t)64));
		StringBuilder_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Boolean Vuforia.VuforiaUnity::SetHolographicAppCoordinateSystem(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool VuforiaUnity_SetHolographicAppCoordinateSystem_m1027427466 (RuntimeObject * __this /* static, unused */, intptr_t ___appSpecifiedCS0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaUnity_SetHolographicAppCoordinateSystem_m1027427466_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = ___appSpecifiedCS0;
		NullCheck(L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(180 /* System.Int32 Vuforia.IVuforiaWrapper::SetHolographicAppCS(System.IntPtr) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0, L_1);
		return (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void Vuforia.VuforiaUnity::SetHoloLensApiAbstraction(Vuforia.IHoloLensApiAbstraction)
extern "C" IL2CPP_METHOD_ATTR void VuforiaUnity_SetHoloLensApiAbstraction_m2124408801 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___holoLensApiAbstraction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaUnity_SetHoloLensApiAbstraction_m2124408801_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___holoLensApiAbstraction0;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var);
		((VuforiaUnity_t1788908542_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var))->set_mHoloLensApiAbstraction_0(L_0);
		return;
	}
}
// Vuforia.IHoloLensApiAbstraction Vuforia.VuforiaUnity::GetHoloLensApiAbstraction()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VuforiaUnity_GetHoloLensApiAbstraction_m3725012548 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaUnity_GetHoloLensApiAbstraction_m3725012548_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((VuforiaUnity_t1788908542_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var))->get_mHoloLensApiAbstraction_0();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaUnity::SetApplicationEnvironment()
extern "C" IL2CPP_METHOD_ATTR void VuforiaUnity_SetApplicationEnvironment_m2893355577 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaUnity_SetApplicationEnvironment_m2893355577_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	StringU5BU5D_t1281789340* V_3 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		String_t* L_0 = Application_get_unityVersion_m1068543125(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t3657309853_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_1 = Regex_Split_m3767700898(NULL /*static, unused*/, L_0, _stringLiteral2896697054, /*hidden argument*/NULL);
		V_3 = L_1;
		StringU5BU5D_t1281789340* L_2 = V_3;
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))) < ((int32_t)3)))
		{
			goto IL_0037;
		}
	}
	{
		StringU5BU5D_t1281789340* L_3 = V_3;
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		StringU5BU5D_t1281789340* L_7 = V_3;
		NullCheck(L_7);
		int32_t L_8 = 1;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		StringU5BU5D_t1281789340* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = 2;
		String_t* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_15 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var);
		int32_t L_19 = ((VuforiaUnity_t1788908542_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var))->get_mWrapperType_3();
		NullCheck(L_15);
		InterfaceActionInvoker4< int32_t, int32_t, int32_t, int32_t >::Invoke(179 /* System.Void Vuforia.IVuforiaWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32,System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_15, L_16, L_17, L_18, L_19);
		return;
	}
}
// System.Void Vuforia.VuforiaUnity::.cctor()
extern "C" IL2CPP_METHOD_ATTR void VuforiaUnity__cctor_m398384037 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaUnity__cctor_m398384037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullHoloLensApiAbstraction_t2968904009 * L_0 = (NullHoloLensApiAbstraction_t2968904009 *)il2cpp_codegen_object_new(NullHoloLensApiAbstraction_t2968904009_il2cpp_TypeInfo_var);
		NullHoloLensApiAbstraction__ctor_m1783196481(L_0, /*hidden argument*/NULL);
		((VuforiaUnity_t1788908542_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var))->set_mHoloLensApiAbstraction_0(L_0);
		((VuforiaUnity_t1788908542_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var))->set_mRendererDirty_2((bool)0);
		((VuforiaUnity_t1788908542_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var))->set_mWrapperType_3(((int32_t)3914683));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.VuforiaVRDeviceCameraConfiguration::.ctor(UnityEngine.Camera,Vuforia.VRDeviceController,System.Single)
extern "C" IL2CPP_METHOD_ATTR void VuforiaVRDeviceCameraConfiguration__ctor_m3714078355 (VuforiaVRDeviceCameraConfiguration_t3308462389 * __this, Camera_t4157153871 * ___cam0, VRDeviceController_t3863472269 * ___vrDeviceController1, float ___stereoOffset2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaVRDeviceCameraConfiguration__ctor_m3714078355_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = ___cam0;
		VRDeviceController_t3863472269 * L_1 = ___vrDeviceController1;
		VRDeviceCameraConfiguration__ctor_m1851221678(__this, L_0, L_1, /*hidden argument*/NULL);
		Camera_t4157153871 * L_2 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mCamera_12();
		StereoProjMatrixStore_t888524276 * L_3 = (StereoProjMatrixStore_t888524276 *)il2cpp_codegen_object_new(StereoProjMatrixStore_t888524276_il2cpp_TypeInfo_var);
		StereoProjMatrixStore__ctor_m1594058727(L_3, L_2, 0, /*hidden argument*/NULL);
		((VRDeviceCameraConfiguration_t3015543037 *)__this)->set_mMatrixStore_13(L_3);
		float L_4 = ___stereoOffset2;
		__this->set_mStereoOffset_27(L_4);
		return;
	}
}
// System.Void Vuforia.VuforiaVRDeviceCameraConfiguration::Init()
extern "C" IL2CPP_METHOD_ATTR void VuforiaVRDeviceCameraConfiguration_Init_m1502773221 (VuforiaVRDeviceCameraConfiguration_t3308462389 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaVRDeviceCameraConfiguration_Init_m1502773221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		VRDeviceCameraConfiguration_Init_m1528532934(__this, /*hidden argument*/NULL);
		VRDeviceController_t3863472269 * L_0 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mVrDeviceController_25();
		NullCheck(L_0);
		VRDeviceController_DisableHeadPoseUpdates_m2210953270(L_0, _stringLiteral1365285002, /*hidden argument*/NULL);
		float L_1 = __this->get_mStereoOffset_27();
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_0), ((float)((float)((-L_1))/(float)(2.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_2 = __this->get_mStereoOffset_27();
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_1), ((float)((float)L_2/(float)(2.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_4 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = V_1;
		Quaternion_t2301928331  L_6 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CameraConfigurationUtility_t1452827745_il2cpp_TypeInfo_var);
		CameraConfigurationUtility_SetVRDeviceStereoOffset_m585534095(NULL /*static, unused*/, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		StereoProjMatrixStore_t888524276 * L_7 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mMatrixStore_13();
		Vector3_t3722313464  L_8 = V_0;
		Quaternion_t2301928331  L_9 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = V_1;
		Quaternion_t2301928331  L_11 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		StereoProjMatrixStore_SetDeviceOffset_m4045855105(L_7, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_12 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< bool >::Invoke(121 /* System.Void Vuforia.IVuforiaWrapper::NativeUnity_SetDeviceConnected(System.Boolean) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_12, (bool)1);
		RuntimeObject* L_13 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< bool >::Invoke(122 /* System.Void Vuforia.IVuforiaWrapper::NativeUnity_SetDistortionMeshNeedsRefresh(System.Boolean) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_13, (bool)1);
		RuntimeObject* L_14 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_14);
		InterfaceActionInvoker1< bool >::Invoke(116 /* System.Void Vuforia.IVuforiaWrapper::NativeUnity_disableDistortion(System.Boolean) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_14, (bool)0);
		return;
	}
}
// System.Void Vuforia.VuforiaVRDeviceCameraConfiguration::CheckForSurfaceChanges()
extern "C" IL2CPP_METHOD_ATTR void VuforiaVRDeviceCameraConfiguration_CheckForSurfaceChanges_m1312830117 (VuforiaVRDeviceCameraConfiguration_t3308462389 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = VuforiaVRDeviceCameraConfiguration_IsVuforiaVRDeviceReady_m2144715820(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = __this->get_mDelayedVideoBackgroundEnabledChanged_28();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		__this->set_mDelayedVideoBackgroundEnabledChanged_28((bool)0);
		VirtActionInvoker0::Invoke(21 /* System.Void Vuforia.VRDeviceCameraConfiguration::OnVideoBackGroundEnabledChanged() */, __this);
	}

IL_001c:
	{
		VRDeviceCameraConfiguration_CheckForSurfaceChanges_m3256944383(__this, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void Vuforia.VuforiaVRDeviceCameraConfiguration::OnAfterUpdateState(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void VuforiaVRDeviceCameraConfiguration_OnAfterUpdateState_m81876171 (VuforiaVRDeviceCameraConfiguration_t3308462389 * __this, Transform_t3600365921 * ___trackingReference0, const RuntimeMethod* method)
{
	{
		bool L_0 = VuforiaVRDeviceCameraConfiguration_IsVuforiaVRDeviceReady_m2144715820(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Transform_t3600365921 * L_1 = ___trackingReference0;
		VRDeviceCameraConfiguration_OnAfterUpdateState_m2749658649(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = BaseCameraConfiguration_IsVideoBackgroundEnabled_m601870270(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		VRDeviceCameraConfiguration_RestoreVuforiaFrustumSkewInMatrices_m1301323031(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void Vuforia.VuforiaVRDeviceCameraConfiguration::OnVideoBackGroundEnabledChanged()
extern "C" IL2CPP_METHOD_ATTR void VuforiaVRDeviceCameraConfiguration_OnVideoBackGroundEnabledChanged_m1915675326 (VuforiaVRDeviceCameraConfiguration_t3308462389 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = VuforiaVRDeviceCameraConfiguration_IsVuforiaVRDeviceReady_m2144715820(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		VRDeviceCameraConfiguration_OnVideoBackGroundEnabledChanged_m2975701053(__this, /*hidden argument*/NULL);
		bool L_1 = BaseCameraConfiguration_IsVideoBackgroundEnabled_m601870270(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		VRDeviceCameraConfiguration_RestoreVuforiaFrustumSkewInMatrices_m1301323031(__this, /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		__this->set_mDelayedVideoBackgroundEnabledChanged_28((bool)1);
	}

IL_0023:
	{
		return;
	}
}
// System.Void Vuforia.VuforiaVRDeviceCameraConfiguration::Destroy()
extern "C" IL2CPP_METHOD_ATTR void VuforiaVRDeviceCameraConfiguration_Destroy_m1910297319 (VuforiaVRDeviceCameraConfiguration_t3308462389 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaVRDeviceCameraConfiguration_Destroy_m1910297319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VRDeviceCameraConfiguration_Destroy_m2195074621(__this, /*hidden argument*/NULL);
		VRDeviceController_t3863472269 * L_0 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mVrDeviceController_25();
		NullCheck(L_0);
		VRDeviceController_EnableHeadPoseUpdates_m2887400636(L_0, _stringLiteral1365285002, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaVRDeviceCameraConfiguration::UpdateProjection()
extern "C" IL2CPP_METHOD_ATTR void VuforiaVRDeviceCameraConfiguration_UpdateProjection_m597620862 (VuforiaVRDeviceCameraConfiguration_t3308462389 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaVRDeviceCameraConfiguration_UpdateProjection_m597620862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t1817901843  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Matrix4x4_t1817901843  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector2_t2156229523  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector2_t2156229523  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector2_t2156229523  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector2_t2156229523  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Matrix4x4_t1817901843  V_10;
	memset(&V_10, 0, sizeof(V_10));
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
		Camera_t4157153871 * L_1 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mCamera_12();
		NullCheck(L_1);
		float L_2 = Camera_get_nearClipPlane_m837839537(L_1, /*hidden argument*/NULL);
		((VRDeviceCameraConfiguration_t3015543037 *)__this)->set_mLastAppliedNearClipPlane_15(L_2);
		Camera_t4157153871 * L_3 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mCamera_12();
		NullCheck(L_3);
		float L_4 = Camera_get_farClipPlane_m538536689(L_3, /*hidden argument*/NULL);
		((VRDeviceCameraConfiguration_t3015543037 *)__this)->set_mLastAppliedFarClipPlane_16(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Device_t64880687_il2cpp_TypeInfo_var);
		Device_t64880687 * L_5 = Device_get_Instance_m641318052(NULL /*static, unused*/, /*hidden argument*/NULL);
		Device_t64880687 * L_6 = L_5;
		float L_7 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mLastAppliedNearClipPlane_15();
		float L_8 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mLastAppliedFarClipPlane_16();
		int32_t L_9 = ((BaseCameraConfiguration_t3118151474 *)__this)->get_mProjectionOrientation_6();
		NullCheck(L_6);
		Matrix4x4_t1817901843  L_10 = Device_GetProjectionMatrix_m2279704666(L_6, 1, L_7, L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		Device_t64880687 * L_11 = L_6;
		float L_12 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mLastAppliedNearClipPlane_15();
		float L_13 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mLastAppliedFarClipPlane_16();
		int32_t L_14 = ((BaseCameraConfiguration_t3118151474 *)__this)->get_mProjectionOrientation_6();
		NullCheck(L_11);
		Matrix4x4_t1817901843  L_15 = Device_GetProjectionMatrix_m2279704666(L_11, 2, L_12, L_13, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		StereoProjMatrixStore_t888524276 * L_16 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mMatrixStore_13();
		NullCheck(L_16);
		float L_17 = StereoProjMatrixStore_GetCurrentVerticalFov_m3577900539(L_16, 0, /*hidden argument*/NULL);
		V_2 = L_17;
		StereoProjMatrixStore_t888524276 * L_18 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mMatrixStore_13();
		NullCheck(L_18);
		float L_19 = StereoProjMatrixStore_GetCurrentVerticalFov_m3577900539(L_18, 1, /*hidden argument*/NULL);
		V_3 = L_19;
		StereoProjMatrixStore_t888524276 * L_20 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mMatrixStore_13();
		NullCheck(L_20);
		float L_21 = StereoProjMatrixStore_GetCurrentHorizontalFov_m1027576027(L_20, 0, /*hidden argument*/NULL);
		V_4 = L_21;
		StereoProjMatrixStore_t888524276 * L_22 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mMatrixStore_13();
		NullCheck(L_22);
		float L_23 = StereoProjMatrixStore_GetCurrentHorizontalFov_m1027576027(L_22, 1, /*hidden argument*/NULL);
		V_5 = L_23;
		Matrix4x4_t1817901843  L_24 = V_0;
		float L_25 = V_2;
		float L_26 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(CameraConfigurationUtility_t1452827745_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_27 = CameraConfigurationUtility_ScalePerspectiveProjectionMatrix_m3287947876(NULL /*static, unused*/, L_24, L_25, L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		Matrix4x4_t1817901843  L_28 = V_1;
		float L_29 = V_3;
		float L_30 = V_5;
		Matrix4x4_t1817901843  L_31 = CameraConfigurationUtility_ScalePerspectiveProjectionMatrix_m3287947876(NULL /*static, unused*/, L_28, L_29, L_30, /*hidden argument*/NULL);
		V_1 = L_31;
		StereoProjMatrixStore_t888524276 * L_32 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mMatrixStore_13();
		Matrix4x4_t1817901843  L_33 = V_0;
		NullCheck(L_32);
		StereoProjMatrixStore_SetMatrix_m1651838202(L_32, 0, L_33, /*hidden argument*/NULL);
		StereoProjMatrixStore_t888524276 * L_34 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mMatrixStore_13();
		Matrix4x4_t1817901843  L_35 = V_1;
		NullCheck(L_34);
		StereoProjMatrixStore_SetMatrix_m1651838202(L_34, 1, L_35, /*hidden argument*/NULL);
		float L_36 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&V_0), 0, 2, /*hidden argument*/NULL);
		float L_37 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&V_0), 1, 2, /*hidden argument*/NULL);
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_6), L_36, L_37, /*hidden argument*/NULL);
		Device_t64880687 * L_38 = L_11;
		NullCheck(L_38);
		Vector2_t2156229523  L_39 = Device_GetViewportCentreToEyeAxis_m1922693054(L_38, 1, /*hidden argument*/NULL);
		V_7 = L_39;
		Dictionary_2_t1076537327 * L_40 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mVuforiaFrustumSkew_23();
		Vector2_t2156229523  L_41 = V_6;
		NullCheck(L_40);
		Dictionary_2_set_Item_m651737360(L_40, 0, L_41, /*hidden argument*/Dictionary_2_set_Item_m651737360_RuntimeMethod_var);
		Dictionary_2_t1076537327 * L_42 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mCenterToEyeAxis_24();
		Vector2_t2156229523  L_43 = V_7;
		NullCheck(L_42);
		Dictionary_2_set_Item_m651737360(L_42, 0, L_43, /*hidden argument*/Dictionary_2_set_Item_m651737360_RuntimeMethod_var);
		float L_44 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&V_1), 0, 2, /*hidden argument*/NULL);
		float L_45 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&V_1), 1, 2, /*hidden argument*/NULL);
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_8), L_44, L_45, /*hidden argument*/NULL);
		NullCheck(L_38);
		Vector2_t2156229523  L_46 = Device_GetViewportCentreToEyeAxis_m1922693054(L_38, 2, /*hidden argument*/NULL);
		V_9 = L_46;
		Dictionary_2_t1076537327 * L_47 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mVuforiaFrustumSkew_23();
		Vector2_t2156229523  L_48 = V_8;
		NullCheck(L_47);
		Dictionary_2_set_Item_m651737360(L_47, 1, L_48, /*hidden argument*/Dictionary_2_set_Item_m651737360_RuntimeMethod_var);
		Dictionary_2_t1076537327 * L_49 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mCenterToEyeAxis_24();
		Vector2_t2156229523  L_50 = V_9;
		NullCheck(L_49);
		Dictionary_2_set_Item_m651737360(L_49, 1, L_50, /*hidden argument*/Dictionary_2_set_Item_m651737360_RuntimeMethod_var);
		Matrix4x4_t1817901843  L_51 = Matrix4x4_get_inverse_m1870592360((Matrix4x4_t1817901843 *)(&V_0), /*hidden argument*/NULL);
		V_10 = L_51;
		Matrix4x4_t1817901843  L_52 = V_10;
		float L_53 = CameraConfigurationUtility_GetMaxDepthForVideoBackground_m4148360315(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		((VRDeviceCameraConfiguration_t3015543037 *)__this)->set_mMaxDepthForVideoBackground_17(L_53);
		Matrix4x4_t1817901843  L_54 = V_10;
		float L_55 = CameraConfigurationUtility_GetMinDepthForVideoBackground_m1163416856(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		((VRDeviceCameraConfiguration_t3015543037 *)__this)->set_mMinDepthForVideoBackground_18(L_55);
		VRDeviceCameraConfiguration_ApplyStereoDepthToMatrices_m1392834803(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_56 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_56);
		InterfaceActionInvoker1< bool >::Invoke(122 /* System.Void Vuforia.IVuforiaWrapper::NativeUnity_SetDistortionMeshNeedsRefresh(System.Boolean) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_56, (bool)1);
		return;
	}
}
// System.Boolean Vuforia.VuforiaVRDeviceCameraConfiguration::ProjectionParamsChanged()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaVRDeviceCameraConfiguration_ProjectionParamsChanged_m4277806698 (VuforiaVRDeviceCameraConfiguration_t3308462389 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaVRDeviceCameraConfiguration_ProjectionParamsChanged_m4277806698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		StereoProjMatrixStore_t888524276 * L_0 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mMatrixStore_13();
		NullCheck(L_0);
		float L_1 = StereoProjMatrixStore_GetCurrentVerticalFov_m3577900539(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		StereoProjMatrixStore_t888524276 * L_2 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mMatrixStore_13();
		NullCheck(L_2);
		float L_3 = StereoProjMatrixStore_GetCurrentVerticalFov_m3577900539(L_2, 1, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = BaseCameraConfiguration_ProjectionParamsChanged_m2207724039(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0093;
		}
	}
	{
		Camera_t4157153871 * L_5 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mCamera_12();
		NullCheck(L_5);
		float L_6 = Camera_get_nearClipPlane_m837839537(L_5, /*hidden argument*/NULL);
		float L_7 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mLastAppliedNearClipPlane_15();
		IL2CPP_RUNTIME_CLASS_INIT(Math_t1671470975_il2cpp_TypeInfo_var);
		float L_8 = fabsf(((float)il2cpp_codegen_subtract((float)L_6, (float)L_7)));
		if ((((float)L_8) > ((float)(0.01f))))
		{
			goto IL_0093;
		}
	}
	{
		Camera_t4157153871 * L_9 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mCamera_12();
		NullCheck(L_9);
		float L_10 = Camera_get_farClipPlane_m538536689(L_9, /*hidden argument*/NULL);
		float L_11 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mLastAppliedFarClipPlane_16();
		IL2CPP_RUNTIME_CLASS_INIT(Math_t1671470975_il2cpp_TypeInfo_var);
		float L_12 = fabsf(((float)il2cpp_codegen_subtract((float)L_10, (float)L_11)));
		if ((((float)L_12) > ((float)(0.01f))))
		{
			goto IL_0093;
		}
	}
	{
		float L_13 = V_0;
		StereoProjMatrixStore_t888524276 * L_14 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mMatrixStore_13();
		NullCheck(L_14);
		float L_15 = StereoProjMatrixStore_GetLastAppliedVerticalFov_m3152920336(L_14, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_t1671470975_il2cpp_TypeInfo_var);
		float L_16 = fabsf(((float)il2cpp_codegen_subtract((float)L_13, (float)L_15)));
		if ((((float)L_16) > ((float)(0.01f))))
		{
			goto IL_0093;
		}
	}
	{
		float L_17 = V_1;
		StereoProjMatrixStore_t888524276 * L_18 = ((VRDeviceCameraConfiguration_t3015543037 *)__this)->get_mMatrixStore_13();
		NullCheck(L_18);
		float L_19 = StereoProjMatrixStore_GetLastAppliedVerticalFov_m3152920336(L_18, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_t1671470975_il2cpp_TypeInfo_var);
		float L_20 = fabsf(((float)il2cpp_codegen_subtract((float)L_17, (float)L_19)));
		return (bool)((((float)L_20) > ((float)(0.01f)))? 1 : 0);
	}

IL_0093:
	{
		return (bool)1;
	}
}
// System.Single Vuforia.VuforiaVRDeviceCameraConfiguration::GetStereoEyeDistance()
extern "C" IL2CPP_METHOD_ATTR float VuforiaVRDeviceCameraConfiguration_GetStereoEyeDistance_m25445541 (VuforiaVRDeviceCameraConfiguration_t3308462389 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_mStereoOffset_27();
		return L_0;
	}
}
// System.Boolean Vuforia.VuforiaVRDeviceCameraConfiguration::IsVuforiaVRDeviceReady()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaVRDeviceCameraConfiguration_IsVuforiaVRDeviceReady_m2144715820 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaVRDeviceCameraConfiguration_IsVuforiaVRDeviceReady_m2144715820_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(119 /* System.Int32 Vuforia.IVuforiaWrapper::NativeUnity_IsVuforiaVRDeviceReady() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Vuforia.IVuforiaWrapper Vuforia.VuforiaWrapper::get_Instance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VuforiaWrapper_get_Instance_m2947582594 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaWrapper_get_Instance_m2947582594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((VuforiaWrapper_t2763746413_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var))->get_sWrapper_0();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityPlayer_t3127875071_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = UnityPlayer_get_Instance_m348759883(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Vuforia.IUnityPlayer::LoadNativeLibraries() */, IUnityPlayer_t3870301646_il2cpp_TypeInfo_var, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		VuforiaWrapper_CreateRuntimeInstance_m1561005390(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((VuforiaWrapper_t2763746413_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var))->get_sWrapper_0();
		return L_2;
	}
}
// Vuforia.IVuforiaWrapper Vuforia.VuforiaWrapper::get_CamIndependentInstance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VuforiaWrapper_get_CamIndependentInstance_m1623182226 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaWrapper_get_CamIndependentInstance_m1623182226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((VuforiaWrapper_t2763746413_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var))->get_sCamIndependentWrapper_1();
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!((VuforiaNullWrapper_t2343315499 *)IsInstClass((RuntimeObject*)L_1, VuforiaNullWrapper_t2343315499_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityPlayer_t3127875071_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = UnityPlayer_get_Instance_m348759883(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Vuforia.IUnityPlayer::LoadNativeLibraries() */, IUnityPlayer_t3870301646_il2cpp_TypeInfo_var, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		VuforiaWrapper_CreateCamIndependentInstance_m77460357(NULL /*static, unused*/, /*hidden argument*/NULL);
		goto IL_002e;
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		((VuforiaWrapper_t2763746413_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var))->set_sCamIndependentWrapper_1(L_3);
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((VuforiaWrapper_t2763746413_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var))->get_sCamIndependentWrapper_1();
		return L_4;
	}
}
// System.Void Vuforia.VuforiaWrapper::CreateRuntimeInstance()
extern "C" IL2CPP_METHOD_ATTR void VuforiaWrapper_CreateRuntimeInstance_m1561005390 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaWrapper_CreateRuntimeInstance_m1561005390_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		VuforiaNativeWrapper_t2621726075 * L_1 = (VuforiaNativeWrapper_t2621726075 *)il2cpp_codegen_object_new(VuforiaNativeWrapper_t2621726075_il2cpp_TypeInfo_var);
		VuforiaNativeWrapper__ctor_m3689604155(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		((VuforiaWrapper_t2763746413_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var))->set_sWrapper_0(L_1);
		return;
	}

IL_0012:
	{
		VuforiaNullWrapper_t2343315499 * L_2 = (VuforiaNullWrapper_t2343315499 *)il2cpp_codegen_object_new(VuforiaNullWrapper_t2343315499_il2cpp_TypeInfo_var);
		VuforiaNullWrapper__ctor_m4220783226(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		((VuforiaWrapper_t2763746413_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var))->set_sWrapper_0(L_2);
		return;
	}
}
// System.Void Vuforia.VuforiaWrapper::CreateCamIndependentInstance()
extern "C" IL2CPP_METHOD_ATTR void VuforiaWrapper_CreateCamIndependentInstance_m77460357 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaWrapper_CreateCamIndependentInstance_m77460357_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsNativePluginSupportAvailable_m4173160650(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		VuforiaNativeWrapper_t2621726075 * L_1 = (VuforiaNativeWrapper_t2621726075 *)il2cpp_codegen_object_new(VuforiaNativeWrapper_t2621726075_il2cpp_TypeInfo_var);
		VuforiaNativeWrapper__ctor_m3689604155(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		((VuforiaWrapper_t2763746413_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var))->set_sCamIndependentWrapper_1(L_1);
		return;
	}

IL_0012:
	{
		VuforiaNullWrapper_t2343315499 * L_2 = (VuforiaNullWrapper_t2343315499 *)il2cpp_codegen_object_new(VuforiaNullWrapper_t2343315499_il2cpp_TypeInfo_var);
		VuforiaNullWrapper__ctor_m4220783226(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		((VuforiaWrapper_t2763746413_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var))->set_sCamIndependentWrapper_1(L_2);
		return;
	}
}
// System.Void Vuforia.VuforiaWrapper::SetImplementation(Vuforia.IVuforiaWrapper)
extern "C" IL2CPP_METHOD_ATTR void VuforiaWrapper_SetImplementation_m2123132207 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___implementation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuforiaWrapper_SetImplementation_m2123132207_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___implementation0;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		((VuforiaWrapper_t2763746413_StaticFields*)il2cpp_codegen_static_fields_for(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var))->set_sWrapper_0(L_0);
		return;
	}
}
// System.Void Vuforia.VuforiaWrapper::.cctor()
extern "C" IL2CPP_METHOD_ATTR void VuforiaWrapper__cctor_m71944666 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.WSAUnityPlayer::LoadNativeLibraries()
extern "C" IL2CPP_METHOD_ATTR void WSAUnityPlayer_LoadNativeLibraries_m3240794706 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::InitializePlatform()
extern "C" IL2CPP_METHOD_ATTR void WSAUnityPlayer_InitializePlatform_m618442718 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WSAUnityPlayer_InitializePlatform_m618442718_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WSAUnityPlayer_t3135728299_il2cpp_TypeInfo_var);
		WSAUnityPlayer_setPlatFormNative_m3566627842(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// Vuforia.VuforiaUnity/InitError Vuforia.WSAUnityPlayer::InitializeVuforia(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t WSAUnityPlayer_InitializeVuforia_m1469206804 (WSAUnityPlayer_t3135728299 * __this, String_t* ___licenseKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WSAUnityPlayer_InitializeVuforia_m1469206804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B6_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___licenseKey0;
		IL2CPP_RUNTIME_CLASS_INIT(WSAUnityPlayer_t3135728299_il2cpp_TypeInfo_var);
		int32_t L_1 = WSAUnityPlayer_initVuforiaWSA_m979993821(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		G_B1_0 = L_2;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B6_0 = L_2;
			goto IL_006f;
		}
	}
	{
		WSAUnityPlayer_InitializeSurface_m1007153949(__this, /*hidden argument*/NULL);
		String_t* L_3 = XRSettings_get_loadedDeviceName_m2020127682(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WSAUnityPlayer_t3135728299_il2cpp_TypeInfo_var);
		String_t* L_4 = ((WSAUnityPlayer_t3135728299_StaticFields*)il2cpp_codegen_static_fields_for(WSAUnityPlayer_t3135728299_il2cpp_TypeInfo_var))->get_UNITY_WINDOWSMR_IDENTIFIER_0();
		NullCheck(L_3);
		bool L_5 = String_Equals_m2270643605(L_3, L_4, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if (!L_5)
		{
			G_B5_0 = G_B1_0;
			goto IL_0065;
		}
	}
	{
		bool L_6 = XRDevice_get_isPresent_m3184523938(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = G_B2_0;
		if (!L_6)
		{
			G_B4_0 = G_B2_0;
			goto IL_005a;
		}
	}
	{
		HoloLensApiImplementation_t262900719 * L_7 = (HoloLensApiImplementation_t262900719 *)il2cpp_codegen_object_new(HoloLensApiImplementation_t262900719_il2cpp_TypeInfo_var);
		HoloLensApiImplementation__ctor_m1467655506(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var);
		VuforiaUnity_SetHoloLensApiAbstraction_m2124408801(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DeviceTrackerARController_t1095592542_il2cpp_TypeInfo_var);
		DeviceTrackerARController_t1095592542 * L_8 = DeviceTrackerARController_get_Instance_m1618232027(NULL /*static, unused*/, /*hidden argument*/NULL);
		DeviceTrackerConfiguration_t721467671 * L_9 = (DeviceTrackerConfiguration_t721467671 *)il2cpp_codegen_object_new(DeviceTrackerConfiguration_t721467671_il2cpp_TypeInfo_var);
		DeviceTrackerConfiguration__ctor_m2810033191(L_9, /*hidden argument*/NULL);
		DeviceTrackerConfiguration_t721467671 * L_10 = L_9;
		NullCheck(L_10);
		TrackerConfiguration_set_AutoInitAndStartTracker_m1359034220(L_10, (bool)1, /*hidden argument*/NULL);
		DeviceTrackerConfiguration_t721467671 * L_11 = L_10;
		NullCheck(L_11);
		DeviceTrackerConfiguration_set_TrackingMode_m2029048904(L_11, 1, /*hidden argument*/NULL);
		NullCheck(L_8);
		DeviceTrackerARController_SetDeviceTrackerConfiguration_m1557799529(L_8, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1206345658, /*hidden argument*/NULL);
		return (int32_t)(G_B3_0);
	}

IL_005a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral70419937, /*hidden argument*/NULL);
		return (int32_t)(G_B4_0);
	}

IL_0065:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral92849142, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
	}

IL_006f:
	{
		return (int32_t)(G_B6_0);
	}
}
// System.Void Vuforia.WSAUnityPlayer::StartScene()
extern "C" IL2CPP_METHOD_ATTR void WSAUnityPlayer_StartScene_m426981829 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WSAUnityPlayer_StartScene_m426981829_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = XRSettings_get_loadedDeviceName_m2020127682(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WSAUnityPlayer_t3135728299_il2cpp_TypeInfo_var);
		String_t* L_1 = ((WSAUnityPlayer_t3135728299_StaticFields*)il2cpp_codegen_static_fields_for(WSAUnityPlayer_t3135728299_il2cpp_TypeInfo_var))->get_UNITY_WINDOWSMR_IDENTIFIER_0();
		NullCheck(L_0);
		bool L_2 = String_Equals_m2270643605(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		bool L_3 = XRDevice_get_isPresent_m3184523938(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_4 = WorldManager_GetNativeISpatialCoordinateSystemPtr_m2915101162(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var);
		bool L_5 = VuforiaUnity_SetHolographicAppCoordinateSystem_m1027427466(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1366632535, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::Update()
extern "C" IL2CPP_METHOD_ATTR void WSAUnityPlayer_Update_m2619224026 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WSAUnityPlayer_Update_m2619224026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SurfaceUtilities_t1841955943_il2cpp_TypeInfo_var);
		bool L_0 = SurfaceUtilities_HasSurfaceBeenRecreated_m182283807(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		WSAUnityPlayer_InitializeSurface_m1007153949(__this, /*hidden argument*/NULL);
		return;
	}

IL_000e:
	{
		int32_t L_1 = WSAUnityPlayer_GetActualScreenOrientation_m1268631473(__this, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_mScreenOrientation_1();
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}
	{
		WSAUnityPlayer_SetUnityScreenOrientation_m1871021514(__this, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::Dispose()
extern "C" IL2CPP_METHOD_ATTR void WSAUnityPlayer_Dispose_m2347149042 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::OnPause()
extern "C" IL2CPP_METHOD_ATTR void WSAUnityPlayer_OnPause_m33757750 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WSAUnityPlayer_OnPause_m33757750_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var);
		VuforiaUnity_OnPause_m325849098(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::OnResume()
extern "C" IL2CPP_METHOD_ATTR void WSAUnityPlayer_OnResume_m1549828269 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WSAUnityPlayer_OnResume_m1549828269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var);
		VuforiaUnity_OnResume_m2059515051(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void WSAUnityPlayer_OnDestroy_m3595342806 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WSAUnityPlayer_OnDestroy_m3595342806_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var);
		VuforiaUnity_Deinit_m1714227419(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::InitializeSurface()
extern "C" IL2CPP_METHOD_ATTR void WSAUnityPlayer_InitializeSurface_m1007153949 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WSAUnityPlayer_InitializeSurface_m1007153949_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SurfaceUtilities_t1841955943_il2cpp_TypeInfo_var);
		SurfaceUtilities_OnSurfaceCreated_m4147616086(NULL /*static, unused*/, /*hidden argument*/NULL);
		WSAUnityPlayer_SetUnityScreenOrientation_m1871021514(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::SetUnityScreenOrientation()
extern "C" IL2CPP_METHOD_ATTR void WSAUnityPlayer_SetUnityScreenOrientation_m1871021514 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WSAUnityPlayer_SetUnityScreenOrientation_m1871021514_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = WSAUnityPlayer_GetActualScreenOrientation_m1268631473(__this, /*hidden argument*/NULL);
		__this->set_mScreenOrientation_1(L_0);
		int32_t L_1 = __this->get_mScreenOrientation_1();
		IL2CPP_RUNTIME_CLASS_INIT(SurfaceUtilities_t1841955943_il2cpp_TypeInfo_var);
		SurfaceUtilities_SetSurfaceOrientation_m1970989629(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_mScreenOrientation_1();
		IL2CPP_RUNTIME_CLASS_INIT(WSAUnityPlayer_t3135728299_il2cpp_TypeInfo_var);
		WSAUnityPlayer_setSurfaceOrientationWSA_m754964588(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.ScreenOrientation Vuforia.WSAUnityPlayer::GetActualScreenOrientation()
extern "C" IL2CPP_METHOD_ATTR int32_t WSAUnityPlayer_GetActualScreenOrientation_m1268631473 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WSAUnityPlayer_GetActualScreenOrientation_m1268631473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = Screen_get_orientation_m3354122719(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)5))))
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_2 = Input_get_deviceOrientation_m1569488603(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0032;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_002a;
			}
			case 3:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_002a:
	{
		V_0 = 3;
		goto IL_003c;
	}

IL_002e:
	{
		V_0 = 4;
		goto IL_003c;
	}

IL_0032:
	{
		V_0 = 1;
		goto IL_003c;
	}

IL_0036:
	{
		V_0 = 2;
		goto IL_003c;
	}

IL_003a:
	{
		V_0 = 3;
	}

IL_003c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Vuforia.WSAUnityPlayer::setPlatFormNative()
extern "C" IL2CPP_METHOD_ATTR void WSAUnityPlayer_setPlatFormNative_m3566627842 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("VuforiaWrapper"), "setPlatFormNative", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setPlatFormNative'"), NULL, NULL);
		}
	}

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Int32 Vuforia.WSAUnityPlayer::initVuforiaWSA(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t WSAUnityPlayer_initVuforiaWSA_m979993821 (RuntimeObject * __this /* static, unused */, String_t* ___licenseKey0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("VuforiaWrapper"), "initVuforiaWSA", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'initVuforiaWSA'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___licenseKey0' to native representation
	char* ____licenseKey0_marshaled = NULL;
	____licenseKey0_marshaled = il2cpp_codegen_marshal_string(___licenseKey0);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____licenseKey0_marshaled);

	// Marshaling cleanup of parameter '___licenseKey0' native representation
	il2cpp_codegen_marshal_free(____licenseKey0_marshaled);
	____licenseKey0_marshaled = NULL;

	return returnValue;
}
// System.Void Vuforia.WSAUnityPlayer::setSurfaceOrientationWSA(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WSAUnityPlayer_setSurfaceOrientationWSA_m754964588 (RuntimeObject * __this /* static, unused */, int32_t ___screenOrientation0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("VuforiaWrapper"), "setSurfaceOrientationWSA", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setSurfaceOrientationWSA'"), NULL, NULL);
		}
	}

	// Native function invocation
	il2cppPInvokeFunc(___screenOrientation0);

}
// System.Void Vuforia.WSAUnityPlayer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WSAUnityPlayer__ctor_m3852159652 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::.cctor()
extern "C" IL2CPP_METHOD_ATTR void WSAUnityPlayer__cctor_m3614377559 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WSAUnityPlayer__cctor_m3614377559_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((WSAUnityPlayer_t3135728299_StaticFields*)il2cpp_codegen_static_fields_for(WSAUnityPlayer_t3135728299_il2cpp_TypeInfo_var))->set_UNITY_WINDOWSMR_IDENTIFIER_0(_stringLiteral1601630912);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.WSAUnityPlayer/HoloLensApiImplementation::SetWorldAnchor(Vuforia.TrackableBehaviour,Vuforia.VuforiaManager/TrackableIdPair)
extern "C" IL2CPP_METHOD_ATTR void HoloLensApiImplementation_SetWorldAnchor_m4030643753 (HoloLensApiImplementation_t262900719 * __this, TrackableBehaviour_t1113559212 * ___trackableBehaviour0, TrackableIdPair_t4227350457  ___trackableID1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensApiImplementation_SetWorldAnchor_m4030643753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WorldAnchor_t2161774153 * V_0 = NULL;
	{
		TrackableBehaviour_t1113559212 * L_0 = ___trackableBehaviour0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		WorldAnchor_t2161774153 * L_2 = GameObject_AddComponent_TisWorldAnchor_t2161774153_m1146425241(L_1, /*hidden argument*/GameObject_AddComponent_TisWorldAnchor_t2161774153_m1146425241_RuntimeMethod_var);
		V_0 = L_2;
		Dictionary_2_t1141005148 * L_3 = __this->get_mWorldAnchors_0();
		TrackableIdPair_t4227350457  L_4 = ___trackableID1;
		WorldAnchor_t2161774153 * L_5 = V_0;
		NullCheck(L_3);
		Dictionary_2_set_Item_m3931702618(L_3, L_4, L_5, /*hidden argument*/Dictionary_2_set_Item_m3931702618_RuntimeMethod_var);
		WorldAnchor_t2161774153 * L_6 = V_0;
		intptr_t L_7 = (intptr_t)HoloLensApiImplementation_OnWorldAnchorTrackingChanged_m813234441_RuntimeMethod_var;
		OnTrackingChangedDelegate_t3480415086 * L_8 = (OnTrackingChangedDelegate_t3480415086 *)il2cpp_codegen_object_new(OnTrackingChangedDelegate_t3480415086_il2cpp_TypeInfo_var);
		OnTrackingChangedDelegate__ctor_m637460647(L_8, __this, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		WorldAnchor_add_OnTrackingChanged_m459279320(L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer/HoloLensApiImplementation::DeleteWorldAnchor(Vuforia.VuforiaManager/TrackableIdPair)
extern "C" IL2CPP_METHOD_ATTR void HoloLensApiImplementation_DeleteWorldAnchor_m2499016255 (HoloLensApiImplementation_t262900719 * __this, TrackableIdPair_t4227350457  ___trackableID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensApiImplementation_DeleteWorldAnchor_m2499016255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WorldAnchor_t2161774153 * V_0 = NULL;
	{
		Dictionary_2_t1141005148 * L_0 = __this->get_mWorldAnchors_0();
		TrackableIdPair_t4227350457  L_1 = ___trackableID0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3931265510(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3931265510_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Dictionary_2_t1141005148 * L_3 = __this->get_mWorldAnchors_0();
		TrackableIdPair_t4227350457  L_4 = ___trackableID0;
		NullCheck(L_3);
		WorldAnchor_t2161774153 * L_5 = Dictionary_2_get_Item_m479432706(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m479432706_RuntimeMethod_var);
		V_0 = L_5;
		Dictionary_2_t1141005148 * L_6 = __this->get_mWorldAnchors_0();
		TrackableIdPair_t4227350457  L_7 = ___trackableID0;
		NullCheck(L_6);
		Dictionary_2_Remove_m722751029(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m722751029_RuntimeMethod_var);
		WorldAnchor_t2161774153 * L_8 = V_0;
		HoloLensApiImplementation_InternalDeleteWA_m1699531741(__this, L_8, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer/HoloLensApiImplementation::DeleteWorldAnchor(Vuforia.TrackableBehaviour)
extern "C" IL2CPP_METHOD_ATTR void HoloLensApiImplementation_DeleteWorldAnchor_m1964262436 (HoloLensApiImplementation_t262900719 * __this, TrackableBehaviour_t1113559212 * ___trackableBehaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensApiImplementation_DeleteWorldAnchor_m1964262436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WorldAnchor_t2161774153 * V_0 = NULL;
	List_1_t1404457903 * V_1 = NULL;
	Enumerator_t3095187923  V_2;
	memset(&V_2, 0, sizeof(V_2));
	KeyValuePair_2_t3538677315  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Enumerator_t3293701780  V_4;
	memset(&V_4, 0, sizeof(V_4));
	TrackableIdPair_t4227350457  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		TrackableBehaviour_t1113559212 * L_0 = ___trackableBehaviour0;
		NullCheck(L_0);
		WorldAnchor_t2161774153 * L_1 = Component_GetComponent_TisWorldAnchor_t2161774153_m2159763270(L_0, /*hidden argument*/Component_GetComponent_TisWorldAnchor_t2161774153_m2159763270_RuntimeMethod_var);
		V_0 = L_1;
		WorldAnchor_t2161774153 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00b6;
		}
	}
	{
		Dictionary_2_t1141005148 * L_4 = __this->get_mWorldAnchors_0();
		WorldAnchor_t2161774153 * L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = Dictionary_2_ContainsValue_m3973620170(L_4, L_5, /*hidden argument*/Dictionary_2_ContainsValue_m3973620170_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_00af;
		}
	}
	{
		List_1_t1404457903 * L_7 = (List_1_t1404457903 *)il2cpp_codegen_object_new(List_1_t1404457903_il2cpp_TypeInfo_var);
		List_1__ctor_m553929403(L_7, /*hidden argument*/List_1__ctor_m553929403_RuntimeMethod_var);
		V_1 = L_7;
		Dictionary_2_t1141005148 * L_8 = __this->get_mWorldAnchors_0();
		NullCheck(L_8);
		Enumerator_t3095187923  L_9 = Dictionary_2_GetEnumerator_m4020718675(L_8, /*hidden argument*/Dictionary_2_GetEnumerator_m4020718675_RuntimeMethod_var);
		V_2 = L_9;
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005c;
		}

IL_0038:
		{
			KeyValuePair_2_t3538677315  L_10 = Enumerator_get_Current_m1400196701((Enumerator_t3095187923 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m1400196701_RuntimeMethod_var);
			V_3 = L_10;
			WorldAnchor_t2161774153 * L_11 = KeyValuePair_2_get_Value_m3787101018((KeyValuePair_2_t3538677315 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3787101018_RuntimeMethod_var);
			WorldAnchor_t2161774153 * L_12 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_13 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_005c;
			}
		}

IL_004f:
		{
			List_1_t1404457903 * L_14 = V_1;
			TrackableIdPair_t4227350457  L_15 = KeyValuePair_2_get_Key_m3336906090((KeyValuePair_2_t3538677315 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m3336906090_RuntimeMethod_var);
			NullCheck(L_14);
			List_1_Add_m1019040917(L_14, L_15, /*hidden argument*/List_1_Add_m1019040917_RuntimeMethod_var);
		}

IL_005c:
		{
			bool L_16 = Enumerator_MoveNext_m2371253146((Enumerator_t3095187923 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m2371253146_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_0038;
			}
		}

IL_0065:
		{
			IL2CPP_LEAVE(0x75, FINALLY_0067);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0067;
	}

FINALLY_0067:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3537662908((Enumerator_t3095187923 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m3537662908_RuntimeMethod_var);
		IL2CPP_END_FINALLY(103)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(103)
	{
		IL2CPP_JUMP_TBL(0x75, IL_0075)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0075:
	{
		List_1_t1404457903 * L_17 = V_1;
		NullCheck(L_17);
		Enumerator_t3293701780  L_18 = List_1_GetEnumerator_m3410319374(L_17, /*hidden argument*/List_1_GetEnumerator_m3410319374_RuntimeMethod_var);
		V_4 = L_18;
	}

IL_007d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0096;
		}

IL_007f:
		{
			TrackableIdPair_t4227350457  L_19 = Enumerator_get_Current_m2497996742((Enumerator_t3293701780 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m2497996742_RuntimeMethod_var);
			V_5 = L_19;
			Dictionary_2_t1141005148 * L_20 = __this->get_mWorldAnchors_0();
			TrackableIdPair_t4227350457  L_21 = V_5;
			NullCheck(L_20);
			Dictionary_2_Remove_m722751029(L_20, L_21, /*hidden argument*/Dictionary_2_Remove_m722751029_RuntimeMethod_var);
		}

IL_0096:
		{
			bool L_22 = Enumerator_MoveNext_m335914463((Enumerator_t3293701780 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m335914463_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_007f;
			}
		}

IL_009f:
		{
			IL2CPP_LEAVE(0xAF, FINALLY_00a1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a1;
	}

FINALLY_00a1:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3617080421((Enumerator_t3293701780 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m3617080421_RuntimeMethod_var);
		IL2CPP_END_FINALLY(161)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(161)
	{
		IL2CPP_JUMP_TBL(0xAF, IL_00af)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00af:
	{
		WorldAnchor_t2161774153 * L_23 = V_0;
		HoloLensApiImplementation_InternalDeleteWA_m1699531741(__this, L_23, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer/HoloLensApiImplementation::InternalDeleteWA(UnityEngine.XR.WSA.WorldAnchor)
extern "C" IL2CPP_METHOD_ATTR void HoloLensApiImplementation_InternalDeleteWA_m1699531741 (HoloLensApiImplementation_t262900719 * __this, WorldAnchor_t2161774153 * ___wa0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensApiImplementation_InternalDeleteWA_m1699531741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WorldAnchor_t2161774153 * L_0 = ___wa0;
		intptr_t L_1 = (intptr_t)HoloLensApiImplementation_OnWorldAnchorTrackingChanged_m813234441_RuntimeMethod_var;
		OnTrackingChangedDelegate_t3480415086 * L_2 = (OnTrackingChangedDelegate_t3480415086 *)il2cpp_codegen_object_new(OnTrackingChangedDelegate_t3480415086_il2cpp_TypeInfo_var);
		OnTrackingChangedDelegate__ctor_m637460647(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		WorldAnchor_remove_OnTrackingChanged_m4081248362(L_0, L_2, /*hidden argument*/NULL);
		WorldAnchor_t2161774153 * L_3 = ___wa0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m3193525861(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer/HoloLensApiImplementation::SetSpatialAnchorTrackingCallback(System.Action`2<Vuforia.VuforiaManager/TrackableIdPair,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void HoloLensApiImplementation_SetSpatialAnchorTrackingCallback_m920349521 (HoloLensApiImplementation_t262900719 * __this, Action_2_t1413982646 * ___trackingCallback0, const RuntimeMethod* method)
{
	{
		Action_2_t1413982646 * L_0 = ___trackingCallback0;
		__this->set_mHoloLensTrackingCallback_1(L_0);
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer/HoloLensApiImplementation::OnWorldAnchorTrackingChanged(UnityEngine.XR.WSA.WorldAnchor,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void HoloLensApiImplementation_OnWorldAnchorTrackingChanged_m813234441 (HoloLensApiImplementation_t262900719 * __this, WorldAnchor_t2161774153 * ___wa0, bool ___tracked1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensApiImplementation_OnWorldAnchorTrackingChanged_m813234441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3095187923  V_0;
	memset(&V_0, 0, sizeof(V_0));
	KeyValuePair_2_t3538677315  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Action_2_t1413982646 * L_0 = __this->get_mHoloLensTrackingCallback_1();
		if (!L_0)
		{
			goto IL_0059;
		}
	}
	{
		Dictionary_2_t1141005148 * L_1 = __this->get_mWorldAnchors_0();
		NullCheck(L_1);
		Enumerator_t3095187923  L_2 = Dictionary_2_GetEnumerator_m4020718675(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m4020718675_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_0016:
		{
			KeyValuePair_2_t3538677315  L_3 = Enumerator_get_Current_m1400196701((Enumerator_t3095187923 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m1400196701_RuntimeMethod_var);
			V_1 = L_3;
			WorldAnchor_t2161774153 * L_4 = KeyValuePair_2_get_Value_m3787101018((KeyValuePair_2_t3538677315 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m3787101018_RuntimeMethod_var);
			WorldAnchor_t2161774153 * L_5 = ___wa0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0040;
			}
		}

IL_002d:
		{
			Action_2_t1413982646 * L_7 = __this->get_mHoloLensTrackingCallback_1();
			TrackableIdPair_t4227350457  L_8 = KeyValuePair_2_get_Key_m3336906090((KeyValuePair_2_t3538677315 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3336906090_RuntimeMethod_var);
			bool L_9 = ___tracked1;
			NullCheck(L_7);
			Action_2_Invoke_m3936037408(L_7, L_8, L_9, /*hidden argument*/Action_2_Invoke_m3936037408_RuntimeMethod_var);
		}

IL_0040:
		{
			bool L_10 = Enumerator_MoveNext_m2371253146((Enumerator_t3095187923 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m2371253146_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0016;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x59, FINALLY_004b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3537662908((Enumerator_t3095187923 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m3537662908_RuntimeMethod_var);
		IL2CPP_END_FINALLY(75)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0059:
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer/HoloLensApiImplementation::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HoloLensApiImplementation__ctor_m1467655506 (HoloLensApiImplementation_t262900719 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensApiImplementation__ctor_m1467655506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1141005148 * L_0 = (Dictionary_2_t1141005148 *)il2cpp_codegen_object_new(Dictionary_2_t1141005148_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2463376224(L_0, /*hidden argument*/Dictionary_2__ctor_m2463376224_RuntimeMethod_var);
		__this->set_mWorldAnchors_0(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Vuforia.WebCam::get_DidUpdateThisFrame()
extern "C" IL2CPP_METHOD_ATTR bool WebCam_get_DidUpdateThisFrame_m2722596423 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_get_DidUpdateThisFrame_m2722596423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = WebCam_get_IsTextureSizeAvailable_m2013217807(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_mWebCamTexture_2();
		NullCheck(L_1);
		bool L_2 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Vuforia.IWebCamTexAdaptor::get_DidUpdateThisFrame() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean Vuforia.WebCam::get_IsPlaying()
extern "C" IL2CPP_METHOD_ATTR bool WebCam_get_IsPlaying_m2513986056 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_get_IsPlaying_m2513986056_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_mWebCamTexture_2();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Vuforia.IWebCamTexAdaptor::get_IsPlaying() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 Vuforia.WebCam::get_ActualWidth()
extern "C" IL2CPP_METHOD_ATTR int32_t WebCam_get_ActualWidth_m1009219810 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		TextureRenderer_t3278815845 * L_0 = __this->get_mTextureRenderer_5();
		NullCheck(L_0);
		int32_t L_1 = TextureRenderer_get_Width_m3088621639(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.WebCam::get_ActualHeight()
extern "C" IL2CPP_METHOD_ATTR int32_t WebCam_get_ActualHeight_m4039447561 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		TextureRenderer_t3278815845 * L_0 = __this->get_mTextureRenderer_5();
		NullCheck(L_0);
		int32_t L_1 = TextureRenderer_get_Height_m721659918(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Vuforia.WebCam::get_IsTextureSizeAvailable()
extern "C" IL2CPP_METHOD_ATTR bool WebCam_get_IsTextureSizeAvailable_m2013217807 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsTextureSizeAvailableU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Vuforia.WebCam::set_IsTextureSizeAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WebCam_set_IsTextureSizeAvailable_m2087388218 (WebCam_t2427002488 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsTextureSizeAvailableU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Boolean Vuforia.WebCam::get_FlipHorizontally()
extern "C" IL2CPP_METHOD_ATTR bool WebCam_get_FlipHorizontally_m1687226069 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mFlipHorizontally_9();
		return L_0;
	}
}
// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCam::get_ResampledTextureSize()
extern "C" IL2CPP_METHOD_ATTR Vec2I_t3527036565  WebCam_get_ResampledTextureSize_m744105525 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		ProfileData_t3519391925 * L_0 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565  L_1 = L_0->get_ResampledTextureSize_1();
		return L_1;
	}
}
// System.Void Vuforia.WebCam::ComputeResampledTextureSize()
extern "C" IL2CPP_METHOD_ATTR void WebCam_ComputeResampledTextureSize_m321498482 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_ComputeResampledTextureSize_m321498482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	ProfileData_t3519391925  V_3;
	memset(&V_3, 0, sizeof(V_3));
	ProfileData_t3519391925  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		RuntimeObject* L_0 = __this->get_mWebCamTexture_2();
		NullCheck(L_0);
		Texture_t3661962703 * L_1 = InterfaceFuncInvoker0< Texture_t3661962703 * >::Invoke(2 /* UnityEngine.Texture Vuforia.IWebCamTexAdaptor::get_Texture() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_1);
		RuntimeObject* L_3 = __this->get_mWebCamTexture_2();
		NullCheck(L_3);
		Texture_t3661962703 * L_4 = InterfaceFuncInvoker0< Texture_t3661962703 * >::Invoke(2 /* UnityEngine.Texture Vuforia.IWebCamTexAdaptor::get_Texture() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		V_0 = ((float)((float)(((float)((float)L_2)))/(float)(((float)((float)L_5)))));
		ProfileData_t3519391925 * L_6 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565 * L_7 = L_6->get_address_of_ResampledTextureSize_1();
		int32_t L_8 = L_7->get_x_0();
		float L_9 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply((float)(((float)((float)L_8))), (float)L_9));
		float L_10 = V_1;
		V_2 = (((int32_t)((int32_t)L_10)));
		float L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_t1671470975_il2cpp_TypeInfo_var);
		float L_12 = fabsf(((float)il2cpp_codegen_subtract((float)(480.0f), (float)L_11)));
		if ((!(((float)L_12) <= ((float)(1.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		V_2 = ((int32_t)480);
	}

IL_0054:
	{
		float L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_t1671470975_il2cpp_TypeInfo_var);
		float L_14 = fabsf(((float)il2cpp_codegen_subtract((float)(360.0f), (float)L_13)));
		if ((!(((float)L_14) <= ((float)(1.0f)))))
		{
			goto IL_006d;
		}
	}
	{
		V_2 = ((int32_t)360);
	}

IL_006d:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(ProfileData_t3519391925 ));
		ProfileData_t3519391925 * L_15 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565  L_16 = L_15->get_RequestedTextureSize_0();
		(&V_4)->set_RequestedTextureSize_0(L_16);
		ProfileData_t3519391925 * L_17 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565 * L_18 = L_17->get_address_of_ResampledTextureSize_1();
		int32_t L_19 = L_18->get_x_0();
		int32_t L_20 = V_2;
		Vec2I_t3527036565  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Vec2I__ctor_m1553072655((&L_21), L_19, L_20, /*hidden argument*/NULL);
		(&V_4)->set_ResampledTextureSize_1(L_21);
		ProfileData_t3519391925 * L_22 = __this->get_address_of_mWebCamProfile_8();
		int32_t L_23 = L_22->get_RequestedFPS_2();
		(&V_4)->set_RequestedFPS_2(L_23);
		ProfileData_t3519391925  L_24 = V_4;
		V_3 = L_24;
		ProfileData_t3519391925  L_25 = V_3;
		__this->set_mWebCamProfile_8(L_25);
		return;
	}
}
// System.Void Vuforia.WebCam::.ctor(UnityEngine.Camera[],System.Int32,System.String,System.Boolean,System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>)
extern "C" IL2CPP_METHOD_ATTR void WebCam__ctor_m2427464772 (WebCam_t2427002488 * __this, CameraU5BU5D_t1709987734* ___arCameras0, int32_t ___renderTextureLayer1, String_t* ___webcamDeviceName2, bool ___flipHorizontally3, Func_3_t3440825513 * ___webCamTexProvider4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam__ctor_m2427464772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebCamProfile_t4166408645 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	WebCamDeviceU5BU5D_t4294070825* V_3 = NULL;
	int32_t V_4 = 0;
	WebCamDevice_t1322781432  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		__this->set_mIsDirty_10((bool)1);
		__this->set_mLastFrameIdx_11((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_013e;
		}
	}
	{
		int32_t L_1 = ___renderTextureLayer1;
		__this->set_mRenderTextureLayer_12(L_1);
		CameraU5BU5D_t1709987734* L_2 = ___arCameras0;
		__this->set_mARCameras_0(L_2);
		CameraU5BU5D_t1709987734* L_3 = __this->get_mARCameras_0();
		NullCheck(L_3);
		Int32U5BU5D_t385246372* L_4 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))));
		__this->set_mOriginalCameraCullMask_1(L_4);
		V_1 = 0;
		goto IL_007c;
	}

IL_0043:
	{
		Int32U5BU5D_t385246372* L_5 = __this->get_mOriginalCameraCullMask_1();
		int32_t L_6 = V_1;
		CameraU5BU5D_t1709987734* L_7 = __this->get_mARCameras_0();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Camera_t4157153871 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		int32_t L_11 = Camera_get_cullingMask_m679085748(L_10, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int32_t)L_11);
		CameraU5BU5D_t1709987734* L_12 = __this->get_mARCameras_0();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Camera_t4157153871 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Camera_t4157153871 * L_16 = L_15;
		NullCheck(L_16);
		int32_t L_17 = Camera_get_cullingMask_m679085748(L_16, /*hidden argument*/NULL);
		int32_t L_18 = __this->get_mRenderTextureLayer_12();
		NullCheck(L_16);
		Camera_set_cullingMask_m1402455777(L_16, ((int32_t)((int32_t)L_17&(int32_t)((~((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_18&(int32_t)((int32_t)31))))))))), /*hidden argument*/NULL);
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_007c:
	{
		int32_t L_20 = V_1;
		CameraU5BU5D_t1709987734* L_21 = __this->get_mARCameras_0();
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))))))
		{
			goto IL_0043;
		}
	}
	{
		WebCamProfile_t4166408645 * L_22 = (WebCamProfile_t4166408645 *)il2cpp_codegen_object_new(WebCamProfile_t4166408645_il2cpp_TypeInfo_var);
		WebCamProfile__ctor_m820471938(L_22, /*hidden argument*/NULL);
		V_0 = L_22;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_23 = VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0109;
		}
	}
	{
		WebCamDeviceU5BU5D_t4294070825* L_24 = WebCamTexture_get_devices_m844246756(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_24);
		if (!(((RuntimeArray *)L_24)->max_length))
		{
			goto IL_0109;
		}
	}
	{
		V_2 = (bool)0;
		WebCamDeviceU5BU5D_t4294070825* L_25 = WebCamTexture_get_devices_m844246756(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_25;
		V_4 = 0;
		goto IL_00ca;
	}

IL_00a9:
	{
		WebCamDeviceU5BU5D_t4294070825* L_26 = V_3;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		WebCamDevice_t1322781432  L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_5 = L_29;
		String_t* L_30 = WebCamDevice_get_name_m3782173082((WebCamDevice_t1322781432 *)(&V_5), /*hidden argument*/NULL);
		String_t* L_31 = ___webcamDeviceName2;
		NullCheck(L_30);
		bool L_32 = String_Equals_m2270643605(L_30, L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00c4;
		}
	}
	{
		V_2 = (bool)1;
	}

IL_00c4:
	{
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00ca:
	{
		int32_t L_34 = V_4;
		WebCamDeviceU5BU5D_t4294070825* L_35 = V_3;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_35)->max_length)))))))
		{
			goto IL_00a9;
		}
	}
	{
		bool L_36 = V_2;
		if (L_36)
		{
			goto IL_00e6;
		}
	}
	{
		WebCamDeviceU5BU5D_t4294070825* L_37 = WebCamTexture_get_devices_m844246756(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_37);
		String_t* L_38 = WebCamDevice_get_name_m3782173082((WebCamDevice_t1322781432 *)((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		___webcamDeviceName2 = L_38;
	}

IL_00e6:
	{
		WebCamProfile_t4166408645 * L_39 = V_0;
		String_t* L_40 = ___webcamDeviceName2;
		NullCheck(L_39);
		ProfileData_t3519391925  L_41 = WebCamProfile_GetProfile_m3959388229(L_39, L_40, /*hidden argument*/NULL);
		__this->set_mWebCamProfile_8(L_41);
		Func_3_t3440825513 * L_42 = ___webCamTexProvider4;
		String_t* L_43 = ___webcamDeviceName2;
		ProfileData_t3519391925  L_44 = __this->get_mWebCamProfile_8();
		NullCheck(L_42);
		RuntimeObject* L_45 = Func_3_Invoke_m2574976179(L_42, L_43, L_44, /*hidden argument*/Func_3_Invoke_m2574976179_RuntimeMethod_var);
		__this->set_mWebCamTexture_2(L_45);
		goto IL_0136;
	}

IL_0109:
	{
		WebCamProfile_t4166408645 * L_46 = V_0;
		NullCheck(L_46);
		ProfileData_t3519391925  L_47 = WebCamProfile_get_Default_m3789142228(L_46, /*hidden argument*/NULL);
		__this->set_mWebCamProfile_8(L_47);
		ProfileData_t3519391925 * L_48 = __this->get_address_of_mWebCamProfile_8();
		int32_t L_49 = L_48->get_RequestedFPS_2();
		ProfileData_t3519391925 * L_50 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565  L_51 = L_50->get_RequestedTextureSize_0();
		DefaultWebCamTexAdaptor_t2452636845 * L_52 = (DefaultWebCamTexAdaptor_t2452636845 *)il2cpp_codegen_object_new(DefaultWebCamTexAdaptor_t2452636845_il2cpp_TypeInfo_var);
		DefaultWebCamTexAdaptor__ctor_m299475590(L_52, L_49, L_51, /*hidden argument*/NULL);
		__this->set_mWebCamTexture_2(L_52);
	}

IL_0136:
	{
		bool L_53 = ___flipHorizontally3;
		__this->set_mFlipHorizontally_9(L_53);
	}

IL_013e:
	{
		return;
	}
}
// System.Void Vuforia.WebCam::StartCamera()
extern "C" IL2CPP_METHOD_ATTR void WebCam_StartCamera_m784729827 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_StartCamera_m784729827_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_mWebcamPlaying_13((bool)1);
		RuntimeObject* L_0 = __this->get_mWebCamTexture_2();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Vuforia.IWebCamTexAdaptor::get_IsPlaying() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_mWebCamTexture_2();
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Vuforia.IWebCamTexAdaptor::Play() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_2);
	}

IL_001f:
	{
		return;
	}
}
// System.Void Vuforia.WebCam::StopCamera()
extern "C" IL2CPP_METHOD_ATTR void WebCam_StopCamera_m1511219799 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_StopCamera_m1511219799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_mWebcamPlaying_13((bool)0);
		RuntimeObject* L_0 = __this->get_mWebCamTexture_2();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Vuforia.IWebCamTexAdaptor::Stop() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void Vuforia.WebCam::ResetPlaying()
extern "C" IL2CPP_METHOD_ATTR void WebCam_ResetPlaying_m697251242 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mWebcamPlaying_13();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		WebCam_StartCamera_m784729827(__this, /*hidden argument*/NULL);
		return;
	}

IL_000f:
	{
		WebCam_StopCamera_m1511219799(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color32[] Vuforia.WebCam::GetPixels32AndBufferFrame()
extern "C" IL2CPP_METHOD_ATTR Color32U5BU5D_t3850468773* WebCam_GetPixels32AndBufferFrame_m3124949850 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	RenderTexture_t2108887433 * V_0 = NULL;
	{
		TextureRenderer_t3278815845 * L_0 = __this->get_mTextureRenderer_5();
		NullCheck(L_0);
		RenderTexture_t2108887433 * L_1 = TextureRenderer_Render_m2768706254(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RenderTexture_t2108887433 * L_2 = V_0;
		RenderTexture_set_active_m1437732586(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_3 = __this->get_mBufferReadTexture_6();
		Rect_t2360479859  L_4 = __this->get_mReadPixelsRect_7();
		NullCheck(L_3);
		Texture2D_ReadPixels_m1510783487(L_3, L_4, 0, 0, (bool)0, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_5 = __this->get_mBufferReadTexture_6();
		NullCheck(L_5);
		Color32U5BU5D_t3850468773* L_6 = Texture2D_GetPixels32_m647746242(L_5, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_7 = V_0;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Vuforia.WebCam::RenderFrame(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WebCam_RenderFrame_m2496994751 (WebCam_t2427002488 * __this, int32_t ___frameIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_RenderFrame_m2496994751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture_t3661962703 * V_0 = NULL;
	Texture2D_t3840446185 * V_1 = NULL;
	Image_t745056343 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_mLastFrameIdx_11();
		int32_t L_1 = ___frameIndex0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0092;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRenderer_t3433045970_il2cpp_TypeInfo_var);
		VuforiaRenderer_t3433045970 * L_2 = VuforiaRenderer_get_Instance_m1013623488(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Texture_t3661962703 * L_3 = VuforiaRenderer_get_VideoBackgroundTexture_m954851426(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Texture_t3661962703 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_008b;
		}
	}
	{
		Texture_t3661962703 * L_6 = V_0;
		if (!((Texture2D_t3840446185 *)IsInstSealed((RuntimeObject*)L_6, Texture2D_t3840446185_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}
	{
		Texture_t3661962703 * L_7 = V_0;
		V_1 = ((Texture2D_t3840446185 *)CastclassSealed((RuntimeObject*)L_7, Texture2D_t3840446185_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_8 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		Image_t745056343 * L_9 = CameraDevice_GetCameraImage_m151166382(L_8, ((int32_t)16), /*hidden argument*/NULL);
		V_2 = L_9;
		Image_t745056343 * L_10 = V_2;
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		Texture2D_t3840446185 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
		Image_t745056343 * L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = Image_get_BufferWidth_m2324972437(L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0064;
		}
	}
	{
		Texture2D_t3840446185 * L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_15);
		Image_t745056343 * L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18 = Image_get_BufferHeight_m1709821308(L_17, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)L_18))))
		{
			goto IL_0064;
		}
	}
	{
		Texture2D_t3840446185 * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = Texture2D_get_format_m2371899271(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_20) == ((int32_t)3)))
		{
			goto IL_0079;
		}
	}

IL_0064:
	{
		Texture2D_t3840446185 * L_21 = V_1;
		Image_t745056343 * L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = Image_get_BufferWidth_m2324972437(L_22, /*hidden argument*/NULL);
		Image_t745056343 * L_24 = V_2;
		NullCheck(L_24);
		int32_t L_25 = Image_get_BufferHeight_m1709821308(L_24, /*hidden argument*/NULL);
		NullCheck(L_21);
		Texture2D_Resize_m2702227255(L_21, L_23, L_25, 3, (bool)0, /*hidden argument*/NULL);
	}

IL_0079:
	{
		Texture2D_t3840446185 * L_26 = V_1;
		Image_t745056343 * L_27 = V_2;
		NullCheck(L_27);
		Color32U5BU5D_t3850468773* L_28 = Image_GetPixels32_m1416524729(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		Texture2D_SetPixels32_m1141065075(L_26, L_28, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_29 = V_1;
		NullCheck(L_29);
		Texture2D_Apply_m2271746283(L_29, /*hidden argument*/NULL);
	}

IL_008b:
	{
		int32_t L_30 = ___frameIndex0;
		__this->set_mLastFrameIdx_11(L_30);
	}

IL_0092:
	{
		return;
	}
}
// Vuforia.CameraDevice/VideoModeData Vuforia.WebCam::GetVideoMode()
extern "C" IL2CPP_METHOD_ATTR VideoModeData_t2066817255  WebCam_GetVideoMode_m2800376222 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		VideoModeData_t2066817255  L_0 = __this->get_mVideoModeData_3();
		return L_0;
	}
}
// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.WebCam::GetVideoTextureInfo()
extern "C" IL2CPP_METHOD_ATTR VideoTextureInfo_t1805965052  WebCam_GetVideoTextureInfo_m3653413215 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		VideoTextureInfo_t1805965052  L_0 = __this->get_mVideoTextureInfo_4();
		return L_0;
	}
}
// System.Boolean Vuforia.WebCam::IsRendererDirty()
extern "C" IL2CPP_METHOD_ATTR bool WebCam_IsRendererDirty_m3358873122 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	{
		bool L_0 = WebCam_get_IsTextureSizeAvailable_m2013217807(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get_mIsDirty_10();
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		int32_t L_2 = G_B3_0;
		G_B4_0 = L_2;
		if (!L_2)
		{
			G_B5_0 = L_2;
			goto IL_001b;
		}
	}
	{
		__this->set_mIsDirty_10((bool)0);
		G_B5_0 = G_B4_0;
	}

IL_001b:
	{
		return (bool)G_B5_0;
	}
}
// System.Void Vuforia.WebCam::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void WebCam_OnDestroy_m332336637 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_OnDestroy_m332336637_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0059;
		}
	}
	{
		V_0 = 0;
		goto IL_0034;
	}

IL_000b:
	{
		CameraU5BU5D_t1709987734* L_1 = __this->get_mARCameras_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Camera_t4157153871 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		CameraU5BU5D_t1709987734* L_6 = __this->get_mARCameras_0();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Camera_t4157153871 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Int32U5BU5D_t385246372* L_10 = __this->get_mOriginalCameraCullMask_1();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		Camera_set_cullingMask_m1402455777(L_9, L_13, /*hidden argument*/NULL);
	}

IL_0030:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_15 = V_0;
		CameraU5BU5D_t1709987734* L_16 = __this->get_mARCameras_0();
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_000b;
		}
	}
	{
		WebCam_set_IsTextureSizeAvailable_m2087388218(__this, (bool)0, /*hidden argument*/NULL);
		TextureRenderer_t3278815845 * L_17 = __this->get_mTextureRenderer_5();
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		TextureRenderer_t3278815845 * L_18 = __this->get_mTextureRenderer_5();
		NullCheck(L_18);
		TextureRenderer_Destroy_m719921383(L_18, /*hidden argument*/NULL);
	}

IL_0059:
	{
		return;
	}
}
// System.Void Vuforia.WebCam::Update()
extern "C" IL2CPP_METHOD_ATTR void WebCam_Update_m3572144808 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_Update_m3572144808_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vec2I_t3527036565  V_0;
	memset(&V_0, 0, sizeof(V_0));
	VideoModeData_t2066817255  V_1;
	memset(&V_1, 0, sizeof(V_1));
	VideoTextureInfo_t1805965052  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0170;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_mWebCamTexture_2();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Vuforia.IWebCamTexAdaptor::CheckPermissions() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_1);
		bool L_2 = WebCam_get_IsTextureSizeAvailable_m2013217807(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0170;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_mWebCamTexture_2();
		NullCheck(L_3);
		bool L_4 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Vuforia.IWebCamTexAdaptor::get_DidUpdateThisFrame() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_3);
		if (!L_4)
		{
			goto IL_0170;
		}
	}
	{
		WebCam_set_IsTextureSizeAvailable_m2087388218(__this, (bool)1, /*hidden argument*/NULL);
		ProfileData_t3519391925 * L_5 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565 * L_6 = L_5->get_address_of_ResampledTextureSize_1();
		int32_t L_7 = L_6->get_y_1();
		if (L_7)
		{
			goto IL_00b2;
		}
	}
	{
		WebCam_ComputeResampledTextureSize_m321498482(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_8 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		InterfaceFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 Vuforia.IVuforiaWrapper::CameraDeviceStopCamera() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_8);
		RuntimeObject* L_9 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Vuforia.IVuforiaWrapper::CameraDeviceDeinitCamera() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_9);
		RuntimeObject* L_10 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		ProfileData_t3519391925 * L_11 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565 * L_12 = L_11->get_address_of_ResampledTextureSize_1();
		int32_t L_13 = L_12->get_x_0();
		ProfileData_t3519391925 * L_14 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565 * L_15 = L_14->get_address_of_ResampledTextureSize_1();
		int32_t L_16 = L_15->get_y_1();
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(14 /* System.Void Vuforia.IVuforiaWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_10, L_13, L_16);
		RuntimeObject* L_17 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(12 /* System.Int32 Vuforia.IVuforiaWrapper::CameraDeviceInitCamera(System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_17, 1);
		RuntimeObject* L_18 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(13 /* System.Int32 Vuforia.IVuforiaWrapper::CameraDeviceSelectVideoMode(System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_18, (-1));
		RuntimeObject* L_19 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_19);
		InterfaceFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 Vuforia.IVuforiaWrapper::CameraDeviceStartCamera() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_19);
	}

IL_00b2:
	{
		ProfileData_t3519391925 * L_20 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565  L_21 = L_20->get_ResampledTextureSize_1();
		V_0 = L_21;
		il2cpp_codegen_initobj((&V_1), sizeof(VideoModeData_t2066817255 ));
		Vec2I_t3527036565  L_22 = V_0;
		int32_t L_23 = L_22.get_x_0();
		(&V_1)->set_width_0(L_23);
		Vec2I_t3527036565  L_24 = V_0;
		int32_t L_25 = L_24.get_y_1();
		(&V_1)->set_height_1(L_25);
		ProfileData_t3519391925 * L_26 = __this->get_address_of_mWebCamProfile_8();
		int32_t L_27 = L_26->get_RequestedFPS_2();
		(&V_1)->set_frameRate_2((((float)((float)L_27))));
		VideoModeData_t2066817255  L_28 = V_1;
		__this->set_mVideoModeData_3(L_28);
		il2cpp_codegen_initobj((&V_2), sizeof(VideoTextureInfo_t1805965052 ));
		Vec2I_t3527036565  L_29 = V_0;
		(&V_2)->set_imageSize_1(L_29);
		Vec2I_t3527036565  L_30 = V_0;
		(&V_2)->set_textureSize_0(L_30);
		VideoTextureInfo_t1805965052  L_31 = V_2;
		__this->set_mVideoTextureInfo_4(L_31);
		RuntimeObject* L_32 = __this->get_mWebCamTexture_2();
		NullCheck(L_32);
		Texture_t3661962703 * L_33 = InterfaceFuncInvoker0< Texture_t3661962703 * >::Invoke(2 /* UnityEngine.Texture Vuforia.IWebCamTexAdaptor::get_Texture() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_32);
		int32_t L_34 = __this->get_mRenderTextureLayer_12();
		Vec2I_t3527036565  L_35 = V_0;
		TextureRenderer_t3278815845 * L_36 = (TextureRenderer_t3278815845 *)il2cpp_codegen_object_new(TextureRenderer_t3278815845_il2cpp_TypeInfo_var);
		TextureRenderer__ctor_m495126481(L_36, L_33, L_34, L_35, /*hidden argument*/NULL);
		__this->set_mTextureRenderer_5(L_36);
		Vec2I_t3527036565  L_37 = V_0;
		int32_t L_38 = L_37.get_x_0();
		Vec2I_t3527036565  L_39 = V_0;
		int32_t L_40 = L_39.get_y_1();
		Texture2D_t3840446185 * L_41 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_41, L_38, L_40, /*hidden argument*/NULL);
		__this->set_mBufferReadTexture_6(L_41);
		Vec2I_t3527036565  L_42 = V_0;
		int32_t L_43 = L_42.get_x_0();
		Vec2I_t3527036565  L_44 = V_0;
		int32_t L_45 = L_44.get_y_1();
		Rect_t2360479859  L_46;
		memset(&L_46, 0, sizeof(L_46));
		Rect__ctor_m2614021312((&L_46), (0.0f), (0.0f), (((float)((float)L_43))), (((float)((float)L_45))), /*hidden argument*/NULL);
		__this->set_mReadPixelsRect_7(L_46);
	}

IL_0170:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.WebCamARController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WebCamARController__ctor_m751483383 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController__ctor_m751483383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_3_t3440825513 * G_B2_0 = NULL;
	WebCamARController_t3718642882 * G_B2_1 = NULL;
	Func_3_t3440825513 * G_B1_0 = NULL;
	WebCamARController_t3718642882 * G_B1_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var);
		Func_3_t3440825513 * L_0 = ((U3CU3Ec_t3582055403_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var))->get_U3CU3E9__7_0_1();
		Func_3_t3440825513 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var);
		U3CU3Ec_t3582055403 * L_2 = ((U3CU3Ec_t3582055403_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_3 = (intptr_t)U3CU3Ec_U3C_ctorU3Eb__7_0_m3175983664_RuntimeMethod_var;
		Func_3_t3440825513 * L_4 = (Func_3_t3440825513 *)il2cpp_codegen_object_new(Func_3_t3440825513_il2cpp_TypeInfo_var);
		Func_3__ctor_m3165450366(L_4, L_2, L_3, /*hidden argument*/Func_3__ctor_m3165450366_RuntimeMethod_var);
		Func_3_t3440825513 * L_5 = L_4;
		((U3CU3Ec_t3582055403_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var))->set_U3CU3E9__7_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_mWebCamTexAdaptorProvider_5(G_B2_0);
		ARController__ctor_m2746373751(__this, /*hidden argument*/NULL);
		return;
	}
}
// Vuforia.WebCamARController Vuforia.WebCamARController::get_Instance()
extern "C" IL2CPP_METHOD_ATTR WebCamARController_t3718642882 * WebCamARController_get_Instance_m1980552932 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_get_Instance_m1980552932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
		WebCamARController_t3718642882 * L_0 = ((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->get_mInstance_6();
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
		RuntimeObject * L_1 = ((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->get_mPadlock_7();
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
			WebCamARController_t3718642882 * L_3 = ((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->get_mInstance_6();
			if (L_3)
			{
				goto IL_0024;
			}
		}

IL_001a:
		{
			WebCamARController_t3718642882 * L_4 = (WebCamARController_t3718642882 *)il2cpp_codegen_object_new(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
			WebCamARController__ctor_m751483383(L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
			((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->set_mInstance_6(L_4);
		}

IL_0024:
		{
			IL2CPP_LEAVE(0x2D, FINALLY_0026);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		RuntimeObject * L_5 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
		WebCamARController_t3718642882 * L_6 = ((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->get_mInstance_6();
		return L_6;
	}
}
// System.Void Vuforia.WebCamARController::RegisterARController()
extern "C" IL2CPP_METHOD_ATTR void WebCamARController_RegisterARController_m2119076139 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_RegisterARController_m2119076139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
		WebCamARController_t3718642882 * L_0 = WebCamARController_get_Instance_m1980552932(NULL /*static, unused*/, /*hidden argument*/NULL);
		ARController_Register_m1901857971(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String Vuforia.WebCamARController::get_DeviceName()
extern "C" IL2CPP_METHOD_ATTR String_t* WebCamARController_get_DeviceName_m370257792 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mDeviceNameSetInEditor_2();
		return L_0;
	}
}
// System.Void Vuforia.WebCamARController::set_DeviceName(System.String)
extern "C" IL2CPP_METHOD_ATTR void WebCamARController_set_DeviceName_m150226649 (WebCamARController_t3718642882 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_mDeviceNameSetInEditor_2(L_0);
		return;
	}
}
// System.Boolean Vuforia.WebCamARController::get_FlipHorizontally()
extern "C" IL2CPP_METHOD_ATTR bool WebCamARController_get_FlipHorizontally_m2274555993 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mFlipHorizontally_3();
		return L_0;
	}
}
// System.Void Vuforia.WebCamARController::set_FlipHorizontally(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WebCamARController_set_FlipHorizontally_m357972424 (WebCamARController_t3718642882 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_mFlipHorizontally_3(L_0);
		return;
	}
}
// System.Boolean Vuforia.WebCamARController::get_IsPlaying()
extern "C" IL2CPP_METHOD_ATTR bool WebCamARController_get_IsPlaying_m1662877527 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	{
		WebCam_t2427002488 * L_0 = __this->get_mWebCamImpl_4();
		NullCheck(L_0);
		bool L_1 = WebCam_get_IsPlaying_m2513986056(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Vuforia.WebCam Vuforia.WebCamARController::get_ImplementationClass()
extern "C" IL2CPP_METHOD_ATTR WebCam_t2427002488 * WebCamARController_get_ImplementationClass_m2936222632 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	{
		WebCam_t2427002488 * L_0 = __this->get_mWebCamImpl_4();
		return L_0;
	}
}
// System.Void Vuforia.WebCamARController::InitCamera()
extern "C" IL2CPP_METHOD_ATTR void WebCamARController_InitCamera_m1118184140 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_InitCamera_m1118184140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CameraU5BU5D_t1709987734* V_0 = NULL;
	{
		WebCam_t2427002488 * L_0 = __this->get_mWebCamImpl_4();
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		Application_set_runInBackground_m2169704730(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		VuforiaBehaviour_t2151848540 * L_1 = ARController_get_VuforiaBehaviour_m4257639924(__this, /*hidden argument*/NULL);
		CameraU5BU5D_t1709987734* L_2 = UnityComponentExtensions_GetComponentsOnlyInChildren_TisCamera_t4157153871_m2275549933(NULL /*static, unused*/, L_1, /*hidden argument*/UnityComponentExtensions_GetComponentsOnlyInChildren_TisCamera_t4157153871_m2275549933_RuntimeMethod_var);
		V_0 = L_2;
		CameraU5BU5D_t1709987734* L_3 = V_0;
		int32_t L_4 = __this->get_RenderTextureLayer_1();
		String_t* L_5 = __this->get_mDeviceNameSetInEditor_2();
		bool L_6 = __this->get_mFlipHorizontally_3();
		Func_3_t3440825513 * L_7 = __this->get_mWebCamTexAdaptorProvider_5();
		WebCam_t2427002488 * L_8 = (WebCam_t2427002488 *)il2cpp_codegen_object_new(WebCam_t2427002488_il2cpp_TypeInfo_var);
		WebCam__ctor_m2427464772(L_8, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		__this->set_mWebCamImpl_4(L_8);
	}

IL_003e:
	{
		return;
	}
}
// System.Void Vuforia.WebCamARController::SetWebCamTexAdaptorProvider(System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>)
extern "C" IL2CPP_METHOD_ATTR void WebCamARController_SetWebCamTexAdaptorProvider_m3011708764 (WebCamARController_t3718642882 * __this, Func_3_t3440825513 * ___provider0, const RuntimeMethod* method)
{
	{
		Func_3_t3440825513 * L_0 = ___provider0;
		__this->set_mWebCamTexAdaptorProvider_5(L_0);
		return;
	}
}
// System.Void Vuforia.WebCamARController::Awake()
extern "C" IL2CPP_METHOD_ATTR void WebCamARController_Awake_m4020518652 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_Awake_m4020518652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebCamConfiguration_t1101614731 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t1763229349 * L_0 = VuforiaConfiguration_get_Instance_m3335903280(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		WebCamConfiguration_t1101614731 * L_1 = VuforiaConfiguration_get_WebCam_m946983315(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		WebCamConfiguration_t1101614731 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = WebCamConfiguration_get_RenderTextureLayer_m1149468349(L_2, /*hidden argument*/NULL);
		__this->set_RenderTextureLayer_1(L_3);
		WebCamConfiguration_t1101614731 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = WebCamConfiguration_get_DeviceNameSetInEditor_m553266002(L_4, /*hidden argument*/NULL);
		__this->set_mDeviceNameSetInEditor_2(L_5);
		WebCamConfiguration_t1101614731 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = WebCamConfiguration_get_FlipHorizontally_m4118647777(L_6, /*hidden argument*/NULL);
		__this->set_mFlipHorizontally_3(L_7);
		return;
	}
}
// System.Void Vuforia.WebCamARController::OnLevelWasLoaded()
extern "C" IL2CPP_METHOD_ATTR void WebCamARController_OnLevelWasLoaded_m3407873239 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_OnLevelWasLoaded_m3407873239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		WebCam_t2427002488 * L_1 = __this->get_mWebCamImpl_4();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		WebCam_t2427002488 * L_2 = __this->get_mWebCamImpl_4();
		NullCheck(L_2);
		WebCam_ResetPlaying_m697251242(L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Vuforia.WebCamARController::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void WebCamARController_OnDestroy_m1720525424 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_OnDestroy_m1720525424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		WebCam_t2427002488 * L_1 = __this->get_mWebCamImpl_4();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		WebCam_t2427002488 * L_2 = __this->get_mWebCamImpl_4();
		NullCheck(L_2);
		WebCam_OnDestroy_m332336637(L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Vuforia.WebCamARController::Update()
extern "C" IL2CPP_METHOD_ATTR void WebCamARController_Update_m2251066661 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_Update_m2251066661_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		WebCam_t2427002488 * L_1 = __this->get_mWebCamImpl_4();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		WebCam_t2427002488 * L_2 = __this->get_mWebCamImpl_4();
		NullCheck(L_2);
		WebCam_Update_m3572144808(L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Vuforia.WebCamARController::.cctor()
extern "C" IL2CPP_METHOD_ATTR void WebCamARController__cctor_m3035936290 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController__cctor_m3035936290_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->set_mPadlock_7(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.WebCamARController/<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4266389493 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m4266389493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3582055403 * L_0 = (U3CU3Ec_t3582055403 *)il2cpp_codegen_object_new(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3450078098(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3582055403_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.WebCamARController/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3450078098 (U3CU3Ec_t3582055403 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// Vuforia.IWebCamTexAdaptor Vuforia.WebCamARController/<>c::<.ctor>b__7_0(System.String,Vuforia.WebCamProfile/ProfileData)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_ctorU3Eb__7_0_m3175983664 (U3CU3Ec_t3582055403 * __this, String_t* ___name0, ProfileData_t3519391925  ___profileData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_ctorU3Eb__7_0_m3175983664_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		ProfileData_t3519391925  L_1 = ___profileData1;
		WebCamTexAdaptor_t3430449046 * L_2 = (WebCamTexAdaptor_t3430449046 *)il2cpp_codegen_object_new(WebCamTexAdaptor_t3430449046_il2cpp_TypeInfo_var);
		WebCamTexAdaptor__ctor_m852957585(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::get_Default()
extern "C" IL2CPP_METHOD_ATTR ProfileData_t3519391925  WebCamProfile_get_Default_m3789142228 (WebCamProfile_t4166408645 * __this, const RuntimeMethod* method)
{
	{
		ProfileCollection_t901995765  L_0 = __this->get_mProfileCollection_0();
		ProfileData_t3519391925  L_1 = L_0.get_DefaultProfile_0();
		return L_1;
	}
}
// System.Void Vuforia.WebCamProfile::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WebCamProfile__ctor_m820471938 (WebCamProfile_t4166408645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamProfile__ctor_m820471938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = PlayModeEditorUtility_get_Instance_m334266941(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ProfileCollection_t901995765  L_1 = InterfaceFuncInvoker0< ProfileCollection_t901995765  >::Invoke(1 /* Vuforia.WebCamProfile/ProfileCollection Vuforia.IPlayModeEditorUtility::LoadAndParseWebcamProfiles() */, IPlayModeEditorUtility_t752570519_il2cpp_TypeInfo_var, L_0);
		__this->set_mProfileCollection_0(L_1);
		return;
	}
}
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::GetProfile(System.String)
extern "C" IL2CPP_METHOD_ATTR ProfileData_t3519391925  WebCamProfile_GetProfile_m3959388229 (WebCamProfile_t4166408645 * __this, String_t* ___webcamName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamProfile_GetProfile_m3959388229_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfileData_t3519391925  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ProfileCollection_t901995765  L_0 = __this->get_mProfileCollection_0();
		Dictionary_2_t3304648224 * L_1 = L_0.get_Profiles_1();
		String_t* L_2 = ___webcamName0;
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m2029374922(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4 = Dictionary_2_TryGetValue_m1260807329(L_1, L_3, (ProfileData_t3519391925 *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1260807329_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		ProfileData_t3519391925  L_5 = V_0;
		return L_5;
	}

IL_001c:
	{
		ProfileCollection_t901995765  L_6 = __this->get_mProfileCollection_0();
		ProfileData_t3519391925  L_7 = L_6.get_DefaultProfile_0();
		return L_7;
	}
}
// System.Boolean Vuforia.WebCamProfile::ProfileAvailable(System.String)
extern "C" IL2CPP_METHOD_ATTR bool WebCamProfile_ProfileAvailable_m801322015 (WebCamProfile_t4166408645 * __this, String_t* ___webcamName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamProfile_ProfileAvailable_m801322015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProfileCollection_t901995765  L_0 = __this->get_mProfileCollection_0();
		Dictionary_2_t3304648224 * L_1 = L_0.get_Profiles_1();
		String_t* L_2 = ___webcamName0;
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m2029374922(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4 = Dictionary_2_ContainsKey_m4190276240(L_1, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m4190276240_RuntimeMethod_var);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Vuforia.WebCamProfile/ProfileCollection
extern "C" void ProfileCollection_t901995765_marshal_pinvoke(const ProfileCollection_t901995765& unmarshaled, ProfileCollection_t901995765_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL, NULL);
}
extern "C" void ProfileCollection_t901995765_marshal_pinvoke_back(const ProfileCollection_t901995765_marshaled_pinvoke& marshaled, ProfileCollection_t901995765& unmarshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: Vuforia.WebCamProfile/ProfileCollection
extern "C" void ProfileCollection_t901995765_marshal_pinvoke_cleanup(ProfileCollection_t901995765_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Vuforia.WebCamProfile/ProfileCollection
extern "C" void ProfileCollection_t901995765_marshal_com(const ProfileCollection_t901995765& unmarshaled, ProfileCollection_t901995765_marshaled_com& marshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL, NULL);
}
extern "C" void ProfileCollection_t901995765_marshal_com_back(const ProfileCollection_t901995765_marshaled_com& marshaled, ProfileCollection_t901995765& unmarshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: Vuforia.WebCamProfile/ProfileCollection
extern "C" void ProfileCollection_t901995765_marshal_com_cleanup(ProfileCollection_t901995765_marshaled_com& marshaled)
{
}
// System.Void Vuforia.WebCamProfile/ProfileCollection::.ctor(Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>)
extern "C" IL2CPP_METHOD_ATTR void ProfileCollection__ctor_m3713293092 (ProfileCollection_t901995765 * __this, ProfileData_t3519391925  ___defaultProfile0, Dictionary_2_t3304648224 * ___profiles1, const RuntimeMethod* method)
{
	{
		ProfileData_t3519391925  L_0 = ___defaultProfile0;
		__this->set_DefaultProfile_0(L_0);
		Dictionary_2_t3304648224 * L_1 = ___profiles1;
		__this->set_Profiles_1(L_1);
		return;
	}
}
extern "C"  void ProfileCollection__ctor_m3713293092_AdjustorThunk (RuntimeObject * __this, ProfileData_t3519391925  ___defaultProfile0, Dictionary_2_t3304648224 * ___profiles1, const RuntimeMethod* method)
{
	ProfileCollection_t901995765 * _thisAdjusted = reinterpret_cast<ProfileCollection_t901995765 *>(__this + 1);
	ProfileCollection__ctor_m3713293092(_thisAdjusted, ___defaultProfile0, ___profiles1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Vuforia.WebCamTexAdaptor::get_DidUpdateThisFrame()
extern "C" IL2CPP_METHOD_ATTR bool WebCamTexAdaptor_get_DidUpdateThisFrame_m3597507630 (WebCamTexAdaptor_t3430449046 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_t1514609158 * L_0 = __this->get_mWebCamTexture_0();
		NullCheck(L_0);
		bool L_1 = WebCamTexture_get_didUpdateThisFrame_m567567483(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Vuforia.WebCamTexAdaptor::get_IsPlaying()
extern "C" IL2CPP_METHOD_ATTR bool WebCamTexAdaptor_get_IsPlaying_m1243887004 (WebCamTexAdaptor_t3430449046 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_t1514609158 * L_0 = __this->get_mWebCamTexture_0();
		NullCheck(L_0);
		bool L_1 = WebCamTexture_get_isPlaying_m3525118025(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Texture Vuforia.WebCamTexAdaptor::get_Texture()
extern "C" IL2CPP_METHOD_ATTR Texture_t3661962703 * WebCamTexAdaptor_get_Texture_m2106402337 (WebCamTexAdaptor_t3430449046 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_t1514609158 * L_0 = __this->get_mWebCamTexture_0();
		return L_0;
	}
}
// System.Void Vuforia.WebCamTexAdaptor::.ctor(System.String,Vuforia.WebCamProfile/ProfileData)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexAdaptor__ctor_m852957585 (WebCamTexAdaptor_t3430449046 * __this, String_t* ___deviceName0, ProfileData_t3519391925  ___profile1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamTexAdaptor__ctor_m852957585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_0 = (WebCamTexture_t1514609158 *)il2cpp_codegen_object_new(WebCamTexture_t1514609158_il2cpp_TypeInfo_var);
		WebCamTexture__ctor_m2601640589(L_0, /*hidden argument*/NULL);
		__this->set_mWebCamTexture_0(L_0);
		WebCamTexture_t1514609158 * L_1 = __this->get_mWebCamTexture_0();
		String_t* L_2 = ___deviceName0;
		NullCheck(L_1);
		WebCamTexture_set_deviceName_m2479609938(L_1, L_2, /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_3 = __this->get_mWebCamTexture_0();
		ProfileData_t3519391925  L_4 = ___profile1;
		int32_t L_5 = L_4.get_RequestedFPS_2();
		NullCheck(L_3);
		WebCamTexture_set_requestedFPS_m1422816314(L_3, (((float)((float)L_5))), /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_6 = __this->get_mWebCamTexture_0();
		ProfileData_t3519391925  L_7 = ___profile1;
		Vec2I_t3527036565  L_8 = L_7.get_RequestedTextureSize_0();
		int32_t L_9 = L_8.get_x_0();
		NullCheck(L_6);
		WebCamTexture_set_requestedWidth_m1301971691(L_6, L_9, /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_10 = __this->get_mWebCamTexture_0();
		ProfileData_t3519391925  L_11 = ___profile1;
		Vec2I_t3527036565  L_12 = L_11.get_RequestedTextureSize_0();
		int32_t L_13 = L_12.get_y_1();
		NullCheck(L_10);
		WebCamTexture_set_requestedHeight_m3636279808(L_10, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WebCamTexAdaptor::Play()
extern "C" IL2CPP_METHOD_ATTR void WebCamTexAdaptor_Play_m2085954092 (WebCamTexAdaptor_t3430449046 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = Application_HasUserAuthorization_m3146187033(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		AsyncOperation_t1445031843 * L_1 = Application_RequestUserAuthorization_m1407144003(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		__this->set_mCheckCameraPermissions_1(L_1);
		return;
	}

IL_0015:
	{
		WebCamTexture_t1514609158 * L_2 = __this->get_mWebCamTexture_0();
		NullCheck(L_2);
		WebCamTexture_Play_m3866603461(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WebCamTexAdaptor::Stop()
extern "C" IL2CPP_METHOD_ATTR void WebCamTexAdaptor_Stop_m3089842407 (WebCamTexAdaptor_t3430449046 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_t1514609158 * L_0 = __this->get_mWebCamTexture_0();
		NullCheck(L_0);
		WebCamTexture_Stop_m3471034432(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WebCamTexAdaptor::CheckPermissions()
extern "C" IL2CPP_METHOD_ATTR void WebCamTexAdaptor_CheckPermissions_m4247082500 (WebCamTexAdaptor_t3430449046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamTexAdaptor_CheckPermissions_m4247082500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncOperation_t1445031843 * L_0 = __this->get_mCheckCameraPermissions_1();
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		AsyncOperation_t1445031843 * L_1 = __this->get_mCheckCameraPermissions_1();
		NullCheck(L_1);
		bool L_2 = AsyncOperation_get_isDone_m412925263(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		bool L_3 = Application_HasUserAuthorization_m3146187033(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		WebCamTexture_t1514609158 * L_4 = __this->get_mWebCamTexture_0();
		NullCheck(L_4);
		WebCamTexture_Play_m3866603461(L_4, /*hidden argument*/NULL);
		goto IL_0039;
	}

IL_002a:
	{
		RuntimeObject* L_5 = PlayModeEditorUtility_get_Instance_m334266941(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void Vuforia.IPlayModeEditorUtility::ShowErrorInMouseOverWindow(System.String) */, IPlayModeEditorUtility_t752570519_il2cpp_TypeInfo_var, L_5, _stringLiteral2036431799);
	}

IL_0039:
	{
		__this->set_mCheckCameraPermissions_1((AsyncOperation_t1445031843 *)NULL);
	}

IL_0040:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.WireframeBehaviour::Start()
extern "C" IL2CPP_METHOD_ATTR void WireframeBehaviour_Start_m3567912005 (WireframeBehaviour_t1831066704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeBehaviour_Start_m3567912005_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_t340375123 * L_0 = __this->get_lineMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Material_t340375123 * L_2 = __this->get_lineMaterial_4();
		Material_t340375123 * L_3 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m249231841(L_3, L_2, /*hidden argument*/NULL);
		__this->set_mLineMaterial_7(L_3);
		return;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1571861241, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WireframeBehaviour::OnRenderObject()
extern "C" IL2CPP_METHOD_ATTR void WireframeBehaviour_OnRenderObject_m913596852 (WireframeBehaviour_t1831066704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeBehaviour_OnRenderObject_m913596852_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	MeshFilter_t3523625662 * V_1 = NULL;
	Vector3U5BU5D_t1718750761* V_2 = NULL;
	Int32U5BU5D_t385246372* V_3 = NULL;
	CameraU5BU5D_t1709987734* V_4 = NULL;
	int32_t V_5 = 0;
	Camera_t4157153871 * V_6 = NULL;
	int32_t V_7 = 0;
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaManager_t1653423889_il2cpp_TypeInfo_var);
		VuforiaManager_t1653423889 * L_0 = VuforiaManager_get_Instance_m100367560(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = VuforiaManager_get_ARCameraTransform_m958890547(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		CameraU5BU5D_t1709987734* L_3 = GameObject_GetComponentsInChildren_TisCamera_t4157153871_m926460427(L_2, /*hidden argument*/GameObject_GetComponentsInChildren_TisCamera_t4157153871_m926460427_RuntimeMethod_var);
		V_0 = (bool)0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_003a;
	}

IL_001d:
	{
		CameraU5BU5D_t1709987734* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Camera_t4157153871 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_6 = L_7;
		Camera_t4157153871 * L_8 = Camera_get_current_m929992396(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t4157153871 * L_9 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0034;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0034:
	{
		int32_t L_11 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003a:
	{
		int32_t L_12 = V_5;
		CameraU5BU5D_t1709987734* L_13 = V_4;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))))))
		{
			goto IL_001d;
		}
	}
	{
		bool L_14 = V_0;
		if (L_14)
		{
			goto IL_0046;
		}
	}
	{
		return;
	}

IL_0046:
	{
		bool L_15 = __this->get_ShowLines_5();
		if (L_15)
		{
			goto IL_004f;
		}
	}
	{
		return;
	}

IL_004f:
	{
		MeshFilter_t3523625662 * L_16 = Component_GetComponent_TisMeshFilter_t3523625662_m569847836(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t3523625662_m569847836_RuntimeMethod_var);
		V_1 = L_16;
		MeshFilter_t3523625662 * L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_005f;
		}
	}
	{
		return;
	}

IL_005f:
	{
		Material_t340375123 * L_19 = __this->get_mLineMaterial_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_19, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1571861241, /*hidden argument*/NULL);
		return;
	}

IL_0078:
	{
		MeshFilter_t3523625662 * L_21 = V_1;
		NullCheck(L_21);
		Mesh_t3648964284 * L_22 = MeshFilter_get_sharedMesh_m1726897210(L_21, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_23 = L_22;
		NullCheck(L_23);
		Vector3U5BU5D_t1718750761* L_24 = Mesh_get_vertices_m3585684815(L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		NullCheck(L_23);
		Int32U5BU5D_t385246372* L_25 = Mesh_get_triangles_m3059934743(L_23, /*hidden argument*/NULL);
		V_3 = L_25;
		GL_PushMatrix_m1848274883(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_26 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Matrix4x4_t1817901843  L_27 = Transform_get_localToWorldMatrix_m4155710351(L_26, /*hidden argument*/NULL);
		GL_MultMatrix_m3576884247(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		Material_t340375123 * L_28 = __this->get_mLineMaterial_7();
		NullCheck(L_28);
		Material_SetPass_m686253719(L_28, 0, /*hidden argument*/NULL);
		Material_t340375123 * L_29 = __this->get_mLineMaterial_7();
		Color_t2555686324  L_30 = __this->get_LineColor_6();
		NullCheck(L_29);
		Material_SetColor_m2020215303(L_29, _stringLiteral3957048425, L_30, /*hidden argument*/NULL);
		GL_Begin_m1290681325(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		V_7 = 0;
		goto IL_0121;
	}

IL_00ce:
	{
		Vector3U5BU5D_t1718750761* L_31 = V_2;
		Int32U5BU5D_t385246372* L_32 = V_3;
		int32_t L_33 = V_7;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		int32_t L_36 = L_35;
		Vector3_t3722313464  L_37 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_8 = L_37;
		Vector3U5BU5D_t1718750761* L_38 = V_2;
		Int32U5BU5D_t385246372* L_39 = V_3;
		int32_t L_40 = V_7;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_38);
		int32_t L_43 = L_42;
		Vector3_t3722313464  L_44 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_9 = L_44;
		Vector3U5BU5D_t1718750761* L_45 = V_2;
		Int32U5BU5D_t385246372* L_46 = V_3;
		int32_t L_47 = V_7;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)2));
		int32_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_45);
		int32_t L_50 = L_49;
		Vector3_t3722313464  L_51 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		Vector3_t3722313464  L_52 = V_8;
		GL_Vertex_m691990801(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		Vector3_t3722313464  L_53 = V_9;
		GL_Vertex_m691990801(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		Vector3_t3722313464  L_54 = V_9;
		GL_Vertex_m691990801(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		Vector3_t3722313464  L_55 = L_51;
		GL_Vertex_m691990801(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		GL_Vertex_m691990801(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		Vector3_t3722313464  L_56 = V_8;
		GL_Vertex_m691990801(NULL /*static, unused*/, L_56, /*hidden argument*/NULL);
		int32_t L_57 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)3));
	}

IL_0121:
	{
		int32_t L_58 = V_7;
		Int32U5BU5D_t385246372* L_59 = V_3;
		NullCheck(L_59);
		if ((((int32_t)L_58) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_59)->max_length)))))))
		{
			goto IL_00ce;
		}
	}
	{
		GL_End_m539612367(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_PopMatrix_m3416050869(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WireframeBehaviour::OnDrawGizmos()
extern "C" IL2CPP_METHOD_ATTR void WireframeBehaviour_OnDrawGizmos_m1837418945 (WireframeBehaviour_t1831066704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeBehaviour_OnDrawGizmos_m1837418945_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilter_t3523625662 * V_0 = NULL;
	Mesh_t3648964284 * V_1 = NULL;
	Vector3U5BU5D_t1718750761* V_2 = NULL;
	Int32U5BU5D_t385246372* V_3 = NULL;
	int32_t V_4 = 0;
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		bool L_0 = __this->get_ShowLines_5();
		if (!L_0)
		{
			goto IL_00de;
		}
	}
	{
		bool L_1 = Behaviour_get_enabled_m753527255(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00de;
		}
	}
	{
		MeshFilter_t3523625662 * L_2 = Component_GetComponent_TisMeshFilter_t3523625662_m569847836(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t3523625662_m569847836_RuntimeMethod_var);
		V_0 = L_2;
		MeshFilter_t3523625662 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Quaternion_t2301928331  L_10 = Transform_get_rotation_m3502953881(L_9, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_t3600365921 * L_12 = GameObject_get_transform_m1369836730(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_lossyScale_m465496651(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t1817901843_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_14 = Matrix4x4_TRS_m3801934620(NULL /*static, unused*/, L_7, L_10, L_13, /*hidden argument*/NULL);
		Gizmos_set_matrix_m3287403258(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		Color_t2555686324  L_15 = __this->get_LineColor_6();
		Gizmos_set_color_m3399737545(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		MeshFilter_t3523625662 * L_16 = V_0;
		NullCheck(L_16);
		Mesh_t3648964284 * L_17 = MeshFilter_get_sharedMesh_m1726897210(L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		Mesh_t3648964284 * L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_18, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00de;
		}
	}
	{
		Mesh_t3648964284 * L_20 = V_1;
		NullCheck(L_20);
		Vector3U5BU5D_t1718750761* L_21 = Mesh_get_vertices_m3585684815(L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		Mesh_t3648964284 * L_22 = V_1;
		NullCheck(L_22);
		Int32U5BU5D_t385246372* L_23 = Mesh_get_triangles_m3059934743(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		V_4 = 0;
		goto IL_00d7;
	}

IL_008e:
	{
		Vector3U5BU5D_t1718750761* L_24 = V_2;
		Int32U5BU5D_t385246372* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_24);
		int32_t L_29 = L_28;
		Vector3_t3722313464  L_30 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_5 = L_30;
		Vector3U5BU5D_t1718750761* L_31 = V_2;
		Int32U5BU5D_t385246372* L_32 = V_3;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		int32_t L_36 = L_35;
		Vector3_t3722313464  L_37 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_6 = L_37;
		Vector3U5BU5D_t1718750761* L_38 = V_2;
		Int32U5BU5D_t385246372* L_39 = V_3;
		int32_t L_40 = V_4;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)2));
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_38);
		int32_t L_43 = L_42;
		Vector3_t3722313464  L_44 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_7 = L_44;
		Vector3_t3722313464  L_45 = V_5;
		Vector3_t3722313464  L_46 = V_6;
		Gizmos_DrawLine_m3273476787(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		Vector3_t3722313464  L_47 = V_6;
		Vector3_t3722313464  L_48 = V_7;
		Gizmos_DrawLine_m3273476787(NULL /*static, unused*/, L_47, L_48, /*hidden argument*/NULL);
		Vector3_t3722313464  L_49 = V_7;
		Vector3_t3722313464  L_50 = V_5;
		Gizmos_DrawLine_m3273476787(NULL /*static, unused*/, L_49, L_50, /*hidden argument*/NULL);
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)3));
	}

IL_00d7:
	{
		int32_t L_52 = V_4;
		Int32U5BU5D_t385246372* L_53 = V_3;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_53)->max_length)))))))
		{
			goto IL_008e;
		}
	}

IL_00de:
	{
		return;
	}
}
// System.Void Vuforia.WireframeBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WireframeBehaviour__ctor_m2452166919 (WireframeBehaviour_t1831066704 * __this, const RuntimeMethod* method)
{
	{
		__this->set_ShowLines_5((bool)1);
		Color_t2555686324  L_0 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_LineColor_6(L_0);
		VuforiaMonoBehaviour__ctor_m348562674(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.WireframeTrackableEventHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void WireframeTrackableEventHandler_Start_m3436697873 (WireframeTrackableEventHandler_t2143753312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeTrackableEventHandler_Start_m3436697873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t1113559212 * L_0 = Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408(__this, /*hidden argument*/Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var);
		__this->set_mTrackableBehaviour_4(L_0);
		TrackableBehaviour_t1113559212 * L_1 = __this->get_mTrackableBehaviour_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_3 = __this->get_mTrackableBehaviour_4();
		NullCheck(L_3);
		TrackableBehaviour_RegisterTrackableEventHandler_m2462783619(L_3, __this, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C" IL2CPP_METHOD_ATTR void WireframeTrackableEventHandler_OnTrackableStateChanged_m519024718 (WireframeTrackableEventHandler_t2143753312 * __this, int32_t ___previousStatus0, int32_t ___newStatus1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___newStatus1;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___newStatus1;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_000f;
		}
	}

IL_0008:
	{
		WireframeTrackableEventHandler_OnTrackingFound_m2813716415(__this, /*hidden argument*/NULL);
		return;
	}

IL_000f:
	{
		WireframeTrackableEventHandler_OnTrackingLost_m1967211472(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackingFound()
extern "C" IL2CPP_METHOD_ATTR void WireframeTrackableEventHandler_OnTrackingFound_m2813716415 (WireframeTrackableEventHandler_t2143753312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeTrackableEventHandler_OnTrackingFound_m2813716415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t4234922487* V_0 = NULL;
	WireframeBehaviourU5BU5D_t4114094193* V_1 = NULL;
	RendererU5BU5D_t3210418286* V_2 = NULL;
	int32_t V_3 = 0;
	ColliderU5BU5D_t4234922487* V_4 = NULL;
	WireframeBehaviourU5BU5D_t4114094193* V_5 = NULL;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_0 = L_1;
		WireframeBehaviourU5BU5D_t4114094193* L_2 = Component_GetComponentsInChildren_TisWireframeBehaviour_t1831066704_m2022065013(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisWireframeBehaviour_t1831066704_m2022065013_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0029;
	}

IL_001c:
	{
		RendererU5BU5D_t3210418286* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Renderer_t2627027031 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Renderer_set_enabled_m1727253150(L_6, (bool)1, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_8 = V_3;
		RendererU5BU5D_t3210418286* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_10 = V_0;
		V_4 = L_10;
		V_3 = 0;
		goto IL_0044;
	}

IL_0036:
	{
		ColliderU5BU5D_t4234922487* L_11 = V_4;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Collider_t1773347010 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Collider_set_enabled_m1517463283(L_14, (bool)1, /*hidden argument*/NULL);
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_16 = V_3;
		ColliderU5BU5D_t4234922487* L_17 = V_4;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		WireframeBehaviourU5BU5D_t4114094193* L_18 = V_1;
		V_5 = L_18;
		V_3 = 0;
		goto IL_0060;
	}

IL_0052:
	{
		WireframeBehaviourU5BU5D_t4114094193* L_19 = V_5;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		WireframeBehaviour_t1831066704 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Behaviour_set_enabled_m20417929(L_22, (bool)1, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0060:
	{
		int32_t L_24 = V_3;
		WireframeBehaviourU5BU5D_t4114094193* L_25 = V_5;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_0052;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_26 = __this->get_mTrackableBehaviour_4();
		NullCheck(L_26);
		String_t* L_27 = TrackableBehaviour_get_TrackableName_m3644057705(L_26, /*hidden argument*/NULL);
		String_t* L_28 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_27, _stringLiteral3073488411, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackingLost()
extern "C" IL2CPP_METHOD_ATTR void WireframeTrackableEventHandler_OnTrackingLost_m1967211472 (WireframeTrackableEventHandler_t2143753312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeTrackableEventHandler_OnTrackingLost_m1967211472_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t4234922487* V_0 = NULL;
	WireframeBehaviourU5BU5D_t4114094193* V_1 = NULL;
	RendererU5BU5D_t3210418286* V_2 = NULL;
	int32_t V_3 = 0;
	ColliderU5BU5D_t4234922487* V_4 = NULL;
	WireframeBehaviourU5BU5D_t4114094193* V_5 = NULL;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_0 = L_1;
		WireframeBehaviourU5BU5D_t4114094193* L_2 = Component_GetComponentsInChildren_TisWireframeBehaviour_t1831066704_m2022065013(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisWireframeBehaviour_t1831066704_m2022065013_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0029;
	}

IL_001c:
	{
		RendererU5BU5D_t3210418286* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Renderer_t2627027031 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Renderer_set_enabled_m1727253150(L_6, (bool)0, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_8 = V_3;
		RendererU5BU5D_t3210418286* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_10 = V_0;
		V_4 = L_10;
		V_3 = 0;
		goto IL_0044;
	}

IL_0036:
	{
		ColliderU5BU5D_t4234922487* L_11 = V_4;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Collider_t1773347010 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Collider_set_enabled_m1517463283(L_14, (bool)0, /*hidden argument*/NULL);
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_16 = V_3;
		ColliderU5BU5D_t4234922487* L_17 = V_4;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		WireframeBehaviourU5BU5D_t4114094193* L_18 = V_1;
		V_5 = L_18;
		V_3 = 0;
		goto IL_0060;
	}

IL_0052:
	{
		WireframeBehaviourU5BU5D_t4114094193* L_19 = V_5;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		WireframeBehaviour_t1831066704 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Behaviour_set_enabled_m20417929(L_22, (bool)0, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0060:
	{
		int32_t L_24 = V_3;
		WireframeBehaviourU5BU5D_t4114094193* L_25 = V_5;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_0052;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_26 = __this->get_mTrackableBehaviour_4();
		NullCheck(L_26);
		String_t* L_27 = TrackableBehaviour_get_TrackableName_m3644057705(L_26, /*hidden argument*/NULL);
		String_t* L_28 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_27, _stringLiteral3483481617, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WireframeTrackableEventHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WireframeTrackableEventHandler__ctor_m2994238637 (WireframeTrackableEventHandler_t2143753312 * __this, const RuntimeMethod* method)
{
	{
		VuforiaMonoBehaviour__ctor_m348562674(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VuforiaMonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VuforiaMonoBehaviour__ctor_m348562674 (VuforiaMonoBehaviour_t1150221792 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
