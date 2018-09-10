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

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// IActivationFactory
struct Il2CppIActivationFactory;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t3512676632;
// System.Collections.Generic.IEnumerator`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct IEnumerator_1_t3375870438;
// System.Collections.Generic.IReadOnlyList`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>
struct IReadOnlyList_1_t1477883989;
// System.Collections.Generic.IReadOnlyList`1<Windows.Media.SpeechSynthesis.VoiceInformation>
struct IReadOnlyList_1_t535860242;
// System.Collections.Generic.IReadOnlyList`1<Windows.Networking.HostName>
struct IReadOnlyList_1_t3454457725;
// System.Collections.Generic.IReadOnlyList`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>
struct IReadOnlyList_1_t1780110969;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.IList
struct IList_t2094931216;
// System.Collections.Specialized.NotifyCollectionChangedEventArgs
struct NotifyCollectionChangedEventArgs_t9239872;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t2749712960;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t3313059048;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t3836340606;
// System.DateTimeOffset[]
struct DateTimeOffsetU5BU5D_t3473357058;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Double[]
struct DoubleU5BU5D_t3413330114;
// System.Exception
struct Exception_t;
// System.Guid[]
struct GuidU5BU5D_t545550574;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int16[]
struct Int16U5BU5D_t3686840178;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Int64[]
struct Int64U5BU5D_t2559172825;
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
// System.Runtime.InteropServices.WindowsRuntime.IBindableIterableToIEnumerableAdapter
struct IBindableIterableToIEnumerableAdapter_t3609568223;
// System.Runtime.InteropServices.WindowsRuntime.IClosableToIDisposableAdapter
struct IClosableToIDisposableAdapter_t3213967014;
// System.Runtime.InteropServices.WindowsRuntime.IInspectableToIReadOnlyCollectionAdapter`1<System.Object>
struct IInspectableToIReadOnlyCollectionAdapter_1_t1597785236;
// System.Runtime.InteropServices.WindowsRuntime.IInspectableToIReadOnlyCollectionAdapter`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct IInspectableToIReadOnlyCollectionAdapter_1_t1460979042;
// System.Runtime.InteropServices.WindowsRuntime.IIterableToIEnumerableAdapter`1<System.Object>
struct IIterableToIEnumerableAdapter_1_t1083066120;
// System.Runtime.InteropServices.WindowsRuntime.IIterableToIEnumerableAdapter`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct IIterableToIEnumerableAdapter_1_t946259926;
// System.Runtime.InteropServices.WindowsRuntime.IVectorViewToIReadOnlyListAdapter`1<System.Object>
struct IVectorViewToIReadOnlyListAdapter_1_t3822803330;
// System.Runtime.InteropServices.WindowsRuntime.IVectorViewToIReadOnlyListAdapter`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct IVectorViewToIReadOnlyListAdapter_1_t3685997136;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.TimeSpan[]
struct TimeSpanU5BU5D_t4291357516;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt16[]
struct UInt16U5BU5D_t3326319531;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.UInt64[]
struct UInt64U5BU5D_t1659327989;
// System.Uri
struct Uri_t100236324;
// System.Uri/UriInfo
struct UriInfo_t1092684687;
// System.UriParser
struct UriParser_t3890150400;
// System.Void
struct Void_t1185182177;
// System.__Il2CppComObject
struct Il2CppComObject;
// Windows.Devices.Haptics.SimpleHapticsController
struct SimpleHapticsController_t4220085256;
// Windows.Devices.Haptics.SimpleHapticsControllerFeedback
struct SimpleHapticsControllerFeedback_t913461083;
// Windows.Foundation.AsyncActionCompletedHandler
struct AsyncActionCompletedHandler_t4142409509;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>
struct AsyncOperationCompletedHandler_1_t3900534053;
// Windows.Foundation.Collections.IIterator`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct IIterator_1_t817443443;
// Windows.Foundation.IAsyncAction
struct IAsyncAction_t3072713919;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_t593214123;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_t1622574100;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t3013442981;
// Windows.Foundation.IAsyncOperation`1<System.UInt32>
struct IAsyncOperation_1_t1181249698;
// Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct IAsyncOperation_1_t943527478;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>
struct IAsyncOperation_1_t372991836;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFolder>
struct IAsyncOperation_1_t3901635704;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStream>
struct IAsyncOperation_1_t721183771;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct IAsyncOperation_1_t1918115372;
// Windows.Foundation.IUriEscapeStatics
struct IUriEscapeStatics_t1418340874;
// Windows.Foundation.IUriRuntimeClassFactory
struct IUriRuntimeClassFactory_t1786313621;
// Windows.Foundation.IWwwFormUrlDecoderEntry
struct IWwwFormUrlDecoderEntry_t2943299970;
// Windows.Foundation.IWwwFormUrlDecoderEntry[]
struct IWwwFormUrlDecoderEntryU5BU5D_t40345143;
// Windows.Foundation.IWwwFormUrlDecoderRuntimeClassFactory
struct IWwwFormUrlDecoderRuntimeClassFactory_t1825479388;
// Windows.Foundation.Metadata.ActivatableAttribute
struct ActivatableAttribute_t4098936231;
// Windows.Foundation.Metadata.AllowMultipleAttribute
struct AllowMultipleAttribute_t3314144467;
// Windows.Foundation.Metadata.ApiContractAttribute
struct ApiContractAttribute_t3160257459;
// Windows.Foundation.Metadata.ApiInformation
struct ApiInformation_t812843232;
// Windows.Foundation.Metadata.AttributeUsageAttribute
struct AttributeUsageAttribute_t1422441135;
// Windows.Foundation.Metadata.ComposableAttribute
struct ComposableAttribute_t2299833422;
// Windows.Foundation.Metadata.ContractVersionAttribute
struct ContractVersionAttribute_t1666784187;
// Windows.Foundation.Metadata.DefaultAttribute
struct DefaultAttribute_t1509828399;
// Windows.Foundation.Metadata.DefaultOverloadAttribute
struct DefaultOverloadAttribute_t2513707992;
// Windows.Foundation.Metadata.DualApiPartitionAttribute
struct DualApiPartitionAttribute_t1301304994;
// Windows.Foundation.Metadata.ExclusiveToAttribute
struct ExclusiveToAttribute_t3124418018;
// Windows.Foundation.Metadata.GuidAttribute
struct GuidAttribute_t2682955351;
// Windows.Foundation.Metadata.IApiInformationStatics
struct IApiInformationStatics_t1368946868;
// Windows.Foundation.Metadata.LengthIsAttribute
struct LengthIsAttribute_t613149204;
// Windows.Foundation.Metadata.MarshalingBehaviorAttribute
struct MarshalingBehaviorAttribute_t570737848;
// Windows.Foundation.Metadata.MuseAttribute
struct MuseAttribute_t3401286167;
// Windows.Foundation.Metadata.OverloadAttribute
struct OverloadAttribute_t2178303703;
// Windows.Foundation.Metadata.RemoteAsyncAttribute
struct RemoteAsyncAttribute_t33115854;
// Windows.Foundation.Metadata.StaticAttribute
struct StaticAttribute_t2174868556;
// Windows.Foundation.Metadata.ThreadingAttribute
struct ThreadingAttribute_t685453408;
// Windows.Foundation.Metadata.WebHostHiddenAttribute
struct WebHostHiddenAttribute_t2021537596;
// Windows.Foundation.Point[]
struct PointU5BU5D_t724808658;
// Windows.Foundation.Rect[]
struct RectU5BU5D_t5657558;
// Windows.Foundation.Size[]
struct SizeU5BU5D_t1671914275;
// Windows.Foundation.Uri
struct Uri_t952691556;
// Windows.Foundation.WwwFormUrlDecoder
struct WwwFormUrlDecoder_t4136411681;
// Windows.Media.Capture.IMediaCaptureStatics
struct IMediaCaptureStatics_t830978977;
// Windows.Media.Capture.MediaCapture
struct MediaCapture_t1516581975;
// Windows.Media.Capture.MediaCaptureInitializationSettings
struct MediaCaptureInitializationSettings_t546830356;
// Windows.Media.Devices.AudioDeviceController
struct AudioDeviceController_t936102736;
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
struct IInstalledVoicesStatic_t870565809;
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
struct IInstalledVoicesStatic2_t946760305;
// Windows.Media.SpeechSynthesis.SpeechSynthesisStream
struct SpeechSynthesisStream_t2322339758;
// Windows.Media.SpeechSynthesis.SpeechSynthesizer
struct SpeechSynthesizer_t2130945875;
// Windows.Media.SpeechSynthesis.VoiceInformation
struct VoiceInformation_t4266404632;
// Windows.Networking.Connectivity.INetworkInformationStatics
struct INetworkInformationStatics_t1568055678;
// Windows.Networking.Connectivity.INetworkInformationStatics2
struct INetworkInformationStatics2_t442609477;
// Windows.Networking.Connectivity.NetworkInformation
struct NetworkInformation_t482159730;
// Windows.Networking.HostName
struct HostName_t2890034819;
// Windows.Networking.IHostNameFactory
struct IHostNameFactory_t2985905689;
// Windows.Networking.IHostNameStatics
struct IHostNameStatics_t664333692;
// Windows.Networking.Sockets.IStreamSocketStatics
struct IStreamSocketStatics_t566903188;
// Windows.Networking.Sockets.StreamSocket
struct StreamSocket_t121918173;
// Windows.Perception.IPerceptionTimestampHelperStatics
struct IPerceptionTimestampHelperStatics_t2092781866;
// Windows.Perception.PerceptionTimestamp
struct PerceptionTimestamp_t25754965;
// Windows.Perception.PerceptionTimestampHelper
struct PerceptionTimestampHelper_t1405177115;
// Windows.Storage.ApplicationData
struct ApplicationData_t3489691988;
// Windows.Storage.IApplicationDataStatics
struct IApplicationDataStatics_t3792839446;
// Windows.Storage.IApplicationDataStatics2
struct IApplicationDataStatics2_t2938905366;
// Windows.Storage.IStorageFileStatics
struct IStorageFileStatics_t4131808966;
// Windows.Storage.IStorageFolderStatics
struct IStorageFolderStatics_t333412554;
// Windows.Storage.StorageFile
struct StorageFile_t1751804116;
// Windows.Storage.StorageFolder
struct StorageFolder_t985480688;
// Windows.Storage.Streams.DataReader
struct DataReader_t2381813649;
// Windows.Storage.Streams.DataReaderLoadOperation
struct DataReaderLoadOperation_t4248924386;
// Windows.Storage.Streams.DataWriter
struct DataWriter_t841151054;
// Windows.Storage.Streams.DataWriterStoreOperation
struct DataWriterStoreOperation_t1087990177;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t541192229;
// Windows.Storage.Streams.IDataReaderFactory
struct IDataReaderFactory_t2217455388;
// Windows.Storage.Streams.IDataReaderStatics
struct IDataReaderStatics_t1343138968;
// Windows.Storage.Streams.IDataWriterFactory
struct IDataWriterFactory_t624500286;
// Windows.Storage.Streams.IInputStream
struct IInputStream_t2821136229;
// Windows.Storage.Streams.IOutputStream
struct IOutputStream_t2042351338;
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
struct ISpatialInteractionManagerStatics_t2291651573;
// Windows.UI.Input.Spatial.SpatialInteractionController
struct SpatialInteractionController_t3760917144;
// Windows.UI.Input.Spatial.SpatialInteractionManager
struct SpatialInteractionManager_t208992783;
// Windows.UI.Input.Spatial.SpatialInteractionSource
struct SpatialInteractionSource_t1043222996;
// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct SpatialInteractionSourceState_t1215688063;
// Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory
struct IPropertyChangedEventArgsFactory_t4178285917;
// Windows.UI.Xaml.Data.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t1492749306;
// Windows.UI.Xaml.Data.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t3818875368;
// Windows.UI.Xaml.Interop.IBindableIterator
struct IBindableIterator_t667386168;
// Windows.UI.Xaml.Interop.IBindableVectorView
struct IBindableVectorView_t4191940899;
// Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgsFactory
struct INotifyCollectionChangedEventArgsFactory_t1817199772;
// Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs
struct NotifyCollectionChangedEventArgs_t495045256;
// Windows.UI.Xaml.Interop.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t3129157931;

extern RuntimeClass* ApiInformation_t812843232_il2cpp_TypeInfo_var;
extern RuntimeClass* ApplicationData_t3489691988_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncActionCompletedHandler_t4142409509_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncOperationCompletedHandler_1_t3900534053_il2cpp_TypeInfo_var;
extern RuntimeClass* AudioDeviceController_t936102736_il2cpp_TypeInfo_var;
extern RuntimeClass* BooleanU5BU5D_t2897418192_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* DataReaderLoadOperation_t4248924386_il2cpp_TypeInfo_var;
extern RuntimeClass* DataReader_t2381813649_il2cpp_TypeInfo_var;
extern RuntimeClass* DataWriterStoreOperation_t1087990177_il2cpp_TypeInfo_var;
extern RuntimeClass* DataWriter_t841151054_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTimeOffsetU5BU5D_t3473357058_il2cpp_TypeInfo_var;
extern RuntimeClass* DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var;
extern RuntimeClass* GuidU5BU5D_t545550574_il2cpp_TypeInfo_var;
extern RuntimeClass* HostName_t2890034819_il2cpp_TypeInfo_var;
extern RuntimeClass* IBindableIterableToIEnumerableAdapter_t3609568223_il2cpp_TypeInfo_var;
extern RuntimeClass* IClosableToIDisposableAdapter_t3213967014_il2cpp_TypeInfo_var;
extern RuntimeClass* IInspectableToIReadOnlyCollectionAdapter_1_t1460979042_il2cpp_TypeInfo_var;
extern RuntimeClass* IIterableToIEnumerableAdapter_1_t946259926_il2cpp_TypeInfo_var;
extern RuntimeClass* IVectorViewToIReadOnlyListAdapter_1_t3685997136_il2cpp_TypeInfo_var;
extern RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16U5BU5D_t3686840178_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64U5BU5D_t2559172825_il2cpp_TypeInfo_var;
extern RuntimeClass* MediaCaptureInitializationSettings_t546830356_il2cpp_TypeInfo_var;
extern RuntimeClass* MediaCapture_t1516581975_il2cpp_TypeInfo_var;
extern RuntimeClass* NetworkInformation_t482159730_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* PerceptionTimestampHelper_t1405177115_il2cpp_TypeInfo_var;
extern RuntimeClass* PerceptionTimestamp_t25754965_il2cpp_TypeInfo_var;
extern RuntimeClass* PointU5BU5D_t724808658_il2cpp_TypeInfo_var;
extern RuntimeClass* RectU5BU5D_t5657558_il2cpp_TypeInfo_var;
extern RuntimeClass* SimpleHapticsController_t4220085256_il2cpp_TypeInfo_var;
extern RuntimeClass* SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var;
extern RuntimeClass* SizeU5BU5D_t1671914275_il2cpp_TypeInfo_var;
extern RuntimeClass* SpatialInteractionController_t3760917144_il2cpp_TypeInfo_var;
extern RuntimeClass* SpatialInteractionManager_t208992783_il2cpp_TypeInfo_var;
extern RuntimeClass* SpatialInteractionSource_t1043222996_il2cpp_TypeInfo_var;
extern RuntimeClass* SpeechSynthesizer_t2130945875_il2cpp_TypeInfo_var;
extern RuntimeClass* StorageFolder_t985480688_il2cpp_TypeInfo_var;
extern RuntimeClass* StreamSocket_t121918173_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeSpanU5BU5D_t4291357516_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16U5BU5D_t3326319531_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64U5BU5D_t1659327989_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t952691556_il2cpp_TypeInfo_var;
extern RuntimeClass* WwwFormUrlDecoder_t4136411681_il2cpp_TypeInfo_var;
extern RuntimeClass* __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral311452336;
extern String_t* _stringLiteral4286223022;
extern const RuntimeMethod* AsyncActionCompletedHandler_Invoke_m3971840501_RuntimeMethod_var;
extern const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m274646961_RuntimeMethod_var;
extern const RuntimeMethod* IInspectableToIReadOnlyCollectionAdapter_1_System_Collections_Generic_IReadOnlyCollection_1_get_Count_m1780114570_RuntimeMethod_var;
extern const RuntimeMethod* IIterableToIEnumerableAdapter_1_System_Collections_Generic_IEnumerable_1_GetEnumerator_m3771091130_RuntimeMethod_var;
extern const RuntimeMethod* IVectorViewToIReadOnlyListAdapter_1_System_Collections_Generic_IReadOnlyList_1_get_Item_m2155834487_RuntimeMethod_var;
extern const uint32_t ApiInformation_IsApiContractPresent_m1236186278_MetadataUsageId;
extern const uint32_t ApplicationData_get_Current_m176918983_MetadataUsageId;
extern const uint32_t ApplicationData_get_RoamingFolder_m1540049947_MetadataUsageId;
extern const uint32_t DataReaderLoadOperation_get_Completed_m1598730189_MetadataUsageId;
extern const uint32_t DataReaderLoadOperation_put_Completed_m3945104638_MetadataUsageId;
extern const uint32_t DataReader_Dispose_m2201628169_MetadataUsageId;
extern const uint32_t DataReader_LoadAsync_m3742007295_MetadataUsageId;
extern const uint32_t DataReader__ctor_m3546808691_MetadataUsageId;
extern const uint32_t DataWriterStoreOperation_get_Completed_m3833914415_MetadataUsageId;
extern const uint32_t DataWriterStoreOperation_put_Completed_m3609646651_MetadataUsageId;
extern const uint32_t DataWriter_Dispose_m622590890_MetadataUsageId;
extern const uint32_t DataWriter_StoreAsync_m2461251696_MetadataUsageId;
extern const uint32_t DataWriter__ctor_m2564181716_MetadataUsageId;
extern const uint32_t HostName__ctor_m596636606_MetadataUsageId;
extern const uint32_t IAsyncAction_get_Completed_m1835005524_MetadataUsageId;
extern const uint32_t IAsyncAction_put_Completed_m1173868328_MetadataUsageId;
extern const uint32_t IBindableIterable_First_m3188154520_MetadataUsageId;
extern const uint32_t IBindableIterator_get_Current_m3059254492_MetadataUsageId;
extern const uint32_t IBindableVectorView_GetAt_m2042489765_MetadataUsageId;
extern const uint32_t IBindableVector_GetAt_m2354796153_MetadataUsageId;
extern const uint32_t IBindableVector_GetView_m1491544680_MetadataUsageId;
extern const uint32_t IDataReader_LoadAsync_m90647872_MetadataUsageId;
extern const uint32_t IDataWriter_StoreAsync_m1501074270_MetadataUsageId;
extern const uint32_t IInputStream_ReadAsync_m1153220809_MetadataUsageId;
extern const uint32_t INotifyCollectionChanged_add_CollectionChanged_m1116549919_MetadataUsageId;
extern const uint32_t INotifyPropertyChanged_add_PropertyChanged_m1555432907_MetadataUsageId;
extern const uint32_t IOutputStream_FlushAsync_m252007188_MetadataUsageId;
extern const uint32_t IOutputStream_WriteAsync_m124082296_MetadataUsageId;
extern const uint32_t IPropertyValue_GetBooleanArray_m2519679727_MetadataUsageId;
extern const uint32_t IPropertyValue_GetChar16Array_m3043815358_MetadataUsageId;
extern const uint32_t IPropertyValue_GetDateTimeArray_m2328955250_MetadataUsageId;
extern const uint32_t IPropertyValue_GetDateTime_m4147484372_MetadataUsageId;
extern const uint32_t IPropertyValue_GetDoubleArray_m2983062062_MetadataUsageId;
extern const uint32_t IPropertyValue_GetGuidArray_m3262947336_MetadataUsageId;
extern const uint32_t IPropertyValue_GetInspectableArray_m2438646989_MetadataUsageId;
extern const uint32_t IPropertyValue_GetInt16Array_m99541304_MetadataUsageId;
extern const uint32_t IPropertyValue_GetInt32Array_m3011037886_MetadataUsageId;
extern const uint32_t IPropertyValue_GetInt64Array_m16819376_MetadataUsageId;
extern const uint32_t IPropertyValue_GetPointArray_m2823350989_MetadataUsageId;
extern const uint32_t IPropertyValue_GetRectArray_m3897171591_MetadataUsageId;
extern const uint32_t IPropertyValue_GetSingleArray_m4042538522_MetadataUsageId;
extern const uint32_t IPropertyValue_GetSizeArray_m1001766604_MetadataUsageId;
extern const uint32_t IPropertyValue_GetStringArray_m31925364_MetadataUsageId;
extern const uint32_t IPropertyValue_GetTimeSpanArray_m3967818403_MetadataUsageId;
extern const uint32_t IPropertyValue_GetUInt16Array_m1856918684_MetadataUsageId;
extern const uint32_t IPropertyValue_GetUInt32Array_m3306404924_MetadataUsageId;
extern const uint32_t IPropertyValue_GetUInt64Array_m966722754_MetadataUsageId;
extern const uint32_t IPropertyValue_GetUInt8Array_m1198332942_MetadataUsageId;
extern const uint32_t IRandomAccessStreamReference_OpenReadAsync_m2508312280_MetadataUsageId;
extern const uint32_t IRandomAccessStream_GetInputStreamAt_m2841117993_MetadataUsageId;
extern const uint32_t IStorageFile_OpenAsync_m1037381949_MetadataUsageId;
extern const uint32_t IStorageFolder_CreateFileAsync_m3292856642_MetadataUsageId;
extern const uint32_t IStorageFolder_GetFileAsync_m859688798_MetadataUsageId;
extern const uint32_t MediaCaptureInitializationSettings__ctor_m1537412696_MetadataUsageId;
extern const uint32_t MediaCapture_Dispose_m331879828_MetadataUsageId;
extern const uint32_t MediaCapture_InitializeAsync_m752811836_MetadataUsageId;
extern const uint32_t MediaCapture__ctor_m2938996618_MetadataUsageId;
extern const uint32_t MediaCapture_get_AudioDeviceController_m3127587230_MetadataUsageId;
extern const uint32_t NetworkInformation_GetHostNames_m4089451444_MetadataUsageId;
extern const uint32_t NotifyCollectionChangedEventArgs_get_NewItems_m2866764785_MetadataUsageId;
extern const uint32_t NotifyCollectionChangedEventArgs_get_OldItems_m1908442117_MetadataUsageId;
extern const uint32_t PerceptionTimestampHelper_FromHistoricalTargetTime_m2265143442_MetadataUsageId;
extern const uint32_t SimpleHapticsController_get_SupportedFeedback_m1604924433_MetadataUsageId;
extern const uint32_t SpatialInteractionController_TryGetRenderableModelAsync_m4213918896_MetadataUsageId;
extern const uint32_t SpatialInteractionController_get_SimpleHapticsController_m2270224420_MetadataUsageId;
extern const uint32_t SpatialInteractionManager_GetDetectedSourcesAtTimestamp_m2097367852_MetadataUsageId;
extern const uint32_t SpatialInteractionManager_GetForCurrentView_m3692227453_MetadataUsageId;
extern const uint32_t SpatialInteractionSourceState_get_Source_m4215701256_MetadataUsageId;
extern const uint32_t SpatialInteractionSource_get_Controller_m3986846077_MetadataUsageId;
extern const uint32_t SpeechSynthesisStream_Dispose_m1457724439_MetadataUsageId;
extern const uint32_t SpeechSynthesisStream_FlushAsync_m3519720753_MetadataUsageId;
extern const uint32_t SpeechSynthesisStream_GetInputStreamAt_m4033870373_MetadataUsageId;
extern const uint32_t SpeechSynthesisStream_ReadAsync_m1443081288_MetadataUsageId;
extern const uint32_t SpeechSynthesisStream_WriteAsync_m168218083_MetadataUsageId;
extern const uint32_t SpeechSynthesizer_Dispose_m640280663_MetadataUsageId;
extern const uint32_t SpeechSynthesizer_SynthesizeSsmlToStreamAsync_m3857390559_MetadataUsageId;
extern const uint32_t SpeechSynthesizer_SynthesizeTextToStreamAsync_m567607667_MetadataUsageId;
extern const uint32_t SpeechSynthesizer__ctor_m1182434939_MetadataUsageId;
extern const uint32_t SpeechSynthesizer_get_AllVoices_m2758775862_MetadataUsageId;
extern const uint32_t StorageFile_OpenAsync_m538658279_MetadataUsageId;
extern const uint32_t StorageFile_OpenReadAsync_m2378001648_MetadataUsageId;
extern const uint32_t StorageFolder_CreateFileAsync_m3867105292_MetadataUsageId;
extern const uint32_t StorageFolder_GetFileAsync_m449690548_MetadataUsageId;
extern const uint32_t StorageFolder_GetFolderFromPathAsync_m2929233224_MetadataUsageId;
extern const uint32_t StreamSocket_ConnectAsync_m633006672_MetadataUsageId;
extern const uint32_t StreamSocket_Dispose_m2916039844_MetadataUsageId;
extern const uint32_t StreamSocket__ctor_m2057671029_MetadataUsageId;
extern const uint32_t StreamSocket_get_OutputStream_m1377251550_MetadataUsageId;
extern const uint32_t Uri_CombineUri_m4118393707_MetadataUsageId;
extern const uint32_t Uri_Equals_m2605219813_MetadataUsageId;
extern const uint32_t Uri_EscapeComponent_m3992830692_MetadataUsageId;
extern const uint32_t Uri_UnescapeComponent_m3954444738_MetadataUsageId;
extern const uint32_t Uri_get_QueryParsed_m2466756889_MetadataUsageId;
extern const uint32_t WwwFormUrlDecoder_First_m3135326025_MetadataUsageId;
extern const uint32_t WwwFormUrlDecoder_GetAt_m646412330_MetadataUsageId;
extern const uint32_t WwwFormUrlDecoder_GetEnumerator_m1949124207_MetadataUsageId;
extern const uint32_t WwwFormUrlDecoder_GetEnumerator_m2557475735_MetadataUsageId;
extern const uint32_t WwwFormUrlDecoder_GetMany_m746668555_MetadataUsageId;
extern const uint32_t WwwFormUrlDecoder_get_Count_m482450371_MetadataUsageId;
extern const uint32_t WwwFormUrlDecoder_get_Item_m1443419508_MetadataUsageId;
struct DateTime_t1679451545 ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Guid_t ;
struct IApplicationData_t28886227;
struct IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper;
struct IAsyncAction_t3072713919;
struct IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t2325952763_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t3092276191_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t342432431_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t3440468126_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t3662811833_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t4087444949_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t821837630_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t1622574100;
struct IAsyncOperationWithProgress_2_t593214123;
struct IAsyncOperation_1_t1181249698;
struct IAsyncOperation_1_t1918115372;
struct IAsyncOperation_1_t3013442981;
struct IAsyncOperation_1_t372991836;
struct IAsyncOperation_1_t3901635704;
struct IAsyncOperation_1_t721183771;
struct IAsyncOperation_1_t943527478;
struct IAudioDeviceController_t3742505345;
struct IBindableIterator_t667386168;
struct IBindableVectorView_t4191940899;
struct IBindableVector_t1801110279;
struct IBuffer_t541192229;
struct IDataReader_t3392321383;
struct IDataWriter_t1260434628;
struct IHostName_t3179521082;
struct IInputStream_t2821136229;
struct IIterator_1_t817443443;
struct IMediaCaptureInitializationSettings_t2768046102;
struct INotifyCollectionChangedEventHandler_t2749712960_ComCallableWrapper;
struct IOutputStream_t2042351338;
struct IPerceptionTimestamp_t393505964;
struct IPropertyChangedEventHandler_t3836340606_ComCallableWrapper;
struct IRandomAccessStreamWithContentType_t3296927652;
struct IRandomAccessStream_t2099996051;
struct ISimpleHapticsControllerFeedback_t2199416581;
struct ISimpleHapticsController_t3936202477;
struct ISpatialInteractionController_t138196805;
struct ISpatialInteractionManager_t354061063;
struct ISpatialInteractionSourceState_t1358829803;
struct ISpatialInteractionSource_t2185314266;
struct ISpeechSynthesisStream_t764091608;
struct IStorageFile_t455187485;
struct IStorageFolder_t2414910357;
struct IUriRuntimeClass_t921050115;;
struct IVectorView_1_t2228900081;
struct IVectorView_1_t252326345;
struct IVectorView_1_t3605269894;
struct IVectorView_1_t554553325;
struct IVoiceInformation_t3111056019;
struct IWwwFormUrlDecoderEntry_t2943299970;
struct IWwwFormUrlDecoderRuntimeClass_t497020701;
struct Point_t4164953539 ;
struct Rect_t2695113487 ;
struct Size_t550917638 ;
struct TimeSpan_t881159249 ;

struct BooleanU5BU5D_t2897418192;
struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;
struct DateTimeOffsetU5BU5D_t3473357058;
struct DelegateU5BU5D_t1703627840;
struct DoubleU5BU5D_t3413330114;
struct GuidU5BU5D_t545550574;
struct Int16U5BU5D_t3686840178;
struct Int32U5BU5D_t385246372;
struct Int64U5BU5D_t2559172825;
struct ObjectU5BU5D_t2843939325;
struct SingleU5BU5D_t1444911251;
struct StringU5BU5D_t1281789340;
struct TimeSpanU5BU5D_t4291357516;
struct UInt16U5BU5D_t3326319531;
struct UInt32U5BU5D_t2770800703;
struct UInt64U5BU5D_t1659327989;
struct IWwwFormUrlDecoderEntryU5BU5D_t40345143;
struct PointU5BU5D_t724808658;
struct RectU5BU5D_t5657558;
struct SizeU5BU5D_t1671914275;


#ifndef U3CMODULEU3E_T692745587_H
#define U3CMODULEU3E_T692745587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745587 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745587_H
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
// Windows.Devices.Haptics.ISimpleHapticsControllerFeedback
struct NOVTABLE ISimpleHapticsControllerFeedback_t2199416581 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsControllerFeedback_get_Waveform_m1427054036(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsControllerFeedback_U24__Stripped0_get_Duration_m1134348836() = 0;
};
// Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct NOVTABLE IIterable_1_t564697430 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m725484364(IIterator_1_t817443443** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterator`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct NOVTABLE IIterator_1_t817443443 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_Current_m1946311790(IWwwFormUrlDecoderEntry_t2943299970** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_HasCurrent_m4030884216(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_MoveNext_m564191597(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_GetMany_m402209304(uint32_t ___items0ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items0, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>
struct NOVTABLE IVectorView_1_t252326345 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m306269307(uint32_t ___index0, ISimpleHapticsControllerFeedback_t2199416581** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m164847096(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m390895991(ISimpleHapticsControllerFeedback_t2199416581* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m1398936297(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISimpleHapticsControllerFeedback_t2199416581** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct NOVTABLE IVectorView_1_t2282165232 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m2035733383(uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2047203447(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2753411397(IWwwFormUrlDecoderEntry_t2943299970* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m66302439(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Media.SpeechSynthesis.VoiceInformation>
struct NOVTABLE IVectorView_1_t3605269894 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m2454591675(uint32_t ___index0, IVoiceInformation_t3111056019** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m4055464204(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2751515202(IVoiceInformation_t3111056019* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m3987600692(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IVoiceInformation_t3111056019** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Networking.HostName>
struct NOVTABLE IVectorView_1_t2228900081 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m1545579875(uint32_t ___index0, IHostName_t3179521082** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m1139562657(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1058966889(IHostName_t3179521082* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m3839290201(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IHostName_t3179521082** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>
struct NOVTABLE IVectorView_1_t554553325 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3403983141(uint32_t ___index0, ISpatialInteractionSourceState_t1358829803** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2305435658(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1144283072(ISpatialInteractionSourceState_t1358829803* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m557233082(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISpatialInteractionSourceState_t1358829803** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncAction
struct NOVTABLE IAsyncAction_t3072713919 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_put_Completed_m1173868328(IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_get_Completed_m1835005524(IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_GetResults_m1540137877() = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t593214123 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m1633053105(IAsyncOperationProgressHandler_2_t4087444949_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m165963889(IAsyncOperationProgressHandler_2_t4087444949_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m483007812(IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m655232302(IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m3754792249(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t1622574100 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m809910966(IAsyncOperationProgressHandler_2_t821837630_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m489652616(IAsyncOperationProgressHandler_2_t821837630_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m3126232629(IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m4203981877(IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m3465034556(IBuffer_t541192229** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct NOVTABLE IAsyncOperation_1_t3013442981 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m1783482745(IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m2903702275(IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m183360251(bool* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.UInt32>
struct NOVTABLE IAsyncOperation_1_t1181249698 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m1437779878(IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m2736054029(IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m2010780058(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct NOVTABLE IAsyncOperation_1_t943527478 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m2708255201(IAsyncOperationCompletedHandler_1_t3662811833_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m1799896646(IAsyncOperationCompletedHandler_1_t3662811833_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m1078041023(ISpeechSynthesisStream_t764091608** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>
struct NOVTABLE IAsyncOperation_1_t372991836 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m1174308971(IAsyncOperationCompletedHandler_1_t3092276191_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m2669246745(IAsyncOperationCompletedHandler_1_t3092276191_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m4007442614(IStorageFile_t455187485** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFolder>
struct NOVTABLE IAsyncOperation_1_t3901635704 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m2910006857(IAsyncOperationCompletedHandler_1_t2325952763_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m2270643935(IAsyncOperationCompletedHandler_1_t2325952763_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m2895527307(IStorageFolder_t2414910357** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStream>
struct NOVTABLE IAsyncOperation_1_t721183771 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m1751653406(IAsyncOperationCompletedHandler_1_t3440468126_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m3598311264(IAsyncOperationCompletedHandler_1_t3440468126_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m2960108873(IRandomAccessStream_t2099996051** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct NOVTABLE IAsyncOperation_1_t1918115372 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m677968592(IAsyncOperationCompletedHandler_1_t342432431_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m1527642250(IAsyncOperationCompletedHandler_1_t342432431_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m4077769623(IRandomAccessStreamWithContentType_t3296927652** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t326290202 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m649191502() = 0;
};
// Windows.Foundation.IStringable
struct NOVTABLE IStringable_t1634798504 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStringable_ToString_m698137009(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IUriEscapeStatics
struct NOVTABLE IUriEscapeStatics_t1418340874 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriEscapeStatics_UnescapeComponent_m4034034788(Il2CppHString ___toUnescape0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriEscapeStatics_EscapeComponent_m2989309814(Il2CppHString ___toEscape0, Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IUriRuntimeClass
struct NOVTABLE IUriRuntimeClass_t921050115 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_AbsoluteUri_m1802109736(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_DisplayUri_m486834635(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Domain_m2557921454(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Extension_m3106685299(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Fragment_m2886153123(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Host_m971230776(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Password_m4039608124(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Path_m1403698734(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Query_m49598513(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_QueryParsed_m1061304731(IWwwFormUrlDecoderRuntimeClass_t497020701** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_RawUri_m1303737506(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_SchemeName_m1162666486(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_UserName_m1956155983(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Port_m834193881(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Suspicious_m1231824283(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_Equals_m641048832(IUriRuntimeClass_t921050115* ___pUri0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_CombineUri_m511350015(Il2CppHString ___relativeUri0, IUriRuntimeClass_t921050115** comReturnValue) = 0;
};
// Windows.Foundation.IUriRuntimeClassFactory
struct NOVTABLE IUriRuntimeClassFactory_t1786313621 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassFactory_CreateUri_m1347622952(Il2CppHString ___uri0, IUriRuntimeClass_t921050115** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassFactory_CreateWithRelativeUri_m922460588(Il2CppHString ___baseUri0, Il2CppHString ___relativeUri1, IUriRuntimeClass_t921050115** comReturnValue) = 0;
};
// Windows.Foundation.IUriRuntimeClassWithAbsoluteCanonicalUri
struct NOVTABLE IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassWithAbsoluteCanonicalUri_get_AbsoluteCanonicalUri_m576710761(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassWithAbsoluteCanonicalUri_get_DisplayIri_m2106498432(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IWwwFormUrlDecoderEntry
struct NOVTABLE IWwwFormUrlDecoderEntry_t2943299970 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderEntry_U24__Stripped0_get_Name_m1841419405() = 0;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderEntry_U24__Stripped1_get_Value_m2688400907() = 0;
};
// Windows.Foundation.IWwwFormUrlDecoderRuntimeClass
struct NOVTABLE IWwwFormUrlDecoderRuntimeClass_t497020701 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderRuntimeClass_U24__Stripped0_GetFirstValueByName_m2439676971() = 0;
};
// Windows.Foundation.IWwwFormUrlDecoderRuntimeClassFactory
struct NOVTABLE IWwwFormUrlDecoderRuntimeClassFactory_t1825479388 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderRuntimeClassFactory_U24__Stripped0_CreateWwwFormUrlDecoder_m959935225() = 0;
};
// Windows.Foundation.Metadata.IApiInformationStatics
struct NOVTABLE IApiInformationStatics_t1368946868 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApiInformationStatics_U24__Stripped0_IsTypePresent_m2300622423() = 0;
	virtual il2cpp_hresult_t STDCALL IApiInformationStatics_U24__Stripped1_IsMethodPresent_m93280429() = 0;
	virtual il2cpp_hresult_t STDCALL IApiInformationStatics_U24__Stripped2_IsMethodPresent_m1995582324() = 0;
	virtual il2cpp_hresult_t STDCALL IApiInformationStatics_U24__Stripped3_IsEventPresent_m3065413644() = 0;
	virtual il2cpp_hresult_t STDCALL IApiInformationStatics_U24__Stripped4_IsPropertyPresent_m1181033700() = 0;
	virtual il2cpp_hresult_t STDCALL IApiInformationStatics_U24__Stripped5_IsReadOnlyPropertyPresent_m2334894360() = 0;
	virtual il2cpp_hresult_t STDCALL IApiInformationStatics_U24__Stripped6_IsWriteablePropertyPresent_m2319983192() = 0;
	virtual il2cpp_hresult_t STDCALL IApiInformationStatics_U24__Stripped7_IsEnumNamedValuePresent_m2322865717() = 0;
	virtual il2cpp_hresult_t STDCALL IApiInformationStatics_IsApiContractPresent_m681551510(Il2CppHString ___contractName0, uint16_t ___majorVersion1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IApiInformationStatics_U24__Stripped8_IsApiContractPresent_m284209059() = 0;
};
// Windows.Media.Capture.IMediaCapture
struct NOVTABLE IMediaCapture_t2687710539 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped0_InitializeAsync_m2734775711() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_InitializeAsync_m1047720208(IMediaCaptureInitializationSettings_t2768046102* ___mediaCaptureInitializationSettings0, IAsyncAction_t3072713919** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped1_StartRecordToStorageFileAsync_m2277905929() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped2_StartRecordToStreamAsync_m524428702() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped3_StartRecordToCustomSinkAsync_m1427129835() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped4_StartRecordToCustomSinkAsync_m2149902457() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped5_StopRecordAsync_m2489757986() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped6_CapturePhotoToStorageFileAsync_m2279333691() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped7_CapturePhotoToStreamAsync_m4251918927() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped8_AddEffectAsync_m4061719554() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped9_ClearEffectsAsync_m3638122974() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped10_SetEncoderProperty_m3057842188() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped11_GetEncoderProperty_m231921443() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped12_add_Failed_m1748421629() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped13_remove_Failed_m1371972149() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped14_add_RecordLimitationExceeded_m1035511630() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped15_remove_RecordLimitationExceeded_m3248529578() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped16_get_MediaCaptureSettings_m480135158() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_get_AudioDeviceController_m1759341815(IAudioDeviceController_t3742505345** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped17_get_VideoDeviceController_m2351464102() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped18_SetPreviewMirroring_m1115924190() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped19_GetPreviewMirroring_m749697283() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped20_SetPreviewRotation_m2857016971() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped21_GetPreviewRotation_m1335727518() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped22_SetRecordRotation_m3875181064() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped23_GetRecordRotation_m151250311() = 0;
};
// Windows.Media.Capture.IMediaCapture2
struct NOVTABLE IMediaCapture2_t2891527499 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped0_PrepareLowLagRecordToStorageFileAsync_m3891579985() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped1_PrepareLowLagRecordToStreamAsync_m3195632863() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped2_PrepareLowLagRecordToCustomSinkAsync_m918601606() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped3_PrepareLowLagRecordToCustomSinkAsync_m1486446897() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped4_PrepareLowLagPhotoCaptureAsync_m3981611872() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped5_PrepareLowLagPhotoSequenceCaptureAsync_m3850302580() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped6_SetEncodingPropertiesAsync_m1607585546() = 0;
};
// Windows.Media.Capture.IMediaCapture3
struct NOVTABLE IMediaCapture3_t552875339 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCapture3_U24__Stripped0_PrepareVariablePhotoSequenceCaptureAsync_m2112777480() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture3_U24__Stripped1_add_FocusChanged_m1088698208() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture3_U24__Stripped2_remove_FocusChanged_m2897970096() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture3_U24__Stripped3_add_PhotoConfirmationCaptured_m3862535956() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture3_U24__Stripped4_remove_PhotoConfirmationCaptured_m3160395183() = 0;
};
// Windows.Media.Capture.IMediaCapture4
struct NOVTABLE IMediaCapture4_t2509190475 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped0_AddAudioEffectAsync_m44736820() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped1_AddVideoEffectAsync_m3558464885() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped2_PauseRecordAsync_m2583337994() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped3_ResumeRecordAsync_m1534748683() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped4_add_CameraStreamStateChanged_m2069625330() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped5_remove_CameraStreamStateChanged_m3659784376() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped6_get_CameraStreamState_m1106269311() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped7_GetPreviewFrameAsync_m421750520() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped8_GetPreviewFrameAsync_m3826409942() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped9_add_ThermalStatusChanged_m2218568675() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped10_remove_ThermalStatusChanged_m4176170723() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped11_get_ThermalStatus_m18891453() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped12_PrepareAdvancedPhotoCaptureAsync_m1472122776() = 0;
};
// Windows.Media.Capture.IMediaCapture5
struct NOVTABLE IMediaCapture5_t170538315 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_U24__Stripped0_RemoveEffectAsync_m1401849217() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_U24__Stripped1_PauseRecordWithResultAsync_m3906990276() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_U24__Stripped2_StopRecordWithResultAsync_m553374532() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_U24__Stripped3_get_FrameSources_m3416294620() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_U24__Stripped4_CreateFrameReaderAsync_m1184451091() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_U24__Stripped5_CreateFrameReaderAsync_m3344563728() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_U24__Stripped6_CreateFrameReaderAsync_m3901113522() = 0;
};
// Windows.Media.Capture.IMediaCapture6
struct NOVTABLE IMediaCapture6_t2126853451 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCapture6_U24__Stripped0_add_CaptureDeviceExclusiveControlStatusChanged_m2901917473() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture6_U24__Stripped1_remove_CaptureDeviceExclusiveControlStatusChanged_m1499551442() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture6_U24__Stripped2_CreateMultiSourceFrameReaderAsync_m2850131425() = 0;
};
// Windows.Media.Capture.IMediaCaptureInitializationSettings3
struct NOVTABLE IMediaCaptureInitializationSettings3_t2764834838 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings3_U24__Stripped0_put_AudioSource_m3678721786() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings3_U24__Stripped1_get_AudioSource_m2123551225() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings3_U24__Stripped2_put_VideoSource_m1784061944() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings3_U24__Stripped3_get_VideoSource_m2090869932() = 0;
};
// Windows.Media.Capture.IMediaCaptureInitializationSettings4
struct NOVTABLE IMediaCaptureInitializationSettings4_t2764638230 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped0_get_VideoProfile_m1574429902() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped1_put_VideoProfile_m240344775() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped2_get_PreviewMediaDescription_m781334747() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped3_put_PreviewMediaDescription_m2971038979() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped4_get_RecordMediaDescription_m2034719152() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped5_put_RecordMediaDescription_m4149356239() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped6_get_PhotoMediaDescription_m2857032305() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped7_put_PhotoMediaDescription_m3494437117() = 0;
};
// Windows.Media.Capture.IMediaCaptureInitializationSettings5
struct NOVTABLE IMediaCaptureInitializationSettings5_t2764703766 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings5_U24__Stripped0_get_SourceGroup_m4281738438() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings5_U24__Stripped1_put_SourceGroup_m2003083379() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings5_U24__Stripped2_get_SharingMode_m1293523045() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings5_U24__Stripped3_put_SharingMode_m4028984993() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings5_U24__Stripped4_get_MemoryPreference_m2929589363() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings5_U24__Stripped5_put_MemoryPreference_m1350892701() = 0;
};
// Windows.Media.Capture.IMediaCaptureInitializationSettings6
struct NOVTABLE IMediaCaptureInitializationSettings6_t2764507158 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings6_U24__Stripped0_get_AlwaysPlaySystemShutterSound_m3454942465() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings6_U24__Stripped1_put_AlwaysPlaySystemShutterSound_m3153148674() = 0;
};
// Windows.Media.Capture.IMediaCaptureStatics
struct NOVTABLE IMediaCaptureStatics_t830978977 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureStatics_U24__Stripped0_IsVideoProfileSupported_m1052560789() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureStatics_U24__Stripped1_FindAllVideoProfiles_m358632705() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureStatics_U24__Stripped2_FindConcurrentProfiles_m2358028342() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureStatics_U24__Stripped3_FindKnownVideoProfiles_m330975184() = 0;
};
// Windows.Media.Capture.IMediaCaptureVideoPreview
struct NOVTABLE IMediaCaptureVideoPreview_t535963051 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureVideoPreview_U24__Stripped0_StartPreviewAsync_m58851148() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureVideoPreview_U24__Stripped1_StartPreviewToCustomSinkAsync_m762417689() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureVideoPreview_U24__Stripped2_StartPreviewToCustomSinkAsync_m2890038847() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureVideoPreview_U24__Stripped3_StopPreviewAsync_m4262155444() = 0;
};
// Windows.Media.Core.ITimedMetadataTrackProvider
struct NOVTABLE ITimedMetadataTrackProvider_t1703961418 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ITimedMetadataTrackProvider_U24__Stripped0_get_TimedMetadataTracks_m167098999() = 0;
};
// Windows.Media.Devices.IAudioDeviceController
struct NOVTABLE IAudioDeviceController_t3742505345 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAudioDeviceController_U24__Stripped0_put_Muted_m2939917434() = 0;
	virtual il2cpp_hresult_t STDCALL IAudioDeviceController_get_Muted_m3616316259(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAudioDeviceController_U24__Stripped1_put_VolumePercent_m4060427833() = 0;
	virtual il2cpp_hresult_t STDCALL IAudioDeviceController_U24__Stripped2_get_VolumePercent_m777035121() = 0;
};
// Windows.Media.Devices.IMediaDeviceController
struct NOVTABLE IMediaDeviceController_t1179508027 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaDeviceController_U24__Stripped0_GetAvailableMediaStreamProperties_m179567308() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaDeviceController_U24__Stripped1_GetMediaStreamProperties_m3028771074() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaDeviceController_U24__Stripped2_SetMediaStreamPropertiesAsync_m2626761744() = 0;
};
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
struct NOVTABLE IInstalledVoicesStatic_t870565809 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInstalledVoicesStatic_get_AllVoices_m3921392764(IVectorView_1_t3605269894** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IInstalledVoicesStatic_U24__Stripped0_get_DefaultVoice_m3710717716() = 0;
};
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
struct NOVTABLE IInstalledVoicesStatic2_t946760305 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInstalledVoicesStatic2_U24__Stripped0_TrySetDefaultVoiceAsync_m4121083203() = 0;
};
// Windows.Media.SpeechSynthesis.ISpeechSynthesisStream
struct NOVTABLE ISpeechSynthesisStream_t764091608 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesisStream_U24__Stripped0_get_Markers_m1331395156() = 0;
};
// Windows.Media.SpeechSynthesis.ISpeechSynthesizer
struct NOVTABLE ISpeechSynthesizer_t2734223870 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer_SynthesizeTextToStreamAsync_m3255420258(Il2CppHString ___text0, IAsyncOperation_1_t943527478** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer_SynthesizeSsmlToStreamAsync_m781880964(Il2CppHString ___Ssml0, IAsyncOperation_1_t943527478** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer_put_Voice_m2158910037(IVoiceInformation_t3111056019* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer_U24__Stripped0_get_Voice_m2158722298() = 0;
};
// Windows.Media.SpeechSynthesis.ISpeechSynthesizer2
struct NOVTABLE ISpeechSynthesizer2_t1865799545 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer2_U24__Stripped0_get_Options_m1005365255() = 0;
};
// Windows.Media.SpeechSynthesis.IVoiceInformation
struct NOVTABLE IVoiceInformation_t3111056019 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_get_DisplayName_m1640391607(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped0_get_Id_m1776229927() = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped1_get_Language_m1418474925() = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped2_get_Description_m153214867() = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped3_get_Gender_m2588825291() = 0;
};
// Windows.Networking.Connectivity.INetworkInformationStatics
struct NOVTABLE INetworkInformationStatics_t1568055678 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped0_GetConnectionProfiles_m2758217575() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped1_GetInternetConnectionProfile_m2864415643() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped2_GetLanIdentifiers_m3418372237() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_GetHostNames_m3950255330(IVectorView_1_t2228900081** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped3_GetProxyConfigurationAsync_m4095711725() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped4_GetSortedEndpointPairs_m4007171019() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped5_add_NetworkStatusChanged_m1100623864() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped6_remove_NetworkStatusChanged_m1031248726() = 0;
};
// Windows.Networking.Connectivity.INetworkInformationStatics2
struct NOVTABLE INetworkInformationStatics2_t442609477 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics2_U24__Stripped0_FindConnectionProfilesAsync_m80412135() = 0;
};
// Windows.Networking.IHostNameFactory
struct NOVTABLE IHostNameFactory_t2985905689 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostNameFactory_CreateHostName_m4168667700(Il2CppHString ___hostName0, IHostName_t3179521082** comReturnValue) = 0;
};
// Windows.Networking.IHostNameStatics
struct NOVTABLE IHostNameStatics_t664333692 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostNameStatics_U24__Stripped0_Compare_m3120053299() = 0;
};
// Windows.Networking.Sockets.IStreamSocket
struct NOVTABLE IStreamSocket_t3338378904 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped0_get_Control_m3042699933() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped1_get_Information_m1242857083() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped2_get_InputStream_m1126950040() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_get_OutputStream_m2118890306(IOutputStream_t2042351338** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped3_ConnectAsync_m3193160057() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_ConnectAsync_m1123568840(IHostName_t3179521082* ___remoteHostName0, Il2CppHString ___remoteServiceName1, IAsyncAction_t3072713919** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped4_ConnectAsync_m3193193880() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped5_ConnectAsync_m3193100983() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped6_UpgradeToSslAsync_m1682793150() = 0;
};
// Windows.Networking.Sockets.IStreamSocket2
struct NOVTABLE IStreamSocket2_t2507586357 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocket2_U24__Stripped0_ConnectAsync_m4213835381() = 0;
};
// Windows.Networking.Sockets.IStreamSocket3
struct NOVTABLE IStreamSocket3_t2507586356 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped0_CancelIOAsync_m1257382553() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped1_EnableTransferOwnership_m2056414540() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped2_EnableTransferOwnership_m1232450313() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped3_TransferOwnership_m1615596381() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped4_TransferOwnership_m541657236() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped5_TransferOwnership_m4286864110() = 0;
};
// Windows.Networking.Sockets.IStreamSocketStatics
struct NOVTABLE IStreamSocketStatics_t566903188 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketStatics_U24__Stripped0_GetEndpointPairsAsync_m3680219047() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketStatics_U24__Stripped1_GetEndpointPairsAsync_m2379886354() = 0;
};
// Windows.Perception.IPerceptionTimestamp
struct NOVTABLE IPerceptionTimestamp_t393505964 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestamp_U24__Stripped0_get_TargetTime_m2051237710() = 0;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestamp_U24__Stripped1_get_PredictionAmount_m1234733657() = 0;
};
// Windows.Storage.IApplicationData
struct NOVTABLE IApplicationData_t28886227 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped0_get_Version_m3464523458() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped1_SetVersionAsync_m2657783601() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped2_ClearAsync_m3547980218() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped3_ClearAsync_m3548227419() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped4_get_LocalSettings_m3007367750() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped5_get_RoamingSettings_m907061657() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped6_get_LocalFolder_m864445652() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_get_RoamingFolder_m1109609965(IStorageFolder_t2414910357** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped7_get_TemporaryFolder_m3729894556() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped8_add_DataChanged_m2266976657() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped9_remove_DataChanged_m2367811666() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped10_SignalDataChanged_m3679481841() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped11_get_RoamingStorageQuota_m423759995() = 0;
};
// Windows.Storage.IApplicationData2
struct NOVTABLE IApplicationData2_t163893929 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationData2_U24__Stripped0_get_LocalCacheFolder_m693950201() = 0;
};
// Windows.Storage.IApplicationData3
struct NOVTABLE IApplicationData3_t163893930 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationData3_U24__Stripped0_GetPublisherCacheFolder_m4135038805() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData3_U24__Stripped1_ClearPublisherCacheFolderAsync_m842510329() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData3_U24__Stripped2_get_SharedLocalFolder_m775779766() = 0;
};
// Windows.Storage.IApplicationDataStatics
struct NOVTABLE IApplicationDataStatics_t3792839446 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationDataStatics_get_Current_m1299656078(IApplicationData_t28886227** comReturnValue) = 0;
};
// Windows.Storage.IApplicationDataStatics2
struct NOVTABLE IApplicationDataStatics2_t2938905366 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationDataStatics2_U24__Stripped0_GetForUserAsync_m2306898698() = 0;
};
// Windows.Storage.IStorageFile2
struct NOVTABLE IStorageFile2_t81501002 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFile2_U24__Stripped0_OpenAsync_m165645617() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile2_U24__Stripped1_OpenTransactedWriteAsync_m1104539825() = 0;
};
// Windows.Storage.IStorageFilePropertiesWithAvailability
struct NOVTABLE IStorageFilePropertiesWithAvailability_t1554344922 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFilePropertiesWithAvailability_U24__Stripped0_get_IsAvailable_m2026400567() = 0;
};
// Windows.Storage.IStorageFileStatics
struct NOVTABLE IStorageFileStatics_t4131808966 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped0_GetFileFromPathAsync_m2841215677() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped1_GetFileFromApplicationUriAsync_m807305831() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped2_CreateStreamedFileAsync_m3773394311() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped3_ReplaceWithStreamedFileAsync_m2701266470() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped4_CreateStreamedFileFromUriAsync_m2958466004() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped5_ReplaceWithStreamedFileFromUriAsync_m1390089385() = 0;
};
// Windows.Storage.IStorageFolder2
struct NOVTABLE IStorageFolder2_t3506658410 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolder2_U24__Stripped0_TryGetItemAsync_m3190903159() = 0;
};
// Windows.Storage.IStorageFolder3
struct NOVTABLE IStorageFolder3_t1940574469 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolder3_U24__Stripped0_TryGetChangeTracker_m3453030661() = 0;
};
// Windows.Storage.IStorageFolderStatics
struct NOVTABLE IStorageFolderStatics_t333412554 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolderStatics_GetFolderFromPathAsync_m3674878916(Il2CppHString ___path0, IAsyncOperation_1_t3901635704** comReturnValue) = 0;
};
// Windows.Storage.IStorageItem
struct NOVTABLE IStorageItem_t3194585767 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped0_RenameAsync_m1111865988() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped1_RenameAsync_m1111899871() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped2_DeleteAsync_m558316365() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped3_DeleteAsync_m558350056() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped4_GetBasicPropertiesAsync_m2561736561() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped5_get_Name_m3157959696() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_get_Path_m1853866705(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped6_get_Attributes_m2913386339() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped7_get_DateCreated_m1722396674() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped8_IsOfType_m2015695515() = 0;
};
// Windows.Storage.IStorageItem2
struct NOVTABLE IStorageItem2_t2827190580 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItem2_U24__Stripped0_GetParentAsync_m4237091681() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem2_U24__Stripped1_IsEqual_m1153349944() = 0;
};
// Windows.Storage.IStorageItemProperties
struct NOVTABLE IStorageItemProperties_t2031733036 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped0_GetThumbnailAsync_m260624717() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped1_GetThumbnailAsync_m3236220828() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped2_GetThumbnailAsync_m3688217351() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped3_get_DisplayName_m3813510564() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped4_get_DisplayType_m553261029() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped5_get_FolderRelativeId_m2825143686() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped6_get_Properties_m1148881838() = 0;
};
// Windows.Storage.IStorageItemProperties2
struct NOVTABLE IStorageItemProperties2_t3993257882 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties2_U24__Stripped0_GetScaledImageAsThumbnailAsync_m1311815822() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties2_U24__Stripped1_GetScaledImageAsThumbnailAsync_m3789805793() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties2_U24__Stripped2_GetScaledImageAsThumbnailAsync_m1883939878() = 0;
};
// Windows.Storage.IStorageItemPropertiesWithProvider
struct NOVTABLE IStorageItemPropertiesWithProvider_t3527078644 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItemPropertiesWithProvider_U24__Stripped0_get_Provider_m1098238941() = 0;
};
// Windows.Storage.Search.IStorageFolderQueryOperations
struct NOVTABLE IStorageFolderQueryOperations_t91328000 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped0_GetIndexedStateAsync_m1002212636() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped1_CreateFileQuery_m2610834360() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped2_CreateFileQuery_m2607550361() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped3_CreateFileQueryWithOptions_m3264920027() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped4_CreateFolderQuery_m562621060() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped5_CreateFolderQuery_m293497691() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped6_CreateFolderQueryWithOptions_m3171464593() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped7_CreateItemQuery_m3471952481() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped8_CreateItemQueryWithOptions_m3157268352() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped9_GetFilesAsync_m2850188463() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped10_GetFilesAsync_m2309390520() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped11_GetFoldersAsync_m3312258101() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped12_GetFoldersAsync_m2029391029() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped13_GetItemsAsync_m463088250() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped14_AreQueryOptionsSupported_m2004623827() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped15_IsCommonFolderQuerySupported_m3750205277() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped16_IsCommonFileQuerySupported_m2447375717() = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t541192229 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m406059298(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_m2796848087(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m1827843137(uint32_t ___value0) = 0;
};
// Windows.Storage.Streams.IContentTypeProvider
struct NOVTABLE IContentTypeProvider_t1806097440 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IContentTypeProvider_U24__Stripped0_get_ContentType_m1286225722() = 0;
};
// Windows.Storage.Streams.IDataReader
struct NOVTABLE IDataReader_t3392321383 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped0_get_UnconsumedBufferLength_m16229785() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped1_get_UnicodeEncoding_m2494153260() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped2_put_UnicodeEncoding_m418317483() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped3_get_ByteOrder_m2032789439() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped4_put_ByteOrder_m671273445() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped5_get_InputStreamOptions_m1340555748() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped6_put_InputStreamOptions_m4180354519() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped7_ReadByte_m4257467755() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_ReadBytes_m3117293785(uint32_t ___value0ArraySize, uint8_t* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped8_ReadBuffer_m1072057890() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped9_ReadBoolean_m3250790026() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped10_ReadGuid_m2368726480() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped11_ReadInt16_m2758551764() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped12_ReadInt32_m428447941() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped13_ReadInt64_m3927627976() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped14_ReadUInt16_m4143445603() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped15_ReadUInt32_m2216220400() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped16_ReadUInt64_m2603405896() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped17_ReadSingle_m1085012947() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped18_ReadDouble_m1657665002() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped19_ReadString_m2482350783() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped20_ReadDateTime_m3187417042() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped21_ReadTimeSpan_m1354735239() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_LoadAsync_m90647872(uint32_t ___count0, IAsyncOperation_1_t1181249698** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped22_DetachBuffer_m2943901674() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped23_DetachStream_m3061556472() = 0;
};
// Windows.Storage.Streams.IDataReaderFactory
struct NOVTABLE IDataReaderFactory_t2217455388 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataReaderFactory_CreateDataReader_m3942767827(IInputStream_t2821136229* ___inputStream0, IDataReader_t3392321383** comReturnValue) = 0;
};
// Windows.Storage.Streams.IDataReaderStatics
struct NOVTABLE IDataReaderStatics_t1343138968 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataReaderStatics_U24__Stripped0_FromBuffer_m362330522() = 0;
};
// Windows.Storage.Streams.IDataWriter
struct NOVTABLE IDataWriter_t1260434628 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped0_get_UnstoredBufferLength_m4047016447() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped1_get_UnicodeEncoding_m1051599545() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped2_put_UnicodeEncoding_m860257975() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped3_get_ByteOrder_m3417022626() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped4_put_ByteOrder_m2232773923() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped5_WriteByte_m1325520711() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_WriteBytes_m1463346676(uint32_t ___value0ArraySize, uint8_t* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped6_WriteBuffer_m3625982827() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped7_WriteBuffer_m1947313872() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped8_WriteBoolean_m4206148776() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped9_WriteGuid_m2424249642() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped10_WriteInt16_m1218706367() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_WriteInt32_m3302687114(int32_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped11_WriteInt64_m76875145() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped12_WriteUInt16_m3417848222() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped13_WriteUInt32_m3149825281() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped14_WriteUInt64_m3824854378() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped15_WriteSingle_m4290768671() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped16_WriteDouble_m2734993046() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped17_WriteDateTime_m2945296003() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped18_WriteTimeSpan_m4140056822() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped19_WriteString_m605557536() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped20_MeasureString_m2837992914() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_StoreAsync_m1501074270(IAsyncOperation_1_t1181249698** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped21_FlushAsync_m3961762150() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped22_DetachBuffer_m1116051824() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped23_DetachStream_m502815618() = 0;
};
// Windows.Storage.Streams.IDataWriterFactory
struct NOVTABLE IDataWriterFactory_t624500286 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataWriterFactory_CreateDataWriter_m3380054010(IOutputStream_t2042351338* ___outputStream0, IDataWriter_t1260434628** comReturnValue) = 0;
};
// Windows.Storage.Streams.IInputStreamReference
struct NOVTABLE IInputStreamReference_t980626503 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStreamReference_U24__Stripped0_OpenSequentialReadAsync_m2665372827() = 0;
};
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t2042351338 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m124082296(IBuffer_t541192229* ___buffer0, IAsyncOperationWithProgress_2_t593214123** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m252007188(IAsyncOperation_1_t3013442981** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStream
struct NOVTABLE IRandomAccessStream_t2099996051 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_m3315994282(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped0_put_Size_m1188903761() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m2841117993(uint64_t ___position0, IInputStream_t2821136229** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped1_GetOutputStreamAt_m2771976110() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_m3162954653(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m3482800682(uint64_t ___position0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped2_CloneStream_m392898984() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_m2334341332(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m1780602347(bool* comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStreamReference
struct NOVTABLE IRandomAccessStreamReference_t2718546672 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStreamReference_OpenReadAsync_m2508312280(IAsyncOperation_1_t1918115372** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStreamWithContentType
struct NOVTABLE IRandomAccessStreamWithContentType_t3296927652 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// Windows.UI.Input.Spatial.ISpatialInteractionController
struct NOVTABLE ISpatialInteractionController_t138196805 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_U24__Stripped0_get_HasTouchpad_m2630947096() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_U24__Stripped1_get_HasThumbstick_m627908187() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_get_SimpleHapticsController_m1735849567(ISimpleHapticsController_t3936202477** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_U24__Stripped2_get_VendorId_m3678312071() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_U24__Stripped3_get_ProductId_m1677934416() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_U24__Stripped4_get_Version_m2531622161() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionController2
struct NOVTABLE ISpatialInteractionController2_t3418596785 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController2_TryGetRenderableModelAsync_m2032660185(IAsyncOperation_1_t1918115372** comReturnValue) = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionController3
struct NOVTABLE ISpatialInteractionController3_t689713430 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController3_U24__Stripped0_TryGetBatteryReport_m2923472422() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionManager
struct NOVTABLE ISpatialInteractionManager_t354061063 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped0_add_SourceDetected_m1164816237() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped1_remove_SourceDetected_m2245090769() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped2_add_SourceLost_m3002472675() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped3_remove_SourceLost_m3408947156() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped4_add_SourceUpdated_m2106248377() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped5_remove_SourceUpdated_m2599047237() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped6_add_SourcePressed_m1288155835() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped7_remove_SourcePressed_m598107626() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped8_add_SourceReleased_m3272587475() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped9_remove_SourceReleased_m2897080590() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped10_add_InteractionDetected_m3770431277() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped11_remove_InteractionDetected_m1175695482() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_GetDetectedSourcesAtTimestamp_m3746477042(IPerceptionTimestamp_t393505964* ___timeStamp0, IVectorView_1_t554553325** comReturnValue) = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
struct NOVTABLE ISpatialInteractionManagerStatics_t2291651573 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManagerStatics_GetForCurrentView_m3067930004(ISpatialInteractionManager_t354061063** comReturnValue) = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSource
struct NOVTABLE ISpatialInteractionSource_t2185314266 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource_get_Id_m2383602496(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource_U24__Stripped0_get_Kind_m3686833464() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSource2
struct NOVTABLE ISpatialInteractionSource2_t2453383580 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource2_U24__Stripped0_get_IsPointingSupported_m1454104212() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource2_U24__Stripped1_get_IsMenuSupported_m3484143573() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource2_U24__Stripped2_get_IsGraspSupported_m1550180598() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource2_get_Controller_m1434681608(ISpatialInteractionController_t138196805** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource2_U24__Stripped3_TryGetStateAtTimestamp_m569091676() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSource3
struct NOVTABLE ISpatialInteractionSource3_t887299639 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource3_U24__Stripped0_get_Handedness_m3941985797() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState
struct NOVTABLE ISpatialInteractionSourceState_t1358829803 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_get_Source_m2883277112(ISpatialInteractionSource_t2185314266** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped0_get_Properties_m1189053370() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped1_get_IsPressed_m546887925() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped2_get_Timestamp_m1483989895() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped3_TryGetPointerPose_m837462904() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState2
struct NOVTABLE ISpatialInteractionSourceState2_t2977437931 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped0_get_IsSelectPressed_m1462024929() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped1_get_IsMenuPressed_m2884506468() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped2_get_IsGrasped_m2033866613() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped3_get_SelectPressedValue_m3876541456() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped4_get_ControllerProperties_m1166340460() = 0;
};
// Windows.UI.Xaml.Data.IPropertyChangedEventArgs
struct NOVTABLE IPropertyChangedEventArgs_t1404159462 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyChangedEventArgs_get_PropertyName_m2977473784(Il2CppHString* comReturnValue) = 0;
};
// Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory
struct NOVTABLE IPropertyChangedEventArgsFactory_t4178285917 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyChangedEventArgsFactory_CreateInstance_m601787316(Il2CppHString ___name0, Il2CppIInspectable* ___outer1, Il2CppIInspectable** ___inner2, PropertyChangedEventArgs_t3313059048 ** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_t2147255965 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m3188154520(IBindableIterator_t667386168** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterator
struct NOVTABLE IBindableIterator_t667386168 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterator_get_Current_m3059254492(Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableIterator_get_HasCurrent_m3082354642(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableIterator_MoveNext_m550148855(bool* comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_t1801110279 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m2354796153(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m151438974(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m1491544680(IBindableVectorView_t4191940899** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m627110519(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m1920883433(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m450046008(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m3479961725(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_m2201043447(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_m2914381745() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m717217363() = 0;
};
// Windows.UI.Xaml.Interop.IBindableVectorView
struct NOVTABLE IBindableVectorView_t4191940899 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_GetAt_m2042489765(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_get_Size_m2561144479(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_IndexOf_m2936101316(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
};
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
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
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
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
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
#ifndef PROPERTYCHANGEDEVENTARGS_T3313059048_H
#define PROPERTYCHANGEDEVENTARGS_T3313059048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangedEventArgs
struct  PropertyChangedEventArgs_t3313059048  : public EventArgs_t3591816995
{
public:
	// System.String System.ComponentModel.PropertyChangedEventArgs::propertyName
	String_t* ___propertyName_1;

public:
	inline static int32_t get_offset_of_propertyName_1() { return static_cast<int32_t>(offsetof(PropertyChangedEventArgs_t3313059048, ___propertyName_1)); }
	inline String_t* get_propertyName_1() const { return ___propertyName_1; }
	inline String_t** get_address_of_propertyName_1() { return &___propertyName_1; }
	inline void set_propertyName_1(String_t* value)
	{
		___propertyName_1 = value;
		Il2CppCodeGenWriteBarrier((&___propertyName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGEDEVENTARGS_T3313059048_H
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
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t594665363_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t594665363_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
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
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
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
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
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
#ifndef EVENTREGISTRATIONTOKEN_T318890788_H
#define EVENTREGISTRATIONTOKEN_T318890788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct  EventRegistrationToken_t318890788 
{
public:
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t318890788, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTREGISTRATIONTOKEN_T318890788_H
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
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
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
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
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
#ifndef __IL2CPPCOMDELEGATE_T1102178620_H
#define __IL2CPPCOMDELEGATE_T1102178620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t1102178620  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T1102178620_H
#ifndef SIMPLEHAPTICSCONTROLLERFEEDBACK_T913461083_H
#define SIMPLEHAPTICSCONTROLLERFEEDBACK_T913461083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.Haptics.SimpleHapticsControllerFeedback
struct  SimpleHapticsControllerFeedback_t913461083  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Devices.Haptics.ISimpleHapticsControllerFeedback
	ISimpleHapticsControllerFeedback_t2199416581* ____isimpleHapticsControllerFeedback_t2199416581;

public:
	inline ISimpleHapticsControllerFeedback_t2199416581* get_____isimpleHapticsControllerFeedback_t2199416581()
	{
		ISimpleHapticsControllerFeedback_t2199416581* returnValue = ____isimpleHapticsControllerFeedback_t2199416581;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISimpleHapticsControllerFeedback_t2199416581::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISimpleHapticsControllerFeedback_t2199416581>((&____isimpleHapticsControllerFeedback_t2199416581), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____isimpleHapticsControllerFeedback_t2199416581;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEHAPTICSCONTROLLERFEEDBACK_T913461083_H
#ifndef DATETIME_T1679451545_H
#define DATETIME_T1679451545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.DateTime
struct  DateTime_t1679451545 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t1679451545, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T1679451545_H
#ifndef EVENTREGISTRATIONTOKEN_T3152277946_H
#define EVENTREGISTRATIONTOKEN_T3152277946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.EventRegistrationToken
struct  EventRegistrationToken_t3152277946 
{
public:
	// System.Int64 Windows.Foundation.EventRegistrationToken::Value
	int64_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t3152277946, ___Value_0)); }
	inline int64_t get_Value_0() const { return ___Value_0; }
	inline int64_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int64_t value)
	{
		___Value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTREGISTRATIONTOKEN_T3152277946_H
#ifndef FOUNDATIONCONTRACT_T3651383009_H
#define FOUNDATIONCONTRACT_T3651383009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.FoundationContract
struct  FoundationContract_t3651383009 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOUNDATIONCONTRACT_T3651383009_H
#ifndef HRESULT_T3073183193_H
#define HRESULT_T3073183193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.HResult
struct  HResult_t3073183193 
{
public:
	// System.Int32 Windows.Foundation.HResult::Value
	int32_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(HResult_t3073183193, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HRESULT_T3073183193_H
#ifndef ACTIVATABLEATTRIBUTE_T4098936231_H
#define ACTIVATABLEATTRIBUTE_T4098936231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ActivatableAttribute
struct  ActivatableAttribute_t4098936231  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATABLEATTRIBUTE_T4098936231_H
#ifndef ALLOWMULTIPLEATTRIBUTE_T3314144467_H
#define ALLOWMULTIPLEATTRIBUTE_T3314144467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.AllowMultipleAttribute
struct  AllowMultipleAttribute_t3314144467  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOWMULTIPLEATTRIBUTE_T3314144467_H
#ifndef APICONTRACTATTRIBUTE_T3160257459_H
#define APICONTRACTATTRIBUTE_T3160257459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ApiContractAttribute
struct  ApiContractAttribute_t3160257459  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APICONTRACTATTRIBUTE_T3160257459_H
#ifndef APIINFORMATION_T812843232_H
#define APIINFORMATION_T812843232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ApiInformation
struct  ApiInformation_t812843232  : public Il2CppComObject
{
public:

public:
};

struct ApiInformation_t812843232_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Foundation.Metadata.IApiInformationStatics
	IApiInformationStatics_t1368946868* ____iapiInformationStatics_t1368946868;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Foundation.Metadata.ApiInformation"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IApiInformationStatics_t1368946868* get_____iapiInformationStatics_t1368946868()
	{
		IApiInformationStatics_t1368946868* returnValue = ____iapiInformationStatics_t1368946868;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApiInformationStatics_t1368946868::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApiInformationStatics_t1368946868>((&____iapiInformationStatics_t1368946868), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapiInformationStatics_t1368946868;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APIINFORMATION_T812843232_H
#ifndef ATTRIBUTEUSAGEATTRIBUTE_T1422441135_H
#define ATTRIBUTEUSAGEATTRIBUTE_T1422441135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.AttributeUsageAttribute
struct  AttributeUsageAttribute_t1422441135  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEUSAGEATTRIBUTE_T1422441135_H
#ifndef COMPOSABLEATTRIBUTE_T2299833422_H
#define COMPOSABLEATTRIBUTE_T2299833422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ComposableAttribute
struct  ComposableAttribute_t2299833422  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPOSABLEATTRIBUTE_T2299833422_H
#ifndef CONTRACTVERSIONATTRIBUTE_T1666784187_H
#define CONTRACTVERSIONATTRIBUTE_T1666784187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ContractVersionAttribute
struct  ContractVersionAttribute_t1666784187  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTRACTVERSIONATTRIBUTE_T1666784187_H
#ifndef DEFAULTATTRIBUTE_T1509828399_H
#define DEFAULTATTRIBUTE_T1509828399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.DefaultAttribute
struct  DefaultAttribute_t1509828399  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTATTRIBUTE_T1509828399_H
#ifndef DEFAULTOVERLOADATTRIBUTE_T2513707992_H
#define DEFAULTOVERLOADATTRIBUTE_T2513707992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.DefaultOverloadAttribute
struct  DefaultOverloadAttribute_t2513707992  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTOVERLOADATTRIBUTE_T2513707992_H
#ifndef DUALAPIPARTITIONATTRIBUTE_T1301304994_H
#define DUALAPIPARTITIONATTRIBUTE_T1301304994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.DualApiPartitionAttribute
struct  DualApiPartitionAttribute_t1301304994  : public Attribute_t861562559
{
public:
	// System.UInt32 Windows.Foundation.Metadata.DualApiPartitionAttribute::version
	uint32_t ___version_0;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(DualApiPartitionAttribute_t1301304994, ___version_0)); }
	inline uint32_t get_version_0() const { return ___version_0; }
	inline uint32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(uint32_t value)
	{
		___version_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DUALAPIPARTITIONATTRIBUTE_T1301304994_H
#ifndef EXCLUSIVETOATTRIBUTE_T3124418018_H
#define EXCLUSIVETOATTRIBUTE_T3124418018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ExclusiveToAttribute
struct  ExclusiveToAttribute_t3124418018  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCLUSIVETOATTRIBUTE_T3124418018_H
#ifndef GUIDATTRIBUTE_T2682955351_H
#define GUIDATTRIBUTE_T2682955351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.GuidAttribute
struct  GuidAttribute_t2682955351  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDATTRIBUTE_T2682955351_H
#ifndef LENGTHISATTRIBUTE_T613149204_H
#define LENGTHISATTRIBUTE_T613149204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.LengthIsAttribute
struct  LengthIsAttribute_t613149204  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LENGTHISATTRIBUTE_T613149204_H
#ifndef MARSHALINGBEHAVIORATTRIBUTE_T570737848_H
#define MARSHALINGBEHAVIORATTRIBUTE_T570737848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.MarshalingBehaviorAttribute
struct  MarshalingBehaviorAttribute_t570737848  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALINGBEHAVIORATTRIBUTE_T570737848_H
#ifndef MUSEATTRIBUTE_T3401286167_H
#define MUSEATTRIBUTE_T3401286167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.MuseAttribute
struct  MuseAttribute_t3401286167  : public Attribute_t861562559
{
public:
	// System.UInt32 Windows.Foundation.Metadata.MuseAttribute::Version
	uint32_t ___Version_0;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(MuseAttribute_t3401286167, ___Version_0)); }
	inline uint32_t get_Version_0() const { return ___Version_0; }
	inline uint32_t* get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(uint32_t value)
	{
		___Version_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MUSEATTRIBUTE_T3401286167_H
#ifndef OVERLOADATTRIBUTE_T2178303703_H
#define OVERLOADATTRIBUTE_T2178303703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.OverloadAttribute
struct  OverloadAttribute_t2178303703  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERLOADATTRIBUTE_T2178303703_H
#ifndef REMOTEASYNCATTRIBUTE_T33115854_H
#define REMOTEASYNCATTRIBUTE_T33115854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.RemoteAsyncAttribute
struct  RemoteAsyncAttribute_t33115854  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTEASYNCATTRIBUTE_T33115854_H
#ifndef STATICATTRIBUTE_T2174868556_H
#define STATICATTRIBUTE_T2174868556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.StaticAttribute
struct  StaticAttribute_t2174868556  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATICATTRIBUTE_T2174868556_H
#ifndef THREADINGATTRIBUTE_T685453408_H
#define THREADINGATTRIBUTE_T685453408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ThreadingAttribute
struct  ThreadingAttribute_t685453408  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADINGATTRIBUTE_T685453408_H
#ifndef WEBHOSTHIDDENATTRIBUTE_T2021537596_H
#define WEBHOSTHIDDENATTRIBUTE_T2021537596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.WebHostHiddenAttribute
struct  WebHostHiddenAttribute_t2021537596  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBHOSTHIDDENATTRIBUTE_T2021537596_H
#ifndef POINT_T4164953539_H
#define POINT_T4164953539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Point
struct  Point_t4164953539 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t4164953539, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t4164953539, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINT_T4164953539_H
#ifndef POINT_T4164953540_H
#define POINT_T4164953540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Point
struct  Point_t4164953540 
{
public:
	// System.Single Windows.Foundation.Point::X
	float ___X_0;
	// System.Single Windows.Foundation.Point::Y
	float ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Point_t4164953540, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Point_t4164953540, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINT_T4164953540_H
#ifndef RECT_T2695113487_H
#define RECT_T2695113487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Rect
struct  Rect_t2695113487 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2695113487_H
#ifndef RECT_T2695113488_H
#define RECT_T2695113488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Rect
struct  Rect_t2695113488 
{
public:
	// System.Single Windows.Foundation.Rect::X
	float ___X_0;
	// System.Single Windows.Foundation.Rect::Y
	float ___Y_1;
	// System.Single Windows.Foundation.Rect::Width
	float ___Width_2;
	// System.Single Windows.Foundation.Rect::Height
	float ___Height_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Rect_t2695113488, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Rect_t2695113488, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2695113488, ___Width_2)); }
	inline float get_Width_2() const { return ___Width_2; }
	inline float* get_address_of_Width_2() { return &___Width_2; }
	inline void set_Width_2(float value)
	{
		___Width_2 = value;
	}

	inline static int32_t get_offset_of_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2695113488, ___Height_3)); }
	inline float get_Height_3() const { return ___Height_3; }
	inline float* get_address_of_Height_3() { return &___Height_3; }
	inline void set_Height_3(float value)
	{
		___Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2695113488_H
#ifndef SIZE_T550917638_H
#define SIZE_T550917638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Size
struct  Size_t550917638 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_t550917638, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_t550917638, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIZE_T550917638_H
#ifndef SIZE_T550917639_H
#define SIZE_T550917639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Size
struct  Size_t550917639 
{
public:
	// System.Single Windows.Foundation.Size::Width
	float ___Width_0;
	// System.Single Windows.Foundation.Size::Height
	float ___Height_1;

public:
	inline static int32_t get_offset_of_Width_0() { return static_cast<int32_t>(offsetof(Size_t550917639, ___Width_0)); }
	inline float get_Width_0() const { return ___Width_0; }
	inline float* get_address_of_Width_0() { return &___Width_0; }
	inline void set_Width_0(float value)
	{
		___Width_0 = value;
	}

	inline static int32_t get_offset_of_Height_1() { return static_cast<int32_t>(offsetof(Size_t550917639, ___Height_1)); }
	inline float get_Height_1() const { return ___Height_1; }
	inline float* get_address_of_Height_1() { return &___Height_1; }
	inline void set_Height_1(float value)
	{
		___Height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIZE_T550917639_H
#ifndef TIMESPAN_T1755640982_H
#define TIMESPAN_T1755640982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.TimeSpan
struct  TimeSpan_t1755640982 
{
public:
	// System.Int64 Windows.Foundation.TimeSpan::Duration
	int64_t ___Duration_0;

public:
	inline static int32_t get_offset_of_Duration_0() { return static_cast<int32_t>(offsetof(TimeSpan_t1755640982, ___Duration_0)); }
	inline int64_t get_Duration_0() const { return ___Duration_0; }
	inline int64_t* get_address_of_Duration_0() { return &___Duration_0; }
	inline void set_Duration_0(int64_t value)
	{
		___Duration_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T1755640982_H
#ifndef UNIVERSALAPICONTRACT_T3367004861_H
#define UNIVERSALAPICONTRACT_T3367004861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.UniversalApiContract
struct  UniversalApiContract_t3367004861 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIVERSALAPICONTRACT_T3367004861_H
#ifndef URI_T952691556_H
#define URI_T952691556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Uri
struct  Uri_t952691556  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Foundation.IUriRuntimeClass
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115;
	// Cached pointer to Windows.Foundation.IUriRuntimeClassWithAbsoluteCanonicalUri
	IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788* ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788;
	// Cached pointer to Windows.Foundation.IStringable
	IStringable_t1634798504* ____istringable_t1634798504;

public:
	inline IUriRuntimeClass_t921050115* get_____iuriRuntimeClass_t921050115()
	{
		IUriRuntimeClass_t921050115* returnValue = ____iuriRuntimeClass_t921050115;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUriRuntimeClass_t921050115::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriRuntimeClass_t921050115>((&____iuriRuntimeClass_t921050115), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriRuntimeClass_t921050115;
			}
		}
		return returnValue;
	}

	inline IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788* get_____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788()
	{
		IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788* returnValue = ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788>((&____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788;
			}
		}
		return returnValue;
	}

	inline IStringable_t1634798504* get_____istringable_t1634798504()
	{
		IStringable_t1634798504* returnValue = ____istringable_t1634798504;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStringable_t1634798504::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStringable_t1634798504>((&____istringable_t1634798504), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istringable_t1634798504;
			}
		}
		return returnValue;
	}
};

struct Uri_t952691556_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Foundation.IUriRuntimeClassFactory
	IUriRuntimeClassFactory_t1786313621* ____iuriRuntimeClassFactory_t1786313621;
	// Cached pointer to Windows.Foundation.IUriEscapeStatics
	IUriEscapeStatics_t1418340874* ____iuriEscapeStatics_t1418340874;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Foundation.Uri"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IUriRuntimeClassFactory_t1786313621* get_____iuriRuntimeClassFactory_t1786313621()
	{
		IUriRuntimeClassFactory_t1786313621* returnValue = ____iuriRuntimeClassFactory_t1786313621;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUriRuntimeClassFactory_t1786313621::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriRuntimeClassFactory_t1786313621>((&____iuriRuntimeClassFactory_t1786313621), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriRuntimeClassFactory_t1786313621;
			}
		}
		return returnValue;
	}

	inline IUriEscapeStatics_t1418340874* get_____iuriEscapeStatics_t1418340874()
	{
		IUriEscapeStatics_t1418340874* returnValue = ____iuriEscapeStatics_t1418340874;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUriEscapeStatics_t1418340874::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriEscapeStatics_t1418340874>((&____iuriEscapeStatics_t1418340874), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriEscapeStatics_t1418340874;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T952691556_H
#ifndef WWWFORMURLDECODER_T4136411681_H
#define WWWFORMURLDECODER_T4136411681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.WwwFormUrlDecoder
struct  WwwFormUrlDecoder_t4136411681  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Foundation.IWwwFormUrlDecoderRuntimeClass
	IWwwFormUrlDecoderRuntimeClass_t497020701* ____iwwwFormUrlDecoderRuntimeClass_t497020701;
	// Cached pointer to Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
	IVectorView_1_t2282165232* ____ivectorView_1_t2282165232;
	// Cached pointer to Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
	IIterable_1_t564697430* ____iiterable_1_t564697430;

public:
	inline IWwwFormUrlDecoderRuntimeClass_t497020701* get_____iwwwFormUrlDecoderRuntimeClass_t497020701()
	{
		IWwwFormUrlDecoderRuntimeClass_t497020701* returnValue = ____iwwwFormUrlDecoderRuntimeClass_t497020701;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IWwwFormUrlDecoderRuntimeClass_t497020701::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IWwwFormUrlDecoderRuntimeClass_t497020701>((&____iwwwFormUrlDecoderRuntimeClass_t497020701), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwwwFormUrlDecoderRuntimeClass_t497020701;
			}
		}
		return returnValue;
	}

	inline IVectorView_1_t2282165232* get_____ivectorView_1_t2282165232()
	{
		IVectorView_1_t2282165232* returnValue = ____ivectorView_1_t2282165232;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IVectorView_1_t2282165232::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IVectorView_1_t2282165232>((&____ivectorView_1_t2282165232), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ivectorView_1_t2282165232;
			}
		}
		return returnValue;
	}

	inline IIterable_1_t564697430* get_____iiterable_1_t564697430()
	{
		IIterable_1_t564697430* returnValue = ____iiterable_1_t564697430;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IIterable_1_t564697430::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IIterable_1_t564697430>((&____iiterable_1_t564697430), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iiterable_1_t564697430;
			}
		}
		return returnValue;
	}
};

struct WwwFormUrlDecoder_t4136411681_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Foundation.IWwwFormUrlDecoderRuntimeClassFactory
	IWwwFormUrlDecoderRuntimeClassFactory_t1825479388* ____iwwwFormUrlDecoderRuntimeClassFactory_t1825479388;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Foundation.WwwFormUrlDecoder"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IWwwFormUrlDecoderRuntimeClassFactory_t1825479388* get_____iwwwFormUrlDecoderRuntimeClassFactory_t1825479388()
	{
		IWwwFormUrlDecoderRuntimeClassFactory_t1825479388* returnValue = ____iwwwFormUrlDecoderRuntimeClassFactory_t1825479388;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IWwwFormUrlDecoderRuntimeClassFactory_t1825479388::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IWwwFormUrlDecoderRuntimeClassFactory_t1825479388>((&____iwwwFormUrlDecoderRuntimeClassFactory_t1825479388), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwwwFormUrlDecoderRuntimeClassFactory_t1825479388;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWWFORMURLDECODER_T4136411681_H
#ifndef MEDIACAPTURE_T1516581975_H
#define MEDIACAPTURE_T1516581975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.MediaCapture
struct  MediaCapture_t1516581975  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.Capture.IMediaCapture
	IMediaCapture_t2687710539* ____imediaCapture_t2687710539;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureVideoPreview
	IMediaCaptureVideoPreview_t535963051* ____imediaCaptureVideoPreview_t535963051;
	// Cached pointer to Windows.Media.Capture.IMediaCapture2
	IMediaCapture2_t2891527499* ____imediaCapture2_t2891527499;
	// Cached pointer to Windows.Media.Capture.IMediaCapture3
	IMediaCapture3_t552875339* ____imediaCapture3_t552875339;
	// Cached pointer to Windows.Media.Capture.IMediaCapture4
	IMediaCapture4_t2509190475* ____imediaCapture4_t2509190475;
	// Cached pointer to Windows.Media.Capture.IMediaCapture5
	IMediaCapture5_t170538315* ____imediaCapture5_t170538315;
	// Cached pointer to Windows.Media.Capture.IMediaCapture6
	IMediaCapture6_t2126853451* ____imediaCapture6_t2126853451;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline IMediaCapture_t2687710539* get_____imediaCapture_t2687710539()
	{
		IMediaCapture_t2687710539* returnValue = ____imediaCapture_t2687710539;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCapture_t2687710539::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCapture_t2687710539>((&____imediaCapture_t2687710539), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCapture_t2687710539;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureVideoPreview_t535963051* get_____imediaCaptureVideoPreview_t535963051()
	{
		IMediaCaptureVideoPreview_t535963051* returnValue = ____imediaCaptureVideoPreview_t535963051;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureVideoPreview_t535963051::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureVideoPreview_t535963051>((&____imediaCaptureVideoPreview_t535963051), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureVideoPreview_t535963051;
			}
		}
		return returnValue;
	}

	inline IMediaCapture2_t2891527499* get_____imediaCapture2_t2891527499()
	{
		IMediaCapture2_t2891527499* returnValue = ____imediaCapture2_t2891527499;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCapture2_t2891527499::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCapture2_t2891527499>((&____imediaCapture2_t2891527499), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCapture2_t2891527499;
			}
		}
		return returnValue;
	}

	inline IMediaCapture3_t552875339* get_____imediaCapture3_t552875339()
	{
		IMediaCapture3_t552875339* returnValue = ____imediaCapture3_t552875339;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCapture3_t552875339::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCapture3_t552875339>((&____imediaCapture3_t552875339), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCapture3_t552875339;
			}
		}
		return returnValue;
	}

	inline IMediaCapture4_t2509190475* get_____imediaCapture4_t2509190475()
	{
		IMediaCapture4_t2509190475* returnValue = ____imediaCapture4_t2509190475;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCapture4_t2509190475::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCapture4_t2509190475>((&____imediaCapture4_t2509190475), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCapture4_t2509190475;
			}
		}
		return returnValue;
	}

	inline IMediaCapture5_t170538315* get_____imediaCapture5_t170538315()
	{
		IMediaCapture5_t170538315* returnValue = ____imediaCapture5_t170538315;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCapture5_t170538315::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCapture5_t170538315>((&____imediaCapture5_t170538315), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCapture5_t170538315;
			}
		}
		return returnValue;
	}

	inline IMediaCapture6_t2126853451* get_____imediaCapture6_t2126853451()
	{
		IMediaCapture6_t2126853451* returnValue = ____imediaCapture6_t2126853451;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCapture6_t2126853451::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCapture6_t2126853451>((&____imediaCapture6_t2126853451), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCapture6_t2126853451;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

struct MediaCapture_t1516581975_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureStatics
	IMediaCaptureStatics_t830978977* ____imediaCaptureStatics_t830978977;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.Capture.MediaCapture"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureStatics_t830978977* get_____imediaCaptureStatics_t830978977()
	{
		IMediaCaptureStatics_t830978977* returnValue = ____imediaCaptureStatics_t830978977;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IMediaCaptureStatics_t830978977::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureStatics_t830978977>((&____imediaCaptureStatics_t830978977), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureStatics_t830978977;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIACAPTURE_T1516581975_H
#ifndef AUDIODEVICECONTROLLER_T936102736_H
#define AUDIODEVICECONTROLLER_T936102736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Devices.AudioDeviceController
struct  AudioDeviceController_t936102736  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.Devices.IAudioDeviceController
	IAudioDeviceController_t3742505345* ____iaudioDeviceController_t3742505345;
	// Cached pointer to Windows.Media.Devices.IMediaDeviceController
	IMediaDeviceController_t1179508027* ____imediaDeviceController_t1179508027;

public:
	inline IAudioDeviceController_t3742505345* get_____iaudioDeviceController_t3742505345()
	{
		IAudioDeviceController_t3742505345* returnValue = ____iaudioDeviceController_t3742505345;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAudioDeviceController_t3742505345::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAudioDeviceController_t3742505345>((&____iaudioDeviceController_t3742505345), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iaudioDeviceController_t3742505345;
			}
		}
		return returnValue;
	}

	inline IMediaDeviceController_t1179508027* get_____imediaDeviceController_t1179508027()
	{
		IMediaDeviceController_t1179508027* returnValue = ____imediaDeviceController_t1179508027;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaDeviceController_t1179508027::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaDeviceController_t1179508027>((&____imediaDeviceController_t1179508027), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaDeviceController_t1179508027;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIODEVICECONTROLLER_T936102736_H
#ifndef SPEECHSYNTHESIZER_T2130945875_H
#define SPEECHSYNTHESIZER_T2130945875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.SpeechSynthesis.SpeechSynthesizer
struct  SpeechSynthesizer_t2130945875  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.SpeechSynthesis.ISpeechSynthesizer
	ISpeechSynthesizer_t2734223870* ____ispeechSynthesizer_t2734223870;
	// Cached pointer to Windows.Media.SpeechSynthesis.ISpeechSynthesizer2
	ISpeechSynthesizer2_t1865799545* ____ispeechSynthesizer2_t1865799545;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline ISpeechSynthesizer_t2734223870* get_____ispeechSynthesizer_t2734223870()
	{
		ISpeechSynthesizer_t2734223870* returnValue = ____ispeechSynthesizer_t2734223870;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpeechSynthesizer_t2734223870::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpeechSynthesizer_t2734223870>((&____ispeechSynthesizer_t2734223870), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispeechSynthesizer_t2734223870;
			}
		}
		return returnValue;
	}

	inline ISpeechSynthesizer2_t1865799545* get_____ispeechSynthesizer2_t1865799545()
	{
		ISpeechSynthesizer2_t1865799545* returnValue = ____ispeechSynthesizer2_t1865799545;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpeechSynthesizer2_t1865799545::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpeechSynthesizer2_t1865799545>((&____ispeechSynthesizer2_t1865799545), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispeechSynthesizer2_t1865799545;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

struct SpeechSynthesizer_t2130945875_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
	IInstalledVoicesStatic_t870565809* ____iinstalledVoicesStatic_t870565809;
	// Cached pointer to Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
	IInstalledVoicesStatic2_t946760305* ____iinstalledVoicesStatic2_t946760305;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.SpeechSynthesis.SpeechSynthesizer"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IInstalledVoicesStatic_t870565809* get_____iinstalledVoicesStatic_t870565809()
	{
		IInstalledVoicesStatic_t870565809* returnValue = ____iinstalledVoicesStatic_t870565809;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IInstalledVoicesStatic_t870565809::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInstalledVoicesStatic_t870565809>((&____iinstalledVoicesStatic_t870565809), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinstalledVoicesStatic_t870565809;
			}
		}
		return returnValue;
	}

	inline IInstalledVoicesStatic2_t946760305* get_____iinstalledVoicesStatic2_t946760305()
	{
		IInstalledVoicesStatic2_t946760305* returnValue = ____iinstalledVoicesStatic2_t946760305;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IInstalledVoicesStatic2_t946760305::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInstalledVoicesStatic2_t946760305>((&____iinstalledVoicesStatic2_t946760305), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinstalledVoicesStatic2_t946760305;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHSYNTHESIZER_T2130945875_H
#ifndef VOICEINFORMATION_T4266404632_H
#define VOICEINFORMATION_T4266404632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.SpeechSynthesis.VoiceInformation
struct  VoiceInformation_t4266404632  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.SpeechSynthesis.IVoiceInformation
	IVoiceInformation_t3111056019* ____ivoiceInformation_t3111056019;

public:
	inline IVoiceInformation_t3111056019* get_____ivoiceInformation_t3111056019()
	{
		IVoiceInformation_t3111056019* returnValue = ____ivoiceInformation_t3111056019;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IVoiceInformation_t3111056019::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IVoiceInformation_t3111056019>((&____ivoiceInformation_t3111056019), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ivoiceInformation_t3111056019;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOICEINFORMATION_T4266404632_H
#ifndef NETWORKINFORMATION_T482159730_H
#define NETWORKINFORMATION_T482159730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.Connectivity.NetworkInformation
struct  NetworkInformation_t482159730  : public Il2CppComObject
{
public:

public:
};

struct NetworkInformation_t482159730_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.Connectivity.INetworkInformationStatics2
	INetworkInformationStatics2_t442609477* ____inetworkInformationStatics2_t442609477;
	// Cached pointer to Windows.Networking.Connectivity.INetworkInformationStatics
	INetworkInformationStatics_t1568055678* ____inetworkInformationStatics_t1568055678;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.Connectivity.NetworkInformation"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline INetworkInformationStatics2_t442609477* get_____inetworkInformationStatics2_t442609477()
	{
		INetworkInformationStatics2_t442609477* returnValue = ____inetworkInformationStatics2_t442609477;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(INetworkInformationStatics2_t442609477::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<INetworkInformationStatics2_t442609477>((&____inetworkInformationStatics2_t442609477), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____inetworkInformationStatics2_t442609477;
			}
		}
		return returnValue;
	}

	inline INetworkInformationStatics_t1568055678* get_____inetworkInformationStatics_t1568055678()
	{
		INetworkInformationStatics_t1568055678* returnValue = ____inetworkInformationStatics_t1568055678;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(INetworkInformationStatics_t1568055678::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<INetworkInformationStatics_t1568055678>((&____inetworkInformationStatics_t1568055678), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____inetworkInformationStatics_t1568055678;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINFORMATION_T482159730_H
#ifndef STREAMSOCKET_T121918173_H
#define STREAMSOCKET_T121918173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.Sockets.StreamSocket
struct  StreamSocket_t121918173  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Networking.Sockets.IStreamSocket
	IStreamSocket_t3338378904* ____istreamSocket_t3338378904;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocket2
	IStreamSocket2_t2507586357* ____istreamSocket2_t2507586357;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocket3
	IStreamSocket3_t2507586356* ____istreamSocket3_t2507586356;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline IStreamSocket_t3338378904* get_____istreamSocket_t3338378904()
	{
		IStreamSocket_t3338378904* returnValue = ____istreamSocket_t3338378904;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocket_t3338378904::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocket_t3338378904>((&____istreamSocket_t3338378904), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocket_t3338378904;
			}
		}
		return returnValue;
	}

	inline IStreamSocket2_t2507586357* get_____istreamSocket2_t2507586357()
	{
		IStreamSocket2_t2507586357* returnValue = ____istreamSocket2_t2507586357;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocket2_t2507586357::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocket2_t2507586357>((&____istreamSocket2_t2507586357), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocket2_t2507586357;
			}
		}
		return returnValue;
	}

	inline IStreamSocket3_t2507586356* get_____istreamSocket3_t2507586356()
	{
		IStreamSocket3_t2507586356* returnValue = ____istreamSocket3_t2507586356;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocket3_t2507586356::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocket3_t2507586356>((&____istreamSocket3_t2507586356), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocket3_t2507586356;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

struct StreamSocket_t121918173_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketStatics
	IStreamSocketStatics_t566903188* ____istreamSocketStatics_t566903188;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.Sockets.StreamSocket"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStreamSocketStatics_t566903188* get_____istreamSocketStatics_t566903188()
	{
		IStreamSocketStatics_t566903188* returnValue = ____istreamSocketStatics_t566903188;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStreamSocketStatics_t566903188::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocketStatics_t566903188>((&____istreamSocketStatics_t566903188), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketStatics_t566903188;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMSOCKET_T121918173_H
#ifndef PERCEPTIONTIMESTAMP_T25754965_H
#define PERCEPTIONTIMESTAMP_T25754965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Perception.PerceptionTimestamp
struct  PerceptionTimestamp_t25754965  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Perception.IPerceptionTimestamp
	IPerceptionTimestamp_t393505964* ____iperceptionTimestamp_t393505964;

public:
	inline IPerceptionTimestamp_t393505964* get_____iperceptionTimestamp_t393505964()
	{
		IPerceptionTimestamp_t393505964* returnValue = ____iperceptionTimestamp_t393505964;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IPerceptionTimestamp_t393505964::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPerceptionTimestamp_t393505964>((&____iperceptionTimestamp_t393505964), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iperceptionTimestamp_t393505964;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERCEPTIONTIMESTAMP_T25754965_H
#ifndef APPLICATIONDATA_T3489691988_H
#define APPLICATIONDATA_T3489691988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.ApplicationData
struct  ApplicationData_t3489691988  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.IApplicationData
	IApplicationData_t28886227* ____iapplicationData_t28886227;
	// Cached pointer to Windows.Storage.IApplicationData2
	IApplicationData2_t163893929* ____iapplicationData2_t163893929;
	// Cached pointer to Windows.Storage.IApplicationData3
	IApplicationData3_t163893930* ____iapplicationData3_t163893930;

public:
	inline IApplicationData_t28886227* get_____iapplicationData_t28886227()
	{
		IApplicationData_t28886227* returnValue = ____iapplicationData_t28886227;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationData_t28886227::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationData_t28886227>((&____iapplicationData_t28886227), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationData_t28886227;
			}
		}
		return returnValue;
	}

	inline IApplicationData2_t163893929* get_____iapplicationData2_t163893929()
	{
		IApplicationData2_t163893929* returnValue = ____iapplicationData2_t163893929;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationData2_t163893929::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationData2_t163893929>((&____iapplicationData2_t163893929), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationData2_t163893929;
			}
		}
		return returnValue;
	}

	inline IApplicationData3_t163893930* get_____iapplicationData3_t163893930()
	{
		IApplicationData3_t163893930* returnValue = ____iapplicationData3_t163893930;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationData3_t163893930::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationData3_t163893930>((&____iapplicationData3_t163893930), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationData3_t163893930;
			}
		}
		return returnValue;
	}
};

struct ApplicationData_t3489691988_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IApplicationDataStatics
	IApplicationDataStatics_t3792839446* ____iapplicationDataStatics_t3792839446;
	// Cached pointer to Windows.Storage.IApplicationDataStatics2
	IApplicationDataStatics2_t2938905366* ____iapplicationDataStatics2_t2938905366;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.ApplicationData"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IApplicationDataStatics_t3792839446* get_____iapplicationDataStatics_t3792839446()
	{
		IApplicationDataStatics_t3792839446* returnValue = ____iapplicationDataStatics_t3792839446;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationDataStatics_t3792839446::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationDataStatics_t3792839446>((&____iapplicationDataStatics_t3792839446), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationDataStatics_t3792839446;
			}
		}
		return returnValue;
	}

	inline IApplicationDataStatics2_t2938905366* get_____iapplicationDataStatics2_t2938905366()
	{
		IApplicationDataStatics2_t2938905366* returnValue = ____iapplicationDataStatics2_t2938905366;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationDataStatics2_t2938905366::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationDataStatics2_t2938905366>((&____iapplicationDataStatics2_t2938905366), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationDataStatics2_t2938905366;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONDATA_T3489691988_H
#ifndef DATAREADER_T2381813649_H
#define DATAREADER_T2381813649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.DataReader
struct  DataReader_t2381813649  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.Streams.IDataReader
	IDataReader_t3392321383* ____idataReader_t3392321383;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline IDataReader_t3392321383* get_____idataReader_t3392321383()
	{
		IDataReader_t3392321383* returnValue = ____idataReader_t3392321383;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDataReader_t3392321383::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDataReader_t3392321383>((&____idataReader_t3392321383), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataReader_t3392321383;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

struct DataReader_t2381813649_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.Streams.IDataReaderFactory
	IDataReaderFactory_t2217455388* ____idataReaderFactory_t2217455388;
	// Cached pointer to Windows.Storage.Streams.IDataReaderStatics
	IDataReaderStatics_t1343138968* ____idataReaderStatics_t1343138968;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.Streams.DataReader"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IDataReaderFactory_t2217455388* get_____idataReaderFactory_t2217455388()
	{
		IDataReaderFactory_t2217455388* returnValue = ____idataReaderFactory_t2217455388;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataReaderFactory_t2217455388::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDataReaderFactory_t2217455388>((&____idataReaderFactory_t2217455388), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataReaderFactory_t2217455388;
			}
		}
		return returnValue;
	}

	inline IDataReaderStatics_t1343138968* get_____idataReaderStatics_t1343138968()
	{
		IDataReaderStatics_t1343138968* returnValue = ____idataReaderStatics_t1343138968;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataReaderStatics_t1343138968::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDataReaderStatics_t1343138968>((&____idataReaderStatics_t1343138968), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataReaderStatics_t1343138968;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAREADER_T2381813649_H
#ifndef DATAWRITER_T841151054_H
#define DATAWRITER_T841151054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.DataWriter
struct  DataWriter_t841151054  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.Streams.IDataWriter
	IDataWriter_t1260434628* ____idataWriter_t1260434628;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline IDataWriter_t1260434628* get_____idataWriter_t1260434628()
	{
		IDataWriter_t1260434628* returnValue = ____idataWriter_t1260434628;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDataWriter_t1260434628::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDataWriter_t1260434628>((&____idataWriter_t1260434628), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataWriter_t1260434628;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

struct DataWriter_t841151054_StaticFields
{
public:
	// Cached pointer to Windows.Storage.Streams.IDataWriterFactory
	IDataWriterFactory_t624500286* ____idataWriterFactory_t624500286;
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;

public:
	inline IDataWriterFactory_t624500286* get_____idataWriterFactory_t624500286()
	{
		IDataWriterFactory_t624500286* returnValue = ____idataWriterFactory_t624500286;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataWriterFactory_t624500286::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDataWriterFactory_t624500286>((&____idataWriterFactory_t624500286), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataWriterFactory_t624500286;
			}
		}
		return returnValue;
	}

	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.Streams.DataWriter"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAWRITER_T841151054_H
#ifndef SPATIALINTERACTIONCONTROLLER_T3760917144_H
#define SPATIALINTERACTIONCONTROLLER_T3760917144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Input.Spatial.SpatialInteractionController
struct  SpatialInteractionController_t3760917144  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionController
	ISpatialInteractionController_t138196805* ____ispatialInteractionController_t138196805;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionController2
	ISpatialInteractionController2_t3418596785* ____ispatialInteractionController2_t3418596785;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionController3
	ISpatialInteractionController3_t689713430* ____ispatialInteractionController3_t689713430;

public:
	inline ISpatialInteractionController_t138196805* get_____ispatialInteractionController_t138196805()
	{
		ISpatialInteractionController_t138196805* returnValue = ____ispatialInteractionController_t138196805;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionController_t138196805::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionController_t138196805>((&____ispatialInteractionController_t138196805), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionController_t138196805;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionController2_t3418596785* get_____ispatialInteractionController2_t3418596785()
	{
		ISpatialInteractionController2_t3418596785* returnValue = ____ispatialInteractionController2_t3418596785;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionController2_t3418596785::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionController2_t3418596785>((&____ispatialInteractionController2_t3418596785), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionController2_t3418596785;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionController3_t689713430* get_____ispatialInteractionController3_t689713430()
	{
		ISpatialInteractionController3_t689713430* returnValue = ____ispatialInteractionController3_t689713430;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionController3_t689713430::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionController3_t689713430>((&____ispatialInteractionController3_t689713430), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionController3_t689713430;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALINTERACTIONCONTROLLER_T3760917144_H
#ifndef SPATIALINTERACTIONMANAGER_T208992783_H
#define SPATIALINTERACTIONMANAGER_T208992783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Input.Spatial.SpatialInteractionManager
struct  SpatialInteractionManager_t208992783  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionManager
	ISpatialInteractionManager_t354061063* ____ispatialInteractionManager_t354061063;

public:
	inline ISpatialInteractionManager_t354061063* get_____ispatialInteractionManager_t354061063()
	{
		ISpatialInteractionManager_t354061063* returnValue = ____ispatialInteractionManager_t354061063;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionManager_t354061063::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionManager_t354061063>((&____ispatialInteractionManager_t354061063), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionManager_t354061063;
			}
		}
		return returnValue;
	}
};

struct SpatialInteractionManager_t208992783_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
	ISpatialInteractionManagerStatics_t2291651573* ____ispatialInteractionManagerStatics_t2291651573;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Input.Spatial.SpatialInteractionManager"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionManagerStatics_t2291651573* get_____ispatialInteractionManagerStatics_t2291651573()
	{
		ISpatialInteractionManagerStatics_t2291651573* returnValue = ____ispatialInteractionManagerStatics_t2291651573;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISpatialInteractionManagerStatics_t2291651573::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionManagerStatics_t2291651573>((&____ispatialInteractionManagerStatics_t2291651573), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionManagerStatics_t2291651573;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALINTERACTIONMANAGER_T208992783_H
#ifndef SPATIALINTERACTIONSOURCE_T1043222996_H
#define SPATIALINTERACTIONSOURCE_T1043222996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Input.Spatial.SpatialInteractionSource
struct  SpatialInteractionSource_t1043222996  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSource
	ISpatialInteractionSource_t2185314266* ____ispatialInteractionSource_t2185314266;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSource2
	ISpatialInteractionSource2_t2453383580* ____ispatialInteractionSource2_t2453383580;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSource3
	ISpatialInteractionSource3_t887299639* ____ispatialInteractionSource3_t887299639;

public:
	inline ISpatialInteractionSource_t2185314266* get_____ispatialInteractionSource_t2185314266()
	{
		ISpatialInteractionSource_t2185314266* returnValue = ____ispatialInteractionSource_t2185314266;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSource_t2185314266::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSource_t2185314266>((&____ispatialInteractionSource_t2185314266), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSource_t2185314266;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionSource2_t2453383580* get_____ispatialInteractionSource2_t2453383580()
	{
		ISpatialInteractionSource2_t2453383580* returnValue = ____ispatialInteractionSource2_t2453383580;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSource2_t2453383580::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSource2_t2453383580>((&____ispatialInteractionSource2_t2453383580), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSource2_t2453383580;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionSource3_t887299639* get_____ispatialInteractionSource3_t887299639()
	{
		ISpatialInteractionSource3_t887299639* returnValue = ____ispatialInteractionSource3_t887299639;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSource3_t887299639::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSource3_t887299639>((&____ispatialInteractionSource3_t887299639), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSource3_t887299639;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALINTERACTIONSOURCE_T1043222996_H
#ifndef SPATIALINTERACTIONSOURCESTATE_T1215688063_H
#define SPATIALINTERACTIONSOURCESTATE_T1215688063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct  SpatialInteractionSourceState_t1215688063  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSourceState
	ISpatialInteractionSourceState_t1358829803* ____ispatialInteractionSourceState_t1358829803;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSourceState2
	ISpatialInteractionSourceState2_t2977437931* ____ispatialInteractionSourceState2_t2977437931;

public:
	inline ISpatialInteractionSourceState_t1358829803* get_____ispatialInteractionSourceState_t1358829803()
	{
		ISpatialInteractionSourceState_t1358829803* returnValue = ____ispatialInteractionSourceState_t1358829803;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSourceState_t1358829803::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSourceState_t1358829803>((&____ispatialInteractionSourceState_t1358829803), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSourceState_t1358829803;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionSourceState2_t2977437931* get_____ispatialInteractionSourceState2_t2977437931()
	{
		ISpatialInteractionSourceState2_t2977437931* returnValue = ____ispatialInteractionSourceState2_t2977437931;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSourceState2_t2977437931::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSourceState2_t2977437931>((&____ispatialInteractionSourceState2_t2977437931), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSourceState2_t2977437931;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALINTERACTIONSOURCESTATE_T1215688063_H
#ifndef PROPERTYCHANGEDEVENTARGS_T1492749306_H
#define PROPERTYCHANGEDEVENTARGS_T1492749306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Data.PropertyChangedEventArgs
struct  PropertyChangedEventArgs_t1492749306  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Xaml.Data.IPropertyChangedEventArgs
	IPropertyChangedEventArgs_t1404159462* ____ipropertyChangedEventArgs_t1404159462;

public:
	inline IPropertyChangedEventArgs_t1404159462* get_____ipropertyChangedEventArgs_t1404159462()
	{
		IPropertyChangedEventArgs_t1404159462* returnValue = ____ipropertyChangedEventArgs_t1404159462;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IPropertyChangedEventArgs_t1404159462::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPropertyChangedEventArgs_t1404159462>((&____ipropertyChangedEventArgs_t1404159462), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ipropertyChangedEventArgs_t1404159462;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}
};

struct PropertyChangedEventArgs_t1492749306_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory
	IPropertyChangedEventArgsFactory_t4178285917* ____ipropertyChangedEventArgsFactory_t4178285917;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.Data.PropertyChangedEventArgs"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IPropertyChangedEventArgsFactory_t4178285917* get_____ipropertyChangedEventArgsFactory_t4178285917()
	{
		IPropertyChangedEventArgsFactory_t4178285917* returnValue = ____ipropertyChangedEventArgsFactory_t4178285917;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IPropertyChangedEventArgsFactory_t4178285917::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPropertyChangedEventArgsFactory_t4178285917>((&____ipropertyChangedEventArgsFactory_t4178285917), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ipropertyChangedEventArgsFactory_t4178285917;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGEDEVENTARGS_T1492749306_H
#ifndef ATTRIBUTETARGETS_T1784037988_H
#define ATTRIBUTETARGETS_T1784037988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeTargets
struct  AttributeTargets_t1784037988 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_t1784037988, ___value___2)); }
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
#endif // ATTRIBUTETARGETS_T1784037988_H
#ifndef NOTIFYCOLLECTIONCHANGEDACTION_T1056453382_H
#define NOTIFYCOLLECTIONCHANGEDACTION_T1056453382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NotifyCollectionChangedAction
struct  NotifyCollectionChangedAction_t1056453382 
{
public:
	// System.Int32 System.Collections.Specialized.NotifyCollectionChangedAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedAction_t1056453382, ___value___2)); }
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
#endif // NOTIFYCOLLECTIONCHANGEDACTION_T1056453382_H
#ifndef DATETIMEOFFSET_T3229287507_H
#define DATETIMEOFFSET_T3229287507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t3229287507 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t3738529785  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___m_dateTime_2)); }
	inline DateTime_t3738529785  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t3738529785 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t3738529785  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t3229287507_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t3229287507  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t3229287507  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t3229287507  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t3229287507 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t3229287507  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t3229287507  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t3229287507 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t3229287507  value)
	{
		___MaxValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T3229287507_H
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
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_19)); }
	inline TimeSpan_t881159249  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t881159249 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t881159249  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t881159249  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t881159249  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t881159249  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t881159249  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef FLAGS_T2372798318_H
#define FLAGS_T2372798318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/Flags
struct  Flags_t2372798318 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t2372798318, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGS_T2372798318_H
#ifndef URIFORMAT_T2031163398_H
#define URIFORMAT_T2031163398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriFormat
struct  UriFormat_t2031163398 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t2031163398, ___value___2)); }
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
#endif // URIFORMAT_T2031163398_H
#ifndef URIIDNSCOPE_T1847433844_H
#define URIIDNSCOPE_T1847433844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriIdnScope
struct  UriIdnScope_t1847433844 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_t1847433844, ___value___2)); }
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
#endif // URIIDNSCOPE_T1847433844_H
#ifndef URIKIND_T3816567336_H
#define URIKIND_T3816567336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriKind
struct  UriKind_t3816567336 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_t3816567336, ___value___2)); }
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
#endif // URIKIND_T3816567336_H
#ifndef ASYNCSTATUS_T2150485874_H
#define ASYNCSTATUS_T2150485874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncStatus
struct  AsyncStatus_t2150485874 
{
public:
	// System.Int32 Windows.Foundation.AsyncStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncStatus_t2150485874, ___value___2)); }
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
#endif // ASYNCSTATUS_T2150485874_H
#ifndef COMPOSITIONTYPE_T2620517455_H
#define COMPOSITIONTYPE_T2620517455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.CompositionType
struct  CompositionType_t2620517455 
{
public:
	// System.Int32 Windows.Foundation.Metadata.CompositionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompositionType_t2620517455, ___value___2)); }
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
#endif // COMPOSITIONTYPE_T2620517455_H
#ifndef MARSHALINGTYPE_T3556196393_H
#define MARSHALINGTYPE_T3556196393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.MarshalingType
struct  MarshalingType_t3556196393 
{
public:
	// System.Int32 Windows.Foundation.Metadata.MarshalingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarshalingType_t3556196393, ___value___2)); }
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
#endif // MARSHALINGTYPE_T3556196393_H
#ifndef THREADINGMODEL_T2838021473_H
#define THREADINGMODEL_T2838021473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ThreadingModel
struct  ThreadingModel_t2838021473 
{
public:
	// System.Int32 Windows.Foundation.Metadata.ThreadingModel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ThreadingModel_t2838021473, ___value___2)); }
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
#endif // THREADINGMODEL_T2838021473_H
#ifndef PROPERTYTYPE_T3031428354_H
#define PROPERTYTYPE_T3031428354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.PropertyType
struct  PropertyType_t3031428354 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_t3031428354, ___value___2)); }
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
#endif // PROPERTYTYPE_T3031428354_H
#ifndef MEDIACATEGORY_T3177896276_H
#define MEDIACATEGORY_T3177896276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.MediaCategory
struct  MediaCategory_t3177896276 
{
public:
	// System.Int32 Windows.Media.Capture.MediaCategory::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaCategory_t3177896276, ___value___2)); }
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
#endif // MEDIACATEGORY_T3177896276_H
#ifndef STREAMINGCAPTUREMODE_T3911325220_H
#define STREAMINGCAPTUREMODE_T3911325220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.StreamingCaptureMode
struct  StreamingCaptureMode_t3911325220 
{
public:
	// System.Int32 Windows.Media.Capture.StreamingCaptureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingCaptureMode_t3911325220, ___value___2)); }
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
#endif // STREAMINGCAPTUREMODE_T3911325220_H
#ifndef HOSTNAMETYPE_T4170768079_H
#define HOSTNAMETYPE_T4170768079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.HostNameType
struct  HostNameType_t4170768079 
{
public:
	// System.Int32 Windows.Networking.HostNameType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HostNameType_t4170768079, ___value___2)); }
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
#endif // HOSTNAMETYPE_T4170768079_H
// Windows.Perception.IPerceptionTimestampHelperStatics
struct NOVTABLE IPerceptionTimestampHelperStatics_t2092781866 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestampHelperStatics_FromHistoricalTargetTime_m1803895948(DateTime_t1679451545  ___targetTime0, IPerceptionTimestamp_t393505964** comReturnValue) = 0;
};
#ifndef CREATIONCOLLISIONOPTION_T2003156443_H
#define CREATIONCOLLISIONOPTION_T2003156443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.CreationCollisionOption
struct  CreationCollisionOption_t2003156443 
{
public:
	// System.Int32 Windows.Storage.CreationCollisionOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CreationCollisionOption_t2003156443, ___value___2)); }
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
#endif // CREATIONCOLLISIONOPTION_T2003156443_H
#ifndef FILEACCESSMODE_T2616835387_H
#define FILEACCESSMODE_T2616835387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.FileAccessMode
struct  FileAccessMode_t2616835387 
{
public:
	// System.Int32 Windows.Storage.FileAccessMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccessMode_t2616835387, ___value___2)); }
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
#endif // FILEACCESSMODE_T2616835387_H
#ifndef INPUTSTREAMOPTIONS_T2901738979_H
#define INPUTSTREAMOPTIONS_T2901738979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.InputStreamOptions
struct  InputStreamOptions_t2901738979 
{
public:
	// System.UInt32 Windows.Storage.Streams.InputStreamOptions::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputStreamOptions_t2901738979, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTSTREAMOPTIONS_T2901738979_H
// Windows.UI.Xaml.Data.INotifyPropertyChanged
struct NOVTABLE INotifyPropertyChanged_t1341263577 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INotifyPropertyChanged_add_PropertyChanged_m1555432907(IPropertyChangedEventHandler_t3836340606_ComCallableWrapper* ___value0, EventRegistrationToken_t318890788 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INotifyPropertyChanged_remove_PropertyChanged_m3770181581(EventRegistrationToken_t318890788  ___token0) = 0;
};
// Windows.UI.Xaml.Interop.INotifyCollectionChanged
struct NOVTABLE INotifyCollectionChanged_t3244377239 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChanged_add_CollectionChanged_m1116549919(INotifyCollectionChangedEventHandler_t2749712960_ComCallableWrapper* ___value0, EventRegistrationToken_t318890788 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChanged_remove_CollectionChanged_m1364461162(EventRegistrationToken_t318890788  ___token0) = 0;
};
#ifndef TYPEKIND_T2273581760_H
#define TYPEKIND_T2273581760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.TypeKind
struct  TypeKind_t2273581760 
{
public:
	// System.Int32 Windows.UI.Xaml.Interop.TypeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeKind_t2273581760, ___value___2)); }
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
#endif // TYPEKIND_T2273581760_H
#ifndef NOTIFYCOLLECTIONCHANGEDEVENTARGS_T9239872_H
#define NOTIFYCOLLECTIONCHANGEDEVENTARGS_T9239872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NotifyCollectionChangedEventArgs
struct  NotifyCollectionChangedEventArgs_t9239872  : public EventArgs_t3591816995
{
public:
	// System.Collections.Specialized.NotifyCollectionChangedAction System.Collections.Specialized.NotifyCollectionChangedEventArgs::_action
	int32_t ____action_1;
	// System.Collections.IList System.Collections.Specialized.NotifyCollectionChangedEventArgs::_newItems
	RuntimeObject* ____newItems_2;
	// System.Collections.IList System.Collections.Specialized.NotifyCollectionChangedEventArgs::_oldItems
	RuntimeObject* ____oldItems_3;
	// System.Int32 System.Collections.Specialized.NotifyCollectionChangedEventArgs::_newStartingIndex
	int32_t ____newStartingIndex_4;
	// System.Int32 System.Collections.Specialized.NotifyCollectionChangedEventArgs::_oldStartingIndex
	int32_t ____oldStartingIndex_5;

public:
	inline static int32_t get_offset_of__action_1() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedEventArgs_t9239872, ____action_1)); }
	inline int32_t get__action_1() const { return ____action_1; }
	inline int32_t* get_address_of__action_1() { return &____action_1; }
	inline void set__action_1(int32_t value)
	{
		____action_1 = value;
	}

	inline static int32_t get_offset_of__newItems_2() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedEventArgs_t9239872, ____newItems_2)); }
	inline RuntimeObject* get__newItems_2() const { return ____newItems_2; }
	inline RuntimeObject** get_address_of__newItems_2() { return &____newItems_2; }
	inline void set__newItems_2(RuntimeObject* value)
	{
		____newItems_2 = value;
		Il2CppCodeGenWriteBarrier((&____newItems_2), value);
	}

	inline static int32_t get_offset_of__oldItems_3() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedEventArgs_t9239872, ____oldItems_3)); }
	inline RuntimeObject* get__oldItems_3() const { return ____oldItems_3; }
	inline RuntimeObject** get_address_of__oldItems_3() { return &____oldItems_3; }
	inline void set__oldItems_3(RuntimeObject* value)
	{
		____oldItems_3 = value;
		Il2CppCodeGenWriteBarrier((&____oldItems_3), value);
	}

	inline static int32_t get_offset_of__newStartingIndex_4() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedEventArgs_t9239872, ____newStartingIndex_4)); }
	inline int32_t get__newStartingIndex_4() const { return ____newStartingIndex_4; }
	inline int32_t* get_address_of__newStartingIndex_4() { return &____newStartingIndex_4; }
	inline void set__newStartingIndex_4(int32_t value)
	{
		____newStartingIndex_4 = value;
	}

	inline static int32_t get_offset_of__oldStartingIndex_5() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedEventArgs_t9239872, ____oldStartingIndex_5)); }
	inline int32_t get__oldStartingIndex_5() const { return ____oldStartingIndex_5; }
	inline int32_t* get_address_of__oldStartingIndex_5() { return &____oldStartingIndex_5; }
	inline void set__oldStartingIndex_5(int32_t value)
	{
		____oldStartingIndex_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYCOLLECTIONCHANGEDEVENTARGS_T9239872_H
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
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t3890150400 * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t1092684687 * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_String_16), value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_originalUnicodeString_17), value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_Syntax_18)); }
	inline UriParser_t3890150400 * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t3890150400 ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t3890150400 * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Syntax_18), value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_DnsSafeHost_19), value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_Info_21)); }
	inline UriInfo_t1092684687 * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_t1092684687 ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_t1092684687 * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_Info_21), value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t3528271667* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t3528271667* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_0), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_1), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_2), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_3), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_4), value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeWs_5), value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeWss_6), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_7), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_8), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_9), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_10), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_11), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_12), value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((&___s_initLock_30), value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t3528271667* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t3528271667** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t3528271667* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((&___HexLowerChars_34), value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t3528271667* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t3528271667** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t3528271667* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((&____WSchars_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
// Windows.Devices.Haptics.ISimpleHapticsController
struct NOVTABLE ISimpleHapticsController_t3936202477 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped0_get_Id_m3300049499() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_get_SupportedFeedback_m2326199324(IVectorView_1_t252326345** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped1_get_IsIntensitySupported_m991599193() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped2_get_IsPlayCountSupported_m3867764282() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped3_get_IsPlayDurationSupported_m3960541395() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped4_get_IsReplayPauseIntervalSupported_m1218069110() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_StopFeedback_m4220404142() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped5_SendHapticFeedback_m795740151() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_SendHapticFeedback_m2591754103(ISimpleHapticsControllerFeedback_t2199416581* ___feedback0, double ___intensity1) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_SendHapticFeedbackForDuration_m1489257265(ISimpleHapticsControllerFeedback_t2199416581* ___feedback0, double ___intensity1, TimeSpan_t881159249  ___playDuration2) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped6_SendHapticFeedbackForPlayCount_m3357521888() = 0;
};
// Windows.Foundation.IAsyncInfo
struct NOVTABLE IAsyncInfo_t2425795444 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m488151110(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m774826579(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m1014534200(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_m959568370() = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_m1968429586() = 0;
};
// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t3169763779 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m1307170434(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_m907101182(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m2421114344(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_m4200981392(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_m4219279933(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_m408686053(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_m3159865478(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4226135288(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m3309170715(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_m4273073505(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_m1492351774(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m3066416085(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m3854624799(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m2457071959(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m2989795186(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m4147484372(DateTime_t1679451545 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m3208245299(TimeSpan_t881159249 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m2770216139(Point_t4164953539 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m1871300471(Size_t550917638 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m3170973200(Rect_t2695113487 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m1198332942(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m99541304(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m1856918684(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_m3011037886(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m3306404924(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m16819376(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m966722754(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m4042538522(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m2983062062(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m3043815358(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m2519679727(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m31925364(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m2438646989(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_m3262947336(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_m2328955250(uint32_t* ___value0ArraySize, DateTime_t1679451545 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_m3967818403(uint32_t* ___value0ArraySize, TimeSpan_t881159249 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_m2823350989(uint32_t* ___value0ArraySize, Point_t4164953539 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m1001766604(uint32_t* ___value0ArraySize, Size_t550917638 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m3897171591(uint32_t* ___value0ArraySize, Rect_t2695113487 ** ___value0) = 0;
};
#ifndef ATTRIBUTETARGETS_T2460853228_H
#define ATTRIBUTETARGETS_T2460853228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.AttributeTargets
struct  AttributeTargets_t2460853228 
{
public:
	// System.UInt32 Windows.Foundation.Metadata.AttributeTargets::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_t2460853228, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETARGETS_T2460853228_H
// Windows.Media.Capture.IMediaCaptureInitializationSettings
struct NOVTABLE IMediaCaptureInitializationSettings_t2768046102 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_U24__Stripped0_put_AudioDeviceId_m1633472098() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_U24__Stripped1_get_AudioDeviceId_m2392299102() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_U24__Stripped2_put_VideoDeviceId_m513406705() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_U24__Stripped3_get_VideoDeviceId_m3504853479() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_put_StreamingCaptureMode_m2829014800(int32_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_U24__Stripped4_get_StreamingCaptureMode_m1012735562() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_U24__Stripped5_put_PhotoCaptureSource_m1598014571() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_U24__Stripped6_get_PhotoCaptureSource_m2562435705() = 0;
};
// Windows.Media.Capture.IMediaCaptureInitializationSettings2
struct NOVTABLE IMediaCaptureInitializationSettings2_t2764769302 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings2_put_MediaCategory_m817377790(int32_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings2_U24__Stripped0_get_MediaCategory_m65547614() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings2_U24__Stripped1_put_AudioProcessing_m1983699196() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings2_U24__Stripped2_get_AudioProcessing_m2747368394() = 0;
};
// Windows.Networking.IHostName
struct NOVTABLE IHostName_t3179521082 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped0_get_IPInformation_m2521739025() = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped1_get_RawName_m106347642() = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_get_DisplayName_m3568158889(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped2_get_CanonicalName_m2488148993() = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_get_Type_m2074874122(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped3_IsEqual_m2387026067() = 0;
};
#ifndef PERCEPTIONTIMESTAMPHELPER_T1405177115_H
#define PERCEPTIONTIMESTAMPHELPER_T1405177115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Perception.PerceptionTimestampHelper
struct  PerceptionTimestampHelper_t1405177115  : public Il2CppComObject
{
public:

public:
};

struct PerceptionTimestampHelper_t1405177115_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Perception.IPerceptionTimestampHelperStatics
	IPerceptionTimestampHelperStatics_t2092781866* ____iperceptionTimestampHelperStatics_t2092781866;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Perception.PerceptionTimestampHelper"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IPerceptionTimestampHelperStatics_t2092781866* get_____iperceptionTimestampHelperStatics_t2092781866()
	{
		IPerceptionTimestampHelperStatics_t2092781866* returnValue = ____iperceptionTimestampHelperStatics_t2092781866;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IPerceptionTimestampHelperStatics_t2092781866::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPerceptionTimestampHelperStatics_t2092781866>((&____iperceptionTimestampHelperStatics_t2092781866), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iperceptionTimestampHelperStatics_t2092781866;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERCEPTIONTIMESTAMPHELPER_T1405177115_H
// Windows.Storage.IStorageFile
struct NOVTABLE IStorageFile_t455187485 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped0_get_FileType_m1126212897() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped1_get_ContentType_m3676239059() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_OpenAsync_m1037381949(int32_t ___accessMode0, IAsyncOperation_1_t721183771** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped2_OpenTransactedWriteAsync_m1588569100() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped3_CopyAsync_m1826427802() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped4_CopyAsync_m1826250819() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped5_CopyAsync_m1826495320() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped6_CopyAndReplaceAsync_m3545084853() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped7_MoveAsync_m1671606626() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped8_MoveAsync_m1671462051() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped9_MoveAsync_m1671424532() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped10_MoveAndReplaceAsync_m870303739() = 0;
};
// Windows.Storage.IStorageFolder
struct NOVTABLE IStorageFolder_t2414910357 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped0_CreateFileAsync_m3478046114() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_CreateFileAsync_m3292856642(Il2CppHString ___desiredName0, int32_t ___options1, IAsyncOperation_1_t372991836** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped1_CreateFolderAsync_m3554080672() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped2_CreateFolderAsync_m413574889() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_GetFileAsync_m859688798(Il2CppHString ___name0, IAsyncOperation_1_t372991836** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped3_GetFolderAsync_m377722965() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped4_GetItemAsync_m831988853() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped5_GetFilesAsync_m2162686979() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped6_GetFoldersAsync_m139074646() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped7_GetItemsAsync_m4085621006() = 0;
};
// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t2821136229 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m1153220809(IBuffer_t541192229* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t1622574100** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs
struct NOVTABLE INotifyCollectionChangedEventArgs_t951239883 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChangedEventArgs_get_Action_m131830108(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChangedEventArgs_get_NewItems_m4174321480(IBindableVector_t1801110279** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChangedEventArgs_get_OldItems_m3291453603(IBindableVector_t1801110279** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChangedEventArgs_get_NewStartingIndex_m3677161728(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChangedEventArgs_get_OldStartingIndex_m820494605(int32_t* comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgsFactory
struct NOVTABLE INotifyCollectionChangedEventArgsFactory_t1817199772 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChangedEventArgsFactory_CreateInstanceWithAllParameters_m430772519(int32_t ___action0, IBindableVector_t1801110279* ___newItems1, IBindableVector_t1801110279* ___oldItems2, int32_t ___newIndex3, int32_t ___oldIndex4, Il2CppIInspectable* ___outer5, Il2CppIInspectable** ___inner6, NotifyCollectionChangedEventArgs_t9239872 ** comReturnValue) = 0;
};
#ifndef NOTIFYCOLLECTIONCHANGEDACTION_T378659768_H
#define NOTIFYCOLLECTIONCHANGEDACTION_T378659768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.NotifyCollectionChangedAction
struct  NotifyCollectionChangedAction_t378659768 
{
public:
	// System.Int32 Windows.UI.Xaml.Interop.NotifyCollectionChangedAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedAction_t378659768, ___value___2)); }
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
#endif // NOTIFYCOLLECTIONCHANGEDACTION_T378659768_H
#ifndef TYPENAME_T4208425108_H
#define TYPENAME_T4208425108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.TypeName
struct  TypeName_t4208425108 
{
public:
	// System.String Windows.UI.Xaml.Interop.TypeName::Name
	String_t* ___Name_0;
	// Windows.UI.Xaml.Interop.TypeKind Windows.UI.Xaml.Interop.TypeName::Kind
	int32_t ___Kind_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TypeName_t4208425108, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Kind_1() { return static_cast<int32_t>(offsetof(TypeName_t4208425108, ___Kind_1)); }
	inline int32_t get_Kind_1() const { return ___Kind_1; }
	inline int32_t* get_address_of_Kind_1() { return &___Kind_1; }
	inline void set_Kind_1(int32_t value)
	{
		___Kind_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t4208425108_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Kind_1;
};
// Native definition for COM marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t4208425108_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Kind_1;
};
// Native definition for Windows Runtime marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t4208425108_marshaled_windows_runtime
{
	Il2CppHString ___Name_0;
	int32_t ___Kind_1;
};
#endif // TYPENAME_T4208425108_H
#ifndef NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T2749712960_H
#define NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T2749712960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct  NotifyCollectionChangedEventHandler_t2749712960  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct INotifyCollectionChangedEventHandler_t2749712960_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, NotifyCollectionChangedEventArgs_t9239872 * ___e1) = 0;
};

#endif // NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T2749712960_H
#ifndef PROPERTYCHANGEDEVENTHANDLER_T3836340606_H
#define PROPERTYCHANGEDEVENTHANDLER_T3836340606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangedEventHandler
struct  PropertyChangedEventHandler_t3836340606  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for System.ComponentModel.PropertyChangedEventHandler
struct IPropertyChangedEventHandler_t3836340606_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, PropertyChangedEventArgs_t3313059048 * ___e1) = 0;
};

#endif // PROPERTYCHANGEDEVENTHANDLER_T3836340606_H
#ifndef SIMPLEHAPTICSCONTROLLER_T4220085256_H
#define SIMPLEHAPTICSCONTROLLER_T4220085256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.Haptics.SimpleHapticsController
struct  SimpleHapticsController_t4220085256  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Devices.Haptics.ISimpleHapticsController
	ISimpleHapticsController_t3936202477* ____isimpleHapticsController_t3936202477;

public:
	inline ISimpleHapticsController_t3936202477* get_____isimpleHapticsController_t3936202477()
	{
		ISimpleHapticsController_t3936202477* returnValue = ____isimpleHapticsController_t3936202477;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISimpleHapticsController_t3936202477::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISimpleHapticsController_t3936202477>((&____isimpleHapticsController_t3936202477), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____isimpleHapticsController_t3936202477;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEHAPTICSCONTROLLER_T4220085256_H
#ifndef ASYNCACTIONCOMPLETEDHANDLER_T4142409509_H
#define ASYNCACTIONCOMPLETEDHANDLER_T4142409509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncActionCompletedHandler
struct  AsyncActionCompletedHandler_t4142409509  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncActionCompletedHandler
struct IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncAction_t3072713919* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCACTIONCOMPLETEDHANDLER_T4142409509_H
#ifndef ASYNCOPERATIONCOMPLETEDHANDLER_1_T3900534053_H
#define ASYNCOPERATIONCOMPLETEDHANDLER_1_T3900534053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>
struct  AsyncOperationCompletedHandler_1_t3900534053  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>
struct IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t1181249698* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONCOMPLETEDHANDLER_1_T3900534053_H
#ifndef MEDIACAPTUREINITIALIZATIONSETTINGS_T546830356_H
#define MEDIACAPTUREINITIALIZATIONSETTINGS_T546830356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.MediaCaptureInitializationSettings
struct  MediaCaptureInitializationSettings_t546830356  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.Capture.IMediaCaptureInitializationSettings
	IMediaCaptureInitializationSettings_t2768046102* ____imediaCaptureInitializationSettings_t2768046102;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureInitializationSettings2
	IMediaCaptureInitializationSettings2_t2764769302* ____imediaCaptureInitializationSettings2_t2764769302;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureInitializationSettings3
	IMediaCaptureInitializationSettings3_t2764834838* ____imediaCaptureInitializationSettings3_t2764834838;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureInitializationSettings4
	IMediaCaptureInitializationSettings4_t2764638230* ____imediaCaptureInitializationSettings4_t2764638230;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureInitializationSettings5
	IMediaCaptureInitializationSettings5_t2764703766* ____imediaCaptureInitializationSettings5_t2764703766;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureInitializationSettings6
	IMediaCaptureInitializationSettings6_t2764507158* ____imediaCaptureInitializationSettings6_t2764507158;

public:
	inline IMediaCaptureInitializationSettings_t2768046102* get_____imediaCaptureInitializationSettings_t2768046102()
	{
		IMediaCaptureInitializationSettings_t2768046102* returnValue = ____imediaCaptureInitializationSettings_t2768046102;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureInitializationSettings_t2768046102::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureInitializationSettings_t2768046102>((&____imediaCaptureInitializationSettings_t2768046102), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureInitializationSettings_t2768046102;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureInitializationSettings2_t2764769302* get_____imediaCaptureInitializationSettings2_t2764769302()
	{
		IMediaCaptureInitializationSettings2_t2764769302* returnValue = ____imediaCaptureInitializationSettings2_t2764769302;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureInitializationSettings2_t2764769302::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureInitializationSettings2_t2764769302>((&____imediaCaptureInitializationSettings2_t2764769302), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureInitializationSettings2_t2764769302;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureInitializationSettings3_t2764834838* get_____imediaCaptureInitializationSettings3_t2764834838()
	{
		IMediaCaptureInitializationSettings3_t2764834838* returnValue = ____imediaCaptureInitializationSettings3_t2764834838;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureInitializationSettings3_t2764834838::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureInitializationSettings3_t2764834838>((&____imediaCaptureInitializationSettings3_t2764834838), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureInitializationSettings3_t2764834838;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureInitializationSettings4_t2764638230* get_____imediaCaptureInitializationSettings4_t2764638230()
	{
		IMediaCaptureInitializationSettings4_t2764638230* returnValue = ____imediaCaptureInitializationSettings4_t2764638230;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureInitializationSettings4_t2764638230::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureInitializationSettings4_t2764638230>((&____imediaCaptureInitializationSettings4_t2764638230), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureInitializationSettings4_t2764638230;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureInitializationSettings5_t2764703766* get_____imediaCaptureInitializationSettings5_t2764703766()
	{
		IMediaCaptureInitializationSettings5_t2764703766* returnValue = ____imediaCaptureInitializationSettings5_t2764703766;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureInitializationSettings5_t2764703766::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureInitializationSettings5_t2764703766>((&____imediaCaptureInitializationSettings5_t2764703766), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureInitializationSettings5_t2764703766;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureInitializationSettings6_t2764507158* get_____imediaCaptureInitializationSettings6_t2764507158()
	{
		IMediaCaptureInitializationSettings6_t2764507158* returnValue = ____imediaCaptureInitializationSettings6_t2764507158;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureInitializationSettings6_t2764507158::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureInitializationSettings6_t2764507158>((&____imediaCaptureInitializationSettings6_t2764507158), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureInitializationSettings6_t2764507158;
			}
		}
		return returnValue;
	}
};

struct MediaCaptureInitializationSettings_t546830356_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.Capture.MediaCaptureInitializationSettings"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIACAPTUREINITIALIZATIONSETTINGS_T546830356_H
#ifndef SPEECHSYNTHESISSTREAM_T2322339758_H
#define SPEECHSYNTHESISSTREAM_T2322339758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.SpeechSynthesis.SpeechSynthesisStream
struct  SpeechSynthesisStream_t2322339758  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.SpeechSynthesis.ISpeechSynthesisStream
	ISpeechSynthesisStream_t764091608* ____ispeechSynthesisStream_t764091608;
	// Cached pointer to Windows.Storage.Streams.IRandomAccessStreamWithContentType
	IRandomAccessStreamWithContentType_t3296927652* ____irandomAccessStreamWithContentType_t3296927652;
	// Cached pointer to Windows.Storage.Streams.IContentTypeProvider
	IContentTypeProvider_t1806097440* ____icontentTypeProvider_t1806097440;
	// Cached pointer to Windows.Storage.Streams.IRandomAccessStream
	IRandomAccessStream_t2099996051* ____irandomAccessStream_t2099996051;
	// Cached pointer to Windows.Storage.Streams.IOutputStream
	IOutputStream_t2042351338* ____ioutputStream_t2042351338;
	// Cached pointer to Windows.Storage.Streams.IInputStream
	IInputStream_t2821136229* ____iinputStream_t2821136229;
	// Cached pointer to Windows.Media.Core.ITimedMetadataTrackProvider
	ITimedMetadataTrackProvider_t1703961418* ____itimedMetadataTrackProvider_t1703961418;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline ISpeechSynthesisStream_t764091608* get_____ispeechSynthesisStream_t764091608()
	{
		ISpeechSynthesisStream_t764091608* returnValue = ____ispeechSynthesisStream_t764091608;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpeechSynthesisStream_t764091608::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpeechSynthesisStream_t764091608>((&____ispeechSynthesisStream_t764091608), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispeechSynthesisStream_t764091608;
			}
		}
		return returnValue;
	}

	inline IRandomAccessStreamWithContentType_t3296927652* get_____irandomAccessStreamWithContentType_t3296927652()
	{
		IRandomAccessStreamWithContentType_t3296927652* returnValue = ____irandomAccessStreamWithContentType_t3296927652;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IRandomAccessStreamWithContentType_t3296927652::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IRandomAccessStreamWithContentType_t3296927652>((&____irandomAccessStreamWithContentType_t3296927652), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____irandomAccessStreamWithContentType_t3296927652;
			}
		}
		return returnValue;
	}

	inline IContentTypeProvider_t1806097440* get_____icontentTypeProvider_t1806097440()
	{
		IContentTypeProvider_t1806097440* returnValue = ____icontentTypeProvider_t1806097440;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IContentTypeProvider_t1806097440::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IContentTypeProvider_t1806097440>((&____icontentTypeProvider_t1806097440), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icontentTypeProvider_t1806097440;
			}
		}
		return returnValue;
	}

	inline IRandomAccessStream_t2099996051* get_____irandomAccessStream_t2099996051()
	{
		IRandomAccessStream_t2099996051* returnValue = ____irandomAccessStream_t2099996051;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IRandomAccessStream_t2099996051::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IRandomAccessStream_t2099996051>((&____irandomAccessStream_t2099996051), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____irandomAccessStream_t2099996051;
			}
		}
		return returnValue;
	}

	inline IOutputStream_t2042351338* get_____ioutputStream_t2042351338()
	{
		IOutputStream_t2042351338* returnValue = ____ioutputStream_t2042351338;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IOutputStream_t2042351338::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IOutputStream_t2042351338>((&____ioutputStream_t2042351338), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ioutputStream_t2042351338;
			}
		}
		return returnValue;
	}

	inline IInputStream_t2821136229* get_____iinputStream_t2821136229()
	{
		IInputStream_t2821136229* returnValue = ____iinputStream_t2821136229;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IInputStream_t2821136229::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInputStream_t2821136229>((&____iinputStream_t2821136229), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinputStream_t2821136229;
			}
		}
		return returnValue;
	}

	inline ITimedMetadataTrackProvider_t1703961418* get_____itimedMetadataTrackProvider_t1703961418()
	{
		ITimedMetadataTrackProvider_t1703961418* returnValue = ____itimedMetadataTrackProvider_t1703961418;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ITimedMetadataTrackProvider_t1703961418::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ITimedMetadataTrackProvider_t1703961418>((&____itimedMetadataTrackProvider_t1703961418), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____itimedMetadataTrackProvider_t1703961418;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHSYNTHESISSTREAM_T2322339758_H
#ifndef HOSTNAME_T2890034819_H
#define HOSTNAME_T2890034819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.HostName
struct  HostName_t2890034819  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Networking.IHostName
	IHostName_t3179521082* ____ihostName_t3179521082;
	// Cached pointer to Windows.Foundation.IStringable
	IStringable_t1634798504* ____istringable_t1634798504;

public:
	inline IHostName_t3179521082* get_____ihostName_t3179521082()
	{
		IHostName_t3179521082* returnValue = ____ihostName_t3179521082;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IHostName_t3179521082::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IHostName_t3179521082>((&____ihostName_t3179521082), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostName_t3179521082;
			}
		}
		return returnValue;
	}

	inline IStringable_t1634798504* get_____istringable_t1634798504()
	{
		IStringable_t1634798504* returnValue = ____istringable_t1634798504;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStringable_t1634798504::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStringable_t1634798504>((&____istringable_t1634798504), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istringable_t1634798504;
			}
		}
		return returnValue;
	}
};

struct HostName_t2890034819_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.IHostNameFactory
	IHostNameFactory_t2985905689* ____ihostNameFactory_t2985905689;
	// Cached pointer to Windows.Networking.IHostNameStatics
	IHostNameStatics_t664333692* ____ihostNameStatics_t664333692;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.HostName"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IHostNameFactory_t2985905689* get_____ihostNameFactory_t2985905689()
	{
		IHostNameFactory_t2985905689* returnValue = ____ihostNameFactory_t2985905689;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHostNameFactory_t2985905689::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IHostNameFactory_t2985905689>((&____ihostNameFactory_t2985905689), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostNameFactory_t2985905689;
			}
		}
		return returnValue;
	}

	inline IHostNameStatics_t664333692* get_____ihostNameStatics_t664333692()
	{
		IHostNameStatics_t664333692* returnValue = ____ihostNameStatics_t664333692;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHostNameStatics_t664333692::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IHostNameStatics_t664333692>((&____ihostNameStatics_t664333692), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostNameStatics_t664333692;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTNAME_T2890034819_H
#ifndef STORAGEFILE_T1751804116_H
#define STORAGEFILE_T1751804116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.StorageFile
struct  StorageFile_t1751804116  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.IStorageFile
	IStorageFile_t455187485* ____istorageFile_t455187485;
	// Cached pointer to Windows.Storage.Streams.IInputStreamReference
	IInputStreamReference_t980626503* ____iinputStreamReference_t980626503;
	// Cached pointer to Windows.Storage.Streams.IRandomAccessStreamReference
	IRandomAccessStreamReference_t2718546672* ____irandomAccessStreamReference_t2718546672;
	// Cached pointer to Windows.Storage.IStorageItem
	IStorageItem_t3194585767* ____istorageItem_t3194585767;
	// Cached pointer to Windows.Storage.IStorageItemProperties
	IStorageItemProperties_t2031733036* ____istorageItemProperties_t2031733036;
	// Cached pointer to Windows.Storage.IStorageItemProperties2
	IStorageItemProperties2_t3993257882* ____istorageItemProperties2_t3993257882;
	// Cached pointer to Windows.Storage.IStorageItem2
	IStorageItem2_t2827190580* ____istorageItem2_t2827190580;
	// Cached pointer to Windows.Storage.IStorageItemPropertiesWithProvider
	IStorageItemPropertiesWithProvider_t3527078644* ____istorageItemPropertiesWithProvider_t3527078644;
	// Cached pointer to Windows.Storage.IStorageFilePropertiesWithAvailability
	IStorageFilePropertiesWithAvailability_t1554344922* ____istorageFilePropertiesWithAvailability_t1554344922;
	// Cached pointer to Windows.Storage.IStorageFile2
	IStorageFile2_t81501002* ____istorageFile2_t81501002;

public:
	inline IStorageFile_t455187485* get_____istorageFile_t455187485()
	{
		IStorageFile_t455187485* returnValue = ____istorageFile_t455187485;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFile_t455187485::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFile_t455187485>((&____istorageFile_t455187485), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFile_t455187485;
			}
		}
		return returnValue;
	}

	inline IInputStreamReference_t980626503* get_____iinputStreamReference_t980626503()
	{
		IInputStreamReference_t980626503* returnValue = ____iinputStreamReference_t980626503;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IInputStreamReference_t980626503::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInputStreamReference_t980626503>((&____iinputStreamReference_t980626503), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinputStreamReference_t980626503;
			}
		}
		return returnValue;
	}

	inline IRandomAccessStreamReference_t2718546672* get_____irandomAccessStreamReference_t2718546672()
	{
		IRandomAccessStreamReference_t2718546672* returnValue = ____irandomAccessStreamReference_t2718546672;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IRandomAccessStreamReference_t2718546672::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IRandomAccessStreamReference_t2718546672>((&____irandomAccessStreamReference_t2718546672), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____irandomAccessStreamReference_t2718546672;
			}
		}
		return returnValue;
	}

	inline IStorageItem_t3194585767* get_____istorageItem_t3194585767()
	{
		IStorageItem_t3194585767* returnValue = ____istorageItem_t3194585767;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItem_t3194585767::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItem_t3194585767>((&____istorageItem_t3194585767), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItem_t3194585767;
			}
		}
		return returnValue;
	}

	inline IStorageItemProperties_t2031733036* get_____istorageItemProperties_t2031733036()
	{
		IStorageItemProperties_t2031733036* returnValue = ____istorageItemProperties_t2031733036;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemProperties_t2031733036::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemProperties_t2031733036>((&____istorageItemProperties_t2031733036), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemProperties_t2031733036;
			}
		}
		return returnValue;
	}

	inline IStorageItemProperties2_t3993257882* get_____istorageItemProperties2_t3993257882()
	{
		IStorageItemProperties2_t3993257882* returnValue = ____istorageItemProperties2_t3993257882;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemProperties2_t3993257882::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemProperties2_t3993257882>((&____istorageItemProperties2_t3993257882), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemProperties2_t3993257882;
			}
		}
		return returnValue;
	}

	inline IStorageItem2_t2827190580* get_____istorageItem2_t2827190580()
	{
		IStorageItem2_t2827190580* returnValue = ____istorageItem2_t2827190580;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItem2_t2827190580::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItem2_t2827190580>((&____istorageItem2_t2827190580), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItem2_t2827190580;
			}
		}
		return returnValue;
	}

	inline IStorageItemPropertiesWithProvider_t3527078644* get_____istorageItemPropertiesWithProvider_t3527078644()
	{
		IStorageItemPropertiesWithProvider_t3527078644* returnValue = ____istorageItemPropertiesWithProvider_t3527078644;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemPropertiesWithProvider_t3527078644::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemPropertiesWithProvider_t3527078644>((&____istorageItemPropertiesWithProvider_t3527078644), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemPropertiesWithProvider_t3527078644;
			}
		}
		return returnValue;
	}

	inline IStorageFilePropertiesWithAvailability_t1554344922* get_____istorageFilePropertiesWithAvailability_t1554344922()
	{
		IStorageFilePropertiesWithAvailability_t1554344922* returnValue = ____istorageFilePropertiesWithAvailability_t1554344922;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFilePropertiesWithAvailability_t1554344922::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFilePropertiesWithAvailability_t1554344922>((&____istorageFilePropertiesWithAvailability_t1554344922), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFilePropertiesWithAvailability_t1554344922;
			}
		}
		return returnValue;
	}

	inline IStorageFile2_t81501002* get_____istorageFile2_t81501002()
	{
		IStorageFile2_t81501002* returnValue = ____istorageFile2_t81501002;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFile2_t81501002::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFile2_t81501002>((&____istorageFile2_t81501002), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFile2_t81501002;
			}
		}
		return returnValue;
	}
};

struct StorageFile_t1751804116_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IStorageFileStatics
	IStorageFileStatics_t4131808966* ____istorageFileStatics_t4131808966;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.StorageFile"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStorageFileStatics_t4131808966* get_____istorageFileStatics_t4131808966()
	{
		IStorageFileStatics_t4131808966* returnValue = ____istorageFileStatics_t4131808966;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFileStatics_t4131808966::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFileStatics_t4131808966>((&____istorageFileStatics_t4131808966), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFileStatics_t4131808966;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STORAGEFILE_T1751804116_H
#ifndef STORAGEFOLDER_T985480688_H
#define STORAGEFOLDER_T985480688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.StorageFolder
struct  StorageFolder_t985480688  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.IStorageFolder
	IStorageFolder_t2414910357* ____istorageFolder_t2414910357;
	// Cached pointer to Windows.Storage.IStorageItem
	IStorageItem_t3194585767* ____istorageItem_t3194585767;
	// Cached pointer to Windows.Storage.Search.IStorageFolderQueryOperations
	IStorageFolderQueryOperations_t91328000* ____istorageFolderQueryOperations_t91328000;
	// Cached pointer to Windows.Storage.IStorageItemProperties
	IStorageItemProperties_t2031733036* ____istorageItemProperties_t2031733036;
	// Cached pointer to Windows.Storage.IStorageItemProperties2
	IStorageItemProperties2_t3993257882* ____istorageItemProperties2_t3993257882;
	// Cached pointer to Windows.Storage.IStorageItem2
	IStorageItem2_t2827190580* ____istorageItem2_t2827190580;
	// Cached pointer to Windows.Storage.IStorageFolder2
	IStorageFolder2_t3506658410* ____istorageFolder2_t3506658410;
	// Cached pointer to Windows.Storage.IStorageItemPropertiesWithProvider
	IStorageItemPropertiesWithProvider_t3527078644* ____istorageItemPropertiesWithProvider_t3527078644;
	// Cached pointer to Windows.Storage.IStorageFolder3
	IStorageFolder3_t1940574469* ____istorageFolder3_t1940574469;

public:
	inline IStorageFolder_t2414910357* get_____istorageFolder_t2414910357()
	{
		IStorageFolder_t2414910357* returnValue = ____istorageFolder_t2414910357;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFolder_t2414910357::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolder_t2414910357>((&____istorageFolder_t2414910357), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolder_t2414910357;
			}
		}
		return returnValue;
	}

	inline IStorageItem_t3194585767* get_____istorageItem_t3194585767()
	{
		IStorageItem_t3194585767* returnValue = ____istorageItem_t3194585767;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItem_t3194585767::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItem_t3194585767>((&____istorageItem_t3194585767), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItem_t3194585767;
			}
		}
		return returnValue;
	}

	inline IStorageFolderQueryOperations_t91328000* get_____istorageFolderQueryOperations_t91328000()
	{
		IStorageFolderQueryOperations_t91328000* returnValue = ____istorageFolderQueryOperations_t91328000;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFolderQueryOperations_t91328000::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolderQueryOperations_t91328000>((&____istorageFolderQueryOperations_t91328000), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolderQueryOperations_t91328000;
			}
		}
		return returnValue;
	}

	inline IStorageItemProperties_t2031733036* get_____istorageItemProperties_t2031733036()
	{
		IStorageItemProperties_t2031733036* returnValue = ____istorageItemProperties_t2031733036;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemProperties_t2031733036::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemProperties_t2031733036>((&____istorageItemProperties_t2031733036), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemProperties_t2031733036;
			}
		}
		return returnValue;
	}

	inline IStorageItemProperties2_t3993257882* get_____istorageItemProperties2_t3993257882()
	{
		IStorageItemProperties2_t3993257882* returnValue = ____istorageItemProperties2_t3993257882;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemProperties2_t3993257882::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemProperties2_t3993257882>((&____istorageItemProperties2_t3993257882), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemProperties2_t3993257882;
			}
		}
		return returnValue;
	}

	inline IStorageItem2_t2827190580* get_____istorageItem2_t2827190580()
	{
		IStorageItem2_t2827190580* returnValue = ____istorageItem2_t2827190580;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItem2_t2827190580::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItem2_t2827190580>((&____istorageItem2_t2827190580), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItem2_t2827190580;
			}
		}
		return returnValue;
	}

	inline IStorageFolder2_t3506658410* get_____istorageFolder2_t3506658410()
	{
		IStorageFolder2_t3506658410* returnValue = ____istorageFolder2_t3506658410;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFolder2_t3506658410::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolder2_t3506658410>((&____istorageFolder2_t3506658410), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolder2_t3506658410;
			}
		}
		return returnValue;
	}

	inline IStorageItemPropertiesWithProvider_t3527078644* get_____istorageItemPropertiesWithProvider_t3527078644()
	{
		IStorageItemPropertiesWithProvider_t3527078644* returnValue = ____istorageItemPropertiesWithProvider_t3527078644;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemPropertiesWithProvider_t3527078644::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemPropertiesWithProvider_t3527078644>((&____istorageItemPropertiesWithProvider_t3527078644), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemPropertiesWithProvider_t3527078644;
			}
		}
		return returnValue;
	}

	inline IStorageFolder3_t1940574469* get_____istorageFolder3_t1940574469()
	{
		IStorageFolder3_t1940574469* returnValue = ____istorageFolder3_t1940574469;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFolder3_t1940574469::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolder3_t1940574469>((&____istorageFolder3_t1940574469), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolder3_t1940574469;
			}
		}
		return returnValue;
	}
};

struct StorageFolder_t985480688_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IStorageFolderStatics
	IStorageFolderStatics_t333412554* ____istorageFolderStatics_t333412554;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.StorageFolder"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStorageFolderStatics_t333412554* get_____istorageFolderStatics_t333412554()
	{
		IStorageFolderStatics_t333412554* returnValue = ____istorageFolderStatics_t333412554;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFolderStatics_t333412554::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolderStatics_t333412554>((&____istorageFolderStatics_t333412554), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolderStatics_t333412554;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STORAGEFOLDER_T985480688_H
#ifndef DATAREADERLOADOPERATION_T4248924386_H
#define DATAREADERLOADOPERATION_T4248924386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.DataReaderLoadOperation
struct  DataReaderLoadOperation_t4248924386  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Foundation.IAsyncOperation`1<System.UInt32>
	IAsyncOperation_1_t1181249698* ____iasyncOperation_1_t1181249698;
	// Cached pointer to Windows.Foundation.IAsyncInfo
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444;

public:
	inline IAsyncOperation_1_t1181249698* get_____iasyncOperation_1_t1181249698()
	{
		IAsyncOperation_1_t1181249698* returnValue = ____iasyncOperation_1_t1181249698;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAsyncOperation_1_t1181249698::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAsyncOperation_1_t1181249698>((&____iasyncOperation_1_t1181249698), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iasyncOperation_1_t1181249698;
			}
		}
		return returnValue;
	}

	inline IAsyncInfo_t2425795444* get_____iasyncInfo_t2425795444()
	{
		IAsyncInfo_t2425795444* returnValue = ____iasyncInfo_t2425795444;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAsyncInfo_t2425795444::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAsyncInfo_t2425795444>((&____iasyncInfo_t2425795444), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iasyncInfo_t2425795444;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAREADERLOADOPERATION_T4248924386_H
#ifndef DATAWRITERSTOREOPERATION_T1087990177_H
#define DATAWRITERSTOREOPERATION_T1087990177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.DataWriterStoreOperation
struct  DataWriterStoreOperation_t1087990177  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Foundation.IAsyncOperation`1<System.UInt32>
	IAsyncOperation_1_t1181249698* ____iasyncOperation_1_t1181249698;
	// Cached pointer to Windows.Foundation.IAsyncInfo
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444;

public:
	inline IAsyncOperation_1_t1181249698* get_____iasyncOperation_1_t1181249698()
	{
		IAsyncOperation_1_t1181249698* returnValue = ____iasyncOperation_1_t1181249698;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAsyncOperation_1_t1181249698::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAsyncOperation_1_t1181249698>((&____iasyncOperation_1_t1181249698), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iasyncOperation_1_t1181249698;
			}
		}
		return returnValue;
	}

	inline IAsyncInfo_t2425795444* get_____iasyncInfo_t2425795444()
	{
		IAsyncInfo_t2425795444* returnValue = ____iasyncInfo_t2425795444;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAsyncInfo_t2425795444::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAsyncInfo_t2425795444>((&____iasyncInfo_t2425795444), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iasyncInfo_t2425795444;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAWRITERSTOREOPERATION_T1087990177_H
#ifndef PROPERTYCHANGEDEVENTHANDLER_T3818875368_H
#define PROPERTYCHANGEDEVENTHANDLER_T3818875368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Data.PropertyChangedEventHandler
struct  PropertyChangedEventHandler_t3818875368  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.UI.Xaml.Data.PropertyChangedEventHandler
struct IPropertyChangedEventHandler_t3818875368_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, PropertyChangedEventArgs_t3313059048 * ___e1) = 0;
};

#endif // PROPERTYCHANGEDEVENTHANDLER_T3818875368_H
#ifndef NOTIFYCOLLECTIONCHANGEDEVENTARGS_T495045256_H
#define NOTIFYCOLLECTIONCHANGEDEVENTARGS_T495045256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs
struct  NotifyCollectionChangedEventArgs_t495045256  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs
	INotifyCollectionChangedEventArgs_t951239883* ____inotifyCollectionChangedEventArgs_t951239883;

public:
	inline INotifyCollectionChangedEventArgs_t951239883* get_____inotifyCollectionChangedEventArgs_t951239883()
	{
		INotifyCollectionChangedEventArgs_t951239883* returnValue = ____inotifyCollectionChangedEventArgs_t951239883;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(INotifyCollectionChangedEventArgs_t951239883::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<INotifyCollectionChangedEventArgs_t951239883>((&____inotifyCollectionChangedEventArgs_t951239883), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____inotifyCollectionChangedEventArgs_t951239883;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}
};

struct NotifyCollectionChangedEventArgs_t495045256_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgsFactory
	INotifyCollectionChangedEventArgsFactory_t1817199772* ____inotifyCollectionChangedEventArgsFactory_t1817199772;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline INotifyCollectionChangedEventArgsFactory_t1817199772* get_____inotifyCollectionChangedEventArgsFactory_t1817199772()
	{
		INotifyCollectionChangedEventArgsFactory_t1817199772* returnValue = ____inotifyCollectionChangedEventArgsFactory_t1817199772;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(INotifyCollectionChangedEventArgsFactory_t1817199772::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<INotifyCollectionChangedEventArgsFactory_t1817199772>((&____inotifyCollectionChangedEventArgsFactory_t1817199772), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____inotifyCollectionChangedEventArgsFactory_t1817199772;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYCOLLECTIONCHANGEDEVENTARGS_T495045256_H
#ifndef NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T3129157931_H
#define NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T3129157931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.NotifyCollectionChangedEventHandler
struct  NotifyCollectionChangedEventHandler_t3129157931  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.UI.Xaml.Interop.NotifyCollectionChangedEventHandler
struct INotifyCollectionChangedEventHandler_t3129157931_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, NotifyCollectionChangedEventArgs_t9239872 * ___e1) = 0;
};

#endif // NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T3129157931_H
// System.Delegate[]
struct DelegateU5BU5D_t1703627840  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t1188392813 * m_Items[1];

public:
	inline Delegate_t1188392813 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t1188392813 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
// System.Int16[]
struct Int16U5BU5D_t3686840178  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t3326319531  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
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
// System.UInt32[]
struct UInt32U5BU5D_t2770800703  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_t2559172825  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_t1659327989  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_t3413330114  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
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
// System.Boolean[]
struct BooleanU5BU5D_t2897418192  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
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
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Guid[]
struct GuidU5BU5D_t545550574  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Guid_t  m_Items[1];

public:
	inline Guid_t  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Guid_t * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Guid_t  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Guid_t  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Guid_t * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Guid_t  value)
	{
		m_Items[index] = value;
	}
};
// System.DateTimeOffset[]
struct DateTimeOffsetU5BU5D_t3473357058  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DateTimeOffset_t3229287507  m_Items[1];

public:
	inline DateTimeOffset_t3229287507  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTimeOffset_t3229287507 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTimeOffset_t3229287507  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTimeOffset_t3229287507  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTimeOffset_t3229287507 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTimeOffset_t3229287507  value)
	{
		m_Items[index] = value;
	}
};
// System.TimeSpan[]
struct TimeSpanU5BU5D_t4291357516  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TimeSpan_t881159249  m_Items[1];

public:
	inline TimeSpan_t881159249  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeSpan_t881159249 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeSpan_t881159249  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeSpan_t881159249  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeSpan_t881159249 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeSpan_t881159249  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Point[]
struct PointU5BU5D_t724808658  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Point_t4164953539  m_Items[1];

public:
	inline Point_t4164953539  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Point_t4164953539 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Point_t4164953539  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Point_t4164953539  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Point_t4164953539 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Point_t4164953539  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Size[]
struct SizeU5BU5D_t1671914275  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Size_t550917638  m_Items[1];

public:
	inline Size_t550917638  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Size_t550917638 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Size_t550917638  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Size_t550917638  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Size_t550917638 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Size_t550917638  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Rect[]
struct RectU5BU5D_t5657558  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Rect_t2695113487  m_Items[1];

public:
	inline Rect_t2695113487  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rect_t2695113487 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rect_t2695113487  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Rect_t2695113487  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rect_t2695113487 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rect_t2695113487  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.IWwwFormUrlDecoderEntry[]
struct IWwwFormUrlDecoderEntryU5BU5D_t40345143  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

extern "C"  void AsyncActionCompletedHandler_Invoke_m3971840501_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationCompletedHandler_1_Invoke_m274646961_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;

// T System.Runtime.InteropServices.WindowsRuntime.IVectorViewToIReadOnlyListAdapter`1<System.Object>::System.Collections.Generic.IReadOnlyList`1.get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * IVectorViewToIReadOnlyListAdapter_1_System_Collections_Generic_IReadOnlyList_1_get_Item_m196118697_gshared (IVectorViewToIReadOnlyListAdapter_1_t3822803330 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.WindowsRuntime.IInspectableToIReadOnlyCollectionAdapter`1<System.Object>::System.Collections.Generic.IReadOnlyCollection`1.get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t IInspectableToIReadOnlyCollectionAdapter_1_System_Collections_Generic_IReadOnlyCollection_1_get_Count_m485399343_gshared (IInspectableToIReadOnlyCollectionAdapter_1_t1597785236 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<T> System.Runtime.InteropServices.WindowsRuntime.IIterableToIEnumerableAdapter`1<System.Object>::System.Collections.Generic.IEnumerable`1.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IIterableToIEnumerableAdapter_1_System_Collections_Generic_IEnumerable_1_GetEnumerator_m1329154218_gshared (IIterableToIEnumerableAdapter_1_t1083066120 * __this, const RuntimeMethod* method);

// System.Void System.__Il2CppComObject::Finalize()
extern "C" IL2CPP_METHOD_ATTR void __Il2CppComObject_Finalize_m2923638372 (Il2CppComObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::ToLocalTime(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR DateTimeOffset_t3229287507  DateTimeOffset_ToLocalTime_m1141180670 (DateTimeOffset_t3229287507 * __this, bool ___throwOnOverflow0, const RuntimeMethod* method);
// System.String System.Uri::get_OriginalString()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_OriginalString_m3715995233 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m800430703 (Uri_t100236324 * __this, String_t* ___uriString0, const RuntimeMethod* method);
// T System.Runtime.InteropServices.WindowsRuntime.IVectorViewToIReadOnlyListAdapter`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::System.Collections.Generic.IReadOnlyList`1.get_Item(System.Int32)
inline RuntimeObject* IVectorViewToIReadOnlyListAdapter_1_System_Collections_Generic_IReadOnlyList_1_get_Item_m2155834487 (IVectorViewToIReadOnlyListAdapter_1_t3685997136 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (IVectorViewToIReadOnlyListAdapter_1_t3685997136 *, int32_t, const RuntimeMethod*))IVectorViewToIReadOnlyListAdapter_1_System_Collections_Generic_IReadOnlyList_1_get_Item_m196118697_gshared)(__this, ___index0, method);
}
// System.Int32 System.Runtime.InteropServices.WindowsRuntime.IInspectableToIReadOnlyCollectionAdapter`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::System.Collections.Generic.IReadOnlyCollection`1.get_Count()
inline int32_t IInspectableToIReadOnlyCollectionAdapter_1_System_Collections_Generic_IReadOnlyCollection_1_get_Count_m1780114570 (IInspectableToIReadOnlyCollectionAdapter_1_t1460979042 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (IInspectableToIReadOnlyCollectionAdapter_1_t1460979042 *, const RuntimeMethod*))IInspectableToIReadOnlyCollectionAdapter_1_System_Collections_Generic_IReadOnlyCollection_1_get_Count_m485399343_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<T> System.Runtime.InteropServices.WindowsRuntime.IIterableToIEnumerableAdapter`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::System.Collections.Generic.IEnumerable`1.GetEnumerator()
inline RuntimeObject* IIterableToIEnumerableAdapter_1_System_Collections_Generic_IEnumerable_1_GetEnumerator_m3771091130 (IIterableToIEnumerableAdapter_1_t946259926 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (IIterableToIEnumerableAdapter_1_t946259926 *, const RuntimeMethod*))IIterableToIEnumerableAdapter_1_System_Collections_Generic_IEnumerable_1_GetEnumerator_m1329154218_gshared)(__this, method);
}
// System.Collections.IEnumerator System.Runtime.InteropServices.WindowsRuntime.IBindableIterableToIEnumerableAdapter::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IBindableIterableToIEnumerableAdapter_System_Collections_IEnumerable_GetEnumerator_m870846425 (IBindableIterableToIEnumerableAdapter_t3609568223 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.IClosableToIDisposableAdapter::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void IClosableToIDisposableAdapter_System_IDisposable_Dispose_m2997536148 (IClosableToIDisposableAdapter_t3213967014 * __this, const RuntimeMethod* method);
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
// Windows.Devices.Haptics.ISimpleHapticsController
const Il2CppGuid ISimpleHapticsController_t3936202477::IID = { 0x3d577ef9, 0x4cee, 0x11e6, 0xb5, 0x35, 0x0, 0x1b, 0xdc, 0x6, 0xab, 0x3b };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Devices.Haptics.ISimpleHapticsControllerFeedback
const Il2CppGuid ISimpleHapticsControllerFeedback_t2199416581::IID = { 0x3d577ef8, 0x4cee, 0x11e6, 0xb5, 0x35, 0x0, 0x1b, 0xdc, 0x6, 0xab, 0x3b };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IReadOnlyList`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback> Windows.Devices.Haptics.SimpleHapticsController::get_SupportedFeedback()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SimpleHapticsController_get_SupportedFeedback_m1604924433 (SimpleHapticsController_t4220085256 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleHapticsController_get_SupportedFeedback_m1604924433_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ISimpleHapticsController_t3936202477* ____isimpleHapticsController_t3936202477 = __this->get_____isimpleHapticsController_t3936202477();

	// Native function invocation
	IVectorView_1_t252326345* returnValue = NULL;
	const il2cpp_hresult_t hr = ____isimpleHapticsController_t3936202477->ISimpleHapticsController_get_SupportedFeedback_m2326199324(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.Devices.Haptics.SimpleHapticsController::StopFeedback()
extern "C" IL2CPP_METHOD_ATTR void SimpleHapticsController_StopFeedback_m1384273806 (SimpleHapticsController_t4220085256 * __this, const RuntimeMethod* method)
{
	ISimpleHapticsController_t3936202477* ____isimpleHapticsController_t3936202477 = __this->get_____isimpleHapticsController_t3936202477();

	// Native function invocation
	const il2cpp_hresult_t hr = ____isimpleHapticsController_t3936202477->ISimpleHapticsController_StopFeedback_m4220404142();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Devices.Haptics.SimpleHapticsController::SendHapticFeedback(Windows.Devices.Haptics.SimpleHapticsControllerFeedback,System.Double)
extern "C" IL2CPP_METHOD_ATTR void SimpleHapticsController_SendHapticFeedback_m2525203434 (SimpleHapticsController_t4220085256 * __this, SimpleHapticsControllerFeedback_t913461083 * ___feedback0, double ___intensity1, const RuntimeMethod* method)
{
	ISimpleHapticsController_t3936202477* ____isimpleHapticsController_t3936202477 = __this->get_____isimpleHapticsController_t3936202477();

	// Marshaling of parameter '___feedback0' to native representation
	ISimpleHapticsControllerFeedback_t2199416581* ____feedback0_marshaled = NULL;
	if (___feedback0 != NULL)
	{
		____feedback0_marshaled = (___feedback0)->get_____isimpleHapticsControllerFeedback_t2199416581();
	}
	else
	{
		____feedback0_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____isimpleHapticsController_t3936202477->ISimpleHapticsController_SendHapticFeedback_m2591754103(____feedback0_marshaled, ___intensity1);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Devices.Haptics.SimpleHapticsController::SendHapticFeedbackForDuration(Windows.Devices.Haptics.SimpleHapticsControllerFeedback,System.Double,System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR void SimpleHapticsController_SendHapticFeedbackForDuration_m1764078587 (SimpleHapticsController_t4220085256 * __this, SimpleHapticsControllerFeedback_t913461083 * ___feedback0, double ___intensity1, TimeSpan_t881159249  ___playDuration2, const RuntimeMethod* method)
{
	ISimpleHapticsController_t3936202477* ____isimpleHapticsController_t3936202477 = __this->get_____isimpleHapticsController_t3936202477();

	// Marshaling of parameter '___feedback0' to native representation
	ISimpleHapticsControllerFeedback_t2199416581* ____feedback0_marshaled = NULL;
	if (___feedback0 != NULL)
	{
		____feedback0_marshaled = (___feedback0)->get_____isimpleHapticsControllerFeedback_t2199416581();
	}
	else
	{
		____feedback0_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____isimpleHapticsController_t3936202477->ISimpleHapticsController_SendHapticFeedbackForDuration_m1489257265(____feedback0_marshaled, ___intensity1, ___playDuration2);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Devices.Haptics.SimpleHapticsController::Finalize()
extern "C" IL2CPP_METHOD_ATTR void SimpleHapticsController_Finalize_m977583963 (SimpleHapticsController_t4220085256 * __this, const RuntimeMethod* method)
{
	if (__this->____isimpleHapticsController_t3936202477 != NULL)
	{
		__this->____isimpleHapticsController_t3936202477->Release();
	}

	__this->____isimpleHapticsController_t3936202477 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt16 Windows.Devices.Haptics.SimpleHapticsControllerFeedback::get_Waveform()
extern "C" IL2CPP_METHOD_ATTR uint16_t SimpleHapticsControllerFeedback_get_Waveform_m601114278 (SimpleHapticsControllerFeedback_t913461083 * __this, const RuntimeMethod* method)
{
	ISimpleHapticsControllerFeedback_t2199416581* ____isimpleHapticsControllerFeedback_t2199416581 = __this->get_____isimpleHapticsControllerFeedback_t2199416581();

	// Native function invocation
	uint16_t returnValue = 0;
	const il2cpp_hresult_t hr = ____isimpleHapticsControllerFeedback_t2199416581->ISimpleHapticsControllerFeedback_get_Waveform_m1427054036(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Devices.Haptics.SimpleHapticsControllerFeedback::Finalize()
extern "C" IL2CPP_METHOD_ATTR void SimpleHapticsControllerFeedback_Finalize_m595718810 (SimpleHapticsControllerFeedback_t913461083 * __this, const RuntimeMethod* method)
{
	if (__this->____isimpleHapticsControllerFeedback_t2199416581 != NULL)
	{
		__this->____isimpleHapticsControllerFeedback_t2199416581->Release();
	}

	__this->____isimpleHapticsControllerFeedback_t2199416581 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
const Il2CppGuid IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper::IID = { 0xa4ed5c81, 0x76c9, 0x40bd, 0x8b, 0xe6, 0xb1, 0xd9, 0xf, 0xb2, 0xa, 0xe7 };
// Native invoker for Windows.Foundation.AsyncActionCompletedHandler
extern "C"  void AsyncActionCompletedHandler_Invoke_m3971840501_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper* ____asyncActionCompletedHandler_t4142409509 = NULL;
	il2cpp_hresult_t hr = __this->identity->QueryInterface(IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper::IID, reinterpret_cast<void**>(&____asyncActionCompletedHandler_t4142409509));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___asyncInfo0' to native representation
	IAsyncAction_t3072713919* ____asyncInfo0_marshaled = NULL;
	if (___asyncInfo0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___asyncInfo0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___asyncInfo0)->identity->QueryInterface(IAsyncAction_t3072713919::IID, reinterpret_cast<void**>(&____asyncInfo0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____asyncInfo0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncAction_t3072713919>(___asyncInfo0);
		}
	}
	else
	{
		____asyncInfo0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____asyncActionCompletedHandler_t4142409509->Invoke(____asyncInfo0_marshaled, ___asyncStatus1);
	____asyncActionCompletedHandler_t4142409509->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___asyncInfo0' native representation
	if (____asyncInfo0_marshaled != NULL)
	{
		(____asyncInfo0_marshaled)->Release();
		____asyncInfo0_marshaled = NULL;
	}

}
extern "C"  void DelegatePInvokeWrapper_AsyncActionCompletedHandler_t4142409509 (AsyncActionCompletedHandler_t4142409509 * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(IAsyncAction_t3072713919*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___asyncInfo0' to native representation
	IAsyncAction_t3072713919* ____asyncInfo0_marshaled = NULL;
	if (___asyncInfo0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___asyncInfo0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___asyncInfo0)->identity->QueryInterface(IAsyncAction_t3072713919::IID, reinterpret_cast<void**>(&____asyncInfo0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____asyncInfo0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncAction_t3072713919>(___asyncInfo0);
		}
	}
	else
	{
		____asyncInfo0_marshaled = NULL;
	}

	// Native function invocation
	il2cppPInvokeFunc(____asyncInfo0_marshaled, ___asyncStatus1);

	// Marshaling cleanup of parameter '___asyncInfo0' native representation
	if (____asyncInfo0_marshaled != NULL)
	{
		(____asyncInfo0_marshaled)->Release();
		____asyncInfo0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.AsyncActionCompletedHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AsyncActionCompletedHandler__ctor_m570535791 (AsyncActionCompletedHandler_t4142409509 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Windows.Foundation.AsyncActionCompletedHandler::Invoke(Windows.Foundation.IAsyncAction,Windows.Foundation.AsyncStatus)
extern "C" IL2CPP_METHOD_ATTR void AsyncActionCompletedHandler_Invoke_m3971840501 (AsyncActionCompletedHandler_t4142409509 * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___asyncInfo0, ___asyncStatus1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___asyncInfo0, ___asyncStatus1, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< RuntimeObject*, int32_t >::Invoke(targetMethod, targetThis, ___asyncInfo0, ___asyncStatus1);
							else
								GenericVirtActionInvoker2< RuntimeObject*, int32_t >::Invoke(targetMethod, targetThis, ___asyncInfo0, ___asyncStatus1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___asyncInfo0, ___asyncStatus1);
							else
								VirtActionInvoker2< RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___asyncInfo0, ___asyncStatus1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, RuntimeObject*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___asyncInfo0, ___asyncStatus1, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___asyncInfo0, ___asyncStatus1);
							else
								GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___asyncInfo0, ___asyncStatus1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___asyncInfo0, ___asyncStatus1);
							else
								VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___asyncInfo0, ___asyncStatus1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___asyncInfo0, ___asyncStatus1, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___asyncInfo0, ___asyncStatus1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___asyncInfo0, ___asyncStatus1, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< RuntimeObject*, int32_t >::Invoke(targetMethod, targetThis, ___asyncInfo0, ___asyncStatus1);
						else
							GenericVirtActionInvoker2< RuntimeObject*, int32_t >::Invoke(targetMethod, targetThis, ___asyncInfo0, ___asyncStatus1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___asyncInfo0, ___asyncStatus1);
						else
							VirtActionInvoker2< RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___asyncInfo0, ___asyncStatus1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___asyncInfo0, ___asyncStatus1, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___asyncInfo0, ___asyncStatus1);
						else
							GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___asyncInfo0, ___asyncStatus1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___asyncInfo0, ___asyncStatus1);
						else
							VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___asyncInfo0, ___asyncStatus1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___asyncInfo0, ___asyncStatus1, targetMethod);
				}
			}
		}
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
// Windows.Foundation.IAsyncAction
const Il2CppGuid IAsyncAction_t3072713919::IID = { 0x5a648006, 0x843a, 0x4da9, 0x86, 0x5b, 0x9d, 0x26, 0xe5, 0xdf, 0xad, 0x7b };
// System.Void Windows.Foundation.IAsyncAction::put_Completed(Windows.Foundation.AsyncActionCompletedHandler)
extern "C" IL2CPP_METHOD_ATTR void IAsyncAction_put_Completed_m1173868328 (RuntimeObject* __this, AsyncActionCompletedHandler_t4142409509 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncAction_put_Completed_m1173868328_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncAction_t3072713919* ____iasyncAction_t3072713919 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncAction_t3072713919::IID, reinterpret_cast<void**>(&____iasyncAction_t3072713919));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncAction_t3072713919->IAsyncAction_put_Completed_m1173868328(____handler0_marshaled);
	____iasyncAction_t3072713919->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncActionCompletedHandler Windows.Foundation.IAsyncAction::get_Completed()
extern "C" IL2CPP_METHOD_ATTR AsyncActionCompletedHandler_t4142409509 * IAsyncAction_get_Completed_m1835005524 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncAction_get_Completed_m1835005524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncAction_t3072713919* ____iasyncAction_t3072713919 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncAction_t3072713919::IID, reinterpret_cast<void**>(&____iasyncAction_t3072713919));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncAction_t3072713919->IAsyncAction_get_Completed_m1835005524(&returnValue);
	____iasyncAction_t3072713919->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncActionCompletedHandler_t4142409509 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncActionCompletedHandler_t4142409509 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncActionCompletedHandler_t4142409509*)il2cpp_codegen_object_new(AsyncActionCompletedHandler_t4142409509_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncActionCompletedHandler_Invoke_m3971840501_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncActionCompletedHandler_Invoke_m3971840501_RuntimeMethod_var);
			_returnValue_unmarshaled->set_method_3(methodInfo);
			_returnValue_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t1102178620>(returnValue, __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var));
		}
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.Foundation.IAsyncAction::GetResults()
extern "C" IL2CPP_METHOD_ATTR void IAsyncAction_GetResults_m1540137877 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IAsyncAction_t3072713919* ____iasyncAction_t3072713919 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncAction_t3072713919::IID, reinterpret_cast<void**>(&____iasyncAction_t3072713919));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____iasyncAction_t3072713919->IAsyncAction_GetResults_m1540137877();
	____iasyncAction_t3072713919->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncInfo
const Il2CppGuid IAsyncInfo_t2425795444::IID = { 0x36, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
// System.UInt32 Windows.Foundation.IAsyncInfo::get_Id()
extern "C" IL2CPP_METHOD_ATTR uint32_t IAsyncInfo_get_Id_m488151110 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncInfo_t2425795444::IID, reinterpret_cast<void**>(&____iasyncInfo_t2425795444));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____iasyncInfo_t2425795444->IAsyncInfo_get_Id_m488151110(&returnValue);
	____iasyncInfo_t2425795444->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// Windows.Foundation.AsyncStatus Windows.Foundation.IAsyncInfo::get_Status()
extern "C" IL2CPP_METHOD_ATTR int32_t IAsyncInfo_get_Status_m774826579 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncInfo_t2425795444::IID, reinterpret_cast<void**>(&____iasyncInfo_t2425795444));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____iasyncInfo_t2425795444->IAsyncInfo_get_Status_m774826579(&returnValue);
	____iasyncInfo_t2425795444->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Exception Windows.Foundation.IAsyncInfo::get_ErrorCode()
extern "C" IL2CPP_METHOD_ATTR Exception_t * IAsyncInfo_get_ErrorCode_m1014534200 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncInfo_t2425795444::IID, reinterpret_cast<void**>(&____iasyncInfo_t2425795444));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____iasyncInfo_t2425795444->IAsyncInfo_get_ErrorCode_m1014534200(&returnValue);
	____iasyncInfo_t2425795444->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return (returnValue != IL2CPP_S_OK ? reinterpret_cast<Exception_t *>(il2cpp_codegen_com_get_exception(returnValue, false)) : NULL);
}
// System.Void Windows.Foundation.IAsyncInfo::Cancel()
extern "C" IL2CPP_METHOD_ATTR void IAsyncInfo_Cancel_m959568370 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncInfo_t2425795444::IID, reinterpret_cast<void**>(&____iasyncInfo_t2425795444));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____iasyncInfo_t2425795444->IAsyncInfo_Cancel_m959568370();
	____iasyncInfo_t2425795444->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.IAsyncInfo::Close()
extern "C" IL2CPP_METHOD_ATTR void IAsyncInfo_Close_m1968429586 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncInfo_t2425795444::IID, reinterpret_cast<void**>(&____iasyncInfo_t2425795444));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____iasyncInfo_t2425795444->IAsyncInfo_Close_m1968429586();
	____iasyncInfo_t2425795444->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IClosable
const Il2CppGuid IClosable_t326290202::IID = { 0x30d5a829, 0x7fa4, 0x4026, 0x83, 0xbb, 0xd7, 0x5b, 0xae, 0x4e, 0xa9, 0x9e };
// System.Void Windows.Foundation.IClosable::Close()
extern "C" IL2CPP_METHOD_ATTR void IClosable_Close_m649191502 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IClosable_t326290202* ____iclosable_t326290202 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&____iclosable_t326290202));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____iclosable_t326290202->IClosable_Close_m649191502();
	____iclosable_t326290202->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IPropertyValue
const Il2CppGuid IPropertyValue_t3169763779::IID = { 0x4bd682dd, 0x7554, 0x40e9, 0x9a, 0x9b, 0x82, 0x65, 0x4e, 0xde, 0x7e, 0x62 };
// Windows.Foundation.PropertyType Windows.Foundation.IPropertyValue::get_Type()
extern "C" IL2CPP_METHOD_ATTR int32_t IPropertyValue_get_Type_m1307170434 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ipropertyValue_t3169763779->IPropertyValue_get_Type_m1307170434(&returnValue);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.IPropertyValue::get_IsNumericScalar()
extern "C" IL2CPP_METHOD_ATTR bool IPropertyValue_get_IsNumericScalar_m907101182 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ipropertyValue_t3169763779->IPropertyValue_get_IsNumericScalar_m907101182(&returnValue);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Byte Windows.Foundation.IPropertyValue::GetUInt8()
extern "C" IL2CPP_METHOD_ATTR uint8_t IPropertyValue_GetUInt8_m2421114344 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint8_t returnValue = 0;
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetUInt8_m2421114344(&returnValue);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Int16 Windows.Foundation.IPropertyValue::GetInt16()
extern "C" IL2CPP_METHOD_ATTR int16_t IPropertyValue_GetInt16_m4200981392 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int16_t returnValue = 0;
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetInt16_m4200981392(&returnValue);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt16 Windows.Foundation.IPropertyValue::GetUInt16()
extern "C" IL2CPP_METHOD_ATTR uint16_t IPropertyValue_GetUInt16_m4219279933 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint16_t returnValue = 0;
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetUInt16_m4219279933(&returnValue);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Int32 Windows.Foundation.IPropertyValue::GetInt32()
extern "C" IL2CPP_METHOD_ATTR int32_t IPropertyValue_GetInt32_m408686053 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetInt32_m408686053(&returnValue);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.IPropertyValue::GetUInt32()
extern "C" IL2CPP_METHOD_ATTR uint32_t IPropertyValue_GetUInt32_m3159865478 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetUInt32_m3159865478(&returnValue);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Int64 Windows.Foundation.IPropertyValue::GetInt64()
extern "C" IL2CPP_METHOD_ATTR int64_t IPropertyValue_GetInt64_m4226135288 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int64_t returnValue = 0;
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetInt64_m4226135288(&returnValue);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt64 Windows.Foundation.IPropertyValue::GetUInt64()
extern "C" IL2CPP_METHOD_ATTR uint64_t IPropertyValue_GetUInt64_m3309170715 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint64_t returnValue = 0;
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetUInt64_m3309170715(&returnValue);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Single Windows.Foundation.IPropertyValue::GetSingle()
extern "C" IL2CPP_METHOD_ATTR float IPropertyValue_GetSingle_m4273073505 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	float returnValue = 0.0f;
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetSingle_m4273073505(&returnValue);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Double Windows.Foundation.IPropertyValue::GetDouble()
extern "C" IL2CPP_METHOD_ATTR double IPropertyValue_GetDouble_m1492351774 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	double returnValue = 0.0;
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetDouble_m1492351774(&returnValue);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Char Windows.Foundation.IPropertyValue::GetChar16()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar IPropertyValue_GetChar16_m3066416085 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppChar returnValue = 0;
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetChar16_m3066416085(&returnValue);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.IPropertyValue::GetBoolean()
extern "C" IL2CPP_METHOD_ATTR bool IPropertyValue_GetBoolean_m3854624799 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetBoolean_m3854624799(&returnValue);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.String Windows.Foundation.IPropertyValue::GetString()
extern "C" IL2CPP_METHOD_ATTR String_t* IPropertyValue_GetString_m2457071959 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppHString returnValue = NULL;
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetString_m2457071959(&returnValue);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Guid Windows.Foundation.IPropertyValue::GetGuid()
extern "C" IL2CPP_METHOD_ATTR Guid_t  IPropertyValue_GetGuid_m2989795186 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Guid_t  returnValue = {};
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetGuid_m2989795186(&returnValue);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.DateTimeOffset Windows.Foundation.IPropertyValue::GetDateTime()
extern "C" IL2CPP_METHOD_ATTR DateTimeOffset_t3229287507  IPropertyValue_GetDateTime_m4147484372 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPropertyValue_GetDateTime_m4147484372_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	DateTime_t1679451545  returnValue = {};
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetDateTime_m4147484372(&returnValue);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	DateTimeOffset_t3229287507  _returnValue_unmarshaled;
	memset(&_returnValue_unmarshaled, 0, sizeof(_returnValue_unmarshaled));
	if ((returnValue).get_UniversalTime_0() < -504911232000000000 || (returnValue).get_UniversalTime_0() > 2650467743999999999)
	{
		ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(exception, _stringLiteral4286223022, _stringLiteral311452336, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
	}

	DateTimeOffset_t3229287507  _returnValue_unmarshaledStaging;
	DateTime_t3738529785  _returnValue_unmarshaledDateTime;
	_returnValue_unmarshaledDateTime.set_dateData_44((returnValue).get_UniversalTime_0() + 504911232000000000);
	_returnValue_unmarshaledStaging.set_m_dateTime_2(_returnValue_unmarshaledDateTime);
	_returnValue_unmarshaledStaging.set_m_offsetMinutes_3(0);
	_returnValue_unmarshaled = DateTimeOffset_ToLocalTime_m1141180670((&_returnValue_unmarshaledStaging), true, NULL);;

	return _returnValue_unmarshaled;
}
// System.TimeSpan Windows.Foundation.IPropertyValue::GetTimeSpan()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  IPropertyValue_GetTimeSpan_m3208245299 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	TimeSpan_t881159249  returnValue = {};
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetTimeSpan_m3208245299(&returnValue);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// Windows.Foundation.Point Windows.Foundation.IPropertyValue::GetPoint()
extern "C" IL2CPP_METHOD_ATTR Point_t4164953539  IPropertyValue_GetPoint_m2770216139 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Point_t4164953539  returnValue = {};
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetPoint_m2770216139(&returnValue);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// Windows.Foundation.Size Windows.Foundation.IPropertyValue::GetSize()
extern "C" IL2CPP_METHOD_ATTR Size_t550917638  IPropertyValue_GetSize_m1871300471 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Size_t550917638  returnValue = {};
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetSize_m1871300471(&returnValue);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// Windows.Foundation.Rect Windows.Foundation.IPropertyValue::GetRect()
extern "C" IL2CPP_METHOD_ATTR Rect_t2695113487  IPropertyValue_GetRect_m3170973200 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Rect_t2695113487  returnValue = {};
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetRect_m3170973200(&returnValue);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.IPropertyValue::GetUInt8Array(System.Byte[]&)
extern "C" IL2CPP_METHOD_ATTR void IPropertyValue_GetUInt8Array_m1198332942 (RuntimeObject* __this, ByteU5BU5D_t4116647657** ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPropertyValue_GetUInt8Array_m1198332942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_emptyArraySize = 0;
	uint8_t* ____value0_empty = NULL;
	uint32_t* ____value0_marshaledArraySize = &____value0_emptyArraySize;
	uint8_t** ____value0_marshaled = &____value0_empty;

	// Native function invocation
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetUInt8Array_m1198332942(____value0_marshaledArraySize, ____value0_marshaled);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	ByteU5BU5D_t4116647657* _____value0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____value0_marshaled != NULL)
	{
		if (_____value0_marshaled_unmarshaled_dereferenced == NULL)
		{
			_____value0_marshaled_unmarshaled_dereferenced = reinterpret_cast<ByteU5BU5D_t4116647657*>(SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, static_cast<int32_t>(*____value0_marshaledArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_____value0_marshaled_unmarshaled_dereferenced)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(_____value0_marshaled_unmarshaled_dereferenced)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (*____value0_marshaled)[i]);
		}
	}
	*___value0 = _____value0_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___value0' native representation
	if (*____value0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(*____value0_marshaled);
		*____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.IPropertyValue::GetInt16Array(System.Int16[]&)
extern "C" IL2CPP_METHOD_ATTR void IPropertyValue_GetInt16Array_m99541304 (RuntimeObject* __this, Int16U5BU5D_t3686840178** ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPropertyValue_GetInt16Array_m99541304_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_emptyArraySize = 0;
	int16_t* ____value0_empty = NULL;
	uint32_t* ____value0_marshaledArraySize = &____value0_emptyArraySize;
	int16_t** ____value0_marshaled = &____value0_empty;

	// Native function invocation
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetInt16Array_m99541304(____value0_marshaledArraySize, ____value0_marshaled);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	Int16U5BU5D_t3686840178* _____value0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____value0_marshaled != NULL)
	{
		if (_____value0_marshaled_unmarshaled_dereferenced == NULL)
		{
			_____value0_marshaled_unmarshaled_dereferenced = reinterpret_cast<Int16U5BU5D_t3686840178*>(SZArrayNew(Int16U5BU5D_t3686840178_il2cpp_TypeInfo_var, static_cast<int32_t>(*____value0_marshaledArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_____value0_marshaled_unmarshaled_dereferenced)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(_____value0_marshaled_unmarshaled_dereferenced)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (*____value0_marshaled)[i]);
		}
	}
	*___value0 = _____value0_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___value0' native representation
	if (*____value0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(*____value0_marshaled);
		*____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.IPropertyValue::GetUInt16Array(System.UInt16[]&)
extern "C" IL2CPP_METHOD_ATTR void IPropertyValue_GetUInt16Array_m1856918684 (RuntimeObject* __this, UInt16U5BU5D_t3326319531** ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPropertyValue_GetUInt16Array_m1856918684_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_emptyArraySize = 0;
	uint16_t* ____value0_empty = NULL;
	uint32_t* ____value0_marshaledArraySize = &____value0_emptyArraySize;
	uint16_t** ____value0_marshaled = &____value0_empty;

	// Native function invocation
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetUInt16Array_m1856918684(____value0_marshaledArraySize, ____value0_marshaled);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	UInt16U5BU5D_t3326319531* _____value0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____value0_marshaled != NULL)
	{
		if (_____value0_marshaled_unmarshaled_dereferenced == NULL)
		{
			_____value0_marshaled_unmarshaled_dereferenced = reinterpret_cast<UInt16U5BU5D_t3326319531*>(SZArrayNew(UInt16U5BU5D_t3326319531_il2cpp_TypeInfo_var, static_cast<int32_t>(*____value0_marshaledArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_____value0_marshaled_unmarshaled_dereferenced)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(_____value0_marshaled_unmarshaled_dereferenced)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (*____value0_marshaled)[i]);
		}
	}
	*___value0 = _____value0_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___value0' native representation
	if (*____value0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(*____value0_marshaled);
		*____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.IPropertyValue::GetInt32Array(System.Int32[]&)
extern "C" IL2CPP_METHOD_ATTR void IPropertyValue_GetInt32Array_m3011037886 (RuntimeObject* __this, Int32U5BU5D_t385246372** ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPropertyValue_GetInt32Array_m3011037886_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_emptyArraySize = 0;
	int32_t* ____value0_empty = NULL;
	uint32_t* ____value0_marshaledArraySize = &____value0_emptyArraySize;
	int32_t** ____value0_marshaled = &____value0_empty;

	// Native function invocation
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetInt32Array_m3011037886(____value0_marshaledArraySize, ____value0_marshaled);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	Int32U5BU5D_t385246372* _____value0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____value0_marshaled != NULL)
	{
		if (_____value0_marshaled_unmarshaled_dereferenced == NULL)
		{
			_____value0_marshaled_unmarshaled_dereferenced = reinterpret_cast<Int32U5BU5D_t385246372*>(SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, static_cast<int32_t>(*____value0_marshaledArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_____value0_marshaled_unmarshaled_dereferenced)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(_____value0_marshaled_unmarshaled_dereferenced)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (*____value0_marshaled)[i]);
		}
	}
	*___value0 = _____value0_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___value0' native representation
	if (*____value0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(*____value0_marshaled);
		*____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.IPropertyValue::GetUInt32Array(System.UInt32[]&)
extern "C" IL2CPP_METHOD_ATTR void IPropertyValue_GetUInt32Array_m3306404924 (RuntimeObject* __this, UInt32U5BU5D_t2770800703** ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPropertyValue_GetUInt32Array_m3306404924_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_emptyArraySize = 0;
	uint32_t* ____value0_empty = NULL;
	uint32_t* ____value0_marshaledArraySize = &____value0_emptyArraySize;
	uint32_t** ____value0_marshaled = &____value0_empty;

	// Native function invocation
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetUInt32Array_m3306404924(____value0_marshaledArraySize, ____value0_marshaled);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	UInt32U5BU5D_t2770800703* _____value0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____value0_marshaled != NULL)
	{
		if (_____value0_marshaled_unmarshaled_dereferenced == NULL)
		{
			_____value0_marshaled_unmarshaled_dereferenced = reinterpret_cast<UInt32U5BU5D_t2770800703*>(SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, static_cast<int32_t>(*____value0_marshaledArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_____value0_marshaled_unmarshaled_dereferenced)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(_____value0_marshaled_unmarshaled_dereferenced)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (*____value0_marshaled)[i]);
		}
	}
	*___value0 = _____value0_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___value0' native representation
	if (*____value0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(*____value0_marshaled);
		*____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.IPropertyValue::GetInt64Array(System.Int64[]&)
extern "C" IL2CPP_METHOD_ATTR void IPropertyValue_GetInt64Array_m16819376 (RuntimeObject* __this, Int64U5BU5D_t2559172825** ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPropertyValue_GetInt64Array_m16819376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_emptyArraySize = 0;
	int64_t* ____value0_empty = NULL;
	uint32_t* ____value0_marshaledArraySize = &____value0_emptyArraySize;
	int64_t** ____value0_marshaled = &____value0_empty;

	// Native function invocation
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetInt64Array_m16819376(____value0_marshaledArraySize, ____value0_marshaled);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	Int64U5BU5D_t2559172825* _____value0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____value0_marshaled != NULL)
	{
		if (_____value0_marshaled_unmarshaled_dereferenced == NULL)
		{
			_____value0_marshaled_unmarshaled_dereferenced = reinterpret_cast<Int64U5BU5D_t2559172825*>(SZArrayNew(Int64U5BU5D_t2559172825_il2cpp_TypeInfo_var, static_cast<int32_t>(*____value0_marshaledArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_____value0_marshaled_unmarshaled_dereferenced)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(_____value0_marshaled_unmarshaled_dereferenced)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (*____value0_marshaled)[i]);
		}
	}
	*___value0 = _____value0_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___value0' native representation
	if (*____value0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(*____value0_marshaled);
		*____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.IPropertyValue::GetUInt64Array(System.UInt64[]&)
extern "C" IL2CPP_METHOD_ATTR void IPropertyValue_GetUInt64Array_m966722754 (RuntimeObject* __this, UInt64U5BU5D_t1659327989** ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPropertyValue_GetUInt64Array_m966722754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_emptyArraySize = 0;
	uint64_t* ____value0_empty = NULL;
	uint32_t* ____value0_marshaledArraySize = &____value0_emptyArraySize;
	uint64_t** ____value0_marshaled = &____value0_empty;

	// Native function invocation
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetUInt64Array_m966722754(____value0_marshaledArraySize, ____value0_marshaled);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	UInt64U5BU5D_t1659327989* _____value0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____value0_marshaled != NULL)
	{
		if (_____value0_marshaled_unmarshaled_dereferenced == NULL)
		{
			_____value0_marshaled_unmarshaled_dereferenced = reinterpret_cast<UInt64U5BU5D_t1659327989*>(SZArrayNew(UInt64U5BU5D_t1659327989_il2cpp_TypeInfo_var, static_cast<int32_t>(*____value0_marshaledArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_____value0_marshaled_unmarshaled_dereferenced)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(_____value0_marshaled_unmarshaled_dereferenced)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (*____value0_marshaled)[i]);
		}
	}
	*___value0 = _____value0_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___value0' native representation
	if (*____value0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(*____value0_marshaled);
		*____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.IPropertyValue::GetSingleArray(System.Single[]&)
extern "C" IL2CPP_METHOD_ATTR void IPropertyValue_GetSingleArray_m4042538522 (RuntimeObject* __this, SingleU5BU5D_t1444911251** ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPropertyValue_GetSingleArray_m4042538522_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_emptyArraySize = 0;
	float* ____value0_empty = NULL;
	uint32_t* ____value0_marshaledArraySize = &____value0_emptyArraySize;
	float** ____value0_marshaled = &____value0_empty;

	// Native function invocation
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetSingleArray_m4042538522(____value0_marshaledArraySize, ____value0_marshaled);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	SingleU5BU5D_t1444911251* _____value0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____value0_marshaled != NULL)
	{
		if (_____value0_marshaled_unmarshaled_dereferenced == NULL)
		{
			_____value0_marshaled_unmarshaled_dereferenced = reinterpret_cast<SingleU5BU5D_t1444911251*>(SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, static_cast<int32_t>(*____value0_marshaledArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_____value0_marshaled_unmarshaled_dereferenced)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(_____value0_marshaled_unmarshaled_dereferenced)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (*____value0_marshaled)[i]);
		}
	}
	*___value0 = _____value0_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___value0' native representation
	if (*____value0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(*____value0_marshaled);
		*____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.IPropertyValue::GetDoubleArray(System.Double[]&)
extern "C" IL2CPP_METHOD_ATTR void IPropertyValue_GetDoubleArray_m2983062062 (RuntimeObject* __this, DoubleU5BU5D_t3413330114** ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPropertyValue_GetDoubleArray_m2983062062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_emptyArraySize = 0;
	double* ____value0_empty = NULL;
	uint32_t* ____value0_marshaledArraySize = &____value0_emptyArraySize;
	double** ____value0_marshaled = &____value0_empty;

	// Native function invocation
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetDoubleArray_m2983062062(____value0_marshaledArraySize, ____value0_marshaled);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	DoubleU5BU5D_t3413330114* _____value0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____value0_marshaled != NULL)
	{
		if (_____value0_marshaled_unmarshaled_dereferenced == NULL)
		{
			_____value0_marshaled_unmarshaled_dereferenced = reinterpret_cast<DoubleU5BU5D_t3413330114*>(SZArrayNew(DoubleU5BU5D_t3413330114_il2cpp_TypeInfo_var, static_cast<int32_t>(*____value0_marshaledArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_____value0_marshaled_unmarshaled_dereferenced)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(_____value0_marshaled_unmarshaled_dereferenced)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (*____value0_marshaled)[i]);
		}
	}
	*___value0 = _____value0_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___value0' native representation
	if (*____value0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(*____value0_marshaled);
		*____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.IPropertyValue::GetChar16Array(System.Char[]&)
extern "C" IL2CPP_METHOD_ATTR void IPropertyValue_GetChar16Array_m3043815358 (RuntimeObject* __this, CharU5BU5D_t3528271667** ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPropertyValue_GetChar16Array_m3043815358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_emptyArraySize = 0;
	Il2CppChar* ____value0_empty = NULL;
	uint32_t* ____value0_marshaledArraySize = &____value0_emptyArraySize;
	Il2CppChar** ____value0_marshaled = &____value0_empty;

	// Native function invocation
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetChar16Array_m3043815358(____value0_marshaledArraySize, ____value0_marshaled);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	CharU5BU5D_t3528271667* _____value0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____value0_marshaled != NULL)
	{
		if (_____value0_marshaled_unmarshaled_dereferenced == NULL)
		{
			_____value0_marshaled_unmarshaled_dereferenced = reinterpret_cast<CharU5BU5D_t3528271667*>(SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, static_cast<int32_t>(*____value0_marshaledArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_____value0_marshaled_unmarshaled_dereferenced)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(_____value0_marshaled_unmarshaled_dereferenced)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (*____value0_marshaled)[i]);
		}
	}
	*___value0 = _____value0_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___value0' native representation
	if (*____value0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(*____value0_marshaled);
		*____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.IPropertyValue::GetBooleanArray(System.Boolean[]&)
extern "C" IL2CPP_METHOD_ATTR void IPropertyValue_GetBooleanArray_m2519679727 (RuntimeObject* __this, BooleanU5BU5D_t2897418192** ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPropertyValue_GetBooleanArray_m2519679727_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_emptyArraySize = 0;
	bool* ____value0_empty = NULL;
	uint32_t* ____value0_marshaledArraySize = &____value0_emptyArraySize;
	bool** ____value0_marshaled = &____value0_empty;

	// Native function invocation
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetBooleanArray_m2519679727(____value0_marshaledArraySize, ____value0_marshaled);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	BooleanU5BU5D_t2897418192* _____value0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____value0_marshaled != NULL)
	{
		if (_____value0_marshaled_unmarshaled_dereferenced == NULL)
		{
			_____value0_marshaled_unmarshaled_dereferenced = reinterpret_cast<BooleanU5BU5D_t2897418192*>(SZArrayNew(BooleanU5BU5D_t2897418192_il2cpp_TypeInfo_var, static_cast<int32_t>(*____value0_marshaledArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_____value0_marshaled_unmarshaled_dereferenced)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(_____value0_marshaled_unmarshaled_dereferenced)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (*____value0_marshaled)[i]);
		}
	}
	*___value0 = _____value0_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___value0' native representation
	if (*____value0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(*____value0_marshaled);
		*____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.IPropertyValue::GetStringArray(System.String[]&)
extern "C" IL2CPP_METHOD_ATTR void IPropertyValue_GetStringArray_m31925364 (RuntimeObject* __this, StringU5BU5D_t1281789340** ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPropertyValue_GetStringArray_m31925364_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_emptyArraySize = 0;
	Il2CppHString* ____value0_empty = NULL;
	uint32_t* ____value0_marshaledArraySize = &____value0_emptyArraySize;
	Il2CppHString** ____value0_marshaled = &____value0_empty;

	// Native function invocation
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetStringArray_m31925364(____value0_marshaledArraySize, ____value0_marshaled);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	StringU5BU5D_t1281789340* _____value0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____value0_marshaled != NULL)
	{
		if (_____value0_marshaled_unmarshaled_dereferenced == NULL)
		{
			_____value0_marshaled_unmarshaled_dereferenced = reinterpret_cast<StringU5BU5D_t1281789340*>(SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, static_cast<int32_t>(*____value0_marshaledArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_____value0_marshaled_unmarshaled_dereferenced)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			String_t* _____value0_marshaled_i__unmarshaled = NULL;
			_____value0_marshaled_i__unmarshaled = il2cpp_codegen_marshal_hstring_result((*____value0_marshaled)[i]);
			(_____value0_marshaled_unmarshaled_dereferenced)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____value0_marshaled_i__unmarshaled);
		}
	}
	*___value0 = _____value0_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___value0' native representation
	if (*____value0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____value0_marshaled_CleanupLoopCount = (*___value0 != NULL) ? (*___value0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____value0_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free_hstring((*____value0_marshaled)[i]);
			(*____value0_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(*____value0_marshaled);
		*____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.IPropertyValue::GetInspectableArray(System.Object[]&)
extern "C" IL2CPP_METHOD_ATTR void IPropertyValue_GetInspectableArray_m2438646989 (RuntimeObject* __this, ObjectU5BU5D_t2843939325** ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPropertyValue_GetInspectableArray_m2438646989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_emptyArraySize = 0;
	Il2CppIInspectable** ____value0_empty = NULL;
	uint32_t* ____value0_marshaledArraySize = &____value0_emptyArraySize;
	Il2CppIInspectable*** ____value0_marshaled = &____value0_empty;

	// Native function invocation
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetInspectableArray_m2438646989(____value0_marshaledArraySize, ____value0_marshaled);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	ObjectU5BU5D_t2843939325* _____value0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____value0_marshaled != NULL)
	{
		if (_____value0_marshaled_unmarshaled_dereferenced == NULL)
		{
			_____value0_marshaled_unmarshaled_dereferenced = reinterpret_cast<ObjectU5BU5D_t2843939325*>(SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, static_cast<int32_t>(*____value0_marshaledArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_____value0_marshaled_unmarshaled_dereferenced)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			RuntimeObject * _____value0_marshaled_i__unmarshaled = NULL;
			if ((*____value0_marshaled)[i] != NULL)
			{
				_____value0_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>((*____value0_marshaled)[i], Il2CppComObject_il2cpp_TypeInfo_var);
			}
			else
			{
				_____value0_marshaled_i__unmarshaled = NULL;
			}
			(_____value0_marshaled_unmarshaled_dereferenced)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____value0_marshaled_i__unmarshaled);
		}
	}
	*___value0 = _____value0_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___value0' native representation
	if (*____value0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____value0_marshaled_CleanupLoopCount = (*___value0 != NULL) ? (*___value0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____value0_marshaled_CleanupLoopCount); i++)
		{
			if ((*____value0_marshaled)[i] != NULL)
			{
				((*____value0_marshaled)[i])->Release();
				(*____value0_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(*____value0_marshaled);
		*____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.IPropertyValue::GetGuidArray(System.Guid[]&)
extern "C" IL2CPP_METHOD_ATTR void IPropertyValue_GetGuidArray_m3262947336 (RuntimeObject* __this, GuidU5BU5D_t545550574** ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPropertyValue_GetGuidArray_m3262947336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_emptyArraySize = 0;
	Guid_t * ____value0_empty = NULL;
	uint32_t* ____value0_marshaledArraySize = &____value0_emptyArraySize;
	Guid_t ** ____value0_marshaled = &____value0_empty;

	// Native function invocation
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetGuidArray_m3262947336(____value0_marshaledArraySize, ____value0_marshaled);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	GuidU5BU5D_t545550574* _____value0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____value0_marshaled != NULL)
	{
		if (_____value0_marshaled_unmarshaled_dereferenced == NULL)
		{
			_____value0_marshaled_unmarshaled_dereferenced = reinterpret_cast<GuidU5BU5D_t545550574*>(SZArrayNew(GuidU5BU5D_t545550574_il2cpp_TypeInfo_var, static_cast<int32_t>(*____value0_marshaledArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_____value0_marshaled_unmarshaled_dereferenced)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(_____value0_marshaled_unmarshaled_dereferenced)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (*____value0_marshaled)[i]);
		}
	}
	*___value0 = _____value0_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___value0' native representation
	if (*____value0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(*____value0_marshaled);
		*____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.IPropertyValue::GetDateTimeArray(System.DateTimeOffset[]&)
extern "C" IL2CPP_METHOD_ATTR void IPropertyValue_GetDateTimeArray_m2328955250 (RuntimeObject* __this, DateTimeOffsetU5BU5D_t3473357058** ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPropertyValue_GetDateTimeArray_m2328955250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_emptyArraySize = 0;
	DateTime_t1679451545 * ____value0_empty = NULL;
	uint32_t* ____value0_marshaledArraySize = &____value0_emptyArraySize;
	DateTime_t1679451545 ** ____value0_marshaled = &____value0_empty;

	// Native function invocation
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetDateTimeArray_m2328955250(____value0_marshaledArraySize, ____value0_marshaled);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	DateTimeOffsetU5BU5D_t3473357058* _____value0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____value0_marshaled != NULL)
	{
		if (_____value0_marshaled_unmarshaled_dereferenced == NULL)
		{
			_____value0_marshaled_unmarshaled_dereferenced = reinterpret_cast<DateTimeOffsetU5BU5D_t3473357058*>(SZArrayNew(DateTimeOffsetU5BU5D_t3473357058_il2cpp_TypeInfo_var, static_cast<int32_t>(*____value0_marshaledArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_____value0_marshaled_unmarshaled_dereferenced)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			DateTimeOffset_t3229287507  _____value0_marshaled_i__unmarshaled;
			memset(&_____value0_marshaled_i__unmarshaled, 0, sizeof(_____value0_marshaled_i__unmarshaled));
			if (((*____value0_marshaled)[i]).get_UniversalTime_0() < -504911232000000000 || ((*____value0_marshaled)[i]).get_UniversalTime_0() > 2650467743999999999)
			{
				ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
				ArgumentOutOfRangeException__ctor_m282481429(exception, _stringLiteral4286223022, _stringLiteral311452336, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
			}

			DateTimeOffset_t3229287507  _____value0_marshaled_i__unmarshaledStaging;
			DateTime_t3738529785  _____value0_marshaled_i__unmarshaledDateTime;
			_____value0_marshaled_i__unmarshaledDateTime.set_dateData_44(((*____value0_marshaled)[i]).get_UniversalTime_0() + 504911232000000000);
			_____value0_marshaled_i__unmarshaledStaging.set_m_dateTime_2(_____value0_marshaled_i__unmarshaledDateTime);
			_____value0_marshaled_i__unmarshaledStaging.set_m_offsetMinutes_3(0);
			_____value0_marshaled_i__unmarshaled = DateTimeOffset_ToLocalTime_m1141180670((&_____value0_marshaled_i__unmarshaledStaging), true, NULL);;
			(_____value0_marshaled_unmarshaled_dereferenced)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____value0_marshaled_i__unmarshaled);
		}
	}
	*___value0 = _____value0_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___value0' native representation
	if (*____value0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(*____value0_marshaled);
		*____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.IPropertyValue::GetTimeSpanArray(System.TimeSpan[]&)
extern "C" IL2CPP_METHOD_ATTR void IPropertyValue_GetTimeSpanArray_m3967818403 (RuntimeObject* __this, TimeSpanU5BU5D_t4291357516** ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPropertyValue_GetTimeSpanArray_m3967818403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_emptyArraySize = 0;
	TimeSpan_t881159249 * ____value0_empty = NULL;
	uint32_t* ____value0_marshaledArraySize = &____value0_emptyArraySize;
	TimeSpan_t881159249 ** ____value0_marshaled = &____value0_empty;

	// Native function invocation
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetTimeSpanArray_m3967818403(____value0_marshaledArraySize, ____value0_marshaled);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	TimeSpanU5BU5D_t4291357516* _____value0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____value0_marshaled != NULL)
	{
		if (_____value0_marshaled_unmarshaled_dereferenced == NULL)
		{
			_____value0_marshaled_unmarshaled_dereferenced = reinterpret_cast<TimeSpanU5BU5D_t4291357516*>(SZArrayNew(TimeSpanU5BU5D_t4291357516_il2cpp_TypeInfo_var, static_cast<int32_t>(*____value0_marshaledArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_____value0_marshaled_unmarshaled_dereferenced)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(_____value0_marshaled_unmarshaled_dereferenced)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (*____value0_marshaled)[i]);
		}
	}
	*___value0 = _____value0_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___value0' native representation
	if (*____value0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(*____value0_marshaled);
		*____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.IPropertyValue::GetPointArray(Windows.Foundation.Point[]&)
extern "C" IL2CPP_METHOD_ATTR void IPropertyValue_GetPointArray_m2823350989 (RuntimeObject* __this, PointU5BU5D_t724808658** ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPropertyValue_GetPointArray_m2823350989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_emptyArraySize = 0;
	Point_t4164953539 * ____value0_empty = NULL;
	uint32_t* ____value0_marshaledArraySize = &____value0_emptyArraySize;
	Point_t4164953539 ** ____value0_marshaled = &____value0_empty;

	// Native function invocation
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetPointArray_m2823350989(____value0_marshaledArraySize, ____value0_marshaled);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	PointU5BU5D_t724808658* _____value0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____value0_marshaled != NULL)
	{
		if (_____value0_marshaled_unmarshaled_dereferenced == NULL)
		{
			_____value0_marshaled_unmarshaled_dereferenced = reinterpret_cast<PointU5BU5D_t724808658*>(SZArrayNew(PointU5BU5D_t724808658_il2cpp_TypeInfo_var, static_cast<int32_t>(*____value0_marshaledArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_____value0_marshaled_unmarshaled_dereferenced)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(_____value0_marshaled_unmarshaled_dereferenced)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (*____value0_marshaled)[i]);
		}
	}
	*___value0 = _____value0_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___value0' native representation
	if (*____value0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(*____value0_marshaled);
		*____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.IPropertyValue::GetSizeArray(Windows.Foundation.Size[]&)
extern "C" IL2CPP_METHOD_ATTR void IPropertyValue_GetSizeArray_m1001766604 (RuntimeObject* __this, SizeU5BU5D_t1671914275** ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPropertyValue_GetSizeArray_m1001766604_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_emptyArraySize = 0;
	Size_t550917638 * ____value0_empty = NULL;
	uint32_t* ____value0_marshaledArraySize = &____value0_emptyArraySize;
	Size_t550917638 ** ____value0_marshaled = &____value0_empty;

	// Native function invocation
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetSizeArray_m1001766604(____value0_marshaledArraySize, ____value0_marshaled);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	SizeU5BU5D_t1671914275* _____value0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____value0_marshaled != NULL)
	{
		if (_____value0_marshaled_unmarshaled_dereferenced == NULL)
		{
			_____value0_marshaled_unmarshaled_dereferenced = reinterpret_cast<SizeU5BU5D_t1671914275*>(SZArrayNew(SizeU5BU5D_t1671914275_il2cpp_TypeInfo_var, static_cast<int32_t>(*____value0_marshaledArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_____value0_marshaled_unmarshaled_dereferenced)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(_____value0_marshaled_unmarshaled_dereferenced)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (*____value0_marshaled)[i]);
		}
	}
	*___value0 = _____value0_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___value0' native representation
	if (*____value0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(*____value0_marshaled);
		*____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.IPropertyValue::GetRectArray(Windows.Foundation.Rect[]&)
extern "C" IL2CPP_METHOD_ATTR void IPropertyValue_GetRectArray_m3897171591 (RuntimeObject* __this, RectU5BU5D_t5657558** ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPropertyValue_GetRectArray_m3897171591_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPropertyValue_t3169763779* ____ipropertyValue_t3169763779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IPropertyValue_t3169763779::IID, reinterpret_cast<void**>(&____ipropertyValue_t3169763779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_emptyArraySize = 0;
	Rect_t2695113487 * ____value0_empty = NULL;
	uint32_t* ____value0_marshaledArraySize = &____value0_emptyArraySize;
	Rect_t2695113487 ** ____value0_marshaled = &____value0_empty;

	// Native function invocation
	hr = ____ipropertyValue_t3169763779->IPropertyValue_GetRectArray_m3897171591(____value0_marshaledArraySize, ____value0_marshaled);
	____ipropertyValue_t3169763779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	RectU5BU5D_t5657558* _____value0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____value0_marshaled != NULL)
	{
		if (_____value0_marshaled_unmarshaled_dereferenced == NULL)
		{
			_____value0_marshaled_unmarshaled_dereferenced = reinterpret_cast<RectU5BU5D_t5657558*>(SZArrayNew(RectU5BU5D_t5657558_il2cpp_TypeInfo_var, static_cast<int32_t>(*____value0_marshaledArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_____value0_marshaled_unmarshaled_dereferenced)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(_____value0_marshaled_unmarshaled_dereferenced)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (*____value0_marshaled)[i]);
		}
	}
	*___value0 = _____value0_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___value0' native representation
	if (*____value0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(*____value0_marshaled);
		*____value0_marshaled = NULL;
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
// Windows.Foundation.IStringable
const Il2CppGuid IStringable_t1634798504::IID = { 0x96369f54, 0x8eb6, 0x48f0, 0xab, 0xce, 0xc1, 0xb2, 0x11, 0xe6, 0x27, 0xc3 };
// System.String Windows.Foundation.IStringable::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* IStringable_ToString_m698137009 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IStringable_t1634798504* ____istringable_t1634798504 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IStringable_t1634798504::IID, reinterpret_cast<void**>(&____istringable_t1634798504));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppHString returnValue = NULL;
	hr = ____istringable_t1634798504->IStringable_ToString_m698137009(&returnValue);
	____istringable_t1634798504->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IUriEscapeStatics
const Il2CppGuid IUriEscapeStatics_t1418340874::IID = { 0xc1d432ba, 0xc824, 0x4452, 0xa7, 0xfd, 0x51, 0x2b, 0xc3, 0xbb, 0xe9, 0xa1 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IUriRuntimeClass
const Il2CppGuid IUriRuntimeClass_t921050115::IID = { 0x9e365e57, 0x48b2, 0x4160, 0x95, 0x6f, 0xc7, 0x38, 0x51, 0x20, 0xbb, 0xfc };
// System.String Windows.Foundation.IUriRuntimeClass::get_RawUri()
extern "C" IL2CPP_METHOD_ATTR String_t* IUriRuntimeClass_get_RawUri_m1303737506 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IUriRuntimeClass_t921050115::IID, reinterpret_cast<void**>(&____iuriRuntimeClass_t921050115));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppHString returnValue = NULL;
	hr = ____iuriRuntimeClass_t921050115->IUriRuntimeClass_get_RawUri_m1303737506(&returnValue);
	____iuriRuntimeClass_t921050115->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IUriRuntimeClassFactory
const Il2CppGuid IUriRuntimeClassFactory_t1786313621::IID = { 0x44a9796f, 0x723e, 0x4fdf, 0xa2, 0x18, 0x3, 0x3e, 0x75, 0xb0, 0xc0, 0x84 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IUriRuntimeClassWithAbsoluteCanonicalUri
const Il2CppGuid IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788::IID = { 0x758d9661, 0x221c, 0x480f, 0xa3, 0x39, 0x50, 0x65, 0x66, 0x73, 0xf4, 0x6f };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IWwwFormUrlDecoderEntry
const Il2CppGuid IWwwFormUrlDecoderEntry_t2943299970::IID = { 0x125e7431, 0xf678, 0x4e8e, 0xb6, 0x70, 0x20, 0xa9, 0xb0, 0x6c, 0x51, 0x2d };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IWwwFormUrlDecoderRuntimeClass
const Il2CppGuid IWwwFormUrlDecoderRuntimeClass_t497020701::IID = { 0xd45a0451, 0xf225, 0x4542, 0x92, 0x96, 0xe, 0x1d, 0xf5, 0xd2, 0x54, 0xdf };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IWwwFormUrlDecoderRuntimeClassFactory
const Il2CppGuid IWwwFormUrlDecoderRuntimeClassFactory_t1825479388::IID = { 0x5b8c6b3d, 0x24ae, 0x41b5, 0xa1, 0xbf, 0xf0, 0xc3, 0xd5, 0x44, 0x84, 0x5b };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.Metadata.ActivatableAttribute::.ctor(System.UInt32,System.String)
extern "C" IL2CPP_METHOD_ATTR void ActivatableAttribute__ctor_m3958558790 (ActivatableAttribute_t4098936231 * __this, uint32_t ___version0, String_t* ___type1, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.ActivatableAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
}
// System.Void Windows.Foundation.Metadata.ActivatableAttribute::.ctor(System.Type,System.UInt32,System.String)
extern "C" IL2CPP_METHOD_ATTR void ActivatableAttribute__ctor_m1814080413 (ActivatableAttribute_t4098936231 * __this, Type_t * ___type0, uint32_t ___version1, String_t* ___contractName2, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.ActivatableAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.Metadata.AllowMultipleAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AllowMultipleAttribute__ctor_m3015640900 (AllowMultipleAttribute_t3314144467 * __this, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.AllowMultipleAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.Metadata.ApiContractAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ApiContractAttribute__ctor_m771867443 (ApiContractAttribute_t3160257459 * __this, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.ApiContractAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Windows.Foundation.Metadata.ApiInformation::IsApiContractPresent(System.String,System.UInt16)
extern "C" IL2CPP_METHOD_ATTR bool ApiInformation_IsApiContractPresent_m1236186278 (RuntimeObject * __this /* static, unused */, String_t* ___contractName0, uint16_t ___majorVersion1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ApiInformation_IsApiContractPresent_m1236186278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IApiInformationStatics_t1368946868* ____iapiInformationStatics_t1368946868 = ((ApiInformation_t812843232_StaticFields*)ApiInformation_t812843232_il2cpp_TypeInfo_var->static_fields)->get_____iapiInformationStatics_t1368946868();

	// Marshaling of parameter '___contractName0' to native representation
	Il2CppHString ____contractName0_marshaled = NULL;
	if (___contractName0 == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("contractName"), NULL, NULL);
	}

	DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___contractName0NativeView, ___contractName0);
	il2cpp::utils::Il2CppHStringReference ___contractName0HStringReference(___contractName0NativeView);
	____contractName0_marshaled = ___contractName0HStringReference;

	// Native function invocation
	bool returnValue = 0;
	const il2cpp_hresult_t hr = ____iapiInformationStatics_t1368946868->IApiInformationStatics_IsApiContractPresent_m681551510(____contractName0_marshaled, ___majorVersion1, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Metadata.ApiInformation::Finalize()
extern "C" IL2CPP_METHOD_ATTR void ApiInformation_Finalize_m2777270363 (ApiInformation_t812843232 * __this, const RuntimeMethod* method)
{
	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
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
// System.Void Windows.Foundation.Metadata.AttributeUsageAttribute::.ctor(System.AttributeTargets)
extern "C" IL2CPP_METHOD_ATTR void AttributeUsageAttribute__ctor_m2020062718 (AttributeUsageAttribute_t1422441135 * __this, int32_t ___A_00, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.AttributeUsageAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.Metadata.ComposableAttribute::.ctor(System.Type,Windows.Foundation.Metadata.CompositionType,System.UInt32,System.String)
extern "C" IL2CPP_METHOD_ATTR void ComposableAttribute__ctor_m4181506481 (ComposableAttribute_t2299833422 * __this, Type_t * ___type0, int32_t ___compositionType1, uint32_t ___version2, String_t* ___contract3, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.ComposableAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
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
// System.Void Windows.Foundation.Metadata.ContractVersionAttribute::.ctor(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ContractVersionAttribute__ctor_m2593301479 (ContractVersionAttribute_t1666784187 * __this, uint32_t ___version0, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.ContractVersionAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
}
// System.Void Windows.Foundation.Metadata.ContractVersionAttribute::.ctor(System.Type,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ContractVersionAttribute__ctor_m3002839738 (ContractVersionAttribute_t1666784187 * __this, Type_t * ___contract0, uint32_t ___version1, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.ContractVersionAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
}
// System.Void Windows.Foundation.Metadata.ContractVersionAttribute::.ctor(System.String,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ContractVersionAttribute__ctor_m1731380394 (ContractVersionAttribute_t1666784187 * __this, String_t* ___contract0, uint32_t ___version1, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.ContractVersionAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.Metadata.DefaultAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DefaultAttribute__ctor_m455390736 (DefaultAttribute_t1509828399 * __this, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.DefaultAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.Metadata.DefaultOverloadAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DefaultOverloadAttribute__ctor_m975805268 (DefaultOverloadAttribute_t2513707992 * __this, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.DefaultOverloadAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.Metadata.DualApiPartitionAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DualApiPartitionAttribute__ctor_m3662907170 (DualApiPartitionAttribute_t1301304994 * __this, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.DualApiPartitionAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.Metadata.ExclusiveToAttribute::.ctor(System.Type)
extern "C" IL2CPP_METHOD_ATTR void ExclusiveToAttribute__ctor_m1708863126 (ExclusiveToAttribute_t3124418018 * __this, Type_t * ___typeName0, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.ExclusiveToAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.Metadata.GuidAttribute::.ctor(System.UInt32,System.UInt16,System.UInt16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void GuidAttribute__ctor_m8795571 (GuidAttribute_t2682955351 * __this, uint32_t ___a0, uint16_t ___b1, uint16_t ___c2, uint8_t ___d3, uint8_t ___e4, uint8_t ___f5, uint8_t ___g6, uint8_t ___h7, uint8_t ___i8, uint8_t ___j9, uint8_t ___k10, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.GuidAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Metadata.IApiInformationStatics
const Il2CppGuid IApiInformationStatics_t1368946868::IID = { 0x997439fe, 0xf681, 0x4a11, 0xb4, 0x16, 0xc1, 0x3a, 0x47, 0xe8, 0xba, 0x36 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.Metadata.LengthIsAttribute::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void LengthIsAttribute__ctor_m2679400132 (LengthIsAttribute_t613149204 * __this, int32_t ___indexLengthParameter0, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.LengthIsAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.Metadata.MarshalingBehaviorAttribute::.ctor(Windows.Foundation.Metadata.MarshalingType)
extern "C" IL2CPP_METHOD_ATTR void MarshalingBehaviorAttribute__ctor_m300107013 (MarshalingBehaviorAttribute_t570737848 * __this, int32_t ___behavior0, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.MarshalingBehaviorAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
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
// System.Void Windows.Foundation.Metadata.MuseAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MuseAttribute__ctor_m2379177383 (MuseAttribute_t3401286167 * __this, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.MuseAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.Metadata.OverloadAttribute::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void OverloadAttribute__ctor_m735573505 (OverloadAttribute_t2178303703 * __this, String_t* ___method0, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.OverloadAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.Metadata.RemoteAsyncAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RemoteAsyncAttribute__ctor_m1354873031 (RemoteAsyncAttribute_t33115854 * __this, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.RemoteAsyncAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.Metadata.StaticAttribute::.ctor(System.Type,System.UInt32,System.String)
extern "C" IL2CPP_METHOD_ATTR void StaticAttribute__ctor_m3256085414 (StaticAttribute_t2174868556 * __this, Type_t * ___type0, uint32_t ___version1, String_t* ___contractName2, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.StaticAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.Metadata.ThreadingAttribute::.ctor(Windows.Foundation.Metadata.ThreadingModel)
extern "C" IL2CPP_METHOD_ATTR void ThreadingAttribute__ctor_m296613624 (ThreadingAttribute_t685453408 * __this, int32_t ___model0, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.ThreadingAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
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
// System.Void Windows.Foundation.Metadata.WebHostHiddenAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WebHostHiddenAttribute__ctor_m4294271028 (WebHostHiddenAttribute_t2021537596 * __this, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Metadata.WebHostHiddenAttribute'. Windows Runtime attribute types are not constructable."), NULL, NULL);
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
// System.Void Windows.Foundation.Uri::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m1500814017 (Uri_t952691556 * __this, String_t* ___uri0, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Uri'. It has no managed representation. Instead, use 'System.Uri'."), NULL, NULL);
}
// System.Void Windows.Foundation.Uri::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m2629534413 (Uri_t952691556 * __this, String_t* ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.Foundation.Uri'. It has no managed representation. Instead, use 'System.Uri'."), NULL, NULL);
}
// System.String Windows.Foundation.Uri::get_AbsoluteUri()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_m1149474527 (Uri_t952691556 * __this, const RuntimeMethod* method)
{
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115 = __this->get_____iuriRuntimeClass_t921050115();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____iuriRuntimeClass_t921050115->IUriRuntimeClass_get_AbsoluteUri_m1802109736(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Windows.Foundation.Uri::get_DisplayUri()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_DisplayUri_m1884023026 (Uri_t952691556 * __this, const RuntimeMethod* method)
{
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115 = __this->get_____iuriRuntimeClass_t921050115();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____iuriRuntimeClass_t921050115->IUriRuntimeClass_get_DisplayUri_m486834635(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Windows.Foundation.Uri::get_Domain()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Domain_m1320851588 (Uri_t952691556 * __this, const RuntimeMethod* method)
{
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115 = __this->get_____iuriRuntimeClass_t921050115();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____iuriRuntimeClass_t921050115->IUriRuntimeClass_get_Domain_m2557921454(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Windows.Foundation.Uri::get_Extension()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Extension_m3193366467 (Uri_t952691556 * __this, const RuntimeMethod* method)
{
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115 = __this->get_____iuriRuntimeClass_t921050115();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____iuriRuntimeClass_t921050115->IUriRuntimeClass_get_Extension_m3106685299(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Windows.Foundation.Uri::get_Fragment()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Fragment_m824465675 (Uri_t952691556 * __this, const RuntimeMethod* method)
{
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115 = __this->get_____iuriRuntimeClass_t921050115();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____iuriRuntimeClass_t921050115->IUriRuntimeClass_get_Fragment_m2886153123(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Windows.Foundation.Uri::get_Host()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Host_m2732132763 (Uri_t952691556 * __this, const RuntimeMethod* method)
{
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115 = __this->get_____iuriRuntimeClass_t921050115();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____iuriRuntimeClass_t921050115->IUriRuntimeClass_get_Host_m971230776(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Windows.Foundation.Uri::get_Password()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Password_m713301268 (Uri_t952691556 * __this, const RuntimeMethod* method)
{
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115 = __this->get_____iuriRuntimeClass_t921050115();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____iuriRuntimeClass_t921050115->IUriRuntimeClass_get_Password_m4039608124(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Windows.Foundation.Uri::get_Path()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Path_m3553198905 (Uri_t952691556 * __this, const RuntimeMethod* method)
{
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115 = __this->get_____iuriRuntimeClass_t921050115();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____iuriRuntimeClass_t921050115->IUriRuntimeClass_get_Path_m1403698734(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Windows.Foundation.Uri::get_Query()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Query_m4283723942 (Uri_t952691556 * __this, const RuntimeMethod* method)
{
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115 = __this->get_____iuriRuntimeClass_t921050115();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____iuriRuntimeClass_t921050115->IUriRuntimeClass_get_Query_m49598513(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// Windows.Foundation.WwwFormUrlDecoder Windows.Foundation.Uri::get_QueryParsed()
extern "C" IL2CPP_METHOD_ATTR WwwFormUrlDecoder_t4136411681 * Uri_get_QueryParsed_m2466756889 (Uri_t952691556 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_get_QueryParsed_m2466756889_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115 = __this->get_____iuriRuntimeClass_t921050115();

	// Native function invocation
	IWwwFormUrlDecoderRuntimeClass_t497020701* returnValue = NULL;
	const il2cpp_hresult_t hr = ____iuriRuntimeClass_t921050115->IUriRuntimeClass_get_QueryParsed_m1061304731(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	WwwFormUrlDecoder_t4136411681 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<WwwFormUrlDecoder_t4136411681>(returnValue, WwwFormUrlDecoder_t4136411681_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.String Windows.Foundation.Uri::get_RawUri()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_RawUri_m2871196436 (Uri_t952691556 * __this, const RuntimeMethod* method)
{
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115 = __this->get_____iuriRuntimeClass_t921050115();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____iuriRuntimeClass_t921050115->IUriRuntimeClass_get_RawUri_m1303737506(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Windows.Foundation.Uri::get_SchemeName()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_SchemeName_m3304024669 (Uri_t952691556 * __this, const RuntimeMethod* method)
{
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115 = __this->get_____iuriRuntimeClass_t921050115();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____iuriRuntimeClass_t921050115->IUriRuntimeClass_get_SchemeName_m1162666486(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Windows.Foundation.Uri::get_UserName()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_UserName_m3919124211 (Uri_t952691556 * __this, const RuntimeMethod* method)
{
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115 = __this->get_____iuriRuntimeClass_t921050115();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____iuriRuntimeClass_t921050115->IUriRuntimeClass_get_UserName_m1956155983(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Int32 Windows.Foundation.Uri::get_Port()
extern "C" IL2CPP_METHOD_ATTR int32_t Uri_get_Port_m2480797243 (Uri_t952691556 * __this, const RuntimeMethod* method)
{
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115 = __this->get_____iuriRuntimeClass_t921050115();

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____iuriRuntimeClass_t921050115->IUriRuntimeClass_get_Port_m834193881(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Uri::get_Suspicious()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_Suspicious_m443736115 (Uri_t952691556 * __this, const RuntimeMethod* method)
{
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115 = __this->get_____iuriRuntimeClass_t921050115();

	// Native function invocation
	bool returnValue = 0;
	const il2cpp_hresult_t hr = ____iuriRuntimeClass_t921050115->IUriRuntimeClass_get_Suspicious_m1231824283(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Uri::Equals(System.Uri)
extern "C" IL2CPP_METHOD_ATTR bool Uri_Equals_m2605219813 (Uri_t952691556 * __this, Uri_t100236324 * ___pUri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_Equals_m2605219813_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115 = __this->get_____iuriRuntimeClass_t921050115();

	// Marshaling of parameter '___pUri0' to native representation
	IUriRuntimeClass_t921050115* ____pUri0_marshaled = NULL;
	if (___pUri0 != NULL)
	{
		String_t* ___pUri0AsString = Uri_get_OriginalString_m3715995233(___pUri0, NULL);
		Il2CppHString ____pUri0AsString_marshaled = NULL;
		if (___pUri0AsString == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("___pUri0AsString"), NULL, NULL);
		}

		DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___pUri0AsStringNativeView, ___pUri0AsString);
		il2cpp::utils::Il2CppHStringReference ___pUri0AsStringHStringReference(___pUri0AsStringNativeView);
		____pUri0AsString_marshaled = ___pUri0AsStringHStringReference;
		il2cpp_hresult_t hr = ((Uri_t952691556_StaticFields*)Uri_t952691556_il2cpp_TypeInfo_var->static_fields)->get_____iuriRuntimeClassFactory_t1786313621()->IUriRuntimeClassFactory_CreateUri_m1347622952(____pUri0AsString_marshaled, (&____pUri0_marshaled));
		il2cpp_codegen_com_raise_exception_if_failed(hr, false);
	}
	else
	{
		____pUri0_marshaled = NULL;
	}

	// Native function invocation
	bool returnValue = 0;
	const il2cpp_hresult_t hr = ____iuriRuntimeClass_t921050115->IUriRuntimeClass_Equals_m641048832(____pUri0_marshaled, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___pUri0' native representation
	if (____pUri0_marshaled != NULL)
	{
		(____pUri0_marshaled)->Release();
		____pUri0_marshaled = NULL;
	}

	return returnValue;
}
// System.Uri Windows.Foundation.Uri::CombineUri(System.String)
extern "C" IL2CPP_METHOD_ATTR Uri_t100236324 * Uri_CombineUri_m4118393707 (Uri_t952691556 * __this, String_t* ___relativeUri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_CombineUri_m4118393707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115 = __this->get_____iuriRuntimeClass_t921050115();

	// Marshaling of parameter '___relativeUri0' to native representation
	Il2CppHString ____relativeUri0_marshaled = NULL;
	if (___relativeUri0 == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("relativeUri"), NULL, NULL);
	}

	DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___relativeUri0NativeView, ___relativeUri0);
	il2cpp::utils::Il2CppHStringReference ___relativeUri0HStringReference(___relativeUri0NativeView);
	____relativeUri0_marshaled = ___relativeUri0HStringReference;

	// Native function invocation
	IUriRuntimeClass_t921050115* returnValue = NULL;
	const il2cpp_hresult_t hr = ____iuriRuntimeClass_t921050115->IUriRuntimeClass_CombineUri_m511350015(____relativeUri0_marshaled, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	Uri_t100236324 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppHString __returnValue_unmarshaledAsString_marshaled = NULL;
		il2cpp_hresult_t hr = (returnValue)->IUriRuntimeClass_get_RawUri_m1303737506((&__returnValue_unmarshaledAsString_marshaled));
		il2cpp_codegen_com_raise_exception_if_failed(hr, false);

		String_t* ___returnValue_unmarshaledAsString_marshaled_unmarshaled = NULL;
		___returnValue_unmarshaledAsString_marshaled_unmarshaled = il2cpp_codegen_marshal_hstring_result(__returnValue_unmarshaledAsString_marshaled);
		il2cpp_codegen_marshal_free_hstring(__returnValue_unmarshaledAsString_marshaled);
		__returnValue_unmarshaledAsString_marshaled = NULL;

		Uri_t100236324 * _returnValue_unmarshaledTemp = (Uri_t100236324*)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m800430703(_returnValue_unmarshaledTemp, ___returnValue_unmarshaledAsString_marshaled_unmarshaled, NULL);
		_returnValue_unmarshaled = _returnValue_unmarshaledTemp;
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.String Windows.Foundation.Uri::get_AbsoluteCanonicalUri()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteCanonicalUri_m3924946132 (Uri_t952691556 * __this, const RuntimeMethod* method)
{
	IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788* ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788 = __this->get_____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788->IUriRuntimeClassWithAbsoluteCanonicalUri_get_AbsoluteCanonicalUri_m576710761(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Windows.Foundation.Uri::get_DisplayIri()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_DisplayIri_m1884023142 (Uri_t952691556 * __this, const RuntimeMethod* method)
{
	IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788* ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788 = __this->get_____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788->IUriRuntimeClassWithAbsoluteCanonicalUri_get_DisplayIri_m2106498432(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Windows.Foundation.Uri::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_ToString_m1713849593 (Uri_t952691556 * __this, const RuntimeMethod* method)
{
	IStringable_t1634798504* ____istringable_t1634798504 = __this->get_____istringable_t1634798504();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____istringable_t1634798504->IStringable_ToString_m698137009(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Windows.Foundation.Uri::UnescapeComponent(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_UnescapeComponent_m3954444738 (RuntimeObject * __this /* static, unused */, String_t* ___toUnescape0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_UnescapeComponent_m3954444738_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IUriEscapeStatics_t1418340874* ____iuriEscapeStatics_t1418340874 = ((Uri_t952691556_StaticFields*)Uri_t952691556_il2cpp_TypeInfo_var->static_fields)->get_____iuriEscapeStatics_t1418340874();

	// Marshaling of parameter '___toUnescape0' to native representation
	Il2CppHString ____toUnescape0_marshaled = NULL;
	if (___toUnescape0 == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("toUnescape"), NULL, NULL);
	}

	DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___toUnescape0NativeView, ___toUnescape0);
	il2cpp::utils::Il2CppHStringReference ___toUnescape0HStringReference(___toUnescape0NativeView);
	____toUnescape0_marshaled = ___toUnescape0HStringReference;

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____iuriEscapeStatics_t1418340874->IUriEscapeStatics_UnescapeComponent_m4034034788(____toUnescape0_marshaled, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Windows.Foundation.Uri::EscapeComponent(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_EscapeComponent_m3992830692 (RuntimeObject * __this /* static, unused */, String_t* ___toEscape0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uri_EscapeComponent_m3992830692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IUriEscapeStatics_t1418340874* ____iuriEscapeStatics_t1418340874 = ((Uri_t952691556_StaticFields*)Uri_t952691556_il2cpp_TypeInfo_var->static_fields)->get_____iuriEscapeStatics_t1418340874();

	// Marshaling of parameter '___toEscape0' to native representation
	Il2CppHString ____toEscape0_marshaled = NULL;
	if (___toEscape0 == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("toEscape"), NULL, NULL);
	}

	DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___toEscape0NativeView, ___toEscape0);
	il2cpp::utils::Il2CppHStringReference ___toEscape0HStringReference(___toEscape0NativeView);
	____toEscape0_marshaled = ___toEscape0HStringReference;

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____iuriEscapeStatics_t1418340874->IUriEscapeStatics_EscapeComponent_m2989309814(____toEscape0_marshaled, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Windows.Foundation.Uri::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Uri_Finalize_m468635363 (Uri_t952691556 * __this, const RuntimeMethod* method)
{
	if (__this->____iuriRuntimeClass_t921050115 != NULL)
	{
		__this->____iuriRuntimeClass_t921050115->Release();
	}
	if (__this->____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788 != NULL)
	{
		__this->____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788->Release();
	}
	if (__this->____istringable_t1634798504 != NULL)
	{
		__this->____istringable_t1634798504->Release();
	}

	__this->____iuriRuntimeClass_t921050115 = NULL;
	__this->____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788 = NULL;
	__this->____istringable_t1634798504 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterator`1<Windows.Foundation.IWwwFormUrlDecoderEntry> Windows.Foundation.WwwFormUrlDecoder::First()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WwwFormUrlDecoder_First_m3135326025 (WwwFormUrlDecoder_t4136411681 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WwwFormUrlDecoder_First_m3135326025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IIterable_1_t564697430* ____iiterable_1_t564697430 = __this->get_____iiterable_1_t564697430();

	// Native function invocation
	IIterator_1_t817443443* returnValue = NULL;
	const il2cpp_hresult_t hr = ____iiterable_1_t564697430->IIterable_1_First_m725484364(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// Windows.Foundation.IWwwFormUrlDecoderEntry Windows.Foundation.WwwFormUrlDecoder::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WwwFormUrlDecoder_GetAt_m646412330 (WwwFormUrlDecoder_t4136411681 * __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WwwFormUrlDecoder_GetAt_m646412330_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t2282165232* ____ivectorView_1_t2282165232 = __this->get_____ivectorView_1_t2282165232();

	// Native function invocation
	IWwwFormUrlDecoderEntry_t2943299970* returnValue = NULL;
	const il2cpp_hresult_t hr = ____ivectorView_1_t2282165232->IVectorView_1_GetAt_m2035733383(___index0, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.WwwFormUrlDecoder::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t WwwFormUrlDecoder_get_Size_m343403670 (WwwFormUrlDecoder_t4136411681 * __this, const RuntimeMethod* method)
{
	IVectorView_1_t2282165232* ____ivectorView_1_t2282165232 = __this->get_____ivectorView_1_t2282165232();

	// Native function invocation
	uint32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ivectorView_1_t2282165232->IVectorView_1_get_Size_m2047203447(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.WwwFormUrlDecoder::IndexOf(Windows.Foundation.IWwwFormUrlDecoderEntry,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool WwwFormUrlDecoder_IndexOf_m2357231018 (WwwFormUrlDecoder_t4136411681 * __this, RuntimeObject* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t2282165232* ____ivectorView_1_t2282165232 = __this->get_____ivectorView_1_t2282165232();

	// Marshaling of parameter '___value0' to native representation
	IWwwFormUrlDecoderEntry_t2943299970* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(IWwwFormUrlDecoderEntry_t2943299970::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IWwwFormUrlDecoderEntry_t2943299970>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	bool returnValue = 0;
	const il2cpp_hresult_t hr = ____ivectorView_1_t2282165232->IVectorView_1_IndexOf_m2753411397(____value0_marshaled, ___index1, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	return returnValue;
}
// System.UInt32 Windows.Foundation.WwwFormUrlDecoder::GetMany(System.UInt32,Windows.Foundation.IWwwFormUrlDecoderEntry[])
extern "C" IL2CPP_METHOD_ATTR uint32_t WwwFormUrlDecoder_GetMany_m746668555 (WwwFormUrlDecoder_t4136411681 * __this, uint32_t ___startIndex0, IWwwFormUrlDecoderEntryU5BU5D_t40345143* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WwwFormUrlDecoder_GetMany_m746668555_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t2282165232* ____ivectorView_1_t2282165232 = __this->get_____ivectorView_1_t2282165232();

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	IWwwFormUrlDecoderEntry_t2943299970** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<IWwwFormUrlDecoderEntry_t2943299970*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(IWwwFormUrlDecoderEntry_t2943299970*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ivectorView_1_t2282165232->IVectorView_1_GetMany_m66302439(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			RuntimeObject* _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>((____items1_marshaled)[i], Il2CppComObject_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
// Windows.Foundation.IWwwFormUrlDecoderEntry Windows.Foundation.WwwFormUrlDecoder::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WwwFormUrlDecoder_get_Item_m1443419508 (WwwFormUrlDecoder_t4136411681 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WwwFormUrlDecoder_get_Item_m1443419508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	return IVectorViewToIReadOnlyListAdapter_1_System_Collections_Generic_IReadOnlyList_1_get_Item_m2155834487(reinterpret_cast<IVectorViewToIReadOnlyListAdapter_1_t3685997136 *>(__this), ___index0, IVectorViewToIReadOnlyListAdapter_1_System_Collections_Generic_IReadOnlyList_1_get_Item_m2155834487_RuntimeMethod_var);
}
// System.Int32 Windows.Foundation.WwwFormUrlDecoder::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t WwwFormUrlDecoder_get_Count_m482450371 (WwwFormUrlDecoder_t4136411681 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WwwFormUrlDecoder_get_Count_m482450371_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	return IInspectableToIReadOnlyCollectionAdapter_1_System_Collections_Generic_IReadOnlyCollection_1_get_Count_m1780114570(reinterpret_cast<IInspectableToIReadOnlyCollectionAdapter_1_t1460979042 *>(__this), IInspectableToIReadOnlyCollectionAdapter_1_System_Collections_Generic_IReadOnlyCollection_1_get_Count_m1780114570_RuntimeMethod_var);
}
// System.Collections.Generic.IEnumerator`1<Windows.Foundation.IWwwFormUrlDecoderEntry> Windows.Foundation.WwwFormUrlDecoder::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WwwFormUrlDecoder_GetEnumerator_m1949124207 (WwwFormUrlDecoder_t4136411681 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WwwFormUrlDecoder_GetEnumerator_m1949124207_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	return IIterableToIEnumerableAdapter_1_System_Collections_Generic_IEnumerable_1_GetEnumerator_m3771091130(reinterpret_cast<IIterableToIEnumerableAdapter_1_t946259926 *>(__this), IIterableToIEnumerableAdapter_1_System_Collections_Generic_IEnumerable_1_GetEnumerator_m3771091130_RuntimeMethod_var);
}
// System.Collections.IEnumerator Windows.Foundation.WwwFormUrlDecoder::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WwwFormUrlDecoder_GetEnumerator_m2557475735 (WwwFormUrlDecoder_t4136411681 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WwwFormUrlDecoder_GetEnumerator_m2557475735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	return IBindableIterableToIEnumerableAdapter_System_Collections_IEnumerable_GetEnumerator_m870846425(reinterpret_cast<IBindableIterableToIEnumerableAdapter_t3609568223 *>(__this), NULL);
}
// System.Void Windows.Foundation.WwwFormUrlDecoder::Finalize()
extern "C" IL2CPP_METHOD_ATTR void WwwFormUrlDecoder_Finalize_m25927502 (WwwFormUrlDecoder_t4136411681 * __this, const RuntimeMethod* method)
{
	if (__this->____iwwwFormUrlDecoderRuntimeClass_t497020701 != NULL)
	{
		__this->____iwwwFormUrlDecoderRuntimeClass_t497020701->Release();
	}
	if (__this->____ivectorView_1_t2282165232 != NULL)
	{
		__this->____ivectorView_1_t2282165232->Release();
	}
	if (__this->____iiterable_1_t564697430 != NULL)
	{
		__this->____iiterable_1_t564697430->Release();
	}

	__this->____iwwwFormUrlDecoderRuntimeClass_t497020701 = NULL;
	__this->____ivectorView_1_t2282165232 = NULL;
	__this->____iiterable_1_t564697430 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.Capture.IMediaCapture
const Il2CppGuid IMediaCapture_t2687710539::IID = { 0xc61afbb4, 0xfb10, 0x4a34, 0xac, 0x18, 0xca, 0x80, 0xd9, 0xc8, 0xe7, 0xee };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.Capture.IMediaCapture2
const Il2CppGuid IMediaCapture2_t2891527499::IID = { 0x9cc68260, 0x7da1, 0x4043, 0xb6, 0x52, 0x21, 0xb8, 0x87, 0x8d, 0xaf, 0xf9 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.Capture.IMediaCapture3
const Il2CppGuid IMediaCapture3_t552875339::IID = { 0xd4136f30, 0x1564, 0x466e, 0xbc, 0xa, 0xaf, 0x94, 0xe0, 0x2a, 0xb0, 0x16 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.Capture.IMediaCapture4
const Il2CppGuid IMediaCapture4_t2509190475::IID = { 0xbacd6fd6, 0xfb08, 0x4947, 0xae, 0xa2, 0xce, 0x14, 0xef, 0xf0, 0xce, 0x13 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.Capture.IMediaCapture5
const Il2CppGuid IMediaCapture5_t170538315::IID = { 0xda787c22, 0x3a9b, 0x4720, 0xa7, 0x1e, 0x97, 0x90, 0xa, 0x31, 0x6e, 0x5a };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.Capture.IMediaCapture6
const Il2CppGuid IMediaCapture6_t2126853451::IID = { 0x228948bd, 0x4b20, 0x4bb1, 0x9f, 0xd6, 0xa5, 0x83, 0x21, 0x2a, 0x10, 0x12 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.Capture.IMediaCaptureInitializationSettings
const Il2CppGuid IMediaCaptureInitializationSettings_t2768046102::IID = { 0x9782ba70, 0xea65, 0x4900, 0x93, 0x56, 0x8c, 0xa8, 0x87, 0x72, 0x68, 0x84 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.Capture.IMediaCaptureInitializationSettings2
const Il2CppGuid IMediaCaptureInitializationSettings2_t2764769302::IID = { 0x404e0626, 0xc9dc, 0x43e9, 0xae, 0xe4, 0xe6, 0xbf, 0x1b, 0x57, 0xb4, 0x4c };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.Capture.IMediaCaptureInitializationSettings3
const Il2CppGuid IMediaCaptureInitializationSettings3_t2764834838::IID = { 0x4160519d, 0xbe48, 0x4730, 0x81, 0x4, 0xc, 0xf6, 0xe9, 0xe9, 0x79, 0x48 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.Capture.IMediaCaptureInitializationSettings4
const Il2CppGuid IMediaCaptureInitializationSettings4_t2764638230::IID = { 0xf502a537, 0x4cb7, 0x4d28, 0x95, 0xed, 0x4f, 0x9f, 0x1, 0x2e, 0x5, 0x18 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.Capture.IMediaCaptureInitializationSettings5
const Il2CppGuid IMediaCaptureInitializationSettings5_t2764703766::IID = { 0xd5a2e3b8, 0x2626, 0x4e94, 0xb7, 0xb3, 0x53, 0x8, 0xa0, 0xf6, 0x4b, 0x1a };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.Capture.IMediaCaptureInitializationSettings6
const Il2CppGuid IMediaCaptureInitializationSettings6_t2764507158::IID = { 0xb2e26b47, 0x3db1, 0x4d33, 0xab, 0x63, 0xf, 0xfa, 0x9, 0x5, 0x65, 0x85 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.Capture.IMediaCaptureStatics
const Il2CppGuid IMediaCaptureStatics_t830978977::IID = { 0xacef81ff, 0x99ed, 0x4645, 0x96, 0x5e, 0x19, 0x25, 0xcf, 0xc6, 0x38, 0x34 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.Capture.IMediaCaptureVideoPreview
const Il2CppGuid IMediaCaptureVideoPreview_t535963051::IID = { 0x27727073, 0x549e, 0x447f, 0xa2, 0xa, 0x4f, 0x3, 0xc4, 0x79, 0xd8, 0xc0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Media.Capture.MediaCapture::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MediaCapture__ctor_m2938996618 (MediaCapture_t1516581975 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MediaCapture__ctor_m2938996618_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Native function invocation
	Il2CppIActivationFactory* activationFactory = ((MediaCapture_t1516581975_StaticFields*)MediaCapture_t1516581975_il2cpp_TypeInfo_var->static_fields)->get_activationFactory();
	il2cpp_hresult_t hr = activationFactory->ActivateInstance(reinterpret_cast<Il2CppIInspectable**>(&__this->identity));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	il2cpp_codegen_com_register_rcw(__this);

}
// Windows.Foundation.IAsyncAction Windows.Media.Capture.MediaCapture::InitializeAsync(Windows.Media.Capture.MediaCaptureInitializationSettings)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MediaCapture_InitializeAsync_m752811836 (MediaCapture_t1516581975 * __this, MediaCaptureInitializationSettings_t546830356 * ___mediaCaptureInitializationSettings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MediaCapture_InitializeAsync_m752811836_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IMediaCapture_t2687710539* ____imediaCapture_t2687710539 = __this->get_____imediaCapture_t2687710539();

	// Marshaling of parameter '___mediaCaptureInitializationSettings0' to native representation
	IMediaCaptureInitializationSettings_t2768046102* ____mediaCaptureInitializationSettings0_marshaled = NULL;
	if (___mediaCaptureInitializationSettings0 != NULL)
	{
		____mediaCaptureInitializationSettings0_marshaled = (___mediaCaptureInitializationSettings0)->get_____imediaCaptureInitializationSettings_t2768046102();
	}
	else
	{
		____mediaCaptureInitializationSettings0_marshaled = NULL;
	}

	// Native function invocation
	IAsyncAction_t3072713919* returnValue = NULL;
	const il2cpp_hresult_t hr = ____imediaCapture_t2687710539->IMediaCapture_InitializeAsync_m1047720208(____mediaCaptureInitializationSettings0_marshaled, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// Windows.Media.Devices.AudioDeviceController Windows.Media.Capture.MediaCapture::get_AudioDeviceController()
extern "C" IL2CPP_METHOD_ATTR AudioDeviceController_t936102736 * MediaCapture_get_AudioDeviceController_m3127587230 (MediaCapture_t1516581975 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MediaCapture_get_AudioDeviceController_m3127587230_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IMediaCapture_t2687710539* ____imediaCapture_t2687710539 = __this->get_____imediaCapture_t2687710539();

	// Native function invocation
	IAudioDeviceController_t3742505345* returnValue = NULL;
	const il2cpp_hresult_t hr = ____imediaCapture_t2687710539->IMediaCapture_get_AudioDeviceController_m1759341815(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AudioDeviceController_t936102736 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<AudioDeviceController_t936102736>(returnValue, AudioDeviceController_t936102736_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.Media.Capture.MediaCapture::Close()
extern "C" IL2CPP_METHOD_ATTR void MediaCapture_Close_m1567597909 (MediaCapture_t1516581975 * __this, const RuntimeMethod* method)
{
	IClosable_t326290202* ____iclosable_t326290202 = __this->get_____iclosable_t326290202();

	// Native function invocation
	const il2cpp_hresult_t hr = ____iclosable_t326290202->IClosable_Close_m649191502();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Media.Capture.MediaCapture::Dispose()
extern "C" IL2CPP_METHOD_ATTR void MediaCapture_Dispose_m331879828 (MediaCapture_t1516581975 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MediaCapture_Dispose_m331879828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IClosableToIDisposableAdapter_System_IDisposable_Dispose_m2997536148(reinterpret_cast<IClosableToIDisposableAdapter_t3213967014 *>(__this), NULL);
}
// System.Void Windows.Media.Capture.MediaCapture::Finalize()
extern "C" IL2CPP_METHOD_ATTR void MediaCapture_Finalize_m691602150 (MediaCapture_t1516581975 * __this, const RuntimeMethod* method)
{
	if (__this->____imediaCapture_t2687710539 != NULL)
	{
		__this->____imediaCapture_t2687710539->Release();
	}
	if (__this->____imediaCaptureVideoPreview_t535963051 != NULL)
	{
		__this->____imediaCaptureVideoPreview_t535963051->Release();
	}
	if (__this->____imediaCapture2_t2891527499 != NULL)
	{
		__this->____imediaCapture2_t2891527499->Release();
	}
	if (__this->____imediaCapture3_t552875339 != NULL)
	{
		__this->____imediaCapture3_t552875339->Release();
	}
	if (__this->____imediaCapture4_t2509190475 != NULL)
	{
		__this->____imediaCapture4_t2509190475->Release();
	}
	if (__this->____imediaCapture5_t170538315 != NULL)
	{
		__this->____imediaCapture5_t170538315->Release();
	}
	if (__this->____imediaCapture6_t2126853451 != NULL)
	{
		__this->____imediaCapture6_t2126853451->Release();
	}
	if (__this->____iclosable_t326290202 != NULL)
	{
		__this->____iclosable_t326290202->Release();
	}

	__this->____imediaCapture_t2687710539 = NULL;
	__this->____imediaCaptureVideoPreview_t535963051 = NULL;
	__this->____imediaCapture2_t2891527499 = NULL;
	__this->____imediaCapture3_t552875339 = NULL;
	__this->____imediaCapture4_t2509190475 = NULL;
	__this->____imediaCapture5_t170538315 = NULL;
	__this->____imediaCapture6_t2126853451 = NULL;
	__this->____iclosable_t326290202 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Media.Capture.MediaCaptureInitializationSettings::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MediaCaptureInitializationSettings__ctor_m1537412696 (MediaCaptureInitializationSettings_t546830356 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MediaCaptureInitializationSettings__ctor_m1537412696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Native function invocation
	Il2CppIActivationFactory* activationFactory = ((MediaCaptureInitializationSettings_t546830356_StaticFields*)MediaCaptureInitializationSettings_t546830356_il2cpp_TypeInfo_var->static_fields)->get_activationFactory();
	il2cpp_hresult_t hr = activationFactory->ActivateInstance(reinterpret_cast<Il2CppIInspectable**>(&__this->identity));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	il2cpp_codegen_com_register_rcw(__this);

}
// System.Void Windows.Media.Capture.MediaCaptureInitializationSettings::put_StreamingCaptureMode(Windows.Media.Capture.StreamingCaptureMode)
extern "C" IL2CPP_METHOD_ATTR void MediaCaptureInitializationSettings_put_StreamingCaptureMode_m484495058 (MediaCaptureInitializationSettings_t546830356 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	IMediaCaptureInitializationSettings_t2768046102* ____imediaCaptureInitializationSettings_t2768046102 = __this->get_____imediaCaptureInitializationSettings_t2768046102();

	// Native function invocation
	const il2cpp_hresult_t hr = ____imediaCaptureInitializationSettings_t2768046102->IMediaCaptureInitializationSettings_put_StreamingCaptureMode_m2829014800(___value0);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Media.Capture.MediaCaptureInitializationSettings::put_MediaCategory(Windows.Media.Capture.MediaCategory)
extern "C" IL2CPP_METHOD_ATTR void MediaCaptureInitializationSettings_put_MediaCategory_m3284344688 (MediaCaptureInitializationSettings_t546830356 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	IMediaCaptureInitializationSettings2_t2764769302* ____imediaCaptureInitializationSettings2_t2764769302 = __this->get_____imediaCaptureInitializationSettings2_t2764769302();

	// Native function invocation
	const il2cpp_hresult_t hr = ____imediaCaptureInitializationSettings2_t2764769302->IMediaCaptureInitializationSettings2_put_MediaCategory_m817377790(___value0);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Media.Capture.MediaCaptureInitializationSettings::Finalize()
extern "C" IL2CPP_METHOD_ATTR void MediaCaptureInitializationSettings_Finalize_m4285293609 (MediaCaptureInitializationSettings_t546830356 * __this, const RuntimeMethod* method)
{
	if (__this->____imediaCaptureInitializationSettings_t2768046102 != NULL)
	{
		__this->____imediaCaptureInitializationSettings_t2768046102->Release();
	}
	if (__this->____imediaCaptureInitializationSettings2_t2764769302 != NULL)
	{
		__this->____imediaCaptureInitializationSettings2_t2764769302->Release();
	}
	if (__this->____imediaCaptureInitializationSettings3_t2764834838 != NULL)
	{
		__this->____imediaCaptureInitializationSettings3_t2764834838->Release();
	}
	if (__this->____imediaCaptureInitializationSettings4_t2764638230 != NULL)
	{
		__this->____imediaCaptureInitializationSettings4_t2764638230->Release();
	}
	if (__this->____imediaCaptureInitializationSettings5_t2764703766 != NULL)
	{
		__this->____imediaCaptureInitializationSettings5_t2764703766->Release();
	}
	if (__this->____imediaCaptureInitializationSettings6_t2764507158 != NULL)
	{
		__this->____imediaCaptureInitializationSettings6_t2764507158->Release();
	}

	__this->____imediaCaptureInitializationSettings_t2768046102 = NULL;
	__this->____imediaCaptureInitializationSettings2_t2764769302 = NULL;
	__this->____imediaCaptureInitializationSettings3_t2764834838 = NULL;
	__this->____imediaCaptureInitializationSettings4_t2764638230 = NULL;
	__this->____imediaCaptureInitializationSettings5_t2764703766 = NULL;
	__this->____imediaCaptureInitializationSettings6_t2764507158 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
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
// Windows.Media.Core.ITimedMetadataTrackProvider
const Il2CppGuid ITimedMetadataTrackProvider_t1703961418::IID = { 0x3b7f2024, 0xf74e, 0x4ade, 0x93, 0xc5, 0x21, 0x9d, 0xa0, 0x5b, 0x68, 0x56 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Windows.Media.Devices.AudioDeviceController::get_Muted()
extern "C" IL2CPP_METHOD_ATTR bool AudioDeviceController_get_Muted_m425638416 (AudioDeviceController_t936102736 * __this, const RuntimeMethod* method)
{
	IAudioDeviceController_t3742505345* ____iaudioDeviceController_t3742505345 = __this->get_____iaudioDeviceController_t3742505345();

	// Native function invocation
	bool returnValue = 0;
	const il2cpp_hresult_t hr = ____iaudioDeviceController_t3742505345->IAudioDeviceController_get_Muted_m3616316259(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Media.Devices.AudioDeviceController::Finalize()
extern "C" IL2CPP_METHOD_ATTR void AudioDeviceController_Finalize_m930457356 (AudioDeviceController_t936102736 * __this, const RuntimeMethod* method)
{
	if (__this->____iaudioDeviceController_t3742505345 != NULL)
	{
		__this->____iaudioDeviceController_t3742505345->Release();
	}
	if (__this->____imediaDeviceController_t1179508027 != NULL)
	{
		__this->____imediaDeviceController_t1179508027->Release();
	}

	__this->____iaudioDeviceController_t3742505345 = NULL;
	__this->____imediaDeviceController_t1179508027 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.Devices.IAudioDeviceController
const Il2CppGuid IAudioDeviceController_t3742505345::IID = { 0xedd4a388, 0x79c7, 0x4f7c, 0x90, 0xe8, 0xef, 0x93, 0x4b, 0x21, 0x58, 0xa };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.Devices.IMediaDeviceController
const Il2CppGuid IMediaDeviceController_t1179508027::IID = { 0xf6f8f5ce, 0x209a, 0x48fb, 0x86, 0xfc, 0xd4, 0x45, 0x78, 0xf3, 0x17, 0xe6 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
const Il2CppGuid IInstalledVoicesStatic_t870565809::IID = { 0x7d526ecc, 0x7533, 0x4c3f, 0x85, 0xbe, 0x88, 0x8c, 0x2b, 0xae, 0xeb, 0xdc };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
const Il2CppGuid IInstalledVoicesStatic2_t946760305::IID = { 0x64255f2e, 0x358d, 0x4058, 0xbe, 0x9a, 0xfd, 0x3f, 0xcb, 0x42, 0x35, 0x30 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.SpeechSynthesis.ISpeechSynthesisStream
const Il2CppGuid ISpeechSynthesisStream_t764091608::IID = { 0x83e46e93, 0x244c, 0x4622, 0xba, 0xb, 0x62, 0x29, 0xc4, 0xd0, 0xd6, 0x5d };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.SpeechSynthesis.ISpeechSynthesizer
const Il2CppGuid ISpeechSynthesizer_t2734223870::IID = { 0xce9f7c76, 0x97f4, 0x4ced, 0xad, 0x68, 0xd5, 0x1c, 0x45, 0x8e, 0x45, 0xc6 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.SpeechSynthesis.ISpeechSynthesizer2
const Il2CppGuid ISpeechSynthesizer2_t1865799545::IID = { 0xa7c5ecb2, 0x4339, 0x4d6a, 0xbb, 0xf8, 0xc7, 0xa4, 0xf1, 0x54, 0x4c, 0x2e };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.SpeechSynthesis.IVoiceInformation
const Il2CppGuid IVoiceInformation_t3111056019::IID = { 0xb127d6a4, 0x1291, 0x4604, 0xaa, 0x9c, 0x83, 0x13, 0x40, 0x83, 0x35, 0x2c };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt64 Windows.Media.SpeechSynthesis.SpeechSynthesisStream::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint64_t SpeechSynthesisStream_get_Size_m3088346934 (SpeechSynthesisStream_t2322339758 * __this, const RuntimeMethod* method)
{
	IRandomAccessStream_t2099996051* ____irandomAccessStream_t2099996051 = __this->get_____irandomAccessStream_t2099996051();

	// Native function invocation
	uint64_t returnValue = 0;
	const il2cpp_hresult_t hr = ____irandomAccessStream_t2099996051->IRandomAccessStream_get_Size_m3315994282(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// Windows.Storage.Streams.IInputStream Windows.Media.SpeechSynthesis.SpeechSynthesisStream::GetInputStreamAt(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SpeechSynthesisStream_GetInputStreamAt_m4033870373 (SpeechSynthesisStream_t2322339758 * __this, uint64_t ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechSynthesisStream_GetInputStreamAt_m4033870373_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IRandomAccessStream_t2099996051* ____irandomAccessStream_t2099996051 = __this->get_____irandomAccessStream_t2099996051();

	// Native function invocation
	IInputStream_t2821136229* returnValue = NULL;
	const il2cpp_hresult_t hr = ____irandomAccessStream_t2099996051->IRandomAccessStream_GetInputStreamAt_m2841117993(___position0, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt64 Windows.Media.SpeechSynthesis.SpeechSynthesisStream::get_Position()
extern "C" IL2CPP_METHOD_ATTR uint64_t SpeechSynthesisStream_get_Position_m3573870075 (SpeechSynthesisStream_t2322339758 * __this, const RuntimeMethod* method)
{
	IRandomAccessStream_t2099996051* ____irandomAccessStream_t2099996051 = __this->get_____irandomAccessStream_t2099996051();

	// Native function invocation
	uint64_t returnValue = 0;
	const il2cpp_hresult_t hr = ____irandomAccessStream_t2099996051->IRandomAccessStream_get_Position_m3162954653(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Media.SpeechSynthesis.SpeechSynthesisStream::Seek(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void SpeechSynthesisStream_Seek_m134219532 (SpeechSynthesisStream_t2322339758 * __this, uint64_t ___position0, const RuntimeMethod* method)
{
	IRandomAccessStream_t2099996051* ____irandomAccessStream_t2099996051 = __this->get_____irandomAccessStream_t2099996051();

	// Native function invocation
	const il2cpp_hresult_t hr = ____irandomAccessStream_t2099996051->IRandomAccessStream_Seek_m3482800682(___position0);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Boolean Windows.Media.SpeechSynthesis.SpeechSynthesisStream::get_CanRead()
extern "C" IL2CPP_METHOD_ATTR bool SpeechSynthesisStream_get_CanRead_m3552961013 (SpeechSynthesisStream_t2322339758 * __this, const RuntimeMethod* method)
{
	IRandomAccessStream_t2099996051* ____irandomAccessStream_t2099996051 = __this->get_____irandomAccessStream_t2099996051();

	// Native function invocation
	bool returnValue = 0;
	const il2cpp_hresult_t hr = ____irandomAccessStream_t2099996051->IRandomAccessStream_get_CanRead_m2334341332(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Media.SpeechSynthesis.SpeechSynthesisStream::get_CanWrite()
extern "C" IL2CPP_METHOD_ATTR bool SpeechSynthesisStream_get_CanWrite_m2741757086 (SpeechSynthesisStream_t2322339758 * __this, const RuntimeMethod* method)
{
	IRandomAccessStream_t2099996051* ____irandomAccessStream_t2099996051 = __this->get_____irandomAccessStream_t2099996051();

	// Native function invocation
	bool returnValue = 0;
	const il2cpp_hresult_t hr = ____irandomAccessStream_t2099996051->IRandomAccessStream_get_CanWrite_m1780602347(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Media.SpeechSynthesis.SpeechSynthesisStream::Close()
extern "C" IL2CPP_METHOD_ATTR void SpeechSynthesisStream_Close_m4100292439 (SpeechSynthesisStream_t2322339758 * __this, const RuntimeMethod* method)
{
	IClosable_t326290202* ____iclosable_t326290202 = __this->get_____iclosable_t326290202();

	// Native function invocation
	const il2cpp_hresult_t hr = ____iclosable_t326290202->IClosable_Close_m649191502();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> Windows.Media.SpeechSynthesis.SpeechSynthesisStream::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SpeechSynthesisStream_ReadAsync_m1443081288 (SpeechSynthesisStream_t2322339758 * __this, RuntimeObject* ___buffer0, uint32_t ___count1, uint32_t ___options2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechSynthesisStream_ReadAsync_m1443081288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInputStream_t2821136229* ____iinputStream_t2821136229 = __this->get_____iinputStream_t2821136229();

	// Marshaling of parameter '___buffer0' to native representation
	IBuffer_t541192229* ____buffer0_marshaled = NULL;
	if (___buffer0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___buffer0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___buffer0)->identity->QueryInterface(IBuffer_t541192229::IID, reinterpret_cast<void**>(&____buffer0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____buffer0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IBuffer_t541192229>(___buffer0);
		}
	}
	else
	{
		____buffer0_marshaled = NULL;
	}

	// Native function invocation
	IAsyncOperationWithProgress_2_t1622574100* returnValue = NULL;
	const il2cpp_hresult_t hr = ____iinputStream_t2821136229->IInputStream_ReadAsync_m1153220809(____buffer0_marshaled, ___count1, ___options2, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	// Marshaling cleanup of parameter '___buffer0' native representation
	if (____buffer0_marshaled != NULL)
	{
		(____buffer0_marshaled)->Release();
		____buffer0_marshaled = NULL;
	}

	return _returnValue_unmarshaled;
}
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> Windows.Media.SpeechSynthesis.SpeechSynthesisStream::WriteAsync(Windows.Storage.Streams.IBuffer)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SpeechSynthesisStream_WriteAsync_m168218083 (SpeechSynthesisStream_t2322339758 * __this, RuntimeObject* ___buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechSynthesisStream_WriteAsync_m168218083_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IOutputStream_t2042351338* ____ioutputStream_t2042351338 = __this->get_____ioutputStream_t2042351338();

	// Marshaling of parameter '___buffer0' to native representation
	IBuffer_t541192229* ____buffer0_marshaled = NULL;
	if (___buffer0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___buffer0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___buffer0)->identity->QueryInterface(IBuffer_t541192229::IID, reinterpret_cast<void**>(&____buffer0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____buffer0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IBuffer_t541192229>(___buffer0);
		}
	}
	else
	{
		____buffer0_marshaled = NULL;
	}

	// Native function invocation
	IAsyncOperationWithProgress_2_t593214123* returnValue = NULL;
	const il2cpp_hresult_t hr = ____ioutputStream_t2042351338->IOutputStream_WriteAsync_m124082296(____buffer0_marshaled, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	// Marshaling cleanup of parameter '___buffer0' native representation
	if (____buffer0_marshaled != NULL)
	{
		(____buffer0_marshaled)->Release();
		____buffer0_marshaled = NULL;
	}

	return _returnValue_unmarshaled;
}
// Windows.Foundation.IAsyncOperation`1<System.Boolean> Windows.Media.SpeechSynthesis.SpeechSynthesisStream::FlushAsync()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SpeechSynthesisStream_FlushAsync_m3519720753 (SpeechSynthesisStream_t2322339758 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechSynthesisStream_FlushAsync_m3519720753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IOutputStream_t2042351338* ____ioutputStream_t2042351338 = __this->get_____ioutputStream_t2042351338();

	// Native function invocation
	IAsyncOperation_1_t3013442981* returnValue = NULL;
	const il2cpp_hresult_t hr = ____ioutputStream_t2042351338->IOutputStream_FlushAsync_m252007188(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.Media.SpeechSynthesis.SpeechSynthesisStream::Dispose()
extern "C" IL2CPP_METHOD_ATTR void SpeechSynthesisStream_Dispose_m1457724439 (SpeechSynthesisStream_t2322339758 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechSynthesisStream_Dispose_m1457724439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IClosableToIDisposableAdapter_System_IDisposable_Dispose_m2997536148(reinterpret_cast<IClosableToIDisposableAdapter_t3213967014 *>(__this), NULL);
}
// System.Void Windows.Media.SpeechSynthesis.SpeechSynthesisStream::Finalize()
extern "C" IL2CPP_METHOD_ATTR void SpeechSynthesisStream_Finalize_m3199252267 (SpeechSynthesisStream_t2322339758 * __this, const RuntimeMethod* method)
{
	if (__this->____ispeechSynthesisStream_t764091608 != NULL)
	{
		__this->____ispeechSynthesisStream_t764091608->Release();
	}
	if (__this->____irandomAccessStreamWithContentType_t3296927652 != NULL)
	{
		__this->____irandomAccessStreamWithContentType_t3296927652->Release();
	}
	if (__this->____icontentTypeProvider_t1806097440 != NULL)
	{
		__this->____icontentTypeProvider_t1806097440->Release();
	}
	if (__this->____irandomAccessStream_t2099996051 != NULL)
	{
		__this->____irandomAccessStream_t2099996051->Release();
	}
	if (__this->____ioutputStream_t2042351338 != NULL)
	{
		__this->____ioutputStream_t2042351338->Release();
	}
	if (__this->____iinputStream_t2821136229 != NULL)
	{
		__this->____iinputStream_t2821136229->Release();
	}
	if (__this->____itimedMetadataTrackProvider_t1703961418 != NULL)
	{
		__this->____itimedMetadataTrackProvider_t1703961418->Release();
	}
	if (__this->____iclosable_t326290202 != NULL)
	{
		__this->____iclosable_t326290202->Release();
	}

	__this->____ispeechSynthesisStream_t764091608 = NULL;
	__this->____irandomAccessStreamWithContentType_t3296927652 = NULL;
	__this->____icontentTypeProvider_t1806097440 = NULL;
	__this->____irandomAccessStream_t2099996051 = NULL;
	__this->____ioutputStream_t2042351338 = NULL;
	__this->____iinputStream_t2821136229 = NULL;
	__this->____itimedMetadataTrackProvider_t1703961418 = NULL;
	__this->____iclosable_t326290202 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Media.SpeechSynthesis.SpeechSynthesizer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SpeechSynthesizer__ctor_m1182434939 (SpeechSynthesizer_t2130945875 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechSynthesizer__ctor_m1182434939_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Native function invocation
	Il2CppIActivationFactory* activationFactory = ((SpeechSynthesizer_t2130945875_StaticFields*)SpeechSynthesizer_t2130945875_il2cpp_TypeInfo_var->static_fields)->get_activationFactory();
	il2cpp_hresult_t hr = activationFactory->ActivateInstance(reinterpret_cast<Il2CppIInspectable**>(&__this->identity));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	il2cpp_codegen_com_register_rcw(__this);

}
// Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream> Windows.Media.SpeechSynthesis.SpeechSynthesizer::SynthesizeTextToStreamAsync(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SpeechSynthesizer_SynthesizeTextToStreamAsync_m567607667 (SpeechSynthesizer_t2130945875 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechSynthesizer_SynthesizeTextToStreamAsync_m567607667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ISpeechSynthesizer_t2734223870* ____ispeechSynthesizer_t2734223870 = __this->get_____ispeechSynthesizer_t2734223870();

	// Marshaling of parameter '___text0' to native representation
	Il2CppHString ____text0_marshaled = NULL;
	if (___text0 == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("text"), NULL, NULL);
	}

	DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___text0NativeView, ___text0);
	il2cpp::utils::Il2CppHStringReference ___text0HStringReference(___text0NativeView);
	____text0_marshaled = ___text0HStringReference;

	// Native function invocation
	IAsyncOperation_1_t943527478* returnValue = NULL;
	const il2cpp_hresult_t hr = ____ispeechSynthesizer_t2734223870->ISpeechSynthesizer_SynthesizeTextToStreamAsync_m3255420258(____text0_marshaled, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream> Windows.Media.SpeechSynthesis.SpeechSynthesizer::SynthesizeSsmlToStreamAsync(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SpeechSynthesizer_SynthesizeSsmlToStreamAsync_m3857390559 (SpeechSynthesizer_t2130945875 * __this, String_t* ___Ssml0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechSynthesizer_SynthesizeSsmlToStreamAsync_m3857390559_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ISpeechSynthesizer_t2734223870* ____ispeechSynthesizer_t2734223870 = __this->get_____ispeechSynthesizer_t2734223870();

	// Marshaling of parameter '___Ssml0' to native representation
	Il2CppHString ____Ssml0_marshaled = NULL;
	if (___Ssml0 == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("Ssml"), NULL, NULL);
	}

	DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___Ssml0NativeView, ___Ssml0);
	il2cpp::utils::Il2CppHStringReference ___Ssml0HStringReference(___Ssml0NativeView);
	____Ssml0_marshaled = ___Ssml0HStringReference;

	// Native function invocation
	IAsyncOperation_1_t943527478* returnValue = NULL;
	const il2cpp_hresult_t hr = ____ispeechSynthesizer_t2734223870->ISpeechSynthesizer_SynthesizeSsmlToStreamAsync_m781880964(____Ssml0_marshaled, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.Media.SpeechSynthesis.SpeechSynthesizer::put_Voice(Windows.Media.SpeechSynthesis.VoiceInformation)
extern "C" IL2CPP_METHOD_ATTR void SpeechSynthesizer_put_Voice_m3366580009 (SpeechSynthesizer_t2130945875 * __this, VoiceInformation_t4266404632 * ___value0, const RuntimeMethod* method)
{
	ISpeechSynthesizer_t2734223870* ____ispeechSynthesizer_t2734223870 = __this->get_____ispeechSynthesizer_t2734223870();

	// Marshaling of parameter '___value0' to native representation
	IVoiceInformation_t3111056019* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_marshaled = (___value0)->get_____ivoiceInformation_t3111056019();
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____ispeechSynthesizer_t2734223870->ISpeechSynthesizer_put_Voice_m2158910037(____value0_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Media.SpeechSynthesis.SpeechSynthesizer::Close()
extern "C" IL2CPP_METHOD_ATTR void SpeechSynthesizer_Close_m2280298824 (SpeechSynthesizer_t2130945875 * __this, const RuntimeMethod* method)
{
	IClosable_t326290202* ____iclosable_t326290202 = __this->get_____iclosable_t326290202();

	// Native function invocation
	const il2cpp_hresult_t hr = ____iclosable_t326290202->IClosable_Close_m649191502();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Collections.Generic.IReadOnlyList`1<Windows.Media.SpeechSynthesis.VoiceInformation> Windows.Media.SpeechSynthesis.SpeechSynthesizer::get_AllVoices()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SpeechSynthesizer_get_AllVoices_m2758775862 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechSynthesizer_get_AllVoices_m2758775862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInstalledVoicesStatic_t870565809* ____iinstalledVoicesStatic_t870565809 = ((SpeechSynthesizer_t2130945875_StaticFields*)SpeechSynthesizer_t2130945875_il2cpp_TypeInfo_var->static_fields)->get_____iinstalledVoicesStatic_t870565809();

	// Native function invocation
	IVectorView_1_t3605269894* returnValue = NULL;
	const il2cpp_hresult_t hr = ____iinstalledVoicesStatic_t870565809->IInstalledVoicesStatic_get_AllVoices_m3921392764(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.Media.SpeechSynthesis.SpeechSynthesizer::Dispose()
extern "C" IL2CPP_METHOD_ATTR void SpeechSynthesizer_Dispose_m640280663 (SpeechSynthesizer_t2130945875 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechSynthesizer_Dispose_m640280663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IClosableToIDisposableAdapter_System_IDisposable_Dispose_m2997536148(reinterpret_cast<IClosableToIDisposableAdapter_t3213967014 *>(__this), NULL);
}
// System.Void Windows.Media.SpeechSynthesis.SpeechSynthesizer::Finalize()
extern "C" IL2CPP_METHOD_ATTR void SpeechSynthesizer_Finalize_m924549019 (SpeechSynthesizer_t2130945875 * __this, const RuntimeMethod* method)
{
	if (__this->____ispeechSynthesizer_t2734223870 != NULL)
	{
		__this->____ispeechSynthesizer_t2734223870->Release();
	}
	if (__this->____ispeechSynthesizer2_t1865799545 != NULL)
	{
		__this->____ispeechSynthesizer2_t1865799545->Release();
	}
	if (__this->____iclosable_t326290202 != NULL)
	{
		__this->____iclosable_t326290202->Release();
	}

	__this->____ispeechSynthesizer_t2734223870 = NULL;
	__this->____ispeechSynthesizer2_t1865799545 = NULL;
	__this->____iclosable_t326290202 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Windows.Media.SpeechSynthesis.VoiceInformation::get_DisplayName()
extern "C" IL2CPP_METHOD_ATTR String_t* VoiceInformation_get_DisplayName_m2963379638 (VoiceInformation_t4266404632 * __this, const RuntimeMethod* method)
{
	IVoiceInformation_t3111056019* ____ivoiceInformation_t3111056019 = __this->get_____ivoiceInformation_t3111056019();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____ivoiceInformation_t3111056019->IVoiceInformation_get_DisplayName_m1640391607(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Windows.Media.SpeechSynthesis.VoiceInformation::Finalize()
extern "C" IL2CPP_METHOD_ATTR void VoiceInformation_Finalize_m1663551666 (VoiceInformation_t4266404632 * __this, const RuntimeMethod* method)
{
	if (__this->____ivoiceInformation_t3111056019 != NULL)
	{
		__this->____ivoiceInformation_t3111056019->Release();
	}

	__this->____ivoiceInformation_t3111056019 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Networking.Connectivity.INetworkInformationStatics
const Il2CppGuid INetworkInformationStatics_t1568055678::IID = { 0x5074f851, 0x950d, 0x4165, 0x9c, 0x15, 0x36, 0x56, 0x19, 0x48, 0x1e, 0xea };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Networking.Connectivity.INetworkInformationStatics2
const Il2CppGuid INetworkInformationStatics2_t442609477::IID = { 0x459ced14, 0x2832, 0x49b6, 0xba, 0x6e, 0xe2, 0x65, 0xf0, 0x47, 0x86, 0xa8 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IReadOnlyList`1<Windows.Networking.HostName> Windows.Networking.Connectivity.NetworkInformation::GetHostNames()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NetworkInformation_GetHostNames_m4089451444 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkInformation_GetHostNames_m4089451444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	INetworkInformationStatics_t1568055678* ____inetworkInformationStatics_t1568055678 = ((NetworkInformation_t482159730_StaticFields*)NetworkInformation_t482159730_il2cpp_TypeInfo_var->static_fields)->get_____inetworkInformationStatics_t1568055678();

	// Native function invocation
	IVectorView_1_t2228900081* returnValue = NULL;
	const il2cpp_hresult_t hr = ____inetworkInformationStatics_t1568055678->INetworkInformationStatics_GetHostNames_m3950255330(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.Networking.Connectivity.NetworkInformation::Finalize()
extern "C" IL2CPP_METHOD_ATTR void NetworkInformation_Finalize_m2646903178 (NetworkInformation_t482159730 * __this, const RuntimeMethod* method)
{
	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Networking.HostName::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void HostName__ctor_m596636606 (HostName_t2890034819 * __this, String_t* ___hostName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostName__ctor_m596636606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Marshaling of parameter '___hostName0' to native representation
	Il2CppHString ____hostName0_marshaled = NULL;
	if (___hostName0 == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("hostName"), NULL, NULL);
	}

	DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___hostName0NativeView, ___hostName0);
	il2cpp::utils::Il2CppHStringReference ___hostName0HStringReference(___hostName0NativeView);
	____hostName0_marshaled = ___hostName0HStringReference;

	// Native function invocation
	IHostNameFactory_t2985905689* activationFactory = ((HostName_t2890034819_StaticFields*)HostName_t2890034819_il2cpp_TypeInfo_var->static_fields)->get_____ihostNameFactory_t2985905689();
	il2cpp_hresult_t hr = activationFactory->IHostNameFactory_CreateHostName_m4168667700(____hostName0_marshaled, &__this->____ihostName_t3179521082);
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	hr = __this->____ihostName_t3179521082->QueryInterface(Il2CppIUnknown::IID, reinterpret_cast<void**>(&__this->identity));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	il2cpp_codegen_com_register_rcw(__this);

}
// System.String Windows.Networking.HostName::get_DisplayName()
extern "C" IL2CPP_METHOD_ATTR String_t* HostName_get_DisplayName_m1444184153 (HostName_t2890034819 * __this, const RuntimeMethod* method)
{
	IHostName_t3179521082* ____ihostName_t3179521082 = __this->get_____ihostName_t3179521082();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____ihostName_t3179521082->IHostName_get_DisplayName_m3568158889(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// Windows.Networking.HostNameType Windows.Networking.HostName::get_Type()
extern "C" IL2CPP_METHOD_ATTR int32_t HostName_get_Type_m4098631914 (HostName_t2890034819 * __this, const RuntimeMethod* method)
{
	IHostName_t3179521082* ____ihostName_t3179521082 = __this->get_____ihostName_t3179521082();

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ihostName_t3179521082->IHostName_get_Type_m2074874122(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.String Windows.Networking.HostName::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* HostName_ToString_m2277178938 (HostName_t2890034819 * __this, const RuntimeMethod* method)
{
	IStringable_t1634798504* ____istringable_t1634798504 = __this->get_____istringable_t1634798504();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____istringable_t1634798504->IStringable_ToString_m698137009(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Windows.Networking.HostName::Finalize()
extern "C" IL2CPP_METHOD_ATTR void HostName_Finalize_m3490080423 (HostName_t2890034819 * __this, const RuntimeMethod* method)
{
	if (__this->____ihostName_t3179521082 != NULL)
	{
		__this->____ihostName_t3179521082->Release();
	}
	if (__this->____istringable_t1634798504 != NULL)
	{
		__this->____istringable_t1634798504->Release();
	}

	__this->____ihostName_t3179521082 = NULL;
	__this->____istringable_t1634798504 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
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
// Windows.Networking.IHostName
const Il2CppGuid IHostName_t3179521082::IID = { 0xbf8ecaad, 0xed96, 0x49a7, 0x90, 0x84, 0xd4, 0x16, 0xca, 0xe8, 0x8d, 0xcb };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Networking.IHostNameFactory
const Il2CppGuid IHostNameFactory_t2985905689::IID = { 0x458c23ed, 0x712f, 0x4576, 0xad, 0xf1, 0xc2, 0xb, 0x2c, 0x64, 0x35, 0x58 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Networking.IHostNameStatics
const Il2CppGuid IHostNameStatics_t664333692::IID = { 0xf68cd4bf, 0xa388, 0x4e8b, 0x91, 0xea, 0x54, 0xdd, 0x6d, 0xd9, 0x1, 0xc0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Networking.Sockets.IStreamSocket
const Il2CppGuid IStreamSocket_t3338378904::IID = { 0x69a22cf3, 0xfc7b, 0x4857, 0xaf, 0x38, 0xf6, 0xe7, 0xde, 0x6a, 0x5b, 0x49 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Networking.Sockets.IStreamSocket2
const Il2CppGuid IStreamSocket2_t2507586357::IID = { 0x29d0e575, 0xf314, 0x4d09, 0xad, 0xf0, 0xf, 0xbd, 0x96, 0x7f, 0xbd, 0x9f };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Networking.Sockets.IStreamSocket3
const Il2CppGuid IStreamSocket3_t2507586356::IID = { 0x3f430b00, 0x9d28, 0x4854, 0xba, 0xc3, 0x23, 0x1, 0x94, 0x1e, 0xc2, 0x23 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Networking.Sockets.IStreamSocketStatics
const Il2CppGuid IStreamSocketStatics_t566903188::IID = { 0xa420bc4a, 0x6e2e, 0x4af5, 0xb5, 0x56, 0x35, 0x5a, 0xe0, 0xcd, 0x4f, 0x29 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Networking.Sockets.StreamSocket::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StreamSocket__ctor_m2057671029 (StreamSocket_t121918173 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamSocket__ctor_m2057671029_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Native function invocation
	Il2CppIActivationFactory* activationFactory = ((StreamSocket_t121918173_StaticFields*)StreamSocket_t121918173_il2cpp_TypeInfo_var->static_fields)->get_activationFactory();
	il2cpp_hresult_t hr = activationFactory->ActivateInstance(reinterpret_cast<Il2CppIInspectable**>(&__this->identity));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	il2cpp_codegen_com_register_rcw(__this);

}
// Windows.Storage.Streams.IOutputStream Windows.Networking.Sockets.StreamSocket::get_OutputStream()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StreamSocket_get_OutputStream_m1377251550 (StreamSocket_t121918173 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamSocket_get_OutputStream_m1377251550_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IStreamSocket_t3338378904* ____istreamSocket_t3338378904 = __this->get_____istreamSocket_t3338378904();

	// Native function invocation
	IOutputStream_t2042351338* returnValue = NULL;
	const il2cpp_hresult_t hr = ____istreamSocket_t3338378904->IStreamSocket_get_OutputStream_m2118890306(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// Windows.Foundation.IAsyncAction Windows.Networking.Sockets.StreamSocket::ConnectAsync(Windows.Networking.HostName,System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StreamSocket_ConnectAsync_m633006672 (StreamSocket_t121918173 * __this, HostName_t2890034819 * ___remoteHostName0, String_t* ___remoteServiceName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamSocket_ConnectAsync_m633006672_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IStreamSocket_t3338378904* ____istreamSocket_t3338378904 = __this->get_____istreamSocket_t3338378904();

	// Marshaling of parameter '___remoteHostName0' to native representation
	IHostName_t3179521082* ____remoteHostName0_marshaled = NULL;
	if (___remoteHostName0 != NULL)
	{
		____remoteHostName0_marshaled = (___remoteHostName0)->get_____ihostName_t3179521082();
	}
	else
	{
		____remoteHostName0_marshaled = NULL;
	}

	// Marshaling of parameter '___remoteServiceName1' to native representation
	Il2CppHString ____remoteServiceName1_marshaled = NULL;
	if (___remoteServiceName1 == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("remoteServiceName"), NULL, NULL);
	}

	DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___remoteServiceName1NativeView, ___remoteServiceName1);
	il2cpp::utils::Il2CppHStringReference ___remoteServiceName1HStringReference(___remoteServiceName1NativeView);
	____remoteServiceName1_marshaled = ___remoteServiceName1HStringReference;

	// Native function invocation
	IAsyncAction_t3072713919* returnValue = NULL;
	const il2cpp_hresult_t hr = ____istreamSocket_t3338378904->IStreamSocket_ConnectAsync_m1123568840(____remoteHostName0_marshaled, ____remoteServiceName1_marshaled, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.Networking.Sockets.StreamSocket::Close()
extern "C" IL2CPP_METHOD_ATTR void StreamSocket_Close_m3009053830 (StreamSocket_t121918173 * __this, const RuntimeMethod* method)
{
	IClosable_t326290202* ____iclosable_t326290202 = __this->get_____iclosable_t326290202();

	// Native function invocation
	const il2cpp_hresult_t hr = ____iclosable_t326290202->IClosable_Close_m649191502();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Networking.Sockets.StreamSocket::Dispose()
extern "C" IL2CPP_METHOD_ATTR void StreamSocket_Dispose_m2916039844 (StreamSocket_t121918173 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamSocket_Dispose_m2916039844_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IClosableToIDisposableAdapter_System_IDisposable_Dispose_m2997536148(reinterpret_cast<IClosableToIDisposableAdapter_t3213967014 *>(__this), NULL);
}
// System.Void Windows.Networking.Sockets.StreamSocket::Finalize()
extern "C" IL2CPP_METHOD_ATTR void StreamSocket_Finalize_m3696934384 (StreamSocket_t121918173 * __this, const RuntimeMethod* method)
{
	if (__this->____istreamSocket_t3338378904 != NULL)
	{
		__this->____istreamSocket_t3338378904->Release();
	}
	if (__this->____istreamSocket2_t2507586357 != NULL)
	{
		__this->____istreamSocket2_t2507586357->Release();
	}
	if (__this->____istreamSocket3_t2507586356 != NULL)
	{
		__this->____istreamSocket3_t2507586356->Release();
	}
	if (__this->____iclosable_t326290202 != NULL)
	{
		__this->____iclosable_t326290202->Release();
	}

	__this->____istreamSocket_t3338378904 = NULL;
	__this->____istreamSocket2_t2507586357 = NULL;
	__this->____istreamSocket3_t2507586356 = NULL;
	__this->____iclosable_t326290202 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Perception.IPerceptionTimestamp
const Il2CppGuid IPerceptionTimestamp_t393505964::IID = { 0x87c24804, 0xa22e, 0x4adb, 0xba, 0x26, 0xd7, 0x8e, 0xf6, 0x39, 0xbc, 0xf4 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Perception.IPerceptionTimestampHelperStatics
const Il2CppGuid IPerceptionTimestampHelperStatics_t2092781866::IID = { 0x47a611d4, 0xa9df, 0x4edc, 0x85, 0x5d, 0xf4, 0xd3, 0x39, 0xd9, 0x67, 0xac };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Perception.PerceptionTimestamp::Finalize()
extern "C" IL2CPP_METHOD_ATTR void PerceptionTimestamp_Finalize_m215705243 (PerceptionTimestamp_t25754965 * __this, const RuntimeMethod* method)
{
	if (__this->____iperceptionTimestamp_t393505964 != NULL)
	{
		__this->____iperceptionTimestamp_t393505964->Release();
	}

	__this->____iperceptionTimestamp_t393505964 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Perception.PerceptionTimestamp Windows.Perception.PerceptionTimestampHelper::FromHistoricalTargetTime(System.DateTimeOffset)
extern "C" IL2CPP_METHOD_ATTR PerceptionTimestamp_t25754965 * PerceptionTimestampHelper_FromHistoricalTargetTime_m2265143442 (RuntimeObject * __this /* static, unused */, DateTimeOffset_t3229287507  ___targetTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PerceptionTimestampHelper_FromHistoricalTargetTime_m2265143442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPerceptionTimestampHelperStatics_t2092781866* ____iperceptionTimestampHelperStatics_t2092781866 = ((PerceptionTimestampHelper_t1405177115_StaticFields*)PerceptionTimestampHelper_t1405177115_il2cpp_TypeInfo_var->static_fields)->get_____iperceptionTimestampHelperStatics_t2092781866();

	// Marshaling of parameter '___targetTime0' to native representation
	DateTime_t1679451545  ____targetTime0_marshaled = {};
	(____targetTime0_marshaled).set_UniversalTime_0((___targetTime0.get_m_dateTime_2().get_dateData_44() & 0x3FFFFFFFFFFFFFFF) - 504911232000000000);

	// Native function invocation
	IPerceptionTimestamp_t393505964* returnValue = NULL;
	const il2cpp_hresult_t hr = ____iperceptionTimestampHelperStatics_t2092781866->IPerceptionTimestampHelperStatics_FromHistoricalTargetTime_m1803895948(____targetTime0_marshaled, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	PerceptionTimestamp_t25754965 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<PerceptionTimestamp_t25754965>(returnValue, PerceptionTimestamp_t25754965_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.Perception.PerceptionTimestampHelper::Finalize()
extern "C" IL2CPP_METHOD_ATTR void PerceptionTimestampHelper_Finalize_m2992676290 (PerceptionTimestampHelper_t1405177115 * __this, const RuntimeMethod* method)
{
	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.StorageFolder Windows.Storage.ApplicationData::get_RoamingFolder()
extern "C" IL2CPP_METHOD_ATTR StorageFolder_t985480688 * ApplicationData_get_RoamingFolder_m1540049947 (ApplicationData_t3489691988 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ApplicationData_get_RoamingFolder_m1540049947_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IApplicationData_t28886227* ____iapplicationData_t28886227 = __this->get_____iapplicationData_t28886227();

	// Native function invocation
	IStorageFolder_t2414910357* returnValue = NULL;
	const il2cpp_hresult_t hr = ____iapplicationData_t28886227->IApplicationData_get_RoamingFolder_m1109609965(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	StorageFolder_t985480688 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<StorageFolder_t985480688>(returnValue, StorageFolder_t985480688_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// Windows.Storage.ApplicationData Windows.Storage.ApplicationData::get_Current()
extern "C" IL2CPP_METHOD_ATTR ApplicationData_t3489691988 * ApplicationData_get_Current_m176918983 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ApplicationData_get_Current_m176918983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IApplicationDataStatics_t3792839446* ____iapplicationDataStatics_t3792839446 = ((ApplicationData_t3489691988_StaticFields*)ApplicationData_t3489691988_il2cpp_TypeInfo_var->static_fields)->get_____iapplicationDataStatics_t3792839446();

	// Native function invocation
	IApplicationData_t28886227* returnValue = NULL;
	const il2cpp_hresult_t hr = ____iapplicationDataStatics_t3792839446->IApplicationDataStatics_get_Current_m1299656078(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	ApplicationData_t3489691988 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<ApplicationData_t3489691988>(returnValue, ApplicationData_t3489691988_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.Storage.ApplicationData::Finalize()
extern "C" IL2CPP_METHOD_ATTR void ApplicationData_Finalize_m685630689 (ApplicationData_t3489691988 * __this, const RuntimeMethod* method)
{
	if (__this->____iapplicationData_t28886227 != NULL)
	{
		__this->____iapplicationData_t28886227->Release();
	}
	if (__this->____iapplicationData2_t163893929 != NULL)
	{
		__this->____iapplicationData2_t163893929->Release();
	}
	if (__this->____iapplicationData3_t163893930 != NULL)
	{
		__this->____iapplicationData3_t163893930->Release();
	}

	__this->____iapplicationData_t28886227 = NULL;
	__this->____iapplicationData2_t163893929 = NULL;
	__this->____iapplicationData3_t163893930 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
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
// Windows.Storage.IApplicationData
const Il2CppGuid IApplicationData_t28886227::IID = { 0xc3da6fb7, 0xb744, 0x4b45, 0xb0, 0xb8, 0x22, 0x3a, 0x9, 0x38, 0xd0, 0xdc };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.IApplicationData2
const Il2CppGuid IApplicationData2_t163893929::IID = { 0x9e65cd69, 0xba3, 0x4e32, 0xbe, 0x29, 0xb0, 0x2d, 0xe6, 0x60, 0x76, 0x38 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.IApplicationData3
const Il2CppGuid IApplicationData3_t163893930::IID = { 0xdc222cf4, 0x2772, 0x4c1d, 0xaa, 0x2c, 0xc9, 0xf7, 0x43, 0xad, 0xe8, 0xd1 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.IApplicationDataStatics
const Il2CppGuid IApplicationDataStatics_t3792839446::IID = { 0x5612147b, 0xe843, 0x45e3, 0x94, 0xd8, 0x6, 0x16, 0x9e, 0x3c, 0x8e, 0x17 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.IApplicationDataStatics2
const Il2CppGuid IApplicationDataStatics2_t2938905366::IID = { 0xcd606211, 0xcf49, 0x40a4, 0xa4, 0x7c, 0xc7, 0xf0, 0xdb, 0xba, 0x81, 0x7 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.IStorageFile
const Il2CppGuid IStorageFile_t455187485::IID = { 0xfa3f6186, 0x4214, 0x428c, 0xa6, 0x4c, 0x14, 0xc9, 0xac, 0x73, 0x15, 0xea };
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStream> Windows.Storage.IStorageFile::OpenAsync(Windows.Storage.FileAccessMode)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IStorageFile_OpenAsync_m1037381949 (RuntimeObject* __this, int32_t ___accessMode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IStorageFile_OpenAsync_m1037381949_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IStorageFile_t455187485* ____istorageFile_t455187485 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IStorageFile_t455187485::IID, reinterpret_cast<void**>(&____istorageFile_t455187485));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperation_1_t721183771* returnValue = NULL;
	hr = ____istorageFile_t455187485->IStorageFile_OpenAsync_m1037381949(___accessMode0, &returnValue);
	____istorageFile_t455187485->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.IStorageFile2
const Il2CppGuid IStorageFile2_t81501002::IID = { 0x954e4bcf, 0xa77, 0x42fb, 0xb7, 0x77, 0xc2, 0xed, 0x58, 0xa5, 0x2e, 0x44 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.IStorageFilePropertiesWithAvailability
const Il2CppGuid IStorageFilePropertiesWithAvailability_t1554344922::IID = { 0xafcbbe9b, 0x582b, 0x4133, 0x96, 0x48, 0xe4, 0x4c, 0xa4, 0x6e, 0xe4, 0x91 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.IStorageFileStatics
const Il2CppGuid IStorageFileStatics_t4131808966::IID = { 0x5984c710, 0xdaf2, 0x43c8, 0x8b, 0xb4, 0xa4, 0xd3, 0xea, 0xcf, 0xd0, 0x3f };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.IStorageFolder
const Il2CppGuid IStorageFolder_t2414910357::IID = { 0x72d1cb78, 0xb3ef, 0x4f75, 0xa8, 0xb, 0x6f, 0xd9, 0xda, 0xe2, 0x94, 0x4b };
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile> Windows.Storage.IStorageFolder::CreateFileAsync(System.String,Windows.Storage.CreationCollisionOption)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IStorageFolder_CreateFileAsync_m3292856642 (RuntimeObject* __this, String_t* ___desiredName0, int32_t ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IStorageFolder_CreateFileAsync_m3292856642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IStorageFolder_t2414910357* ____istorageFolder_t2414910357 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IStorageFolder_t2414910357::IID, reinterpret_cast<void**>(&____istorageFolder_t2414910357));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___desiredName0' to native representation
	Il2CppHString ____desiredName0_marshaled = NULL;
	if (___desiredName0 == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("desiredName"), NULL, NULL);
	}

	DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___desiredName0NativeView, ___desiredName0);
	il2cpp::utils::Il2CppHStringReference ___desiredName0HStringReference(___desiredName0NativeView);
	____desiredName0_marshaled = ___desiredName0HStringReference;

	// Native function invocation
	IAsyncOperation_1_t372991836* returnValue = NULL;
	hr = ____istorageFolder_t2414910357->IStorageFolder_CreateFileAsync_m3292856642(____desiredName0_marshaled, ___options1, &returnValue);
	____istorageFolder_t2414910357->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile> Windows.Storage.IStorageFolder::GetFileAsync(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IStorageFolder_GetFileAsync_m859688798 (RuntimeObject* __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IStorageFolder_GetFileAsync_m859688798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IStorageFolder_t2414910357* ____istorageFolder_t2414910357 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IStorageFolder_t2414910357::IID, reinterpret_cast<void**>(&____istorageFolder_t2414910357));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___name0' to native representation
	Il2CppHString ____name0_marshaled = NULL;
	if (___name0 == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("name"), NULL, NULL);
	}

	DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___name0NativeView, ___name0);
	il2cpp::utils::Il2CppHStringReference ___name0HStringReference(___name0NativeView);
	____name0_marshaled = ___name0HStringReference;

	// Native function invocation
	IAsyncOperation_1_t372991836* returnValue = NULL;
	hr = ____istorageFolder_t2414910357->IStorageFolder_GetFileAsync_m859688798(____name0_marshaled, &returnValue);
	____istorageFolder_t2414910357->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.IStorageFolder2
const Il2CppGuid IStorageFolder2_t3506658410::IID = { 0xe827e8b9, 0x8d9, 0x4a8e, 0xa0, 0xac, 0xfe, 0x5e, 0xd3, 0xcb, 0xbb, 0xd3 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.IStorageFolder3
const Il2CppGuid IStorageFolder3_t1940574469::IID = { 0x9f617899, 0xbde1, 0x4124, 0xae, 0xb3, 0xb0, 0x6a, 0xd9, 0x6f, 0x98, 0xd4 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.IStorageFolderStatics
const Il2CppGuid IStorageFolderStatics_t333412554::IID = { 0x8f327ff, 0x85d5, 0x48b9, 0xae, 0xe9, 0x28, 0x51, 0x1e, 0x33, 0x9f, 0x9f };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.IStorageItem
const Il2CppGuid IStorageItem_t3194585767::IID = { 0x4207a996, 0xca2f, 0x42f7, 0xbd, 0xe8, 0x8b, 0x10, 0x45, 0x7a, 0x7f, 0x30 };
// System.String Windows.Storage.IStorageItem::get_Path()
extern "C" IL2CPP_METHOD_ATTR String_t* IStorageItem_get_Path_m1853866705 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IStorageItem_t3194585767* ____istorageItem_t3194585767 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IStorageItem_t3194585767::IID, reinterpret_cast<void**>(&____istorageItem_t3194585767));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppHString returnValue = NULL;
	hr = ____istorageItem_t3194585767->IStorageItem_get_Path_m1853866705(&returnValue);
	____istorageItem_t3194585767->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.IStorageItem2
const Il2CppGuid IStorageItem2_t2827190580::IID = { 0x53f926d2, 0x83c, 0x4283, 0xb4, 0x5b, 0x81, 0xc0, 0x7, 0x23, 0x7e, 0x44 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.IStorageItemProperties
const Il2CppGuid IStorageItemProperties_t2031733036::IID = { 0x86664478, 0x8029, 0x46fe, 0xa7, 0x89, 0x1c, 0x2f, 0x3e, 0x2f, 0xfb, 0x5c };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.IStorageItemProperties2
const Il2CppGuid IStorageItemProperties2_t3993257882::IID = { 0x8e86a951, 0x4b9, 0x4bd2, 0x92, 0x9d, 0xfe, 0xf3, 0xf7, 0x16, 0x21, 0xd0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.IStorageItemPropertiesWithProvider
const Il2CppGuid IStorageItemPropertiesWithProvider_t3527078644::IID = { 0x861bf39b, 0x6368, 0x4dee, 0xb4, 0xe, 0x74, 0x68, 0x4a, 0x5c, 0xe7, 0x14 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Search.IStorageFolderQueryOperations
const Il2CppGuid IStorageFolderQueryOperations_t91328000::IID = { 0xcb43ccc9, 0x446b, 0x4a4f, 0xbe, 0x97, 0x75, 0x77, 0x71, 0xbe, 0x52, 0x3 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStream> Windows.Storage.StorageFile::OpenAsync(Windows.Storage.FileAccessMode)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StorageFile_OpenAsync_m538658279 (StorageFile_t1751804116 * __this, int32_t ___accessMode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageFile_OpenAsync_m538658279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IStorageFile_t455187485* ____istorageFile_t455187485 = __this->get_____istorageFile_t455187485();

	// Native function invocation
	IAsyncOperation_1_t721183771* returnValue = NULL;
	const il2cpp_hresult_t hr = ____istorageFile_t455187485->IStorageFile_OpenAsync_m1037381949(___accessMode0, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.String Windows.Storage.StorageFile::get_Path()
extern "C" IL2CPP_METHOD_ATTR String_t* StorageFile_get_Path_m2670638499 (StorageFile_t1751804116 * __this, const RuntimeMethod* method)
{
	IStorageItem_t3194585767* ____istorageItem_t3194585767 = __this->get_____istorageItem_t3194585767();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____istorageItem_t3194585767->IStorageItem_get_Path_m1853866705(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType> Windows.Storage.StorageFile::OpenReadAsync()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StorageFile_OpenReadAsync_m2378001648 (StorageFile_t1751804116 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageFile_OpenReadAsync_m2378001648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IRandomAccessStreamReference_t2718546672* ____irandomAccessStreamReference_t2718546672 = __this->get_____irandomAccessStreamReference_t2718546672();

	// Native function invocation
	IAsyncOperation_1_t1918115372* returnValue = NULL;
	const il2cpp_hresult_t hr = ____irandomAccessStreamReference_t2718546672->IRandomAccessStreamReference_OpenReadAsync_m2508312280(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.Storage.StorageFile::Finalize()
extern "C" IL2CPP_METHOD_ATTR void StorageFile_Finalize_m2558024626 (StorageFile_t1751804116 * __this, const RuntimeMethod* method)
{
	if (__this->____istorageFile_t455187485 != NULL)
	{
		__this->____istorageFile_t455187485->Release();
	}
	if (__this->____iinputStreamReference_t980626503 != NULL)
	{
		__this->____iinputStreamReference_t980626503->Release();
	}
	if (__this->____irandomAccessStreamReference_t2718546672 != NULL)
	{
		__this->____irandomAccessStreamReference_t2718546672->Release();
	}
	if (__this->____istorageItem_t3194585767 != NULL)
	{
		__this->____istorageItem_t3194585767->Release();
	}
	if (__this->____istorageItemProperties_t2031733036 != NULL)
	{
		__this->____istorageItemProperties_t2031733036->Release();
	}
	if (__this->____istorageItemProperties2_t3993257882 != NULL)
	{
		__this->____istorageItemProperties2_t3993257882->Release();
	}
	if (__this->____istorageItem2_t2827190580 != NULL)
	{
		__this->____istorageItem2_t2827190580->Release();
	}
	if (__this->____istorageItemPropertiesWithProvider_t3527078644 != NULL)
	{
		__this->____istorageItemPropertiesWithProvider_t3527078644->Release();
	}
	if (__this->____istorageFilePropertiesWithAvailability_t1554344922 != NULL)
	{
		__this->____istorageFilePropertiesWithAvailability_t1554344922->Release();
	}
	if (__this->____istorageFile2_t81501002 != NULL)
	{
		__this->____istorageFile2_t81501002->Release();
	}

	__this->____istorageFile_t455187485 = NULL;
	__this->____iinputStreamReference_t980626503 = NULL;
	__this->____irandomAccessStreamReference_t2718546672 = NULL;
	__this->____istorageItem_t3194585767 = NULL;
	__this->____istorageItemProperties_t2031733036 = NULL;
	__this->____istorageItemProperties2_t3993257882 = NULL;
	__this->____istorageItem2_t2827190580 = NULL;
	__this->____istorageItemPropertiesWithProvider_t3527078644 = NULL;
	__this->____istorageFilePropertiesWithAvailability_t1554344922 = NULL;
	__this->____istorageFile2_t81501002 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile> Windows.Storage.StorageFolder::CreateFileAsync(System.String,Windows.Storage.CreationCollisionOption)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StorageFolder_CreateFileAsync_m3867105292 (StorageFolder_t985480688 * __this, String_t* ___desiredName0, int32_t ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageFolder_CreateFileAsync_m3867105292_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IStorageFolder_t2414910357* ____istorageFolder_t2414910357 = __this->get_____istorageFolder_t2414910357();

	// Marshaling of parameter '___desiredName0' to native representation
	Il2CppHString ____desiredName0_marshaled = NULL;
	if (___desiredName0 == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("desiredName"), NULL, NULL);
	}

	DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___desiredName0NativeView, ___desiredName0);
	il2cpp::utils::Il2CppHStringReference ___desiredName0HStringReference(___desiredName0NativeView);
	____desiredName0_marshaled = ___desiredName0HStringReference;

	// Native function invocation
	IAsyncOperation_1_t372991836* returnValue = NULL;
	const il2cpp_hresult_t hr = ____istorageFolder_t2414910357->IStorageFolder_CreateFileAsync_m3292856642(____desiredName0_marshaled, ___options1, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile> Windows.Storage.StorageFolder::GetFileAsync(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StorageFolder_GetFileAsync_m449690548 (StorageFolder_t985480688 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageFolder_GetFileAsync_m449690548_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IStorageFolder_t2414910357* ____istorageFolder_t2414910357 = __this->get_____istorageFolder_t2414910357();

	// Marshaling of parameter '___name0' to native representation
	Il2CppHString ____name0_marshaled = NULL;
	if (___name0 == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("name"), NULL, NULL);
	}

	DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___name0NativeView, ___name0);
	il2cpp::utils::Il2CppHStringReference ___name0HStringReference(___name0NativeView);
	____name0_marshaled = ___name0HStringReference;

	// Native function invocation
	IAsyncOperation_1_t372991836* returnValue = NULL;
	const il2cpp_hresult_t hr = ____istorageFolder_t2414910357->IStorageFolder_GetFileAsync_m859688798(____name0_marshaled, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.String Windows.Storage.StorageFolder::get_Path()
extern "C" IL2CPP_METHOD_ATTR String_t* StorageFolder_get_Path_m3373307912 (StorageFolder_t985480688 * __this, const RuntimeMethod* method)
{
	IStorageItem_t3194585767* ____istorageItem_t3194585767 = __this->get_____istorageItem_t3194585767();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____istorageItem_t3194585767->IStorageItem_get_Path_m1853866705(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFolder> Windows.Storage.StorageFolder::GetFolderFromPathAsync(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StorageFolder_GetFolderFromPathAsync_m2929233224 (RuntimeObject * __this /* static, unused */, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageFolder_GetFolderFromPathAsync_m2929233224_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IStorageFolderStatics_t333412554* ____istorageFolderStatics_t333412554 = ((StorageFolder_t985480688_StaticFields*)StorageFolder_t985480688_il2cpp_TypeInfo_var->static_fields)->get_____istorageFolderStatics_t333412554();

	// Marshaling of parameter '___path0' to native representation
	Il2CppHString ____path0_marshaled = NULL;
	if (___path0 == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("path"), NULL, NULL);
	}

	DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___path0NativeView, ___path0);
	il2cpp::utils::Il2CppHStringReference ___path0HStringReference(___path0NativeView);
	____path0_marshaled = ___path0HStringReference;

	// Native function invocation
	IAsyncOperation_1_t3901635704* returnValue = NULL;
	const il2cpp_hresult_t hr = ____istorageFolderStatics_t333412554->IStorageFolderStatics_GetFolderFromPathAsync_m3674878916(____path0_marshaled, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.Storage.StorageFolder::Finalize()
extern "C" IL2CPP_METHOD_ATTR void StorageFolder_Finalize_m630938030 (StorageFolder_t985480688 * __this, const RuntimeMethod* method)
{
	if (__this->____istorageFolder_t2414910357 != NULL)
	{
		__this->____istorageFolder_t2414910357->Release();
	}
	if (__this->____istorageItem_t3194585767 != NULL)
	{
		__this->____istorageItem_t3194585767->Release();
	}
	if (__this->____istorageFolderQueryOperations_t91328000 != NULL)
	{
		__this->____istorageFolderQueryOperations_t91328000->Release();
	}
	if (__this->____istorageItemProperties_t2031733036 != NULL)
	{
		__this->____istorageItemProperties_t2031733036->Release();
	}
	if (__this->____istorageItemProperties2_t3993257882 != NULL)
	{
		__this->____istorageItemProperties2_t3993257882->Release();
	}
	if (__this->____istorageItem2_t2827190580 != NULL)
	{
		__this->____istorageItem2_t2827190580->Release();
	}
	if (__this->____istorageFolder2_t3506658410 != NULL)
	{
		__this->____istorageFolder2_t3506658410->Release();
	}
	if (__this->____istorageItemPropertiesWithProvider_t3527078644 != NULL)
	{
		__this->____istorageItemPropertiesWithProvider_t3527078644->Release();
	}
	if (__this->____istorageFolder3_t1940574469 != NULL)
	{
		__this->____istorageFolder3_t1940574469->Release();
	}

	__this->____istorageFolder_t2414910357 = NULL;
	__this->____istorageItem_t3194585767 = NULL;
	__this->____istorageFolderQueryOperations_t91328000 = NULL;
	__this->____istorageItemProperties_t2031733036 = NULL;
	__this->____istorageItemProperties2_t3993257882 = NULL;
	__this->____istorageItem2_t2827190580 = NULL;
	__this->____istorageFolder2_t3506658410 = NULL;
	__this->____istorageItemPropertiesWithProvider_t3527078644 = NULL;
	__this->____istorageFolder3_t1940574469 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Storage.Streams.DataReader::.ctor(Windows.Storage.Streams.IInputStream)
extern "C" IL2CPP_METHOD_ATTR void DataReader__ctor_m3546808691 (DataReader_t2381813649 * __this, RuntimeObject* ___inputStream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataReader__ctor_m3546808691_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Marshaling of parameter '___inputStream0' to native representation
	IInputStream_t2821136229* ____inputStream0_marshaled = NULL;
	if (___inputStream0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___inputStream0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___inputStream0)->identity->QueryInterface(IInputStream_t2821136229::IID, reinterpret_cast<void**>(&____inputStream0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____inputStream0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IInputStream_t2821136229>(___inputStream0);
		}
	}
	else
	{
		____inputStream0_marshaled = NULL;
	}

	// Native function invocation
	IDataReaderFactory_t2217455388* activationFactory = ((DataReader_t2381813649_StaticFields*)DataReader_t2381813649_il2cpp_TypeInfo_var->static_fields)->get_____idataReaderFactory_t2217455388();
	il2cpp_hresult_t hr = activationFactory->IDataReaderFactory_CreateDataReader_m3942767827(____inputStream0_marshaled, &__this->____idataReader_t3392321383);
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	hr = __this->____idataReader_t3392321383->QueryInterface(Il2CppIUnknown::IID, reinterpret_cast<void**>(&__this->identity));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	il2cpp_codegen_com_register_rcw(__this);

	// Marshaling cleanup of parameter '___inputStream0' native representation
	if (____inputStream0_marshaled != NULL)
	{
		(____inputStream0_marshaled)->Release();
		____inputStream0_marshaled = NULL;
	}

}
// System.Void Windows.Storage.Streams.DataReader::ReadBytes(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void DataReader_ReadBytes_m2999338447 (DataReader_t2381813649 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	IDataReader_t3392321383* ____idataReader_t3392321383 = __this->get_____idataReader_t3392321383();

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_marshaledArraySize = 0;
	uint8_t* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_marshaledArraySize = static_cast<uint32_t>((___value0)->max_length);
		____value0_marshaled = il2cpp_codegen_marshal_allocate_array<uint8_t>(static_cast<int32_t>(____value0_marshaledArraySize));
		memset(____value0_marshaled, 0, static_cast<int32_t>(____value0_marshaledArraySize) * sizeof(uint8_t));
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____idataReader_t3392321383->IDataReader_ReadBytes_m3117293785(____value0_marshaledArraySize, ____value0_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	if (____value0_marshaled != NULL)
	{
		____value0_marshaledArraySize = static_cast<uint32_t>((___value0)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____value0_marshaledArraySize)); i++)
		{
			(___value0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____value0_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___value0' native representation
	il2cpp_codegen_marshal_free(____value0_marshaled);
	____value0_marshaled = NULL;

}
// Windows.Storage.Streams.DataReaderLoadOperation Windows.Storage.Streams.DataReader::LoadAsync(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR DataReaderLoadOperation_t4248924386 * DataReader_LoadAsync_m3742007295 (DataReader_t2381813649 * __this, uint32_t ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataReader_LoadAsync_m3742007295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IDataReader_t3392321383* ____idataReader_t3392321383 = __this->get_____idataReader_t3392321383();

	// Native function invocation
	IAsyncOperation_1_t1181249698* returnValue = NULL;
	const il2cpp_hresult_t hr = ____idataReader_t3392321383->IDataReader_LoadAsync_m90647872(___count0, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	DataReaderLoadOperation_t4248924386 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<DataReaderLoadOperation_t4248924386>(returnValue, DataReaderLoadOperation_t4248924386_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.Storage.Streams.DataReader::Close()
extern "C" IL2CPP_METHOD_ATTR void DataReader_Close_m2253488987 (DataReader_t2381813649 * __this, const RuntimeMethod* method)
{
	IClosable_t326290202* ____iclosable_t326290202 = __this->get_____iclosable_t326290202();

	// Native function invocation
	const il2cpp_hresult_t hr = ____iclosable_t326290202->IClosable_Close_m649191502();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Storage.Streams.DataReader::Dispose()
extern "C" IL2CPP_METHOD_ATTR void DataReader_Dispose_m2201628169 (DataReader_t2381813649 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataReader_Dispose_m2201628169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IClosableToIDisposableAdapter_System_IDisposable_Dispose_m2997536148(reinterpret_cast<IClosableToIDisposableAdapter_t3213967014 *>(__this), NULL);
}
// System.Void Windows.Storage.Streams.DataReader::Finalize()
extern "C" IL2CPP_METHOD_ATTR void DataReader_Finalize_m2714355852 (DataReader_t2381813649 * __this, const RuntimeMethod* method)
{
	if (__this->____idataReader_t3392321383 != NULL)
	{
		__this->____idataReader_t3392321383->Release();
	}
	if (__this->____iclosable_t326290202 != NULL)
	{
		__this->____iclosable_t326290202->Release();
	}

	__this->____idataReader_t3392321383 = NULL;
	__this->____iclosable_t326290202 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Storage.Streams.DataReaderLoadOperation::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>)
extern "C" IL2CPP_METHOD_ATTR void DataReaderLoadOperation_put_Completed_m3945104638 (DataReaderLoadOperation_t4248924386 * __this, AsyncOperationCompletedHandler_1_t3900534053 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataReaderLoadOperation_put_Completed_m3945104638_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t1181249698* ____iasyncOperation_1_t1181249698 = __this->get_____iasyncOperation_1_t1181249698();

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____iasyncOperation_1_t1181249698->IAsyncOperation_1_put_Completed_m1437779878(____handler0_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32> Windows.Storage.Streams.DataReaderLoadOperation::get_Completed()
extern "C" IL2CPP_METHOD_ATTR AsyncOperationCompletedHandler_1_t3900534053 * DataReaderLoadOperation_get_Completed_m1598730189 (DataReaderLoadOperation_t4248924386 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataReaderLoadOperation_get_Completed_m1598730189_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t1181249698* ____iasyncOperation_1_t1181249698 = __this->get_____iasyncOperation_1_t1181249698();

	// Native function invocation
	IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper* returnValue = NULL;
	const il2cpp_hresult_t hr = ____iasyncOperation_1_t1181249698->IAsyncOperation_1_get_Completed_m2736054029(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationCompletedHandler_1_t3900534053 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_t3900534053 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationCompletedHandler_1_t3900534053*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t3900534053_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationCompletedHandler_1_Invoke_m274646961_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_m274646961_RuntimeMethod_var);
			_returnValue_unmarshaled->set_method_3(methodInfo);
			_returnValue_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t1102178620>(returnValue, __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var));
		}
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Storage.Streams.DataReaderLoadOperation::GetResults()
extern "C" IL2CPP_METHOD_ATTR uint32_t DataReaderLoadOperation_GetResults_m883465177 (DataReaderLoadOperation_t4248924386 * __this, const RuntimeMethod* method)
{
	IAsyncOperation_1_t1181249698* ____iasyncOperation_1_t1181249698 = __this->get_____iasyncOperation_1_t1181249698();

	// Native function invocation
	uint32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____iasyncOperation_1_t1181249698->IAsyncOperation_1_GetResults_m2010780058(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Storage.Streams.DataReaderLoadOperation::get_Id()
extern "C" IL2CPP_METHOD_ATTR uint32_t DataReaderLoadOperation_get_Id_m2547917868 (DataReaderLoadOperation_t4248924386 * __this, const RuntimeMethod* method)
{
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444 = __this->get_____iasyncInfo_t2425795444();

	// Native function invocation
	uint32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____iasyncInfo_t2425795444->IAsyncInfo_get_Id_m488151110(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// Windows.Foundation.AsyncStatus Windows.Storage.Streams.DataReaderLoadOperation::get_Status()
extern "C" IL2CPP_METHOD_ATTR int32_t DataReaderLoadOperation_get_Status_m3365780497 (DataReaderLoadOperation_t4248924386 * __this, const RuntimeMethod* method)
{
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444 = __this->get_____iasyncInfo_t2425795444();

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____iasyncInfo_t2425795444->IAsyncInfo_get_Status_m774826579(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Exception Windows.Storage.Streams.DataReaderLoadOperation::get_ErrorCode()
extern "C" IL2CPP_METHOD_ATTR Exception_t * DataReaderLoadOperation_get_ErrorCode_m3850507002 (DataReaderLoadOperation_t4248924386 * __this, const RuntimeMethod* method)
{
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444 = __this->get_____iasyncInfo_t2425795444();

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____iasyncInfo_t2425795444->IAsyncInfo_get_ErrorCode_m1014534200(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return (returnValue != IL2CPP_S_OK ? reinterpret_cast<Exception_t *>(il2cpp_codegen_com_get_exception(returnValue, false)) : NULL);
}
// System.Void Windows.Storage.Streams.DataReaderLoadOperation::Cancel()
extern "C" IL2CPP_METHOD_ATTR void DataReaderLoadOperation_Cancel_m1836407579 (DataReaderLoadOperation_t4248924386 * __this, const RuntimeMethod* method)
{
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444 = __this->get_____iasyncInfo_t2425795444();

	// Native function invocation
	const il2cpp_hresult_t hr = ____iasyncInfo_t2425795444->IAsyncInfo_Cancel_m959568370();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Storage.Streams.DataReaderLoadOperation::Close()
extern "C" IL2CPP_METHOD_ATTR void DataReaderLoadOperation_Close_m1779741889 (DataReaderLoadOperation_t4248924386 * __this, const RuntimeMethod* method)
{
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444 = __this->get_____iasyncInfo_t2425795444();

	// Native function invocation
	const il2cpp_hresult_t hr = ____iasyncInfo_t2425795444->IAsyncInfo_Close_m1968429586();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Storage.Streams.DataReaderLoadOperation::Finalize()
extern "C" IL2CPP_METHOD_ATTR void DataReaderLoadOperation_Finalize_m4066143518 (DataReaderLoadOperation_t4248924386 * __this, const RuntimeMethod* method)
{
	if (__this->____iasyncOperation_1_t1181249698 != NULL)
	{
		__this->____iasyncOperation_1_t1181249698->Release();
	}
	if (__this->____iasyncInfo_t2425795444 != NULL)
	{
		__this->____iasyncInfo_t2425795444->Release();
	}

	__this->____iasyncOperation_1_t1181249698 = NULL;
	__this->____iasyncInfo_t2425795444 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Storage.Streams.DataWriter::.ctor(Windows.Storage.Streams.IOutputStream)
extern "C" IL2CPP_METHOD_ATTR void DataWriter__ctor_m2564181716 (DataWriter_t841151054 * __this, RuntimeObject* ___outputStream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataWriter__ctor_m2564181716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Marshaling of parameter '___outputStream0' to native representation
	IOutputStream_t2042351338* ____outputStream0_marshaled = NULL;
	if (___outputStream0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___outputStream0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___outputStream0)->identity->QueryInterface(IOutputStream_t2042351338::IID, reinterpret_cast<void**>(&____outputStream0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____outputStream0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IOutputStream_t2042351338>(___outputStream0);
		}
	}
	else
	{
		____outputStream0_marshaled = NULL;
	}

	// Native function invocation
	IDataWriterFactory_t624500286* activationFactory = ((DataWriter_t841151054_StaticFields*)DataWriter_t841151054_il2cpp_TypeInfo_var->static_fields)->get_____idataWriterFactory_t624500286();
	il2cpp_hresult_t hr = activationFactory->IDataWriterFactory_CreateDataWriter_m3380054010(____outputStream0_marshaled, &__this->____idataWriter_t1260434628);
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	hr = __this->____idataWriter_t1260434628->QueryInterface(Il2CppIUnknown::IID, reinterpret_cast<void**>(&__this->identity));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	il2cpp_codegen_com_register_rcw(__this);

	// Marshaling cleanup of parameter '___outputStream0' native representation
	if (____outputStream0_marshaled != NULL)
	{
		(____outputStream0_marshaled)->Release();
		____outputStream0_marshaled = NULL;
	}

}
// System.Void Windows.Storage.Streams.DataWriter::WriteBytes(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void DataWriter_WriteBytes_m3452721896 (DataWriter_t841151054 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	IDataWriter_t1260434628* ____idataWriter_t1260434628 = __this->get_____idataWriter_t1260434628();

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_marshaledArraySize = 0;
	uint8_t* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_marshaledArraySize = static_cast<uint32_t>((___value0)->max_length);
		____value0_marshaled = reinterpret_cast<uint8_t*>((___value0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____idataWriter_t1260434628->IDataWriter_WriteBytes_m1463346676(____value0_marshaledArraySize, ____value0_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Storage.Streams.DataWriter::WriteInt32(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DataWriter_WriteInt32_m1439942767 (DataWriter_t841151054 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	IDataWriter_t1260434628* ____idataWriter_t1260434628 = __this->get_____idataWriter_t1260434628();

	// Native function invocation
	const il2cpp_hresult_t hr = ____idataWriter_t1260434628->IDataWriter_WriteInt32_m3302687114(___value0);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// Windows.Storage.Streams.DataWriterStoreOperation Windows.Storage.Streams.DataWriter::StoreAsync()
extern "C" IL2CPP_METHOD_ATTR DataWriterStoreOperation_t1087990177 * DataWriter_StoreAsync_m2461251696 (DataWriter_t841151054 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataWriter_StoreAsync_m2461251696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IDataWriter_t1260434628* ____idataWriter_t1260434628 = __this->get_____idataWriter_t1260434628();

	// Native function invocation
	IAsyncOperation_1_t1181249698* returnValue = NULL;
	const il2cpp_hresult_t hr = ____idataWriter_t1260434628->IDataWriter_StoreAsync_m1501074270(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	DataWriterStoreOperation_t1087990177 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<DataWriterStoreOperation_t1087990177>(returnValue, DataWriterStoreOperation_t1087990177_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.Storage.Streams.DataWriter::Close()
extern "C" IL2CPP_METHOD_ATTR void DataWriter_Close_m3303165737 (DataWriter_t841151054 * __this, const RuntimeMethod* method)
{
	IClosable_t326290202* ____iclosable_t326290202 = __this->get_____iclosable_t326290202();

	// Native function invocation
	const il2cpp_hresult_t hr = ____iclosable_t326290202->IClosable_Close_m649191502();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Storage.Streams.DataWriter::Dispose()
extern "C" IL2CPP_METHOD_ATTR void DataWriter_Dispose_m622590890 (DataWriter_t841151054 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataWriter_Dispose_m622590890_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IClosableToIDisposableAdapter_System_IDisposable_Dispose_m2997536148(reinterpret_cast<IClosableToIDisposableAdapter_t3213967014 *>(__this), NULL);
}
// System.Void Windows.Storage.Streams.DataWriter::Finalize()
extern "C" IL2CPP_METHOD_ATTR void DataWriter_Finalize_m2055120861 (DataWriter_t841151054 * __this, const RuntimeMethod* method)
{
	if (__this->____idataWriter_t1260434628 != NULL)
	{
		__this->____idataWriter_t1260434628->Release();
	}
	if (__this->____iclosable_t326290202 != NULL)
	{
		__this->____iclosable_t326290202->Release();
	}

	__this->____idataWriter_t1260434628 = NULL;
	__this->____iclosable_t326290202 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Storage.Streams.DataWriterStoreOperation::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>)
extern "C" IL2CPP_METHOD_ATTR void DataWriterStoreOperation_put_Completed_m3609646651 (DataWriterStoreOperation_t1087990177 * __this, AsyncOperationCompletedHandler_1_t3900534053 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataWriterStoreOperation_put_Completed_m3609646651_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t1181249698* ____iasyncOperation_1_t1181249698 = __this->get_____iasyncOperation_1_t1181249698();

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____iasyncOperation_1_t1181249698->IAsyncOperation_1_put_Completed_m1437779878(____handler0_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32> Windows.Storage.Streams.DataWriterStoreOperation::get_Completed()
extern "C" IL2CPP_METHOD_ATTR AsyncOperationCompletedHandler_1_t3900534053 * DataWriterStoreOperation_get_Completed_m3833914415 (DataWriterStoreOperation_t1087990177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataWriterStoreOperation_get_Completed_m3833914415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t1181249698* ____iasyncOperation_1_t1181249698 = __this->get_____iasyncOperation_1_t1181249698();

	// Native function invocation
	IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper* returnValue = NULL;
	const il2cpp_hresult_t hr = ____iasyncOperation_1_t1181249698->IAsyncOperation_1_get_Completed_m2736054029(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationCompletedHandler_1_t3900534053 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_t3900534053 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationCompletedHandler_1_t3900534053*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t3900534053_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationCompletedHandler_1_Invoke_m274646961_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_m274646961_RuntimeMethod_var);
			_returnValue_unmarshaled->set_method_3(methodInfo);
			_returnValue_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t1102178620>(returnValue, __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var));
		}
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Storage.Streams.DataWriterStoreOperation::GetResults()
extern "C" IL2CPP_METHOD_ATTR uint32_t DataWriterStoreOperation_GetResults_m131634686 (DataWriterStoreOperation_t1087990177 * __this, const RuntimeMethod* method)
{
	IAsyncOperation_1_t1181249698* ____iasyncOperation_1_t1181249698 = __this->get_____iasyncOperation_1_t1181249698();

	// Native function invocation
	uint32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____iasyncOperation_1_t1181249698->IAsyncOperation_1_GetResults_m2010780058(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Storage.Streams.DataWriterStoreOperation::get_Id()
extern "C" IL2CPP_METHOD_ATTR uint32_t DataWriterStoreOperation_get_Id_m4276953878 (DataWriterStoreOperation_t1087990177 * __this, const RuntimeMethod* method)
{
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444 = __this->get_____iasyncInfo_t2425795444();

	// Native function invocation
	uint32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____iasyncInfo_t2425795444->IAsyncInfo_get_Id_m488151110(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// Windows.Foundation.AsyncStatus Windows.Storage.Streams.DataWriterStoreOperation::get_Status()
extern "C" IL2CPP_METHOD_ATTR int32_t DataWriterStoreOperation_get_Status_m2482612462 (DataWriterStoreOperation_t1087990177 * __this, const RuntimeMethod* method)
{
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444 = __this->get_____iasyncInfo_t2425795444();

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____iasyncInfo_t2425795444->IAsyncInfo_get_Status_m774826579(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Exception Windows.Storage.Streams.DataWriterStoreOperation::get_ErrorCode()
extern "C" IL2CPP_METHOD_ATTR Exception_t * DataWriterStoreOperation_get_ErrorCode_m1424765880 (DataWriterStoreOperation_t1087990177 * __this, const RuntimeMethod* method)
{
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444 = __this->get_____iasyncInfo_t2425795444();

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____iasyncInfo_t2425795444->IAsyncInfo_get_ErrorCode_m1014534200(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return (returnValue != IL2CPP_S_OK ? reinterpret_cast<Exception_t *>(il2cpp_codegen_com_get_exception(returnValue, false)) : NULL);
}
// System.Void Windows.Storage.Streams.DataWriterStoreOperation::Cancel()
extern "C" IL2CPP_METHOD_ATTR void DataWriterStoreOperation_Cancel_m1192866715 (DataWriterStoreOperation_t1087990177 * __this, const RuntimeMethod* method)
{
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444 = __this->get_____iasyncInfo_t2425795444();

	// Native function invocation
	const il2cpp_hresult_t hr = ____iasyncInfo_t2425795444->IAsyncInfo_Cancel_m959568370();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Storage.Streams.DataWriterStoreOperation::Close()
extern "C" IL2CPP_METHOD_ATTR void DataWriterStoreOperation_Close_m3068257364 (DataWriterStoreOperation_t1087990177 * __this, const RuntimeMethod* method)
{
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444 = __this->get_____iasyncInfo_t2425795444();

	// Native function invocation
	const il2cpp_hresult_t hr = ____iasyncInfo_t2425795444->IAsyncInfo_Close_m1968429586();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Storage.Streams.DataWriterStoreOperation::Finalize()
extern "C" IL2CPP_METHOD_ATTR void DataWriterStoreOperation_Finalize_m1069658680 (DataWriterStoreOperation_t1087990177 * __this, const RuntimeMethod* method)
{
	if (__this->____iasyncOperation_1_t1181249698 != NULL)
	{
		__this->____iasyncOperation_1_t1181249698->Release();
	}
	if (__this->____iasyncInfo_t2425795444 != NULL)
	{
		__this->____iasyncInfo_t2425795444->Release();
	}

	__this->____iasyncOperation_1_t1181249698 = NULL;
	__this->____iasyncInfo_t2425795444 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Streams.IBuffer
const Il2CppGuid IBuffer_t541192229::IID = { 0x905a0fe0, 0xbc53, 0x11df, 0x8c, 0x49, 0x0, 0x1e, 0x4f, 0xc6, 0x86, 0xda };
// System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity()
extern "C" IL2CPP_METHOD_ATTR uint32_t IBuffer_get_Capacity_m406059298 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IBuffer_t541192229* ____ibuffer_t541192229 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBuffer_t541192229::IID, reinterpret_cast<void**>(&____ibuffer_t541192229));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ibuffer_t541192229->IBuffer_get_Capacity_m406059298(&returnValue);
	____ibuffer_t541192229->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Storage.Streams.IBuffer::get_Length()
extern "C" IL2CPP_METHOD_ATTR uint32_t IBuffer_get_Length_m2796848087 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IBuffer_t541192229* ____ibuffer_t541192229 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBuffer_t541192229::IID, reinterpret_cast<void**>(&____ibuffer_t541192229));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ibuffer_t541192229->IBuffer_get_Length_m2796848087(&returnValue);
	____ibuffer_t541192229->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Storage.Streams.IBuffer::put_Length(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IBuffer_put_Length_m1827843137 (RuntimeObject* __this, uint32_t ___value0, const RuntimeMethod* method)
{
	IBuffer_t541192229* ____ibuffer_t541192229 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBuffer_t541192229::IID, reinterpret_cast<void**>(&____ibuffer_t541192229));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ibuffer_t541192229->IBuffer_put_Length_m1827843137(___value0);
	____ibuffer_t541192229->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Streams.IContentTypeProvider
const Il2CppGuid IContentTypeProvider_t1806097440::IID = { 0x97d098a5, 0x3b99, 0x4de9, 0x88, 0xa5, 0xe1, 0x1d, 0x2f, 0x50, 0xc7, 0x95 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Streams.IDataReader
const Il2CppGuid IDataReader_t3392321383::IID = { 0xe2b50029, 0xb4c1, 0x4314, 0xa4, 0xb8, 0xfb, 0x81, 0x3a, 0x2f, 0x27, 0x5e };
// System.Void Windows.Storage.Streams.IDataReader::ReadBytes(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void IDataReader_ReadBytes_m3117293785 (RuntimeObject* __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	IDataReader_t3392321383* ____idataReader_t3392321383 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IDataReader_t3392321383::IID, reinterpret_cast<void**>(&____idataReader_t3392321383));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_marshaledArraySize = 0;
	uint8_t* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_marshaledArraySize = static_cast<uint32_t>((___value0)->max_length);
		____value0_marshaled = il2cpp_codegen_marshal_allocate_array<uint8_t>(static_cast<int32_t>(____value0_marshaledArraySize));
		memset(____value0_marshaled, 0, static_cast<int32_t>(____value0_marshaledArraySize) * sizeof(uint8_t));
	}

	// Native function invocation
	hr = ____idataReader_t3392321383->IDataReader_ReadBytes_m3117293785(____value0_marshaledArraySize, ____value0_marshaled);
	____idataReader_t3392321383->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' back from native representation
	if (____value0_marshaled != NULL)
	{
		____value0_marshaledArraySize = static_cast<uint32_t>((___value0)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____value0_marshaledArraySize)); i++)
		{
			(___value0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____value0_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___value0' native representation
	il2cpp_codegen_marshal_free(____value0_marshaled);
	____value0_marshaled = NULL;

}
// Windows.Storage.Streams.DataReaderLoadOperation Windows.Storage.Streams.IDataReader::LoadAsync(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR DataReaderLoadOperation_t4248924386 * IDataReader_LoadAsync_m90647872 (RuntimeObject* __this, uint32_t ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IDataReader_LoadAsync_m90647872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IDataReader_t3392321383* ____idataReader_t3392321383 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IDataReader_t3392321383::IID, reinterpret_cast<void**>(&____idataReader_t3392321383));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperation_1_t1181249698* returnValue = NULL;
	hr = ____idataReader_t3392321383->IDataReader_LoadAsync_m90647872(___count0, &returnValue);
	____idataReader_t3392321383->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	DataReaderLoadOperation_t4248924386 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<DataReaderLoadOperation_t4248924386>(returnValue, DataReaderLoadOperation_t4248924386_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Streams.IDataReaderFactory
const Il2CppGuid IDataReaderFactory_t2217455388::IID = { 0xd7527847, 0x57da, 0x4e15, 0x91, 0x4c, 0x6, 0x80, 0x66, 0x99, 0xa0, 0x98 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Streams.IDataReaderStatics
const Il2CppGuid IDataReaderStatics_t1343138968::IID = { 0x11fcbfc8, 0xf93a, 0x471b, 0xb1, 0x21, 0xf3, 0x79, 0xe3, 0x49, 0x31, 0x3c };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Streams.IDataWriter
const Il2CppGuid IDataWriter_t1260434628::IID = { 0x64b89265, 0xd341, 0x4922, 0xb3, 0x8a, 0xdd, 0x4a, 0xf8, 0x80, 0x8c, 0x4e };
// System.Void Windows.Storage.Streams.IDataWriter::WriteBytes(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void IDataWriter_WriteBytes_m1463346676 (RuntimeObject* __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	IDataWriter_t1260434628* ____idataWriter_t1260434628 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IDataWriter_t1260434628::IID, reinterpret_cast<void**>(&____idataWriter_t1260434628));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	uint32_t ____value0_marshaledArraySize = 0;
	uint8_t* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_marshaledArraySize = static_cast<uint32_t>((___value0)->max_length);
		____value0_marshaled = reinterpret_cast<uint8_t*>((___value0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	hr = ____idataWriter_t1260434628->IDataWriter_WriteBytes_m1463346676(____value0_marshaledArraySize, ____value0_marshaled);
	____idataWriter_t1260434628->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Storage.Streams.IDataWriter::WriteInt32(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void IDataWriter_WriteInt32_m3302687114 (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	IDataWriter_t1260434628* ____idataWriter_t1260434628 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IDataWriter_t1260434628::IID, reinterpret_cast<void**>(&____idataWriter_t1260434628));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____idataWriter_t1260434628->IDataWriter_WriteInt32_m3302687114(___value0);
	____idataWriter_t1260434628->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// Windows.Storage.Streams.DataWriterStoreOperation Windows.Storage.Streams.IDataWriter::StoreAsync()
extern "C" IL2CPP_METHOD_ATTR DataWriterStoreOperation_t1087990177 * IDataWriter_StoreAsync_m1501074270 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IDataWriter_StoreAsync_m1501074270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IDataWriter_t1260434628* ____idataWriter_t1260434628 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IDataWriter_t1260434628::IID, reinterpret_cast<void**>(&____idataWriter_t1260434628));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperation_1_t1181249698* returnValue = NULL;
	hr = ____idataWriter_t1260434628->IDataWriter_StoreAsync_m1501074270(&returnValue);
	____idataWriter_t1260434628->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	DataWriterStoreOperation_t1087990177 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<DataWriterStoreOperation_t1087990177>(returnValue, DataWriterStoreOperation_t1087990177_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Streams.IDataWriterFactory
const Il2CppGuid IDataWriterFactory_t624500286::IID = { 0x338c67c2, 0x8b84, 0x4c2b, 0x9c, 0x50, 0x7b, 0x87, 0x67, 0x84, 0x7a, 0x1f };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Streams.IInputStream
const Il2CppGuid IInputStream_t2821136229::IID = { 0x905a0fe2, 0xbc53, 0x11df, 0x8c, 0x49, 0x0, 0x1e, 0x4f, 0xc6, 0x86, 0xda };
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> Windows.Storage.Streams.IInputStream::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IInputStream_ReadAsync_m1153220809 (RuntimeObject* __this, RuntimeObject* ___buffer0, uint32_t ___count1, uint32_t ___options2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IInputStream_ReadAsync_m1153220809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInputStream_t2821136229* ____iinputStream_t2821136229 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IInputStream_t2821136229::IID, reinterpret_cast<void**>(&____iinputStream_t2821136229));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___buffer0' to native representation
	IBuffer_t541192229* ____buffer0_marshaled = NULL;
	if (___buffer0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___buffer0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___buffer0)->identity->QueryInterface(IBuffer_t541192229::IID, reinterpret_cast<void**>(&____buffer0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____buffer0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IBuffer_t541192229>(___buffer0);
		}
	}
	else
	{
		____buffer0_marshaled = NULL;
	}

	// Native function invocation
	IAsyncOperationWithProgress_2_t1622574100* returnValue = NULL;
	hr = ____iinputStream_t2821136229->IInputStream_ReadAsync_m1153220809(____buffer0_marshaled, ___count1, ___options2, &returnValue);
	____iinputStream_t2821136229->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	// Marshaling cleanup of parameter '___buffer0' native representation
	if (____buffer0_marshaled != NULL)
	{
		(____buffer0_marshaled)->Release();
		____buffer0_marshaled = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Streams.IInputStreamReference
const Il2CppGuid IInputStreamReference_t980626503::IID = { 0x43929d18, 0x5ec9, 0x4b5a, 0x91, 0x9c, 0x42, 0x5, 0xb0, 0xc8, 0x4, 0xb6 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Streams.IOutputStream
const Il2CppGuid IOutputStream_t2042351338::IID = { 0x905a0fe6, 0xbc53, 0x11df, 0x8c, 0x49, 0x0, 0x1e, 0x4f, 0xc6, 0x86, 0xda };
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> Windows.Storage.Streams.IOutputStream::WriteAsync(Windows.Storage.Streams.IBuffer)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IOutputStream_WriteAsync_m124082296 (RuntimeObject* __this, RuntimeObject* ___buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IOutputStream_WriteAsync_m124082296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IOutputStream_t2042351338* ____ioutputStream_t2042351338 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IOutputStream_t2042351338::IID, reinterpret_cast<void**>(&____ioutputStream_t2042351338));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___buffer0' to native representation
	IBuffer_t541192229* ____buffer0_marshaled = NULL;
	if (___buffer0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___buffer0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___buffer0)->identity->QueryInterface(IBuffer_t541192229::IID, reinterpret_cast<void**>(&____buffer0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____buffer0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IBuffer_t541192229>(___buffer0);
		}
	}
	else
	{
		____buffer0_marshaled = NULL;
	}

	// Native function invocation
	IAsyncOperationWithProgress_2_t593214123* returnValue = NULL;
	hr = ____ioutputStream_t2042351338->IOutputStream_WriteAsync_m124082296(____buffer0_marshaled, &returnValue);
	____ioutputStream_t2042351338->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	// Marshaling cleanup of parameter '___buffer0' native representation
	if (____buffer0_marshaled != NULL)
	{
		(____buffer0_marshaled)->Release();
		____buffer0_marshaled = NULL;
	}

	return _returnValue_unmarshaled;
}
// Windows.Foundation.IAsyncOperation`1<System.Boolean> Windows.Storage.Streams.IOutputStream::FlushAsync()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IOutputStream_FlushAsync_m252007188 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IOutputStream_FlushAsync_m252007188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IOutputStream_t2042351338* ____ioutputStream_t2042351338 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IOutputStream_t2042351338::IID, reinterpret_cast<void**>(&____ioutputStream_t2042351338));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperation_1_t3013442981* returnValue = NULL;
	hr = ____ioutputStream_t2042351338->IOutputStream_FlushAsync_m252007188(&returnValue);
	____ioutputStream_t2042351338->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Streams.IRandomAccessStream
const Il2CppGuid IRandomAccessStream_t2099996051::IID = { 0x905a0fe1, 0xbc53, 0x11df, 0x8c, 0x49, 0x0, 0x1e, 0x4f, 0xc6, 0x86, 0xda };
// System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint64_t IRandomAccessStream_get_Size_m3315994282 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IRandomAccessStream_t2099996051* ____irandomAccessStream_t2099996051 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IRandomAccessStream_t2099996051::IID, reinterpret_cast<void**>(&____irandomAccessStream_t2099996051));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint64_t returnValue = 0;
	hr = ____irandomAccessStream_t2099996051->IRandomAccessStream_get_Size_m3315994282(&returnValue);
	____irandomAccessStream_t2099996051->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// Windows.Storage.Streams.IInputStream Windows.Storage.Streams.IRandomAccessStream::GetInputStreamAt(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IRandomAccessStream_GetInputStreamAt_m2841117993 (RuntimeObject* __this, uint64_t ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRandomAccessStream_GetInputStreamAt_m2841117993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IRandomAccessStream_t2099996051* ____irandomAccessStream_t2099996051 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IRandomAccessStream_t2099996051::IID, reinterpret_cast<void**>(&____irandomAccessStream_t2099996051));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IInputStream_t2821136229* returnValue = NULL;
	hr = ____irandomAccessStream_t2099996051->IRandomAccessStream_GetInputStreamAt_m2841117993(___position0, &returnValue);
	____irandomAccessStream_t2099996051->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Position()
extern "C" IL2CPP_METHOD_ATTR uint64_t IRandomAccessStream_get_Position_m3162954653 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IRandomAccessStream_t2099996051* ____irandomAccessStream_t2099996051 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IRandomAccessStream_t2099996051::IID, reinterpret_cast<void**>(&____irandomAccessStream_t2099996051));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint64_t returnValue = 0;
	hr = ____irandomAccessStream_t2099996051->IRandomAccessStream_get_Position_m3162954653(&returnValue);
	____irandomAccessStream_t2099996051->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Storage.Streams.IRandomAccessStream::Seek(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void IRandomAccessStream_Seek_m3482800682 (RuntimeObject* __this, uint64_t ___position0, const RuntimeMethod* method)
{
	IRandomAccessStream_t2099996051* ____irandomAccessStream_t2099996051 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IRandomAccessStream_t2099996051::IID, reinterpret_cast<void**>(&____irandomAccessStream_t2099996051));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____irandomAccessStream_t2099996051->IRandomAccessStream_Seek_m3482800682(___position0);
	____irandomAccessStream_t2099996051->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Boolean Windows.Storage.Streams.IRandomAccessStream::get_CanRead()
extern "C" IL2CPP_METHOD_ATTR bool IRandomAccessStream_get_CanRead_m2334341332 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IRandomAccessStream_t2099996051* ____irandomAccessStream_t2099996051 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IRandomAccessStream_t2099996051::IID, reinterpret_cast<void**>(&____irandomAccessStream_t2099996051));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____irandomAccessStream_t2099996051->IRandomAccessStream_get_CanRead_m2334341332(&returnValue);
	____irandomAccessStream_t2099996051->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Storage.Streams.IRandomAccessStream::get_CanWrite()
extern "C" IL2CPP_METHOD_ATTR bool IRandomAccessStream_get_CanWrite_m1780602347 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IRandomAccessStream_t2099996051* ____irandomAccessStream_t2099996051 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IRandomAccessStream_t2099996051::IID, reinterpret_cast<void**>(&____irandomAccessStream_t2099996051));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____irandomAccessStream_t2099996051->IRandomAccessStream_get_CanWrite_m1780602347(&returnValue);
	____irandomAccessStream_t2099996051->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Streams.IRandomAccessStreamReference
const Il2CppGuid IRandomAccessStreamReference_t2718546672::IID = { 0x33ee3134, 0x1dd6, 0x4e3a, 0x80, 0x67, 0xd1, 0xc1, 0x62, 0xe8, 0x64, 0x2b };
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType> Windows.Storage.Streams.IRandomAccessStreamReference::OpenReadAsync()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IRandomAccessStreamReference_OpenReadAsync_m2508312280 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IRandomAccessStreamReference_OpenReadAsync_m2508312280_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IRandomAccessStreamReference_t2718546672* ____irandomAccessStreamReference_t2718546672 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IRandomAccessStreamReference_t2718546672::IID, reinterpret_cast<void**>(&____irandomAccessStreamReference_t2718546672));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperation_1_t1918115372* returnValue = NULL;
	hr = ____irandomAccessStreamReference_t2718546672->IRandomAccessStreamReference_OpenReadAsync_m2508312280(&returnValue);
	____irandomAccessStreamReference_t2718546672->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Streams.IRandomAccessStreamWithContentType
const Il2CppGuid IRandomAccessStreamWithContentType_t3296927652::IID = { 0xcc254827, 0x4b3d, 0x438f, 0x92, 0x32, 0x10, 0xc7, 0x6b, 0xc7, 0xe0, 0x38 };
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
// Windows.UI.Input.Spatial.ISpatialInteractionController
const Il2CppGuid ISpatialInteractionController_t138196805::IID = { 0x5f0e5ba3, 0x954, 0x4e97, 0x86, 0xc5, 0xe7, 0xf3, 0xb, 0x11, 0x4d, 0xfd };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Input.Spatial.ISpatialInteractionController2
const Il2CppGuid ISpatialInteractionController2_t3418596785::IID = { 0x35b6d924, 0xc7a2, 0x49b7, 0xb7, 0x2e, 0x54, 0x36, 0xb2, 0xfb, 0x8f, 0x9c };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Input.Spatial.ISpatialInteractionController3
const Il2CppGuid ISpatialInteractionController3_t689713430::IID = { 0x628466a0, 0x9d91, 0x4a0b, 0x88, 0x8d, 0x16, 0x5e, 0x67, 0xa, 0x8c, 0xd5 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Input.Spatial.ISpatialInteractionManager
const Il2CppGuid ISpatialInteractionManager_t354061063::IID = { 0x32a64ea8, 0xa15a, 0x3995, 0xb8, 0xbd, 0x80, 0x51, 0x3c, 0xb5, 0xad, 0xef };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
const Il2CppGuid ISpatialInteractionManagerStatics_t2291651573::IID = { 0xe31fa6, 0x8ca2, 0x30bf, 0x91, 0xfe, 0xd9, 0xcb, 0x4a, 0x0, 0x89, 0x90 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Input.Spatial.ISpatialInteractionSource
const Il2CppGuid ISpatialInteractionSource_t2185314266::IID = { 0xfb5433ba, 0xb0b3, 0x3148, 0x9f, 0x3b, 0xe9, 0xf5, 0xde, 0x56, 0x8f, 0x5d };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Input.Spatial.ISpatialInteractionSource2
const Il2CppGuid ISpatialInteractionSource2_t2453383580::IID = { 0xe4c5b70c, 0x470, 0x4028, 0x88, 0xc0, 0xa0, 0xeb, 0x44, 0xd3, 0x4e, 0xfe };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Input.Spatial.ISpatialInteractionSource3
const Il2CppGuid ISpatialInteractionSource3_t887299639::IID = { 0x406d9f9, 0x9afd, 0x44f9, 0x85, 0xdc, 0x70, 0x0, 0x23, 0xa9, 0x62, 0xe3 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState
const Il2CppGuid ISpatialInteractionSourceState_t1358829803::IID = { 0xd5c475ef, 0x4b63, 0x37ec, 0x98, 0xb9, 0x9f, 0xc6, 0x52, 0xb9, 0xd2, 0xf2 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState2
const Il2CppGuid ISpatialInteractionSourceState2_t2977437931::IID = { 0x45f6d0bd, 0x1773, 0x492e, 0x9b, 0xa3, 0x8a, 0xc1, 0xcb, 0xe7, 0x7c, 0x8 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Devices.Haptics.SimpleHapticsController Windows.UI.Input.Spatial.SpatialInteractionController::get_SimpleHapticsController()
extern "C" IL2CPP_METHOD_ATTR SimpleHapticsController_t4220085256 * SpatialInteractionController_get_SimpleHapticsController_m2270224420 (SpatialInteractionController_t3760917144 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialInteractionController_get_SimpleHapticsController_m2270224420_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ISpatialInteractionController_t138196805* ____ispatialInteractionController_t138196805 = __this->get_____ispatialInteractionController_t138196805();

	// Native function invocation
	ISimpleHapticsController_t3936202477* returnValue = NULL;
	const il2cpp_hresult_t hr = ____ispatialInteractionController_t138196805->ISpatialInteractionController_get_SimpleHapticsController_m1735849567(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	SimpleHapticsController_t4220085256 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<SimpleHapticsController_t4220085256>(returnValue, SimpleHapticsController_t4220085256_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType> Windows.UI.Input.Spatial.SpatialInteractionController::TryGetRenderableModelAsync()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SpatialInteractionController_TryGetRenderableModelAsync_m4213918896 (SpatialInteractionController_t3760917144 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialInteractionController_TryGetRenderableModelAsync_m4213918896_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ISpatialInteractionController2_t3418596785* ____ispatialInteractionController2_t3418596785 = __this->get_____ispatialInteractionController2_t3418596785();

	// Native function invocation
	IAsyncOperation_1_t1918115372* returnValue = NULL;
	const il2cpp_hresult_t hr = ____ispatialInteractionController2_t3418596785->ISpatialInteractionController2_TryGetRenderableModelAsync_m2032660185(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.UI.Input.Spatial.SpatialInteractionController::Finalize()
extern "C" IL2CPP_METHOD_ATTR void SpatialInteractionController_Finalize_m3637311127 (SpatialInteractionController_t3760917144 * __this, const RuntimeMethod* method)
{
	if (__this->____ispatialInteractionController_t138196805 != NULL)
	{
		__this->____ispatialInteractionController_t138196805->Release();
	}
	if (__this->____ispatialInteractionController2_t3418596785 != NULL)
	{
		__this->____ispatialInteractionController2_t3418596785->Release();
	}
	if (__this->____ispatialInteractionController3_t689713430 != NULL)
	{
		__this->____ispatialInteractionController3_t689713430->Release();
	}

	__this->____ispatialInteractionController_t138196805 = NULL;
	__this->____ispatialInteractionController2_t3418596785 = NULL;
	__this->____ispatialInteractionController3_t689713430 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IReadOnlyList`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState> Windows.UI.Input.Spatial.SpatialInteractionManager::GetDetectedSourcesAtTimestamp(Windows.Perception.PerceptionTimestamp)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SpatialInteractionManager_GetDetectedSourcesAtTimestamp_m2097367852 (SpatialInteractionManager_t208992783 * __this, PerceptionTimestamp_t25754965 * ___timeStamp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialInteractionManager_GetDetectedSourcesAtTimestamp_m2097367852_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ISpatialInteractionManager_t354061063* ____ispatialInteractionManager_t354061063 = __this->get_____ispatialInteractionManager_t354061063();

	// Marshaling of parameter '___timeStamp0' to native representation
	IPerceptionTimestamp_t393505964* ____timeStamp0_marshaled = NULL;
	if (___timeStamp0 != NULL)
	{
		____timeStamp0_marshaled = (___timeStamp0)->get_____iperceptionTimestamp_t393505964();
	}
	else
	{
		____timeStamp0_marshaled = NULL;
	}

	// Native function invocation
	IVectorView_1_t554553325* returnValue = NULL;
	const il2cpp_hresult_t hr = ____ispatialInteractionManager_t354061063->ISpatialInteractionManager_GetDetectedSourcesAtTimestamp_m3746477042(____timeStamp0_marshaled, &returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// Windows.UI.Input.Spatial.SpatialInteractionManager Windows.UI.Input.Spatial.SpatialInteractionManager::GetForCurrentView()
extern "C" IL2CPP_METHOD_ATTR SpatialInteractionManager_t208992783 * SpatialInteractionManager_GetForCurrentView_m3692227453 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialInteractionManager_GetForCurrentView_m3692227453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ISpatialInteractionManagerStatics_t2291651573* ____ispatialInteractionManagerStatics_t2291651573 = ((SpatialInteractionManager_t208992783_StaticFields*)SpatialInteractionManager_t208992783_il2cpp_TypeInfo_var->static_fields)->get_____ispatialInteractionManagerStatics_t2291651573();

	// Native function invocation
	ISpatialInteractionManager_t354061063* returnValue = NULL;
	const il2cpp_hresult_t hr = ____ispatialInteractionManagerStatics_t2291651573->ISpatialInteractionManagerStatics_GetForCurrentView_m3067930004(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	SpatialInteractionManager_t208992783 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<SpatialInteractionManager_t208992783>(returnValue, SpatialInteractionManager_t208992783_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.UI.Input.Spatial.SpatialInteractionManager::Finalize()
extern "C" IL2CPP_METHOD_ATTR void SpatialInteractionManager_Finalize_m3436731449 (SpatialInteractionManager_t208992783 * __this, const RuntimeMethod* method)
{
	if (__this->____ispatialInteractionManager_t354061063 != NULL)
	{
		__this->____ispatialInteractionManager_t354061063->Release();
	}

	__this->____ispatialInteractionManager_t354061063 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 Windows.UI.Input.Spatial.SpatialInteractionSource::get_Id()
extern "C" IL2CPP_METHOD_ATTR uint32_t SpatialInteractionSource_get_Id_m2248689187 (SpatialInteractionSource_t1043222996 * __this, const RuntimeMethod* method)
{
	ISpatialInteractionSource_t2185314266* ____ispatialInteractionSource_t2185314266 = __this->get_____ispatialInteractionSource_t2185314266();

	// Native function invocation
	uint32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ispatialInteractionSource_t2185314266->ISpatialInteractionSource_get_Id_m2383602496(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// Windows.UI.Input.Spatial.SpatialInteractionController Windows.UI.Input.Spatial.SpatialInteractionSource::get_Controller()
extern "C" IL2CPP_METHOD_ATTR SpatialInteractionController_t3760917144 * SpatialInteractionSource_get_Controller_m3986846077 (SpatialInteractionSource_t1043222996 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialInteractionSource_get_Controller_m3986846077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ISpatialInteractionSource2_t2453383580* ____ispatialInteractionSource2_t2453383580 = __this->get_____ispatialInteractionSource2_t2453383580();

	// Native function invocation
	ISpatialInteractionController_t138196805* returnValue = NULL;
	const il2cpp_hresult_t hr = ____ispatialInteractionSource2_t2453383580->ISpatialInteractionSource2_get_Controller_m1434681608(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	SpatialInteractionController_t3760917144 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<SpatialInteractionController_t3760917144>(returnValue, SpatialInteractionController_t3760917144_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.UI.Input.Spatial.SpatialInteractionSource::Finalize()
extern "C" IL2CPP_METHOD_ATTR void SpatialInteractionSource_Finalize_m3044563165 (SpatialInteractionSource_t1043222996 * __this, const RuntimeMethod* method)
{
	if (__this->____ispatialInteractionSource_t2185314266 != NULL)
	{
		__this->____ispatialInteractionSource_t2185314266->Release();
	}
	if (__this->____ispatialInteractionSource2_t2453383580 != NULL)
	{
		__this->____ispatialInteractionSource2_t2453383580->Release();
	}
	if (__this->____ispatialInteractionSource3_t887299639 != NULL)
	{
		__this->____ispatialInteractionSource3_t887299639->Release();
	}

	__this->____ispatialInteractionSource_t2185314266 = NULL;
	__this->____ispatialInteractionSource2_t2453383580 = NULL;
	__this->____ispatialInteractionSource3_t887299639 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Input.Spatial.SpatialInteractionSource Windows.UI.Input.Spatial.SpatialInteractionSourceState::get_Source()
extern "C" IL2CPP_METHOD_ATTR SpatialInteractionSource_t1043222996 * SpatialInteractionSourceState_get_Source_m4215701256 (SpatialInteractionSourceState_t1215688063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialInteractionSourceState_get_Source_m4215701256_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ISpatialInteractionSourceState_t1358829803* ____ispatialInteractionSourceState_t1358829803 = __this->get_____ispatialInteractionSourceState_t1358829803();

	// Native function invocation
	ISpatialInteractionSource_t2185314266* returnValue = NULL;
	const il2cpp_hresult_t hr = ____ispatialInteractionSourceState_t1358829803->ISpatialInteractionSourceState_get_Source_m2883277112(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	SpatialInteractionSource_t1043222996 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<SpatialInteractionSource_t1043222996>(returnValue, SpatialInteractionSource_t1043222996_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.UI.Input.Spatial.SpatialInteractionSourceState::Finalize()
extern "C" IL2CPP_METHOD_ATTR void SpatialInteractionSourceState_Finalize_m2917148549 (SpatialInteractionSourceState_t1215688063 * __this, const RuntimeMethod* method)
{
	if (__this->____ispatialInteractionSourceState_t1358829803 != NULL)
	{
		__this->____ispatialInteractionSourceState_t1358829803->Release();
	}
	if (__this->____ispatialInteractionSourceState2_t2977437931 != NULL)
	{
		__this->____ispatialInteractionSourceState2_t2977437931->Release();
	}

	__this->____ispatialInteractionSourceState_t1358829803 = NULL;
	__this->____ispatialInteractionSourceState2_t2977437931 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Xaml.Data.INotifyPropertyChanged
const Il2CppGuid INotifyPropertyChanged_t1341263577::IID = { 0xcf75d69c, 0xf2f4, 0x486b, 0xb3, 0x2, 0xbb, 0x4c, 0x9, 0xba, 0xeb, 0xfa };
// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken Windows.UI.Xaml.Data.INotifyPropertyChanged::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern "C" IL2CPP_METHOD_ATTR EventRegistrationToken_t318890788  INotifyPropertyChanged_add_PropertyChanged_m1555432907 (RuntimeObject* __this, PropertyChangedEventHandler_t3836340606 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (INotifyPropertyChanged_add_PropertyChanged_m1555432907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	INotifyPropertyChanged_t1341263577* ____inotifyPropertyChanged_t1341263577 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(INotifyPropertyChanged_t1341263577::IID, reinterpret_cast<void**>(&____inotifyPropertyChanged_t1341263577));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IPropertyChangedEventHandler_t3836340606_ComCallableWrapper* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		RuntimeObject* target = ___value0->get_m_target_2();

		if (target != NULL && ___value0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IPropertyChangedEventHandler_t3836340606_ComCallableWrapper::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IPropertyChangedEventHandler_t3836340606_ComCallableWrapper>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	EventRegistrationToken_t318890788  returnValue = {};
	hr = ____inotifyPropertyChanged_t1341263577->INotifyPropertyChanged_add_PropertyChanged_m1555432907(____value0_marshaled, &returnValue);
	____inotifyPropertyChanged_t1341263577->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.UI.Xaml.Data.INotifyPropertyChanged::remove_PropertyChanged(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
extern "C" IL2CPP_METHOD_ATTR void INotifyPropertyChanged_remove_PropertyChanged_m3770181581 (RuntimeObject* __this, EventRegistrationToken_t318890788  ___token0, const RuntimeMethod* method)
{
	INotifyPropertyChanged_t1341263577* ____inotifyPropertyChanged_t1341263577 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(INotifyPropertyChanged_t1341263577::IID, reinterpret_cast<void**>(&____inotifyPropertyChanged_t1341263577));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____inotifyPropertyChanged_t1341263577->INotifyPropertyChanged_remove_PropertyChanged_m3770181581(___token0);
	____inotifyPropertyChanged_t1341263577->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Xaml.Data.IPropertyChangedEventArgs
const Il2CppGuid IPropertyChangedEventArgs_t1404159462::IID = { 0x4f33a9a0, 0x5cf4, 0x47a4, 0xb1, 0x6f, 0xd7, 0xfa, 0xaf, 0x17, 0x45, 0x7e };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory
const Il2CppGuid IPropertyChangedEventArgsFactory_t4178285917::IID = { 0x6dcc9c03, 0xe0c7, 0x4eee, 0x8e, 0xa9, 0x37, 0xe3, 0x40, 0x6e, 0xeb, 0x1c };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.UI.Xaml.Data.PropertyChangedEventArgs::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void PropertyChangedEventArgs__ctor_m1805887803 (PropertyChangedEventArgs_t1492749306 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.UI.Xaml.Data.PropertyChangedEventArgs'. It has no managed representation. Instead, use 'System.ComponentModel.PropertyChangedEventArgs'."), NULL, NULL);
}
// System.String Windows.UI.Xaml.Data.PropertyChangedEventArgs::get_PropertyName()
extern "C" IL2CPP_METHOD_ATTR String_t* PropertyChangedEventArgs_get_PropertyName_m2095298545 (PropertyChangedEventArgs_t1492749306 * __this, const RuntimeMethod* method)
{
	IPropertyChangedEventArgs_t1404159462* ____ipropertyChangedEventArgs_t1404159462 = __this->get_____ipropertyChangedEventArgs_t1404159462();

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____ipropertyChangedEventArgs_t1404159462->IPropertyChangedEventArgs_get_PropertyName_m2977473784(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Windows.UI.Xaml.Data.PropertyChangedEventArgs::Finalize()
extern "C" IL2CPP_METHOD_ATTR void PropertyChangedEventArgs_Finalize_m672964008 (PropertyChangedEventArgs_t1492749306 * __this, const RuntimeMethod* method)
{
	if (il2cpp_codegen_is_import_or_windows_runtime((RuntimeObject*)__this))
	{
		if (__this->____ipropertyChangedEventArgs_t1404159462 != NULL)
		{
			__this->____ipropertyChangedEventArgs_t1404159462->Release();
		}
	}

	__this->____ipropertyChangedEventArgs_t1404159462 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
const Il2CppGuid IPropertyChangedEventHandler_t3818875368_ComCallableWrapper::IID = { 0x50f19c16, 0xa22, 0x4d8e, 0xa0, 0x89, 0x1e, 0xa9, 0x95, 0x16, 0x57, 0xd2 };
// Native invoker for Windows.UI.Xaml.Data.PropertyChangedEventHandler
extern "C"  void PropertyChangedEventHandler_Invoke_m1682449468_NativeInvoker (Il2CppComObject * __this, RuntimeObject * ___sender0, PropertyChangedEventArgs_t3313059048 * ___e1, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.ComponentModel.PropertyChangedEventArgs'."), NULL, NULL);
}
// System.Void Windows.UI.Xaml.Data.PropertyChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PropertyChangedEventHandler__ctor_m2215126545 (PropertyChangedEventHandler_t3818875368 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Windows.UI.Xaml.Data.PropertyChangedEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern "C" IL2CPP_METHOD_ATTR void PropertyChangedEventHandler_Invoke_m1682449468 (PropertyChangedEventHandler_t3818875368 * __this, RuntimeObject * ___sender0, PropertyChangedEventArgs_t3313059048 * ___e1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, PropertyChangedEventArgs_t3313059048 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, PropertyChangedEventArgs_t3313059048 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< RuntimeObject *, PropertyChangedEventArgs_t3313059048 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
							else
								GenericVirtActionInvoker2< RuntimeObject *, PropertyChangedEventArgs_t3313059048 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< RuntimeObject *, PropertyChangedEventArgs_t3313059048 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
							else
								VirtActionInvoker2< RuntimeObject *, PropertyChangedEventArgs_t3313059048 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, RuntimeObject *, PropertyChangedEventArgs_t3313059048 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< PropertyChangedEventArgs_t3313059048 * >::Invoke(targetMethod, ___sender0, ___e1);
							else
								GenericVirtActionInvoker1< PropertyChangedEventArgs_t3313059048 * >::Invoke(targetMethod, ___sender0, ___e1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< PropertyChangedEventArgs_t3313059048 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
							else
								VirtActionInvoker1< PropertyChangedEventArgs_t3313059048 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, PropertyChangedEventArgs_t3313059048 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, PropertyChangedEventArgs_t3313059048 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, PropertyChangedEventArgs_t3313059048 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< RuntimeObject *, PropertyChangedEventArgs_t3313059048 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
						else
							GenericVirtActionInvoker2< RuntimeObject *, PropertyChangedEventArgs_t3313059048 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< RuntimeObject *, PropertyChangedEventArgs_t3313059048 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
						else
							VirtActionInvoker2< RuntimeObject *, PropertyChangedEventArgs_t3313059048 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, PropertyChangedEventArgs_t3313059048 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< PropertyChangedEventArgs_t3313059048 * >::Invoke(targetMethod, ___sender0, ___e1);
						else
							GenericVirtActionInvoker1< PropertyChangedEventArgs_t3313059048 * >::Invoke(targetMethod, ___sender0, ___e1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< PropertyChangedEventArgs_t3313059048 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
						else
							VirtActionInvoker1< PropertyChangedEventArgs_t3313059048 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, PropertyChangedEventArgs_t3313059048 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
			}
		}
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
// Windows.UI.Xaml.Interop.IBindableIterable
const Il2CppGuid IBindableIterable_t2147255965::IID = { 0x36d2c08, 0xdf29, 0x41af, 0x8a, 0xa2, 0xd7, 0x74, 0xbe, 0x62, 0xba, 0x6f };
// Windows.UI.Xaml.Interop.IBindableIterator Windows.UI.Xaml.Interop.IBindableIterable::First()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IBindableIterable_First_m3188154520 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IBindableIterable_First_m3188154520_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IBindableIterable_t2147255965* ____ibindableIterable_t2147255965 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBindableIterable_t2147255965::IID, reinterpret_cast<void**>(&____ibindableIterable_t2147255965));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IBindableIterator_t667386168* returnValue = NULL;
	hr = ____ibindableIterable_t2147255965->IBindableIterable_First_m3188154520(&returnValue);
	____ibindableIterable_t2147255965->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Xaml.Interop.IBindableIterator
const Il2CppGuid IBindableIterator_t667386168::IID = { 0x6a1d6c07, 0x76d, 0x49f2, 0x83, 0x14, 0xf5, 0x2c, 0x9c, 0x9a, 0x83, 0x31 };
// System.Object Windows.UI.Xaml.Interop.IBindableIterator::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * IBindableIterator_get_Current_m3059254492 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IBindableIterator_get_Current_m3059254492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IBindableIterator_t667386168* ____ibindableIterator_t667386168 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBindableIterator_t667386168::IID, reinterpret_cast<void**>(&____ibindableIterator_t667386168));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppIInspectable* returnValue = NULL;
	hr = ____ibindableIterator_t667386168->IBindableIterator_get_Current_m3059254492(&returnValue);
	____ibindableIterator_t667386168->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.UI.Xaml.Interop.IBindableIterator::get_HasCurrent()
extern "C" IL2CPP_METHOD_ATTR bool IBindableIterator_get_HasCurrent_m3082354642 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IBindableIterator_t667386168* ____ibindableIterator_t667386168 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBindableIterator_t667386168::IID, reinterpret_cast<void**>(&____ibindableIterator_t667386168));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ibindableIterator_t667386168->IBindableIterator_get_HasCurrent_m3082354642(&returnValue);
	____ibindableIterator_t667386168->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.UI.Xaml.Interop.IBindableIterator::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool IBindableIterator_MoveNext_m550148855 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IBindableIterator_t667386168* ____ibindableIterator_t667386168 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBindableIterator_t667386168::IID, reinterpret_cast<void**>(&____ibindableIterator_t667386168));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ibindableIterator_t667386168->IBindableIterator_MoveNext_m550148855(&returnValue);
	____ibindableIterator_t667386168->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Xaml.Interop.IBindableVector
const Il2CppGuid IBindableVector_t1801110279::IID = { 0x393de7de, 0x6fd0, 0x4c0d, 0xbb, 0x71, 0x47, 0x24, 0x4a, 0x11, 0x3e, 0x93 };
// System.Object Windows.UI.Xaml.Interop.IBindableVector::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * IBindableVector_GetAt_m2354796153 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IBindableVector_GetAt_m2354796153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IBindableVector_t1801110279* ____ibindableVector_t1801110279 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBindableVector_t1801110279::IID, reinterpret_cast<void**>(&____ibindableVector_t1801110279));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppIInspectable* returnValue = NULL;
	hr = ____ibindableVector_t1801110279->IBindableVector_GetAt_m2354796153(___index0, &returnValue);
	____ibindableVector_t1801110279->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.UI.Xaml.Interop.IBindableVector::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IBindableVector_get_Size_m151438974 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IBindableVector_t1801110279* ____ibindableVector_t1801110279 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBindableVector_t1801110279::IID, reinterpret_cast<void**>(&____ibindableVector_t1801110279));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ibindableVector_t1801110279->IBindableVector_get_Size_m151438974(&returnValue);
	____ibindableVector_t1801110279->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// Windows.UI.Xaml.Interop.IBindableVectorView Windows.UI.Xaml.Interop.IBindableVector::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IBindableVector_GetView_m1491544680 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IBindableVector_GetView_m1491544680_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IBindableVector_t1801110279* ____ibindableVector_t1801110279 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBindableVector_t1801110279::IID, reinterpret_cast<void**>(&____ibindableVector_t1801110279));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IBindableVectorView_t4191940899* returnValue = NULL;
	hr = ____ibindableVector_t1801110279->IBindableVector_GetView_m1491544680(&returnValue);
	____ibindableVector_t1801110279->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.UI.Xaml.Interop.IBindableVector::IndexOf(System.Object,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IBindableVector_IndexOf_m627110519 (RuntimeObject* __this, RuntimeObject * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IBindableVector_t1801110279* ____ibindableVector_t1801110279 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBindableVector_t1801110279::IID, reinterpret_cast<void**>(&____ibindableVector_t1801110279));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	Il2CppIInspectable* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	bool returnValue = 0;
	hr = ____ibindableVector_t1801110279->IBindableVector_IndexOf_m627110519(____value0_marshaled, ___index1, &returnValue);
	____ibindableVector_t1801110279->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.UI.Xaml.Interop.IBindableVector::SetAt(System.UInt32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void IBindableVector_SetAt_m1920883433 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	IBindableVector_t1801110279* ____ibindableVector_t1801110279 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBindableVector_t1801110279::IID, reinterpret_cast<void**>(&____ibindableVector_t1801110279));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	Il2CppIInspectable* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ibindableVector_t1801110279->IBindableVector_SetAt_m1920883433(___index0, ____value1_marshaled);
	____ibindableVector_t1801110279->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.UI.Xaml.Interop.IBindableVector::InsertAt(System.UInt32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void IBindableVector_InsertAt_m450046008 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	IBindableVector_t1801110279* ____ibindableVector_t1801110279 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBindableVector_t1801110279::IID, reinterpret_cast<void**>(&____ibindableVector_t1801110279));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	Il2CppIInspectable* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ibindableVector_t1801110279->IBindableVector_InsertAt_m450046008(___index0, ____value1_marshaled);
	____ibindableVector_t1801110279->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.UI.Xaml.Interop.IBindableVector::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IBindableVector_RemoveAt_m3479961725 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IBindableVector_t1801110279* ____ibindableVector_t1801110279 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBindableVector_t1801110279::IID, reinterpret_cast<void**>(&____ibindableVector_t1801110279));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ibindableVector_t1801110279->IBindableVector_RemoveAt_m3479961725(___index0);
	____ibindableVector_t1801110279->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.UI.Xaml.Interop.IBindableVector::Append(System.Object)
extern "C" IL2CPP_METHOD_ATTR void IBindableVector_Append_m2201043447 (RuntimeObject* __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	IBindableVector_t1801110279* ____ibindableVector_t1801110279 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBindableVector_t1801110279::IID, reinterpret_cast<void**>(&____ibindableVector_t1801110279));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	Il2CppIInspectable* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ibindableVector_t1801110279->IBindableVector_Append_m2201043447(____value0_marshaled);
	____ibindableVector_t1801110279->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

}
// System.Void Windows.UI.Xaml.Interop.IBindableVector::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IBindableVector_RemoveAtEnd_m2914381745 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IBindableVector_t1801110279* ____ibindableVector_t1801110279 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBindableVector_t1801110279::IID, reinterpret_cast<void**>(&____ibindableVector_t1801110279));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ibindableVector_t1801110279->IBindableVector_RemoveAtEnd_m2914381745();
	____ibindableVector_t1801110279->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.UI.Xaml.Interop.IBindableVector::Clear()
extern "C" IL2CPP_METHOD_ATTR void IBindableVector_Clear_m717217363 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IBindableVector_t1801110279* ____ibindableVector_t1801110279 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBindableVector_t1801110279::IID, reinterpret_cast<void**>(&____ibindableVector_t1801110279));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ibindableVector_t1801110279->IBindableVector_Clear_m717217363();
	____ibindableVector_t1801110279->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Xaml.Interop.IBindableVectorView
const Il2CppGuid IBindableVectorView_t4191940899::IID = { 0x346dd6e7, 0x976e, 0x4bc3, 0x81, 0x5d, 0xec, 0xe2, 0x43, 0xbc, 0xf, 0x33 };
// System.Object Windows.UI.Xaml.Interop.IBindableVectorView::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * IBindableVectorView_GetAt_m2042489765 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IBindableVectorView_GetAt_m2042489765_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IBindableVectorView_t4191940899* ____ibindableVectorView_t4191940899 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBindableVectorView_t4191940899::IID, reinterpret_cast<void**>(&____ibindableVectorView_t4191940899));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppIInspectable* returnValue = NULL;
	hr = ____ibindableVectorView_t4191940899->IBindableVectorView_GetAt_m2042489765(___index0, &returnValue);
	____ibindableVectorView_t4191940899->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.UI.Xaml.Interop.IBindableVectorView::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IBindableVectorView_get_Size_m2561144479 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IBindableVectorView_t4191940899* ____ibindableVectorView_t4191940899 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBindableVectorView_t4191940899::IID, reinterpret_cast<void**>(&____ibindableVectorView_t4191940899));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ibindableVectorView_t4191940899->IBindableVectorView_get_Size_m2561144479(&returnValue);
	____ibindableVectorView_t4191940899->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.UI.Xaml.Interop.IBindableVectorView::IndexOf(System.Object,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IBindableVectorView_IndexOf_m2936101316 (RuntimeObject* __this, RuntimeObject * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IBindableVectorView_t4191940899* ____ibindableVectorView_t4191940899 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IBindableVectorView_t4191940899::IID, reinterpret_cast<void**>(&____ibindableVectorView_t4191940899));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	Il2CppIInspectable* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	bool returnValue = 0;
	hr = ____ibindableVectorView_t4191940899->IBindableVectorView_IndexOf_m2936101316(____value0_marshaled, ___index1, &returnValue);
	____ibindableVectorView_t4191940899->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Xaml.Interop.INotifyCollectionChanged
const Il2CppGuid INotifyCollectionChanged_t3244377239::IID = { 0x28b167d5, 0x1a31, 0x465b, 0x9b, 0x25, 0xd5, 0xc3, 0xae, 0x68, 0x6c, 0x40 };
// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken Windows.UI.Xaml.Interop.INotifyCollectionChanged::add_CollectionChanged(System.Collections.Specialized.NotifyCollectionChangedEventHandler)
extern "C" IL2CPP_METHOD_ATTR EventRegistrationToken_t318890788  INotifyCollectionChanged_add_CollectionChanged_m1116549919 (RuntimeObject* __this, NotifyCollectionChangedEventHandler_t2749712960 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (INotifyCollectionChanged_add_CollectionChanged_m1116549919_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	INotifyCollectionChanged_t3244377239* ____inotifyCollectionChanged_t3244377239 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(INotifyCollectionChanged_t3244377239::IID, reinterpret_cast<void**>(&____inotifyCollectionChanged_t3244377239));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	INotifyCollectionChangedEventHandler_t2749712960_ComCallableWrapper* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		RuntimeObject* target = ___value0->get_m_target_2();

		if (target != NULL && ___value0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(INotifyCollectionChangedEventHandler_t2749712960_ComCallableWrapper::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<INotifyCollectionChangedEventHandler_t2749712960_ComCallableWrapper>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	EventRegistrationToken_t318890788  returnValue = {};
	hr = ____inotifyCollectionChanged_t3244377239->INotifyCollectionChanged_add_CollectionChanged_m1116549919(____value0_marshaled, &returnValue);
	____inotifyCollectionChanged_t3244377239->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.UI.Xaml.Interop.INotifyCollectionChanged::remove_CollectionChanged(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
extern "C" IL2CPP_METHOD_ATTR void INotifyCollectionChanged_remove_CollectionChanged_m1364461162 (RuntimeObject* __this, EventRegistrationToken_t318890788  ___token0, const RuntimeMethod* method)
{
	INotifyCollectionChanged_t3244377239* ____inotifyCollectionChanged_t3244377239 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(INotifyCollectionChanged_t3244377239::IID, reinterpret_cast<void**>(&____inotifyCollectionChanged_t3244377239));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____inotifyCollectionChanged_t3244377239->INotifyCollectionChanged_remove_CollectionChanged_m1364461162(___token0);
	____inotifyCollectionChanged_t3244377239->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs
const Il2CppGuid INotifyCollectionChangedEventArgs_t951239883::IID = { 0x4cf68d33, 0xe3f2, 0x4964, 0xb8, 0x5e, 0x94, 0x5b, 0x4f, 0x7e, 0x2f, 0x21 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgsFactory
const Il2CppGuid INotifyCollectionChangedEventArgsFactory_t1817199772::IID = { 0xb30c3e3a, 0xdf8d, 0x44a5, 0x9a, 0x38, 0x7a, 0xc0, 0xd0, 0x8c, 0xe6, 0x3d };
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
// System.Void Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs::.ctor(System.Collections.Specialized.NotifyCollectionChangedAction,System.Collections.IList,System.Collections.IList,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventArgs__ctor_m1991480302 (NotifyCollectionChangedEventArgs_t495045256 * __this, int32_t ___action0, RuntimeObject* ___newItems1, RuntimeObject* ___oldItems2, int32_t ___newIndex3, int32_t ___oldIndex4, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs'. It has no managed representation. Instead, use 'System.Collections.Specialized.NotifyCollectionChangedEventArgs'."), NULL, NULL);
}
// System.Collections.Specialized.NotifyCollectionChangedAction Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs::get_Action()
extern "C" IL2CPP_METHOD_ATTR int32_t NotifyCollectionChangedEventArgs_get_Action_m1139304 (NotifyCollectionChangedEventArgs_t495045256 * __this, const RuntimeMethod* method)
{
	INotifyCollectionChangedEventArgs_t951239883* ____inotifyCollectionChangedEventArgs_t951239883 = __this->get_____inotifyCollectionChangedEventArgs_t951239883();

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____inotifyCollectionChangedEventArgs_t951239883->INotifyCollectionChangedEventArgs_get_Action_m131830108(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.IList Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs::get_NewItems()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NotifyCollectionChangedEventArgs_get_NewItems_m2866764785 (NotifyCollectionChangedEventArgs_t495045256 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NotifyCollectionChangedEventArgs_get_NewItems_m2866764785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	INotifyCollectionChangedEventArgs_t951239883* ____inotifyCollectionChangedEventArgs_t951239883 = __this->get_____inotifyCollectionChangedEventArgs_t951239883();

	// Native function invocation
	IBindableVector_t1801110279* returnValue = NULL;
	const il2cpp_hresult_t hr = ____inotifyCollectionChangedEventArgs_t951239883->INotifyCollectionChangedEventArgs_get_NewItems_m4174321480(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Collections.IList Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs::get_OldItems()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NotifyCollectionChangedEventArgs_get_OldItems_m1908442117 (NotifyCollectionChangedEventArgs_t495045256 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NotifyCollectionChangedEventArgs_get_OldItems_m1908442117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	INotifyCollectionChangedEventArgs_t951239883* ____inotifyCollectionChangedEventArgs_t951239883 = __this->get_____inotifyCollectionChangedEventArgs_t951239883();

	// Native function invocation
	IBindableVector_t1801110279* returnValue = NULL;
	const il2cpp_hresult_t hr = ____inotifyCollectionChangedEventArgs_t951239883->INotifyCollectionChangedEventArgs_get_OldItems_m3291453603(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Int32 Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs::get_NewStartingIndex()
extern "C" IL2CPP_METHOD_ATTR int32_t NotifyCollectionChangedEventArgs_get_NewStartingIndex_m213747351 (NotifyCollectionChangedEventArgs_t495045256 * __this, const RuntimeMethod* method)
{
	INotifyCollectionChangedEventArgs_t951239883* ____inotifyCollectionChangedEventArgs_t951239883 = __this->get_____inotifyCollectionChangedEventArgs_t951239883();

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____inotifyCollectionChangedEventArgs_t951239883->INotifyCollectionChangedEventArgs_get_NewStartingIndex_m3677161728(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Int32 Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs::get_OldStartingIndex()
extern "C" IL2CPP_METHOD_ATTR int32_t NotifyCollectionChangedEventArgs_get_OldStartingIndex_m740346264 (NotifyCollectionChangedEventArgs_t495045256 * __this, const RuntimeMethod* method)
{
	INotifyCollectionChangedEventArgs_t951239883* ____inotifyCollectionChangedEventArgs_t951239883 = __this->get_____inotifyCollectionChangedEventArgs_t951239883();

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____inotifyCollectionChangedEventArgs_t951239883->INotifyCollectionChangedEventArgs_get_OldStartingIndex_m820494605(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs::Finalize()
extern "C" IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventArgs_Finalize_m1292456216 (NotifyCollectionChangedEventArgs_t495045256 * __this, const RuntimeMethod* method)
{
	if (il2cpp_codegen_is_import_or_windows_runtime((RuntimeObject*)__this))
	{
		if (__this->____inotifyCollectionChangedEventArgs_t951239883 != NULL)
		{
			__this->____inotifyCollectionChangedEventArgs_t951239883->Release();
		}
	}

	__this->____inotifyCollectionChangedEventArgs_t951239883 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
const Il2CppGuid INotifyCollectionChangedEventHandler_t3129157931_ComCallableWrapper::IID = { 0xca10b37c, 0xf382, 0x4591, 0x85, 0x57, 0x5e, 0x24, 0x96, 0x52, 0x79, 0xb0 };
// Native invoker for Windows.UI.Xaml.Interop.NotifyCollectionChangedEventHandler
extern "C"  void NotifyCollectionChangedEventHandler_Invoke_m2932347556_NativeInvoker (Il2CppComObject * __this, RuntimeObject * ___sender0, NotifyCollectionChangedEventArgs_t9239872 * ___e1, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Collections.Specialized.NotifyCollectionChangedEventArgs'."), NULL, NULL);
}
// System.Void Windows.UI.Xaml.Interop.NotifyCollectionChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventHandler__ctor_m3140373192 (NotifyCollectionChangedEventHandler_t3129157931 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Windows.UI.Xaml.Interop.NotifyCollectionChangedEventHandler::Invoke(System.Object,System.Collections.Specialized.NotifyCollectionChangedEventArgs)
extern "C" IL2CPP_METHOD_ATTR void NotifyCollectionChangedEventHandler_Invoke_m2932347556 (NotifyCollectionChangedEventHandler_t3129157931 * __this, RuntimeObject * ___sender0, NotifyCollectionChangedEventArgs_t9239872 * ___e1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, NotifyCollectionChangedEventArgs_t9239872 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, NotifyCollectionChangedEventArgs_t9239872 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< RuntimeObject *, NotifyCollectionChangedEventArgs_t9239872 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
							else
								GenericVirtActionInvoker2< RuntimeObject *, NotifyCollectionChangedEventArgs_t9239872 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< RuntimeObject *, NotifyCollectionChangedEventArgs_t9239872 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
							else
								VirtActionInvoker2< RuntimeObject *, NotifyCollectionChangedEventArgs_t9239872 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, RuntimeObject *, NotifyCollectionChangedEventArgs_t9239872 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< NotifyCollectionChangedEventArgs_t9239872 * >::Invoke(targetMethod, ___sender0, ___e1);
							else
								GenericVirtActionInvoker1< NotifyCollectionChangedEventArgs_t9239872 * >::Invoke(targetMethod, ___sender0, ___e1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< NotifyCollectionChangedEventArgs_t9239872 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
							else
								VirtActionInvoker1< NotifyCollectionChangedEventArgs_t9239872 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, NotifyCollectionChangedEventArgs_t9239872 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, NotifyCollectionChangedEventArgs_t9239872 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, NotifyCollectionChangedEventArgs_t9239872 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< RuntimeObject *, NotifyCollectionChangedEventArgs_t9239872 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
						else
							GenericVirtActionInvoker2< RuntimeObject *, NotifyCollectionChangedEventArgs_t9239872 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< RuntimeObject *, NotifyCollectionChangedEventArgs_t9239872 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
						else
							VirtActionInvoker2< RuntimeObject *, NotifyCollectionChangedEventArgs_t9239872 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, NotifyCollectionChangedEventArgs_t9239872 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< NotifyCollectionChangedEventArgs_t9239872 * >::Invoke(targetMethod, ___sender0, ___e1);
						else
							GenericVirtActionInvoker1< NotifyCollectionChangedEventArgs_t9239872 * >::Invoke(targetMethod, ___sender0, ___e1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< NotifyCollectionChangedEventArgs_t9239872 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
						else
							VirtActionInvoker1< NotifyCollectionChangedEventArgs_t9239872 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, NotifyCollectionChangedEventArgs_t9239872 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
			}
		}
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
// Conversion methods for marshalling of: Windows.UI.Xaml.Interop.TypeName
extern "C" void TypeName_t4208425108_marshal_pinvoke(const TypeName_t4208425108& unmarshaled, TypeName_t4208425108_marshaled_pinvoke& marshaled)
{
	marshaled.___Name_0 = il2cpp_codegen_marshal_string(unmarshaled.get_Name_0());
	marshaled.___Kind_1 = unmarshaled.get_Kind_1();
}
extern "C" void TypeName_t4208425108_marshal_pinvoke_back(const TypeName_t4208425108_marshaled_pinvoke& marshaled, TypeName_t4208425108& unmarshaled)
{
	unmarshaled.set_Name_0(il2cpp_codegen_marshal_string_result(marshaled.___Name_0));
	int32_t unmarshaled_Kind_temp_1 = 0;
	unmarshaled_Kind_temp_1 = marshaled.___Kind_1;
	unmarshaled.set_Kind_1(unmarshaled_Kind_temp_1);
}
// Conversion method for clean up from marshalling of: Windows.UI.Xaml.Interop.TypeName
extern "C" void TypeName_t4208425108_marshal_pinvoke_cleanup(TypeName_t4208425108_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Name_0);
	marshaled.___Name_0 = NULL;
}
// Conversion methods for marshalling of: Windows.UI.Xaml.Interop.TypeName
extern "C" void TypeName_t4208425108_marshal_com(const TypeName_t4208425108& unmarshaled, TypeName_t4208425108_marshaled_com& marshaled)
{
	marshaled.___Name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Name_0());
	marshaled.___Kind_1 = unmarshaled.get_Kind_1();
}
extern "C" void TypeName_t4208425108_marshal_com_back(const TypeName_t4208425108_marshaled_com& marshaled, TypeName_t4208425108& unmarshaled)
{
	unmarshaled.set_Name_0(il2cpp_codegen_marshal_bstring_result(marshaled.___Name_0));
	int32_t unmarshaled_Kind_temp_1 = 0;
	unmarshaled_Kind_temp_1 = marshaled.___Kind_1;
	unmarshaled.set_Kind_1(unmarshaled_Kind_temp_1);
}
// Conversion method for clean up from marshalling of: Windows.UI.Xaml.Interop.TypeName
extern "C" void TypeName_t4208425108_marshal_com_cleanup(TypeName_t4208425108_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Name_0);
	marshaled.___Name_0 = NULL;
}
// Conversion methods for marshalling of: Windows.UI.Xaml.Interop.TypeName
extern "C" void TypeName_t4208425108_marshal_windows_runtime(const TypeName_t4208425108& unmarshaled, TypeName_t4208425108_marshaled_windows_runtime& marshaled)
{
	if (unmarshaled.get_Name_0() == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("unmarshaled_Name"), NULL, NULL);
	}
	marshaled.___Name_0 = il2cpp_codegen_create_hstring(unmarshaled.get_Name_0());
	marshaled.___Kind_1 = unmarshaled.get_Kind_1();
}
extern "C" void TypeName_t4208425108_marshal_windows_runtime_back(const TypeName_t4208425108_marshaled_windows_runtime& marshaled, TypeName_t4208425108& unmarshaled)
{
	unmarshaled.set_Name_0(il2cpp_codegen_marshal_hstring_result(marshaled.___Name_0));
	int32_t unmarshaled_Kind_temp_1 = 0;
	unmarshaled_Kind_temp_1 = marshaled.___Kind_1;
	unmarshaled.set_Kind_1(unmarshaled_Kind_temp_1);
}
// Conversion method for clean up from marshalling of: Windows.UI.Xaml.Interop.TypeName
extern "C" void TypeName_t4208425108_marshal_windows_runtime_cleanup(TypeName_t4208425108_marshaled_windows_runtime& marshaled)
{
	il2cpp_codegen_marshal_free_hstring(marshaled.___Name_0);
	marshaled.___Name_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
