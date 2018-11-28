﻿#include "il2cpp-config.h"

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

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.IReadOnlyList`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct IReadOnlyList_1_t3507722876;
// System.Collections.Generic.IReadOnlyList`1<Windows.Foundation.Point>
struct IReadOnlyList_1_t434409149;
// System.Collections.Generic.IReadOnlyList`1<Windows.Foundation.Rect>
struct IReadOnlyList_1_t3259536393;
// System.Collections.Generic.IReadOnlyList`1<Windows.Foundation.Size>
struct IReadOnlyList_1_t1115340544;
// System.Collections.Generic.IReadOnlyList`1<Windows.Media.SpeechSynthesis.IVoiceInformation>
struct IReadOnlyList_1_t3675478925;
// System.Collections.Generic.IReadOnlyList`1<Windows.Media.SpeechSynthesis.VoiceInformation>
struct IReadOnlyList_1_t535860242;
// System.Collections.Generic.IReadOnlyList`1<Windows.Networking.HostName>
struct IReadOnlyList_1_t3454457725;
// System.Collections.Generic.IReadOnlyList`1<Windows.Networking.IHostName>
struct IReadOnlyList_1_t3743943988;
// System.Collections.Generic.IReadOnlyList`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>
struct IReadOnlyList_1_t3541860837;
// System.Collections.Generic.IReadOnlyList`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>
struct IReadOnlyList_1_t1923252709;
// System.Collections.Generic.IReadOnlyList`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>
struct IReadOnlyList_1_t1780110969;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Exception
struct Exception_t;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Void
struct Void_t1185182177;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_t1437760040;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct AsyncOperationCompletedHandler_1_t125610943;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>
struct AsyncOperationCompletedHandler_1_t3900534053;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct AsyncOperationCompletedHandler_1_t3662811833;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
struct AsyncOperationCompletedHandler_1_t3092276191;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFolder>
struct AsyncOperationCompletedHandler_1_t2325952763;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStream>
struct AsyncOperationCompletedHandler_1_t3440468126;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct AsyncOperationCompletedHandler_1_t342432431;
// Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.Object>
struct AsyncOperationProgressHandler_2_t385660461;
// Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>
struct AsyncOperationProgressHandler_2_t4160583571;
// Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationProgressHandler_2_t4087444949;
// Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationProgressHandler_2_t821837630;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.Object>
struct AsyncOperationWithProgressCompletedHandler_2_t3173780358;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t2653736172;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t2580597550;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t3609957527;
// Windows.Foundation.EventHandler`1<System.Object>
struct EventHandler_1_t39852124;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.Object>
struct IAsyncOperationWithProgress_2_t1186396931;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>
struct IAsyncOperationWithProgress_2_t666352745;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_t593214123;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_t1622574100;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t3013442981;
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct IAsyncOperation_1_t1701293884;
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
// Windows.Foundation.IWwwFormUrlDecoderEntry
struct IWwwFormUrlDecoderEntry_t2943299970;
// Windows.Foundation.IWwwFormUrlDecoderEntry[]
struct IWwwFormUrlDecoderEntryU5BU5D_t40345143;
// Windows.Foundation.Point[]
struct PointU5BU5D_t724808658;
// Windows.Foundation.Rect[]
struct RectU5BU5D_t5657558;
// Windows.Foundation.Size[]
struct SizeU5BU5D_t1671914275;
// Windows.Media.SpeechSynthesis.IVoiceInformation
struct IVoiceInformation_t3111056019;
// Windows.Media.SpeechSynthesis.IVoiceInformation[]
struct IVoiceInformationU5BU5D_t3472394690;
// Windows.Media.SpeechSynthesis.SpeechSynthesisStream
struct SpeechSynthesisStream_t2322339758;
// Windows.Media.SpeechSynthesis.VoiceInformation
struct VoiceInformation_t4266404632;
// Windows.Media.SpeechSynthesis.VoiceInformation[]
struct VoiceInformationU5BU5D_t1943932297;
// Windows.Networking.HostName
struct HostName_t2890034819;
// Windows.Networking.HostName[]
struct HostNameU5BU5D_t2796646418;
// Windows.Networking.IHostName
struct IHostName_t3179521082;
// Windows.Networking.IHostNameFactory
struct IHostNameFactory_t2985905689;
// Windows.Networking.IHostNameStatics
struct IHostNameStatics_t664333692;
// Windows.Networking.IHostName[]
struct IHostNameU5BU5D_t640561567;
// Windows.Storage.IStorageFileStatics
struct IStorageFileStatics_t4131808966;
// Windows.Storage.IStorageFolderStatics
struct IStorageFolderStatics_t333412554;
// Windows.Storage.StorageFile
struct StorageFile_t1751804116;
// Windows.Storage.StorageFolder
struct StorageFolder_t985480688;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t541192229;
// Windows.Storage.Streams.IRandomAccessStream
struct IRandomAccessStream_t2099996051;
// Windows.Storage.Streams.IRandomAccessStreamWithContentType
struct IRandomAccessStreamWithContentType_t3296927652;
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState
struct ISpatialInteractionSourceState_t1358829803;
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState2
struct ISpatialInteractionSourceState2_t2977437931;
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState2[]
struct ISpatialInteractionSourceState2U5BU5D_t3674212106;
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState[]
struct ISpatialInteractionSourceStateU5BU5D_t513935114;
// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct SpatialInteractionSourceState_t1215688063;
// Windows.UI.Input.Spatial.SpatialInteractionSourceState[]
struct SpatialInteractionSourceStateU5BU5D_t1865583014;
// Windows.UI.Xaml.Interop.TypeName
struct TypeName_t4208425108;

extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncOperationCompletedHandler_1_t125610943_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncOperationCompletedHandler_1_t1437760040_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncOperationCompletedHandler_1_t2325952763_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncOperationCompletedHandler_1_t3092276191_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncOperationCompletedHandler_1_t342432431_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncOperationCompletedHandler_1_t3440468126_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncOperationCompletedHandler_1_t3662811833_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncOperationCompletedHandler_1_t3900534053_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncOperationProgressHandler_2_t385660461_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncOperationProgressHandler_2_t4087444949_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncOperationProgressHandler_2_t4160583571_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncOperationProgressHandler_2_t821837630_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_t2580597550_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_t2653736172_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_t3173780358_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_t3609957527_il2cpp_TypeInfo_var;
extern RuntimeClass* HostName_t2890034819_il2cpp_TypeInfo_var;
extern RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
extern RuntimeClass* SpatialInteractionSourceState_t1215688063_il2cpp_TypeInfo_var;
extern RuntimeClass* SpeechSynthesisStream_t2322339758_il2cpp_TypeInfo_var;
extern RuntimeClass* StorageFile_t1751804116_il2cpp_TypeInfo_var;
extern RuntimeClass* StorageFolder_t985480688_il2cpp_TypeInfo_var;
extern RuntimeClass* VoiceInformation_t4266404632_il2cpp_TypeInfo_var;
extern RuntimeClass* __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral311452336;
extern String_t* _stringLiteral4286223022;
extern const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m122450152_RuntimeMethod_var;
extern const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m1728644989_RuntimeMethod_var;
extern const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m2733685339_RuntimeMethod_var;
extern const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m274646961_RuntimeMethod_var;
extern const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m388471121_RuntimeMethod_var;
extern const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m4027491544_RuntimeMethod_var;
extern const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m510864878_RuntimeMethod_var;
extern const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m990580978_RuntimeMethod_var;
extern const RuntimeMethod* AsyncOperationProgressHandler_2_Invoke_m1906555057_RuntimeMethod_var;
extern const RuntimeMethod* AsyncOperationProgressHandler_2_Invoke_m3152257273_RuntimeMethod_var;
extern const RuntimeMethod* AsyncOperationProgressHandler_2_Invoke_m3878254636_RuntimeMethod_var;
extern const RuntimeMethod* AsyncOperationProgressHandler_2_Invoke_m6457722_RuntimeMethod_var;
extern const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2_Invoke_m1272920396_RuntimeMethod_var;
extern const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2_Invoke_m2483366708_RuntimeMethod_var;
extern const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2_Invoke_m2996415322_RuntimeMethod_var;
extern const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2_Invoke_m369172062_RuntimeMethod_var;
extern const uint32_t IAsyncOperationWithProgress_2_GetResults_m2250808291_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_GetResults_m3465034556_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_GetResults_m4125002903_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_get_Completed_m2596256679_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_get_Completed_m2626479363_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_get_Completed_m4203981877_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_get_Completed_m655232302_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_get_Progress_m1058255273_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_get_Progress_m165963889_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_get_Progress_m42638027_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_get_Progress_m489652616_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_put_Completed_m2338839716_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_put_Completed_m3126232629_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_put_Completed_m483007812_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_put_Completed_m796962860_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_put_Progress_m1633053105_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_put_Progress_m1879259012_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_put_Progress_m2941309595_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_put_Progress_m809910966_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_GetResults_m1078041023_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_GetResults_m2895527307_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_GetResults_m2960108873_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_GetResults_m313133751_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_GetResults_m4007442614_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_GetResults_m4077769623_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_get_Completed_m1527642250_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_get_Completed_m1799896646_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_get_Completed_m1801998692_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_get_Completed_m2270643935_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_get_Completed_m2669246745_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_get_Completed_m2736054029_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_get_Completed_m2903702275_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_get_Completed_m3598311264_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_put_Completed_m1174308971_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_put_Completed_m1437779878_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_put_Completed_m1751653406_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_put_Completed_m1783482745_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_put_Completed_m2440562410_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_put_Completed_m2708255201_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_put_Completed_m2910006857_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_put_Completed_m677968592_MetadataUsageId;
extern const uint32_t IReference_1_get_Value_m2049683846_MetadataUsageId;
extern const uint32_t IReference_1_get_Value_m3229386239_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m1612621107_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m1871374034_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m1946664100_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m218110784_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m3175655389_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m3687365220_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m4282895990_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m686949258_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m1098326929_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m2021061927_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m3113622503_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m3155586895_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m4135776724_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m4148138566_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m569725914_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m777774154_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m118185472_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m1588427753_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m1943501597_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m2176928854_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m2518531823_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m3043974731_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m3688244148_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m3695632509_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m3777228417_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m3952515177_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m891121390_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_t125610943_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t2325952763_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t3092276191_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t342432431_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t3440468126_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t3662811833_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t385660461_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t4087444949_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t4160583571_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t821837630_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t2653736172_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t3173780358_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t1186396931;
struct IAsyncOperationWithProgress_2_t1622574100;
struct IAsyncOperationWithProgress_2_t593214123;
struct IAsyncOperationWithProgress_2_t666352745;
struct IAsyncOperation_1_t1181249698;
struct IAsyncOperation_1_t1701293884;
struct IAsyncOperation_1_t1918115372;
struct IAsyncOperation_1_t3013442981;
struct IAsyncOperation_1_t372991836;
struct IAsyncOperation_1_t3901635704;
struct IAsyncOperation_1_t721183771;
struct IAsyncOperation_1_t943527478;
struct IBuffer_t541192229;
struct IHostName_t3179521082;
struct IInputStream_t2821136229;
struct IRandomAccessStreamWithContentType_t3296927652;
struct IRandomAccessStream_t2099996051;
struct ISpatialInteractionSourceState2_t2977437931;
struct ISpatialInteractionSourceState_t1358829803;
struct ISpatialInteractionSource_t2185314266;
struct ISpeechSynthesisStream_t764091608;
struct IStorageFile_t455187485;
struct IStorageFolder_t2414910357;
struct IVectorView_1_t2033978749;
struct IVectorView_1_t2228900081;
struct IVectorView_1_t2282165232;
struct IVectorView_1_t2316303193;
struct IVectorView_1_t2449921281;
struct IVectorView_1_t2518386344;
struct IVectorView_1_t3503818801;
struct IVectorView_1_t3605269894;
struct IVectorView_1_t4184750196;
struct IVectorView_1_t554553325;
struct IVectorView_1_t697695065;
struct IVoiceInformation_t3111056019;
struct IWwwFormUrlDecoderEntry_t2943299970;
struct Point_t4164953539 ;
struct Rect_t2695113487 ;
struct Size_t550917638 ;
struct TypeName_t4208425108;;
struct TypeName_t4208425108_marshaled_windows_runtime;
struct TypeName_t4208425108_marshaled_windows_runtime;;

struct DelegateU5BU5D_t1703627840;
struct IWwwFormUrlDecoderEntryU5BU5D_t40345143;
struct PointU5BU5D_t724808658;
struct RectU5BU5D_t5657558;
struct SizeU5BU5D_t1671914275;
struct IVoiceInformationU5BU5D_t3472394690;
struct VoiceInformationU5BU5D_t1943932297;
struct HostNameU5BU5D_t2796646418;
struct IHostNameU5BU5D_t640561567;
struct ISpatialInteractionSourceState2U5BU5D_t3674212106;
struct ISpatialInteractionSourceStateU5BU5D_t513935114;
struct SpatialInteractionSourceStateU5BU5D_t1865583014;


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
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct NOVTABLE IVectorView_1_t2282165232 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m2035733383(uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2047203447(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2753411397(IWwwFormUrlDecoderEntry_t2943299970* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m66302439(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Media.SpeechSynthesis.IVoiceInformation>
struct NOVTABLE IVectorView_1_t2449921281 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m413498356(uint32_t ___index0, IVoiceInformation_t3111056019** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m15361801(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3832803476(IVoiceInformation_t3111056019* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m2635114557(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IVoiceInformation_t3111056019** ___items1, uint32_t* comReturnValue) = 0;
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
// Windows.Foundation.Collections.IVectorView`1<Windows.Networking.IHostName>
struct NOVTABLE IVectorView_1_t2518386344 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m4134496452(uint32_t ___index0, IHostName_t3179521082** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m1697958776(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2926431078(IHostName_t3179521082* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m1013536940(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IHostName_t3179521082** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>
struct NOVTABLE IVectorView_1_t2316303193 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m481647535(uint32_t ___index0, ISpatialInteractionSourceState2_t2977437931** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3235029412(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3786545505(ISpatialInteractionSourceState2_t2977437931* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m3125443688(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISpatialInteractionSourceState2_t2977437931** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>
struct NOVTABLE IVectorView_1_t697695065 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m849474102(uint32_t ___index0, ISpatialInteractionSourceState_t1358829803** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m1912501272(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1154184863(ISpatialInteractionSourceState_t1358829803* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m4030857929(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISpatialInteractionSourceState_t1358829803** ___items1, uint32_t* comReturnValue) = 0;
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
// Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct NOVTABLE IVector_1_t3683921691 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m3687365220(uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m853395603(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m2518531823(IVectorView_1_t2282165232** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m125330836(IWwwFormUrlDecoderEntry_t2943299970* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m314985913(uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m1485467707(uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m2725070673(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m4022682317(IWwwFormUrlDecoderEntry_t2943299970* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m535504839() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m2360775652() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m569725914(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m2534884464(uint32_t ___items0ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.IVoiceInformation>
struct NOVTABLE IVector_1_t3851677740 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m4282895990(uint32_t ___index0, IVoiceInformation_t3111056019** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m1784785466(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m3688244148(IVectorView_1_t2449921281** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m1471373643(IVoiceInformation_t3111056019* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m1469048276(uint32_t ___index0, IVoiceInformation_t3111056019* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m3730389824(uint32_t ___index0, IVoiceInformation_t3111056019* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m2396257048(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m1301891361(IVoiceInformation_t3111056019* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m2496499893() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m460564598() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m777774154(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IVoiceInformation_t3111056019** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m3989006149(uint32_t ___items0ArraySize, IVoiceInformation_t3111056019** ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.VoiceInformation>
struct NOVTABLE IVector_1_t712059057 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m1871374034(uint32_t ___index0, IVoiceInformation_t3111056019** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m1201119934(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m3043974731(IVectorView_1_t3605269894** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m2717181810(IVoiceInformation_t3111056019* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m3874276812(uint32_t ___index0, IVoiceInformation_t3111056019* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m4127899859(uint32_t ___index0, IVoiceInformation_t3111056019* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m757721370(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m39799051(IVoiceInformation_t3111056019* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m2829690633() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m4100706345() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m3113622503(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IVoiceInformation_t3111056019** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m1589355798(uint32_t ___items0ArraySize, IVoiceInformation_t3111056019** ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.Networking.HostName>
struct NOVTABLE IVector_1_t3630656540 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m1612621107(uint32_t ___index0, IHostName_t3179521082** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m3684819321(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m3777228417(IVectorView_1_t2228900081** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m1287825336(IHostName_t3179521082* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m376308681(uint32_t ___index0, IHostName_t3179521082* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m2559341488(uint32_t ___index0, IHostName_t3179521082* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m1607509023(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m3753868577(IHostName_t3179521082* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m455198937() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m1773846522() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m3155586895(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IHostName_t3179521082** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m1812833917(uint32_t ___items0ArraySize, IHostName_t3179521082** ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.Networking.IHostName>
struct NOVTABLE IVector_1_t3920142803 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m218110784(uint32_t ___index0, IHostName_t3179521082** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m3381460229(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m3952515177(IVectorView_1_t2518386344** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m3880569022(IHostName_t3179521082* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m2275768499(uint32_t ___index0, IHostName_t3179521082* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m3622306290(uint32_t ___index0, IHostName_t3179521082* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m226391736(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m2099802484(IHostName_t3179521082* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m1486964013() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m2150803103() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m4148138566(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IHostName_t3179521082** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m992195110(uint32_t ___items0ArraySize, IHostName_t3179521082** ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>
struct NOVTABLE IVector_1_t3718059652 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m3175655389(uint32_t ___index0, ISpatialInteractionSourceState2_t2977437931** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m3172301122(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m2176928854(IVectorView_1_t2316303193** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m876780403(ISpatialInteractionSourceState2_t2977437931* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m3594153116(uint32_t ___index0, ISpatialInteractionSourceState2_t2977437931* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m1444518929(uint32_t ___index0, ISpatialInteractionSourceState2_t2977437931* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m1302937041(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m2941185074(ISpatialInteractionSourceState2_t2977437931* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m2946446583() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m1635201740() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m2021061927(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISpatialInteractionSourceState2_t2977437931** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m2042354847(uint32_t ___items0ArraySize, ISpatialInteractionSourceState2_t2977437931** ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>
struct NOVTABLE IVector_1_t2099451524 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m1946664100(uint32_t ___index0, ISpatialInteractionSourceState_t1358829803** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m3798462280(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m891121390(IVectorView_1_t697695065** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m2504506261(ISpatialInteractionSourceState_t1358829803* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m3979818183(uint32_t ___index0, ISpatialInteractionSourceState_t1358829803* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m996791195(uint32_t ___index0, ISpatialInteractionSourceState_t1358829803* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m3540886805(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m4159068860(ISpatialInteractionSourceState_t1358829803* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m1022091397() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m2343666422() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m1098326929(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISpatialInteractionSourceState_t1358829803** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m3582663649(uint32_t ___items0ArraySize, ISpatialInteractionSourceState_t1358829803** ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>
struct NOVTABLE IVector_1_t1956309784 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m686949258(uint32_t ___index0, ISpatialInteractionSourceState_t1358829803** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m535300163(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m1588427753(IVectorView_1_t554553325** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m1021089064(ISpatialInteractionSourceState_t1358829803* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m3738080061(uint32_t ___index0, ISpatialInteractionSourceState_t1358829803* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m3469030146(uint32_t ___index0, ISpatialInteractionSourceState_t1358829803* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m1514236569(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m65402885(ISpatialInteractionSourceState_t1358829803* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m2373934537() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m2371066248() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m4135776724(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISpatialInteractionSourceState_t1358829803** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m2190095755(uint32_t ___items0ArraySize, ISpatialInteractionSourceState_t1358829803** ___items0) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.Object>
struct NOVTABLE IAsyncOperationWithProgress_2_t1186396931 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m2941309595(IAsyncOperationProgressHandler_2_t385660461_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m42638027(IAsyncOperationProgressHandler_2_t385660461_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m796962860(IAsyncOperationWithProgressCompletedHandler_2_t3173780358_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m2596256679(IAsyncOperationWithProgressCompletedHandler_2_t3173780358_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m4125002903(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t666352745 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m1879259012(IAsyncOperationProgressHandler_2_t4160583571_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m1058255273(IAsyncOperationProgressHandler_2_t4160583571_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m2338839716(IAsyncOperationWithProgressCompletedHandler_2_t2653736172_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m2626479363(IAsyncOperationWithProgressCompletedHandler_2_t2653736172_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m2250808291(Il2CppIInspectable** comReturnValue) = 0;
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
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct NOVTABLE IAsyncOperation_1_t1701293884 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m2440562410(IAsyncOperationCompletedHandler_1_t125610943_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m1801998692(IAsyncOperationCompletedHandler_1_t125610943_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m313133751(Il2CppIInspectable** comReturnValue) = 0;
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
// Windows.Foundation.IReference`1<System.Boolean>
struct NOVTABLE IReference_1_t3645423686 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m774017165(bool* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Byte>
struct NOVTABLE IReference_1_t387464801 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3247461990(uint8_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Char>
struct NOVTABLE IReference_1_t2887628895 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m704688121(Il2CppChar* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Double>
struct NOVTABLE IReference_1_t4142801084 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3861827098(double* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Exception>
struct NOVTABLE IReference_1_t689905674 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3319376935(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Int16>
struct NOVTABLE IReference_1_t1805988812 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3359388353(int16_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Int32>
struct NOVTABLE IReference_1_t2204114178 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1946804912(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Int64>
struct NOVTABLE IReference_1_t2989735729 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m197260093(int64_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Object>
struct NOVTABLE IReference_1_t2333274589 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3229386239(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Single>
struct NOVTABLE IReference_1_t650435199 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1034221680(float* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.String>
struct NOVTABLE IReference_1_t1100619114 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4216510932(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.UInt16>
struct NOVTABLE IReference_1_t1430893383 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1209658772(uint16_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.UInt32>
struct NOVTABLE IReference_1_t1813230403 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1308423508(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.UInt64>
struct NOVTABLE IReference_1_t3387208517 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2294903021(uint64_t* comReturnValue) = 0;
};
// Windows.Foundation.IStringable
struct NOVTABLE IStringable_t1634798504 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStringable_ToString_m698137009(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IWwwFormUrlDecoderEntry
struct NOVTABLE IWwwFormUrlDecoderEntry_t2943299970 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderEntry_U24__Stripped0_get_Name_m1841419405() = 0;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderEntry_U24__Stripped1_get_Value_m2688400907() = 0;
};
// Windows.Media.Core.ITimedMetadataTrackProvider
struct NOVTABLE ITimedMetadataTrackProvider_t1703961418 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ITimedMetadataTrackProvider_U24__Stripped0_get_TimedMetadataTracks_m167098999() = 0;
};
// Windows.Media.SpeechSynthesis.ISpeechSynthesisStream
struct NOVTABLE ISpeechSynthesisStream_t764091608 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesisStream_U24__Stripped0_get_Markers_m1331395156() = 0;
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
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Point>
struct NOVTABLE IVectorView_1_t3503818801 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m828460566(uint32_t ___index0, Point_t4164953539 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3766324835(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1240834200(Point_t4164953539  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m320624579(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Point_t4164953539 * ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Rect>
struct NOVTABLE IVectorView_1_t2033978749 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m2736327627(uint32_t ___index0, Rect_t2695113487 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2984082999(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3219133186(Rect_t2695113487  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m4144836697(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Rect_t2695113487 * ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Size>
struct NOVTABLE IVectorView_1_t4184750196 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m2196457089(uint32_t ___index0, Size_t550917638 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3307328074(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1205944866(Size_t550917638  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m2898007465(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Size_t550917638 * ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>
struct NOVTABLE IVector_1_t610607964 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m2330330105(uint32_t ___index0, Point_t4164953539 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m59889375(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m118185472(IVectorView_1_t3503818801** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m428066000(Point_t4164953539  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m565528379(uint32_t ___index0, Point_t4164953539  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m3604836490(uint32_t ___index0, Point_t4164953539  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m1853546183(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m195984872(Point_t4164953539  ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m4286336640() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m2273683721() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m4242153011(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Point_t4164953539 * ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m2759782552(uint32_t ___items0ArraySize, Point_t4164953539 * ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>
struct NOVTABLE IVector_1_t3435735208 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m3545656912(uint32_t ___index0, Rect_t2695113487 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m2774852035(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m3695632509(IVectorView_1_t2033978749** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m2583104291(Rect_t2695113487  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m661546338(uint32_t ___index0, Rect_t2695113487  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m1857322035(uint32_t ___index0, Rect_t2695113487  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m3994675881(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m4126265023(Rect_t2695113487  ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m298642047() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m26527518() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m476750240(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Rect_t2695113487 * ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m2673034237(uint32_t ___items0ArraySize, Rect_t2695113487 * ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>
struct NOVTABLE IVector_1_t1291539359 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m2699244792(uint32_t ___index0, Size_t550917638 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m4157668882(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m1943501597(IVectorView_1_t4184750196** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m3701100474(Size_t550917638  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m3412621482(uint32_t ___index0, Size_t550917638  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m3860348037(uint32_t ___index0, Size_t550917638  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m394387669(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m2019222254(Size_t550917638  ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m2572115469() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m783567046() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m4076800509(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Size_t550917638 * ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m4107471252(uint32_t ___items0ArraySize, Size_t550917638 * ___items0) = 0;
};
// Windows.Foundation.IReference`1<System.DateTimeOffset>
struct NOVTABLE IReference_1_t2482455932 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2049683846(DateTime_t1679451545 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Guid>
struct NOVTABLE IReference_1_t2446701312 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2917423479(Guid_t * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct NOVTABLE IReference_1_t3867026509 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m777133319(EventRegistrationToken_t318890788 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.DateTime>
struct NOVTABLE IReference_1_t932619970 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1126360047(DateTime_t1679451545 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.EventRegistrationToken>
struct NOVTABLE IReference_1_t2405446371 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2795834790(EventRegistrationToken_t3152277946 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.FoundationContract>
struct NOVTABLE IReference_1_t2904551434 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m919830547(FoundationContract_t3651383009 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.HResult>
struct NOVTABLE IReference_1_t2326351618 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3795436356(HResult_t3073183193 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Point>
struct NOVTABLE IReference_1_t3418121964 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2248936515(Point_t4164953539 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Point>
struct NOVTABLE IReference_1_t3418121965 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2248936516(Point_t4164953540 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Rect>
struct NOVTABLE IReference_1_t1948281912 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2582268702(Rect_t2695113488 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Rect>
struct NOVTABLE IReference_1_t1948281913 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2582268703(Rect_t2695113487 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Size>
struct NOVTABLE IReference_1_t4099053359 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3618386193(Size_t550917639 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Size>
struct NOVTABLE IReference_1_t4099053360 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3618386194(Size_t550917638 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>
struct NOVTABLE IReference_1_t1008809407 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3415674831(TimeSpan_t1755640982 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.UniversalApiContract>
struct NOVTABLE IReference_1_t2620173286 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2468794183(UniversalApiContract_t3367004861 * comReturnValue) = 0;
};
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
// Windows.Foundation.IReference`1<System.AttributeTargets>
struct NOVTABLE IReference_1_t1037206413 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m95326068(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Collections.Specialized.NotifyCollectionChangedAction>
struct NOVTABLE IReference_1_t309621807 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2725733907(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.TimeSpan>
struct NOVTABLE IReference_1_t134327674 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2770668730(TimeSpan_t881159249 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.AsyncStatus>
struct NOVTABLE IReference_1_t1403654299 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2017125470(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.CompositionType>
struct NOVTABLE IReference_1_t1873685880 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m56861080(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.MarshalingType>
struct NOVTABLE IReference_1_t2809364818 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4241848242(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.ThreadingModel>
struct NOVTABLE IReference_1_t2091189898 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3959947048(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.PropertyType>
struct NOVTABLE IReference_1_t2284596779 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4223149003(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Media.Capture.MediaCategory>
struct NOVTABLE IReference_1_t2431064701 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1562853724(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Media.Capture.StreamingCaptureMode>
struct NOVTABLE IReference_1_t3164493645 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2051665395(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Networking.HostNameType>
struct NOVTABLE IReference_1_t3423936504 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1424367424(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Storage.CreationCollisionOption>
struct NOVTABLE IReference_1_t1256324868 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2204867723(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Storage.FileAccessMode>
struct NOVTABLE IReference_1_t1870003812 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1269367142(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Storage.Streams.InputStreamOptions>
struct NOVTABLE IReference_1_t2154907404 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2331768150(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeKind>
struct NOVTABLE IReference_1_t1526750185 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2990591067(int32_t* comReturnValue) = 0;
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
#ifndef ASYNCOPERATIONCOMPLETEDHANDLER_1_T1437760040_H
#define ASYNCOPERATIONCOMPLETEDHANDLER_1_T1437760040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct  AsyncOperationCompletedHandler_1_t1437760040  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t3013442981* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONCOMPLETEDHANDLER_1_T1437760040_H
#ifndef ASYNCOPERATIONCOMPLETEDHANDLER_1_T125610943_H
#define ASYNCOPERATIONCOMPLETEDHANDLER_1_T125610943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct  AsyncOperationCompletedHandler_1_t125610943  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct IAsyncOperationCompletedHandler_1_t125610943_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t1701293884* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONCOMPLETEDHANDLER_1_T125610943_H
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
#ifndef ASYNCOPERATIONCOMPLETEDHANDLER_1_T3662811833_H
#define ASYNCOPERATIONCOMPLETEDHANDLER_1_T3662811833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct  AsyncOperationCompletedHandler_1_t3662811833  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct IAsyncOperationCompletedHandler_1_t3662811833_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t943527478* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONCOMPLETEDHANDLER_1_T3662811833_H
#ifndef ASYNCOPERATIONCOMPLETEDHANDLER_1_T3092276191_H
#define ASYNCOPERATIONCOMPLETEDHANDLER_1_T3092276191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
struct  AsyncOperationCompletedHandler_1_t3092276191  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
struct IAsyncOperationCompletedHandler_1_t3092276191_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t372991836* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONCOMPLETEDHANDLER_1_T3092276191_H
#ifndef ASYNCOPERATIONCOMPLETEDHANDLER_1_T2325952763_H
#define ASYNCOPERATIONCOMPLETEDHANDLER_1_T2325952763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFolder>
struct  AsyncOperationCompletedHandler_1_t2325952763  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFolder>
struct IAsyncOperationCompletedHandler_1_t2325952763_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t3901635704* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONCOMPLETEDHANDLER_1_T2325952763_H
#ifndef ASYNCOPERATIONCOMPLETEDHANDLER_1_T3440468126_H
#define ASYNCOPERATIONCOMPLETEDHANDLER_1_T3440468126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStream>
struct  AsyncOperationCompletedHandler_1_t3440468126  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStream>
struct IAsyncOperationCompletedHandler_1_t3440468126_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t721183771* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONCOMPLETEDHANDLER_1_T3440468126_H
#ifndef ASYNCOPERATIONCOMPLETEDHANDLER_1_T342432431_H
#define ASYNCOPERATIONCOMPLETEDHANDLER_1_T342432431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct  AsyncOperationCompletedHandler_1_t342432431  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct IAsyncOperationCompletedHandler_1_t342432431_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t1918115372* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONCOMPLETEDHANDLER_1_T342432431_H
#ifndef ASYNCOPERATIONPROGRESSHANDLER_2_T385660461_H
#define ASYNCOPERATIONPROGRESSHANDLER_2_T385660461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.Object>
struct  AsyncOperationProgressHandler_2_t385660461  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.Object>
struct IAsyncOperationProgressHandler_2_t385660461_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t1186396931* ___asyncInfo0, Il2CppIInspectable* ___progressInfo1) = 0;
};

#endif // ASYNCOPERATIONPROGRESSHANDLER_2_T385660461_H
#ifndef ASYNCOPERATIONPROGRESSHANDLER_2_T4160583571_H
#define ASYNCOPERATIONPROGRESSHANDLER_2_T4160583571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>
struct  AsyncOperationProgressHandler_2_t4160583571  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>
struct IAsyncOperationProgressHandler_2_t4160583571_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t666352745* ___asyncInfo0, uint32_t ___progressInfo1) = 0;
};

#endif // ASYNCOPERATIONPROGRESSHANDLER_2_T4160583571_H
#ifndef ASYNCOPERATIONPROGRESSHANDLER_2_T4087444949_H
#define ASYNCOPERATIONPROGRESSHANDLER_2_T4087444949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct  AsyncOperationProgressHandler_2_t4087444949  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct IAsyncOperationProgressHandler_2_t4087444949_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t593214123* ___asyncInfo0, uint32_t ___progressInfo1) = 0;
};

#endif // ASYNCOPERATIONPROGRESSHANDLER_2_T4087444949_H
#ifndef ASYNCOPERATIONPROGRESSHANDLER_2_T821837630_H
#define ASYNCOPERATIONPROGRESSHANDLER_2_T821837630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct  AsyncOperationProgressHandler_2_t821837630  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationProgressHandler_2_t821837630_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t1622574100* ___asyncInfo0, uint32_t ___progressInfo1) = 0;
};

#endif // ASYNCOPERATIONPROGRESSHANDLER_2_T821837630_H
#ifndef ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T3173780358_H
#define ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T3173780358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.Object>
struct  AsyncOperationWithProgressCompletedHandler_2_t3173780358  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.Object>
struct IAsyncOperationWithProgressCompletedHandler_2_t3173780358_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t1186396931* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T3173780358_H
#ifndef ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T2653736172_H
#define ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T2653736172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct  AsyncOperationWithProgressCompletedHandler_2_t2653736172  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t2653736172_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t666352745* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T2653736172_H
#ifndef ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T2580597550_H
#define ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T2580597550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct  AsyncOperationWithProgressCompletedHandler_2_t2580597550  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t593214123* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T2580597550_H
#ifndef ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T3609957527_H
#define ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T3609957527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct  AsyncOperationWithProgressCompletedHandler_2_t3609957527  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t1622574100* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T3609957527_H
#ifndef EVENTHANDLER_1_T39852124_H
#define EVENTHANDLER_1_T39852124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.EventHandler`1<System.Object>
struct  EventHandler_1_t39852124  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.EventHandler`1<System.Object>
struct IEventHandler_1_t39852124_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___args1) = 0;
};

#endif // EVENTHANDLER_1_T39852124_H
// Windows.Foundation.IReference`1<System.Type>
struct NOVTABLE IReference_1_t1737113185 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2081172832(Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.AttributeTargets>
struct NOVTABLE IReference_1_t1714021653 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m800375591(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.NotifyCollectionChangedAction>
struct NOVTABLE IReference_1_t3926795489 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m14739056(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeName>
struct NOVTABLE IReference_1_t3461593533 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3274607421(TypeName_t4208425108_marshaled_windows_runtime* comReturnValue) = 0;
};
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
// Windows.Media.SpeechSynthesis.IVoiceInformation[]
struct IVoiceInformationU5BU5D_t3472394690  : public RuntimeArray
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
// Windows.Media.SpeechSynthesis.VoiceInformation[]
struct VoiceInformationU5BU5D_t1943932297  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) VoiceInformation_t4266404632 * m_Items[1];

public:
	inline VoiceInformation_t4266404632 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VoiceInformation_t4266404632 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VoiceInformation_t4266404632 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline VoiceInformation_t4266404632 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VoiceInformation_t4266404632 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VoiceInformation_t4266404632 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Windows.Networking.HostName[]
struct HostNameU5BU5D_t2796646418  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HostName_t2890034819 * m_Items[1];

public:
	inline HostName_t2890034819 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HostName_t2890034819 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HostName_t2890034819 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline HostName_t2890034819 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HostName_t2890034819 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HostName_t2890034819 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Windows.Networking.IHostName[]
struct IHostNameU5BU5D_t640561567  : public RuntimeArray
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
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState2[]
struct ISpatialInteractionSourceState2U5BU5D_t3674212106  : public RuntimeArray
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
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState[]
struct ISpatialInteractionSourceStateU5BU5D_t513935114  : public RuntimeArray
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
// Windows.UI.Input.Spatial.SpatialInteractionSourceState[]
struct SpatialInteractionSourceStateU5BU5D_t1865583014  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpatialInteractionSourceState_t1215688063 * m_Items[1];

public:
	inline SpatialInteractionSourceState_t1215688063 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpatialInteractionSourceState_t1215688063 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpatialInteractionSourceState_t1215688063 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SpatialInteractionSourceState_t1215688063 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpatialInteractionSourceState_t1215688063 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpatialInteractionSourceState_t1215688063 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
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

extern "C"  void AsyncOperationProgressHandler_2_Invoke_m3152257273_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, RuntimeObject * ___progressInfo1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationWithProgressCompletedHandler_2_Invoke_m1272920396_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationProgressHandler_2_Invoke_m3878254636_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationWithProgressCompletedHandler_2_Invoke_m2996415322_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationProgressHandler_2_Invoke_m1906555057_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationWithProgressCompletedHandler_2_Invoke_m369172062_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationProgressHandler_2_Invoke_m6457722_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationWithProgressCompletedHandler_2_Invoke_m2483366708_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationCompletedHandler_1_Invoke_m1728644989_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationCompletedHandler_1_Invoke_m4027491544_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationCompletedHandler_1_Invoke_m274646961_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationCompletedHandler_1_Invoke_m990580978_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationCompletedHandler_1_Invoke_m122450152_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationCompletedHandler_1_Invoke_m510864878_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationCompletedHandler_1_Invoke_m2733685339_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationCompletedHandler_1_Invoke_m388471121_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C" void TypeName_t4208425108_marshal_windows_runtime(const TypeName_t4208425108& unmarshaled, TypeName_t4208425108_marshaled_windows_runtime& marshaled);
extern "C" void TypeName_t4208425108_marshal_windows_runtime_back(const TypeName_t4208425108_marshaled_windows_runtime& marshaled, TypeName_t4208425108& unmarshaled);
extern "C" void TypeName_t4208425108_marshal_windows_runtime_cleanup(TypeName_t4208425108_marshaled_windows_runtime& marshaled);


// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::ToLocalTime(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR DateTimeOffset_t3229287507  DateTimeOffset_ToLocalTime_m1141180670 (DateTimeOffset_t3229287507 * __this, bool ___throwOnOverflow0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetAt_m3687365220 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m3687365220_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IWwwFormUrlDecoderEntry_t2943299970* returnValue = NULL;
	hr = ____ivector_1_t3683921691->IVector_1_GetAt_m3687365220(___index0, &returnValue);
	____ivector_1_t3683921691->Release();

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
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m853395603 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3683921691->IVector_1_get_Size_m853395603(&returnValue);
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m2518531823 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m2518531823_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t2282165232* returnValue = NULL;
	hr = ____ivector_1_t3683921691->IVector_1_GetView_m2518531823(&returnValue);
	____ivector_1_t3683921691->Release();

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
// System.Boolean Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m125330836 (RuntimeObject* __this, RuntimeObject* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
	hr = ____ivector_1_t3683921691->IVector_1_IndexOf_m125330836(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m314985913 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	IWwwFormUrlDecoderEntry_t2943299970* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(IWwwFormUrlDecoderEntry_t2943299970::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<IWwwFormUrlDecoderEntry_t2943299970>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3683921691->IVector_1_SetAt_m314985913(___index0, ____value1_marshaled);
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m1485467707 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	IWwwFormUrlDecoderEntry_t2943299970* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(IWwwFormUrlDecoderEntry_t2943299970::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<IWwwFormUrlDecoderEntry_t2943299970>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3683921691->IVector_1_InsertAt_m1485467707(___index0, ____value1_marshaled);
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m2725070673 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3683921691->IVector_1_RemoveAt_m2725070673(___index0);
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m4022682317 (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
	hr = ____ivector_1_t3683921691->IVector_1_Append_m4022682317(____value0_marshaled);
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m535504839 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3683921691->IVector_1_RemoveAtEnd_m535504839();
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m2360775652 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3683921691->IVector_1_Clear_m2360775652();
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m569725914 (RuntimeObject* __this, uint32_t ___startIndex0, IWwwFormUrlDecoderEntryU5BU5D_t40345143* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m569725914_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
	hr = ____ivector_1_t3683921691->IVector_1_GetMany_m569725914(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t3683921691->Release();

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
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m2534884464 (RuntimeObject* __this, IWwwFormUrlDecoderEntryU5BU5D_t40345143* ___items0, const RuntimeMethod* method)
{
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	IWwwFormUrlDecoderEntry_t2943299970** ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<IWwwFormUrlDecoderEntry_t2943299970*>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			if ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL)
			{
				if (il2cpp_codegen_is_import_or_windows_runtime((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i))))
				{
					il2cpp_hresult_t hr = ((Il2CppComObject *)(___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)))->identity->QueryInterface(IWwwFormUrlDecoderEntry_t2943299970::IID, reinterpret_cast<void**>(&(____items0_marshaled)[i]));
					il2cpp_codegen_com_raise_exception_if_failed(hr, false);
				}
				else
				{
					(____items0_marshaled)[i] = il2cpp_codegen_com_get_or_create_ccw<IWwwFormUrlDecoderEntry_t2943299970>((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
				}
			}
			else
			{
				(____items0_marshaled)[i] = NULL;
			}
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3683921691->IVector_1_ReplaceAll_m2534884464(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items0_marshaled_CleanupLoopCount = (___items0 != NULL) ? (___items0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items0_marshaled_CleanupLoopCount); i++)
		{
			if ((____items0_marshaled)[i] != NULL)
			{
				((____items0_marshaled)[i])->Release();
				(____items0_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
// T Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR Point_t4164953539  IVector_1_GetAt_m2330330105 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Point_t4164953539  returnValue = {};
	hr = ____ivector_1_t610607964->IVector_1_GetAt_m2330330105(___index0, &returnValue);
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m59889375 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t610607964->IVector_1_get_Size_m59889375(&returnValue);
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m118185472 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m118185472_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t3503818801* returnValue = NULL;
	hr = ____ivector_1_t610607964->IVector_1_GetView_m118185472(&returnValue);
	____ivector_1_t610607964->Release();

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
// System.Boolean Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m428066000 (RuntimeObject* __this, Point_t4164953539  ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t610607964->IVector_1_IndexOf_m428066000(___value0, ___index1, &returnValue);
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m565528379 (RuntimeObject* __this, uint32_t ___index0, Point_t4164953539  ___value1, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t610607964->IVector_1_SetAt_m565528379(___index0, ___value1);
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m3604836490 (RuntimeObject* __this, uint32_t ___index0, Point_t4164953539  ___value1, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t610607964->IVector_1_InsertAt_m3604836490(___index0, ___value1);
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m1853546183 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t610607964->IVector_1_RemoveAt_m1853546183(___index0);
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m195984872 (RuntimeObject* __this, Point_t4164953539  ___value0, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t610607964->IVector_1_Append_m195984872(___value0);
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m4286336640 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t610607964->IVector_1_RemoveAtEnd_m4286336640();
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m2273683721 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t610607964->IVector_1_Clear_m2273683721();
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m4242153011 (RuntimeObject* __this, uint32_t ___startIndex0, PointU5BU5D_t724808658* ___items1, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	Point_t4164953539 * ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<Point_t4164953539 >(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(Point_t4164953539 ));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t610607964->IVector_1_GetMany_m4242153011(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m2759782552 (RuntimeObject* __this, PointU5BU5D_t724808658* ___items0, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	Point_t4164953539 * ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = reinterpret_cast<Point_t4164953539 *>((___items0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	hr = ____ivector_1_t610607964->IVector_1_ReplaceAll_m2759782552(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t610607964->Release();

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
// T Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR Rect_t2695113487  IVector_1_GetAt_m3545656912 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Rect_t2695113487  returnValue = {};
	hr = ____ivector_1_t3435735208->IVector_1_GetAt_m3545656912(___index0, &returnValue);
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m2774852035 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3435735208->IVector_1_get_Size_m2774852035(&returnValue);
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m3695632509 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m3695632509_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t2033978749* returnValue = NULL;
	hr = ____ivector_1_t3435735208->IVector_1_GetView_m3695632509(&returnValue);
	____ivector_1_t3435735208->Release();

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
// System.Boolean Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m2583104291 (RuntimeObject* __this, Rect_t2695113487  ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t3435735208->IVector_1_IndexOf_m2583104291(___value0, ___index1, &returnValue);
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m661546338 (RuntimeObject* __this, uint32_t ___index0, Rect_t2695113487  ___value1, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3435735208->IVector_1_SetAt_m661546338(___index0, ___value1);
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m1857322035 (RuntimeObject* __this, uint32_t ___index0, Rect_t2695113487  ___value1, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3435735208->IVector_1_InsertAt_m1857322035(___index0, ___value1);
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m3994675881 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3435735208->IVector_1_RemoveAt_m3994675881(___index0);
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m4126265023 (RuntimeObject* __this, Rect_t2695113487  ___value0, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3435735208->IVector_1_Append_m4126265023(___value0);
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m298642047 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3435735208->IVector_1_RemoveAtEnd_m298642047();
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m26527518 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3435735208->IVector_1_Clear_m26527518();
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m476750240 (RuntimeObject* __this, uint32_t ___startIndex0, RectU5BU5D_t5657558* ___items1, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	Rect_t2695113487 * ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<Rect_t2695113487 >(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(Rect_t2695113487 ));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3435735208->IVector_1_GetMany_m476750240(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m2673034237 (RuntimeObject* __this, RectU5BU5D_t5657558* ___items0, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	Rect_t2695113487 * ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = reinterpret_cast<Rect_t2695113487 *>((___items0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	hr = ____ivector_1_t3435735208->IVector_1_ReplaceAll_m2673034237(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t3435735208->Release();

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
// T Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR Size_t550917638  IVector_1_GetAt_m2699244792 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Size_t550917638  returnValue = {};
	hr = ____ivector_1_t1291539359->IVector_1_GetAt_m2699244792(___index0, &returnValue);
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m4157668882 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t1291539359->IVector_1_get_Size_m4157668882(&returnValue);
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m1943501597 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m1943501597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t4184750196* returnValue = NULL;
	hr = ____ivector_1_t1291539359->IVector_1_GetView_m1943501597(&returnValue);
	____ivector_1_t1291539359->Release();

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
// System.Boolean Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m3701100474 (RuntimeObject* __this, Size_t550917638  ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t1291539359->IVector_1_IndexOf_m3701100474(___value0, ___index1, &returnValue);
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m3412621482 (RuntimeObject* __this, uint32_t ___index0, Size_t550917638  ___value1, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1291539359->IVector_1_SetAt_m3412621482(___index0, ___value1);
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m3860348037 (RuntimeObject* __this, uint32_t ___index0, Size_t550917638  ___value1, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1291539359->IVector_1_InsertAt_m3860348037(___index0, ___value1);
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m394387669 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1291539359->IVector_1_RemoveAt_m394387669(___index0);
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m2019222254 (RuntimeObject* __this, Size_t550917638  ___value0, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1291539359->IVector_1_Append_m2019222254(___value0);
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m2572115469 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1291539359->IVector_1_RemoveAtEnd_m2572115469();
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m783567046 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1291539359->IVector_1_Clear_m783567046();
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m4076800509 (RuntimeObject* __this, uint32_t ___startIndex0, SizeU5BU5D_t1671914275* ___items1, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	Size_t550917638 * ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<Size_t550917638 >(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(Size_t550917638 ));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t1291539359->IVector_1_GetMany_m4076800509(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m4107471252 (RuntimeObject* __this, SizeU5BU5D_t1671914275* ___items0, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	Size_t550917638 * ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = reinterpret_cast<Size_t550917638 *>((___items0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	hr = ____ivector_1_t1291539359->IVector_1_ReplaceAll_m4107471252(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t1291539359->Release();

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
// T Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.IVoiceInformation>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetAt_m4282895990 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m4282895990_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3851677740* ____ivector_1_t3851677740 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3851677740::IID, reinterpret_cast<void**>(&____ivector_1_t3851677740));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVoiceInformation_t3111056019* returnValue = NULL;
	hr = ____ivector_1_t3851677740->IVector_1_GetAt_m4282895990(___index0, &returnValue);
	____ivector_1_t3851677740->Release();

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
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.IVoiceInformation>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m1784785466 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3851677740* ____ivector_1_t3851677740 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3851677740::IID, reinterpret_cast<void**>(&____ivector_1_t3851677740));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3851677740->IVector_1_get_Size_m1784785466(&returnValue);
	____ivector_1_t3851677740->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.IVoiceInformation>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m3688244148 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m3688244148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3851677740* ____ivector_1_t3851677740 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3851677740::IID, reinterpret_cast<void**>(&____ivector_1_t3851677740));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t2449921281* returnValue = NULL;
	hr = ____ivector_1_t3851677740->IVector_1_GetView_m3688244148(&returnValue);
	____ivector_1_t3851677740->Release();

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
// System.Boolean Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.IVoiceInformation>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m1471373643 (RuntimeObject* __this, RuntimeObject* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t3851677740* ____ivector_1_t3851677740 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3851677740::IID, reinterpret_cast<void**>(&____ivector_1_t3851677740));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IVoiceInformation_t3111056019* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(IVoiceInformation_t3111056019::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IVoiceInformation_t3111056019>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t3851677740->IVector_1_IndexOf_m1471373643(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t3851677740->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.IVoiceInformation>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m1469048276 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t3851677740* ____ivector_1_t3851677740 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3851677740::IID, reinterpret_cast<void**>(&____ivector_1_t3851677740));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	IVoiceInformation_t3111056019* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(IVoiceInformation_t3111056019::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<IVoiceInformation_t3111056019>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3851677740->IVector_1_SetAt_m1469048276(___index0, ____value1_marshaled);
	____ivector_1_t3851677740->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.IVoiceInformation>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m3730389824 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t3851677740* ____ivector_1_t3851677740 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3851677740::IID, reinterpret_cast<void**>(&____ivector_1_t3851677740));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	IVoiceInformation_t3111056019* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(IVoiceInformation_t3111056019::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<IVoiceInformation_t3111056019>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3851677740->IVector_1_InsertAt_m3730389824(___index0, ____value1_marshaled);
	____ivector_1_t3851677740->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.IVoiceInformation>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m2396257048 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3851677740* ____ivector_1_t3851677740 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3851677740::IID, reinterpret_cast<void**>(&____ivector_1_t3851677740));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3851677740->IVector_1_RemoveAt_m2396257048(___index0);
	____ivector_1_t3851677740->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.IVoiceInformation>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m1301891361 (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	IVector_1_t3851677740* ____ivector_1_t3851677740 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3851677740::IID, reinterpret_cast<void**>(&____ivector_1_t3851677740));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IVoiceInformation_t3111056019* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(IVoiceInformation_t3111056019::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IVoiceInformation_t3111056019>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3851677740->IVector_1_Append_m1301891361(____value0_marshaled);
	____ivector_1_t3851677740->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.IVoiceInformation>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m2496499893 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3851677740* ____ivector_1_t3851677740 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3851677740::IID, reinterpret_cast<void**>(&____ivector_1_t3851677740));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3851677740->IVector_1_RemoveAtEnd_m2496499893();
	____ivector_1_t3851677740->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.IVoiceInformation>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m460564598 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3851677740* ____ivector_1_t3851677740 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3851677740::IID, reinterpret_cast<void**>(&____ivector_1_t3851677740));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3851677740->IVector_1_Clear_m460564598();
	____ivector_1_t3851677740->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.IVoiceInformation>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m777774154 (RuntimeObject* __this, uint32_t ___startIndex0, IVoiceInformationU5BU5D_t3472394690* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m777774154_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3851677740* ____ivector_1_t3851677740 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3851677740::IID, reinterpret_cast<void**>(&____ivector_1_t3851677740));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	IVoiceInformation_t3111056019** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<IVoiceInformation_t3111056019*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(IVoiceInformation_t3111056019*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3851677740->IVector_1_GetMany_m777774154(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t3851677740->Release();

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
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.IVoiceInformation>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m3989006149 (RuntimeObject* __this, IVoiceInformationU5BU5D_t3472394690* ___items0, const RuntimeMethod* method)
{
	IVector_1_t3851677740* ____ivector_1_t3851677740 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3851677740::IID, reinterpret_cast<void**>(&____ivector_1_t3851677740));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	IVoiceInformation_t3111056019** ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<IVoiceInformation_t3111056019*>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			if ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL)
			{
				if (il2cpp_codegen_is_import_or_windows_runtime((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i))))
				{
					il2cpp_hresult_t hr = ((Il2CppComObject *)(___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)))->identity->QueryInterface(IVoiceInformation_t3111056019::IID, reinterpret_cast<void**>(&(____items0_marshaled)[i]));
					il2cpp_codegen_com_raise_exception_if_failed(hr, false);
				}
				else
				{
					(____items0_marshaled)[i] = il2cpp_codegen_com_get_or_create_ccw<IVoiceInformation_t3111056019>((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
				}
			}
			else
			{
				(____items0_marshaled)[i] = NULL;
			}
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3851677740->IVector_1_ReplaceAll_m3989006149(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t3851677740->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items0_marshaled_CleanupLoopCount = (___items0 != NULL) ? (___items0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items0_marshaled_CleanupLoopCount); i++)
		{
			if ((____items0_marshaled)[i] != NULL)
			{
				((____items0_marshaled)[i])->Release();
				(____items0_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
// T Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.VoiceInformation>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR VoiceInformation_t4266404632 * IVector_1_GetAt_m1871374034 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m1871374034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t712059057* ____ivector_1_t712059057 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t712059057::IID, reinterpret_cast<void**>(&____ivector_1_t712059057));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVoiceInformation_t3111056019* returnValue = NULL;
	hr = ____ivector_1_t712059057->IVector_1_GetAt_m1871374034(___index0, &returnValue);
	____ivector_1_t712059057->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	VoiceInformation_t4266404632 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<VoiceInformation_t4266404632>(returnValue, VoiceInformation_t4266404632_il2cpp_TypeInfo_var);
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
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.VoiceInformation>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m1201119934 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t712059057* ____ivector_1_t712059057 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t712059057::IID, reinterpret_cast<void**>(&____ivector_1_t712059057));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t712059057->IVector_1_get_Size_m1201119934(&returnValue);
	____ivector_1_t712059057->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.VoiceInformation>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m3043974731 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m3043974731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t712059057* ____ivector_1_t712059057 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t712059057::IID, reinterpret_cast<void**>(&____ivector_1_t712059057));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t3605269894* returnValue = NULL;
	hr = ____ivector_1_t712059057->IVector_1_GetView_m3043974731(&returnValue);
	____ivector_1_t712059057->Release();

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
// System.Boolean Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.VoiceInformation>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m2717181810 (RuntimeObject* __this, VoiceInformation_t4266404632 * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t712059057* ____ivector_1_t712059057 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t712059057::IID, reinterpret_cast<void**>(&____ivector_1_t712059057));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
	bool returnValue = 0;
	hr = ____ivector_1_t712059057->IVector_1_IndexOf_m2717181810(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t712059057->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.VoiceInformation>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m3874276812 (RuntimeObject* __this, uint32_t ___index0, VoiceInformation_t4266404632 * ___value1, const RuntimeMethod* method)
{
	IVector_1_t712059057* ____ivector_1_t712059057 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t712059057::IID, reinterpret_cast<void**>(&____ivector_1_t712059057));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	IVoiceInformation_t3111056019* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = (___value1)->get_____ivoiceInformation_t3111056019();
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t712059057->IVector_1_SetAt_m3874276812(___index0, ____value1_marshaled);
	____ivector_1_t712059057->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.VoiceInformation>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m4127899859 (RuntimeObject* __this, uint32_t ___index0, VoiceInformation_t4266404632 * ___value1, const RuntimeMethod* method)
{
	IVector_1_t712059057* ____ivector_1_t712059057 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t712059057::IID, reinterpret_cast<void**>(&____ivector_1_t712059057));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	IVoiceInformation_t3111056019* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = (___value1)->get_____ivoiceInformation_t3111056019();
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t712059057->IVector_1_InsertAt_m4127899859(___index0, ____value1_marshaled);
	____ivector_1_t712059057->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.VoiceInformation>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m757721370 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t712059057* ____ivector_1_t712059057 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t712059057::IID, reinterpret_cast<void**>(&____ivector_1_t712059057));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t712059057->IVector_1_RemoveAt_m757721370(___index0);
	____ivector_1_t712059057->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.VoiceInformation>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m39799051 (RuntimeObject* __this, VoiceInformation_t4266404632 * ___value0, const RuntimeMethod* method)
{
	IVector_1_t712059057* ____ivector_1_t712059057 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t712059057::IID, reinterpret_cast<void**>(&____ivector_1_t712059057));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
	hr = ____ivector_1_t712059057->IVector_1_Append_m39799051(____value0_marshaled);
	____ivector_1_t712059057->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.VoiceInformation>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m2829690633 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t712059057* ____ivector_1_t712059057 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t712059057::IID, reinterpret_cast<void**>(&____ivector_1_t712059057));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t712059057->IVector_1_RemoveAtEnd_m2829690633();
	____ivector_1_t712059057->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.VoiceInformation>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m4100706345 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t712059057* ____ivector_1_t712059057 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t712059057::IID, reinterpret_cast<void**>(&____ivector_1_t712059057));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t712059057->IVector_1_Clear_m4100706345();
	____ivector_1_t712059057->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.VoiceInformation>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m3113622503 (RuntimeObject* __this, uint32_t ___startIndex0, VoiceInformationU5BU5D_t1943932297* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m3113622503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t712059057* ____ivector_1_t712059057 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t712059057::IID, reinterpret_cast<void**>(&____ivector_1_t712059057));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	IVoiceInformation_t3111056019** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<IVoiceInformation_t3111056019*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(IVoiceInformation_t3111056019*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t712059057->IVector_1_GetMany_m3113622503(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t712059057->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			VoiceInformation_t4266404632 * _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<VoiceInformation_t4266404632>((____items1_marshaled)[i], VoiceInformation_t4266404632_il2cpp_TypeInfo_var);
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
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Media.SpeechSynthesis.VoiceInformation>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m1589355798 (RuntimeObject* __this, VoiceInformationU5BU5D_t1943932297* ___items0, const RuntimeMethod* method)
{
	IVector_1_t712059057* ____ivector_1_t712059057 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t712059057::IID, reinterpret_cast<void**>(&____ivector_1_t712059057));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	IVoiceInformation_t3111056019** ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<IVoiceInformation_t3111056019*>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			if ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL)
			{
				(____items0_marshaled)[i] = ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)))->get_____ivoiceInformation_t3111056019();
			}
			else
			{
				(____items0_marshaled)[i] = NULL;
			}
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t712059057->IVector_1_ReplaceAll_m1589355798(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t712059057->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
// T Windows.Foundation.Collections.IVector`1<Windows.Networking.HostName>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR HostName_t2890034819 * IVector_1_GetAt_m1612621107 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m1612621107_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3630656540* ____ivector_1_t3630656540 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3630656540::IID, reinterpret_cast<void**>(&____ivector_1_t3630656540));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IHostName_t3179521082* returnValue = NULL;
	hr = ____ivector_1_t3630656540->IVector_1_GetAt_m1612621107(___index0, &returnValue);
	____ivector_1_t3630656540->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	HostName_t2890034819 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<HostName_t2890034819>(returnValue, HostName_t2890034819_il2cpp_TypeInfo_var);
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
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Networking.HostName>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m3684819321 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3630656540* ____ivector_1_t3630656540 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3630656540::IID, reinterpret_cast<void**>(&____ivector_1_t3630656540));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3630656540->IVector_1_get_Size_m3684819321(&returnValue);
	____ivector_1_t3630656540->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.Networking.HostName>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m3777228417 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m3777228417_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3630656540* ____ivector_1_t3630656540 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3630656540::IID, reinterpret_cast<void**>(&____ivector_1_t3630656540));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t2228900081* returnValue = NULL;
	hr = ____ivector_1_t3630656540->IVector_1_GetView_m3777228417(&returnValue);
	____ivector_1_t3630656540->Release();

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
// System.Boolean Windows.Foundation.Collections.IVector`1<Windows.Networking.HostName>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m1287825336 (RuntimeObject* __this, HostName_t2890034819 * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t3630656540* ____ivector_1_t3630656540 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3630656540::IID, reinterpret_cast<void**>(&____ivector_1_t3630656540));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IHostName_t3179521082* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_marshaled = (___value0)->get_____ihostName_t3179521082();
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t3630656540->IVector_1_IndexOf_m1287825336(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t3630656540->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Networking.HostName>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m376308681 (RuntimeObject* __this, uint32_t ___index0, HostName_t2890034819 * ___value1, const RuntimeMethod* method)
{
	IVector_1_t3630656540* ____ivector_1_t3630656540 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3630656540::IID, reinterpret_cast<void**>(&____ivector_1_t3630656540));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	IHostName_t3179521082* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = (___value1)->get_____ihostName_t3179521082();
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3630656540->IVector_1_SetAt_m376308681(___index0, ____value1_marshaled);
	____ivector_1_t3630656540->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Networking.HostName>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m2559341488 (RuntimeObject* __this, uint32_t ___index0, HostName_t2890034819 * ___value1, const RuntimeMethod* method)
{
	IVector_1_t3630656540* ____ivector_1_t3630656540 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3630656540::IID, reinterpret_cast<void**>(&____ivector_1_t3630656540));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	IHostName_t3179521082* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = (___value1)->get_____ihostName_t3179521082();
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3630656540->IVector_1_InsertAt_m2559341488(___index0, ____value1_marshaled);
	____ivector_1_t3630656540->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Networking.HostName>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m1607509023 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3630656540* ____ivector_1_t3630656540 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3630656540::IID, reinterpret_cast<void**>(&____ivector_1_t3630656540));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3630656540->IVector_1_RemoveAt_m1607509023(___index0);
	____ivector_1_t3630656540->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Networking.HostName>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m3753868577 (RuntimeObject* __this, HostName_t2890034819 * ___value0, const RuntimeMethod* method)
{
	IVector_1_t3630656540* ____ivector_1_t3630656540 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3630656540::IID, reinterpret_cast<void**>(&____ivector_1_t3630656540));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IHostName_t3179521082* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_marshaled = (___value0)->get_____ihostName_t3179521082();
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3630656540->IVector_1_Append_m3753868577(____value0_marshaled);
	____ivector_1_t3630656540->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Networking.HostName>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m455198937 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3630656540* ____ivector_1_t3630656540 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3630656540::IID, reinterpret_cast<void**>(&____ivector_1_t3630656540));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3630656540->IVector_1_RemoveAtEnd_m455198937();
	____ivector_1_t3630656540->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Networking.HostName>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m1773846522 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3630656540* ____ivector_1_t3630656540 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3630656540::IID, reinterpret_cast<void**>(&____ivector_1_t3630656540));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3630656540->IVector_1_Clear_m1773846522();
	____ivector_1_t3630656540->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Networking.HostName>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m3155586895 (RuntimeObject* __this, uint32_t ___startIndex0, HostNameU5BU5D_t2796646418* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m3155586895_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3630656540* ____ivector_1_t3630656540 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3630656540::IID, reinterpret_cast<void**>(&____ivector_1_t3630656540));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	IHostName_t3179521082** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<IHostName_t3179521082*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(IHostName_t3179521082*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3630656540->IVector_1_GetMany_m3155586895(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t3630656540->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			HostName_t2890034819 * _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<HostName_t2890034819>((____items1_marshaled)[i], HostName_t2890034819_il2cpp_TypeInfo_var);
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
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Networking.HostName>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m1812833917 (RuntimeObject* __this, HostNameU5BU5D_t2796646418* ___items0, const RuntimeMethod* method)
{
	IVector_1_t3630656540* ____ivector_1_t3630656540 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3630656540::IID, reinterpret_cast<void**>(&____ivector_1_t3630656540));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	IHostName_t3179521082** ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<IHostName_t3179521082*>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			if ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL)
			{
				(____items0_marshaled)[i] = ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)))->get_____ihostName_t3179521082();
			}
			else
			{
				(____items0_marshaled)[i] = NULL;
			}
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3630656540->IVector_1_ReplaceAll_m1812833917(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t3630656540->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
// T Windows.Foundation.Collections.IVector`1<Windows.Networking.IHostName>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetAt_m218110784 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m218110784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3920142803* ____ivector_1_t3920142803 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3920142803::IID, reinterpret_cast<void**>(&____ivector_1_t3920142803));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IHostName_t3179521082* returnValue = NULL;
	hr = ____ivector_1_t3920142803->IVector_1_GetAt_m218110784(___index0, &returnValue);
	____ivector_1_t3920142803->Release();

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
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Networking.IHostName>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m3381460229 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3920142803* ____ivector_1_t3920142803 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3920142803::IID, reinterpret_cast<void**>(&____ivector_1_t3920142803));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3920142803->IVector_1_get_Size_m3381460229(&returnValue);
	____ivector_1_t3920142803->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.Networking.IHostName>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m3952515177 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m3952515177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3920142803* ____ivector_1_t3920142803 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3920142803::IID, reinterpret_cast<void**>(&____ivector_1_t3920142803));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t2518386344* returnValue = NULL;
	hr = ____ivector_1_t3920142803->IVector_1_GetView_m3952515177(&returnValue);
	____ivector_1_t3920142803->Release();

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
// System.Boolean Windows.Foundation.Collections.IVector`1<Windows.Networking.IHostName>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m3880569022 (RuntimeObject* __this, RuntimeObject* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t3920142803* ____ivector_1_t3920142803 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3920142803::IID, reinterpret_cast<void**>(&____ivector_1_t3920142803));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IHostName_t3179521082* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(IHostName_t3179521082::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IHostName_t3179521082>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t3920142803->IVector_1_IndexOf_m3880569022(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t3920142803->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Networking.IHostName>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m2275768499 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t3920142803* ____ivector_1_t3920142803 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3920142803::IID, reinterpret_cast<void**>(&____ivector_1_t3920142803));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	IHostName_t3179521082* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(IHostName_t3179521082::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<IHostName_t3179521082>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3920142803->IVector_1_SetAt_m2275768499(___index0, ____value1_marshaled);
	____ivector_1_t3920142803->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Networking.IHostName>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m3622306290 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t3920142803* ____ivector_1_t3920142803 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3920142803::IID, reinterpret_cast<void**>(&____ivector_1_t3920142803));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	IHostName_t3179521082* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(IHostName_t3179521082::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<IHostName_t3179521082>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3920142803->IVector_1_InsertAt_m3622306290(___index0, ____value1_marshaled);
	____ivector_1_t3920142803->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Networking.IHostName>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m226391736 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3920142803* ____ivector_1_t3920142803 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3920142803::IID, reinterpret_cast<void**>(&____ivector_1_t3920142803));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3920142803->IVector_1_RemoveAt_m226391736(___index0);
	____ivector_1_t3920142803->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Networking.IHostName>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m2099802484 (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	IVector_1_t3920142803* ____ivector_1_t3920142803 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3920142803::IID, reinterpret_cast<void**>(&____ivector_1_t3920142803));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IHostName_t3179521082* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(IHostName_t3179521082::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IHostName_t3179521082>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3920142803->IVector_1_Append_m2099802484(____value0_marshaled);
	____ivector_1_t3920142803->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Networking.IHostName>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m1486964013 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3920142803* ____ivector_1_t3920142803 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3920142803::IID, reinterpret_cast<void**>(&____ivector_1_t3920142803));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3920142803->IVector_1_RemoveAtEnd_m1486964013();
	____ivector_1_t3920142803->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Networking.IHostName>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m2150803103 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3920142803* ____ivector_1_t3920142803 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3920142803::IID, reinterpret_cast<void**>(&____ivector_1_t3920142803));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3920142803->IVector_1_Clear_m2150803103();
	____ivector_1_t3920142803->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Networking.IHostName>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m4148138566 (RuntimeObject* __this, uint32_t ___startIndex0, IHostNameU5BU5D_t640561567* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m4148138566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3920142803* ____ivector_1_t3920142803 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3920142803::IID, reinterpret_cast<void**>(&____ivector_1_t3920142803));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	IHostName_t3179521082** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<IHostName_t3179521082*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(IHostName_t3179521082*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3920142803->IVector_1_GetMany_m4148138566(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t3920142803->Release();

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
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Networking.IHostName>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m992195110 (RuntimeObject* __this, IHostNameU5BU5D_t640561567* ___items0, const RuntimeMethod* method)
{
	IVector_1_t3920142803* ____ivector_1_t3920142803 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3920142803::IID, reinterpret_cast<void**>(&____ivector_1_t3920142803));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	IHostName_t3179521082** ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<IHostName_t3179521082*>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			if ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL)
			{
				if (il2cpp_codegen_is_import_or_windows_runtime((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i))))
				{
					il2cpp_hresult_t hr = ((Il2CppComObject *)(___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)))->identity->QueryInterface(IHostName_t3179521082::IID, reinterpret_cast<void**>(&(____items0_marshaled)[i]));
					il2cpp_codegen_com_raise_exception_if_failed(hr, false);
				}
				else
				{
					(____items0_marshaled)[i] = il2cpp_codegen_com_get_or_create_ccw<IHostName_t3179521082>((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
				}
			}
			else
			{
				(____items0_marshaled)[i] = NULL;
			}
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3920142803->IVector_1_ReplaceAll_m992195110(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t3920142803->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items0_marshaled_CleanupLoopCount = (___items0 != NULL) ? (___items0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items0_marshaled_CleanupLoopCount); i++)
		{
			if ((____items0_marshaled)[i] != NULL)
			{
				((____items0_marshaled)[i])->Release();
				(____items0_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
// T Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetAt_m3175655389 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m3175655389_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	ISpatialInteractionSourceState2_t2977437931* returnValue = NULL;
	hr = ____ivector_1_t3718059652->IVector_1_GetAt_m3175655389(___index0, &returnValue);
	____ivector_1_t3718059652->Release();

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
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m3172301122 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3718059652->IVector_1_get_Size_m3172301122(&returnValue);
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m2176928854 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m2176928854_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t2316303193* returnValue = NULL;
	hr = ____ivector_1_t3718059652->IVector_1_GetView_m2176928854(&returnValue);
	____ivector_1_t3718059652->Release();

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
// System.Boolean Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m876780403 (RuntimeObject* __this, RuntimeObject* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISpatialInteractionSourceState2_t2977437931* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(ISpatialInteractionSourceState2_t2977437931::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState2_t2977437931>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t3718059652->IVector_1_IndexOf_m876780403(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m3594153116 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	ISpatialInteractionSourceState2_t2977437931* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(ISpatialInteractionSourceState2_t2977437931::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState2_t2977437931>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3718059652->IVector_1_SetAt_m3594153116(___index0, ____value1_marshaled);
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m1444518929 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	ISpatialInteractionSourceState2_t2977437931* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(ISpatialInteractionSourceState2_t2977437931::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState2_t2977437931>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3718059652->IVector_1_InsertAt_m1444518929(___index0, ____value1_marshaled);
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m1302937041 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3718059652->IVector_1_RemoveAt_m1302937041(___index0);
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m2941185074 (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISpatialInteractionSourceState2_t2977437931* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(ISpatialInteractionSourceState2_t2977437931::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState2_t2977437931>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3718059652->IVector_1_Append_m2941185074(____value0_marshaled);
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m2946446583 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3718059652->IVector_1_RemoveAtEnd_m2946446583();
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m1635201740 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3718059652->IVector_1_Clear_m1635201740();
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m2021061927 (RuntimeObject* __this, uint32_t ___startIndex0, ISpatialInteractionSourceState2U5BU5D_t3674212106* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m2021061927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	ISpatialInteractionSourceState2_t2977437931** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<ISpatialInteractionSourceState2_t2977437931*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(ISpatialInteractionSourceState2_t2977437931*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3718059652->IVector_1_GetMany_m2021061927(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t3718059652->Release();

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
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m2042354847 (RuntimeObject* __this, ISpatialInteractionSourceState2U5BU5D_t3674212106* ___items0, const RuntimeMethod* method)
{
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	ISpatialInteractionSourceState2_t2977437931** ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<ISpatialInteractionSourceState2_t2977437931*>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			if ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL)
			{
				if (il2cpp_codegen_is_import_or_windows_runtime((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i))))
				{
					il2cpp_hresult_t hr = ((Il2CppComObject *)(___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)))->identity->QueryInterface(ISpatialInteractionSourceState2_t2977437931::IID, reinterpret_cast<void**>(&(____items0_marshaled)[i]));
					il2cpp_codegen_com_raise_exception_if_failed(hr, false);
				}
				else
				{
					(____items0_marshaled)[i] = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState2_t2977437931>((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
				}
			}
			else
			{
				(____items0_marshaled)[i] = NULL;
			}
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3718059652->IVector_1_ReplaceAll_m2042354847(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items0_marshaled_CleanupLoopCount = (___items0 != NULL) ? (___items0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items0_marshaled_CleanupLoopCount); i++)
		{
			if ((____items0_marshaled)[i] != NULL)
			{
				((____items0_marshaled)[i])->Release();
				(____items0_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
// T Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetAt_m1946664100 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m1946664100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	ISpatialInteractionSourceState_t1358829803* returnValue = NULL;
	hr = ____ivector_1_t2099451524->IVector_1_GetAt_m1946664100(___index0, &returnValue);
	____ivector_1_t2099451524->Release();

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
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m3798462280 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t2099451524->IVector_1_get_Size_m3798462280(&returnValue);
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m891121390 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m891121390_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t697695065* returnValue = NULL;
	hr = ____ivector_1_t2099451524->IVector_1_GetView_m891121390(&returnValue);
	____ivector_1_t2099451524->Release();

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
// System.Boolean Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m2504506261 (RuntimeObject* __this, RuntimeObject* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISpatialInteractionSourceState_t1358829803* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(ISpatialInteractionSourceState_t1358829803::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState_t1358829803>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t2099451524->IVector_1_IndexOf_m2504506261(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m3979818183 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	ISpatialInteractionSourceState_t1358829803* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(ISpatialInteractionSourceState_t1358829803::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState_t1358829803>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t2099451524->IVector_1_SetAt_m3979818183(___index0, ____value1_marshaled);
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m996791195 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	ISpatialInteractionSourceState_t1358829803* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(ISpatialInteractionSourceState_t1358829803::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState_t1358829803>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t2099451524->IVector_1_InsertAt_m996791195(___index0, ____value1_marshaled);
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m3540886805 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2099451524->IVector_1_RemoveAt_m3540886805(___index0);
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m4159068860 (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISpatialInteractionSourceState_t1358829803* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(ISpatialInteractionSourceState_t1358829803::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState_t1358829803>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t2099451524->IVector_1_Append_m4159068860(____value0_marshaled);
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m1022091397 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2099451524->IVector_1_RemoveAtEnd_m1022091397();
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m2343666422 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2099451524->IVector_1_Clear_m2343666422();
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m1098326929 (RuntimeObject* __this, uint32_t ___startIndex0, ISpatialInteractionSourceStateU5BU5D_t513935114* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m1098326929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	ISpatialInteractionSourceState_t1358829803** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<ISpatialInteractionSourceState_t1358829803*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(ISpatialInteractionSourceState_t1358829803*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t2099451524->IVector_1_GetMany_m1098326929(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t2099451524->Release();

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
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m3582663649 (RuntimeObject* __this, ISpatialInteractionSourceStateU5BU5D_t513935114* ___items0, const RuntimeMethod* method)
{
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	ISpatialInteractionSourceState_t1358829803** ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<ISpatialInteractionSourceState_t1358829803*>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			if ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL)
			{
				if (il2cpp_codegen_is_import_or_windows_runtime((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i))))
				{
					il2cpp_hresult_t hr = ((Il2CppComObject *)(___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)))->identity->QueryInterface(ISpatialInteractionSourceState_t1358829803::IID, reinterpret_cast<void**>(&(____items0_marshaled)[i]));
					il2cpp_codegen_com_raise_exception_if_failed(hr, false);
				}
				else
				{
					(____items0_marshaled)[i] = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState_t1358829803>((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
				}
			}
			else
			{
				(____items0_marshaled)[i] = NULL;
			}
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t2099451524->IVector_1_ReplaceAll_m3582663649(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items0_marshaled_CleanupLoopCount = (___items0 != NULL) ? (___items0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items0_marshaled_CleanupLoopCount); i++)
		{
			if ((____items0_marshaled)[i] != NULL)
			{
				((____items0_marshaled)[i])->Release();
				(____items0_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
// T Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR SpatialInteractionSourceState_t1215688063 * IVector_1_GetAt_m686949258 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m686949258_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	ISpatialInteractionSourceState_t1358829803* returnValue = NULL;
	hr = ____ivector_1_t1956309784->IVector_1_GetAt_m686949258(___index0, &returnValue);
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	SpatialInteractionSourceState_t1215688063 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<SpatialInteractionSourceState_t1215688063>(returnValue, SpatialInteractionSourceState_t1215688063_il2cpp_TypeInfo_var);
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
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m535300163 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t1956309784->IVector_1_get_Size_m535300163(&returnValue);
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m1588427753 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m1588427753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t554553325* returnValue = NULL;
	hr = ____ivector_1_t1956309784->IVector_1_GetView_m1588427753(&returnValue);
	____ivector_1_t1956309784->Release();

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
// System.Boolean Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m1021089064 (RuntimeObject* __this, SpatialInteractionSourceState_t1215688063 * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISpatialInteractionSourceState_t1358829803* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_marshaled = (___value0)->get_____ispatialInteractionSourceState_t1358829803();
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t1956309784->IVector_1_IndexOf_m1021089064(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m3738080061 (RuntimeObject* __this, uint32_t ___index0, SpatialInteractionSourceState_t1215688063 * ___value1, const RuntimeMethod* method)
{
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	ISpatialInteractionSourceState_t1358829803* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = (___value1)->get_____ispatialInteractionSourceState_t1358829803();
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t1956309784->IVector_1_SetAt_m3738080061(___index0, ____value1_marshaled);
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m3469030146 (RuntimeObject* __this, uint32_t ___index0, SpatialInteractionSourceState_t1215688063 * ___value1, const RuntimeMethod* method)
{
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	ISpatialInteractionSourceState_t1358829803* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = (___value1)->get_____ispatialInteractionSourceState_t1358829803();
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t1956309784->IVector_1_InsertAt_m3469030146(___index0, ____value1_marshaled);
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m1514236569 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1956309784->IVector_1_RemoveAt_m1514236569(___index0);
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m65402885 (RuntimeObject* __this, SpatialInteractionSourceState_t1215688063 * ___value0, const RuntimeMethod* method)
{
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISpatialInteractionSourceState_t1358829803* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_marshaled = (___value0)->get_____ispatialInteractionSourceState_t1358829803();
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t1956309784->IVector_1_Append_m65402885(____value0_marshaled);
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m2373934537 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1956309784->IVector_1_RemoveAtEnd_m2373934537();
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m2371066248 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1956309784->IVector_1_Clear_m2371066248();
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m4135776724 (RuntimeObject* __this, uint32_t ___startIndex0, SpatialInteractionSourceStateU5BU5D_t1865583014* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m4135776724_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	ISpatialInteractionSourceState_t1358829803** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<ISpatialInteractionSourceState_t1358829803*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(ISpatialInteractionSourceState_t1358829803*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t1956309784->IVector_1_GetMany_m4135776724(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			SpatialInteractionSourceState_t1215688063 * _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<SpatialInteractionSourceState_t1215688063>((____items1_marshaled)[i], SpatialInteractionSourceState_t1215688063_il2cpp_TypeInfo_var);
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
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m2190095755 (RuntimeObject* __this, SpatialInteractionSourceStateU5BU5D_t1865583014* ___items0, const RuntimeMethod* method)
{
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	ISpatialInteractionSourceState_t1358829803** ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<ISpatialInteractionSourceState_t1358829803*>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			if ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL)
			{
				(____items0_marshaled)[i] = ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)))->get_____ispatialInteractionSourceState_t1358829803();
			}
			else
			{
				(____items0_marshaled)[i] = NULL;
			}
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t1956309784->IVector_1_ReplaceAll_m2190095755(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
// System.Void Windows.Foundation.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m380207085_gshared (EventHandler_1_t39852124 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Windows.Foundation.EventHandler`1<System.Object>::Invoke(System.Object,T)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_m3884748090_gshared (EventHandler_1_t39852124 * __this, RuntimeObject * ___sender0, RuntimeObject * ___args1, const RuntimeMethod* method)
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
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___args1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___args1, targetMethod);
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
								GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
							else
								GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
							else
								VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
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
								GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___sender0, ___args1);
							else
								GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___sender0, ___args1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___args1);
							else
								VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___args1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
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
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___args1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___args1, targetMethod);
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
							GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
						else
							GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
						else
							VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
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
							GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___sender0, ___args1);
						else
							GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___sender0, ___args1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___args1);
						else
							VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___args1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
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
// System.Void Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.Object>::put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
extern "C" IL2CPP_METHOD_ATTR void IAsyncOperationWithProgress_2_put_Progress_m2941309595 (RuntimeObject* __this, AsyncOperationProgressHandler_2_t385660461 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_put_Progress_m2941309595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t1186396931* ____iasyncOperationWithProgress_2_t1186396931 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t1186396931::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t1186396931));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationProgressHandler_2_t385660461_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationProgressHandler_2_t385660461_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationProgressHandler_2_t385660461_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperationWithProgress_2_t1186396931->IAsyncOperationWithProgress_2_put_Progress_m2941309595(____handler0_marshaled);
	____iasyncOperationWithProgress_2_t1186396931->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress> Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.Object>::get_Progress()
extern "C" IL2CPP_METHOD_ATTR AsyncOperationProgressHandler_2_t385660461 * IAsyncOperationWithProgress_2_get_Progress_m42638027 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_get_Progress_m42638027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t1186396931* ____iasyncOperationWithProgress_2_t1186396931 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t1186396931::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t1186396931));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationProgressHandler_2_t385660461_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t1186396931->IAsyncOperationWithProgress_2_get_Progress_m42638027(&returnValue);
	____iasyncOperationWithProgress_2_t1186396931->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationProgressHandler_2_t385660461 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationProgressHandler_2_t385660461 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationProgressHandler_2_t385660461*)il2cpp_codegen_object_new(AsyncOperationProgressHandler_2_t385660461_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationProgressHandler_2_Invoke_m3152257273_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationProgressHandler_2_Invoke_m3152257273_RuntimeMethod_var);
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
// System.Void Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.Object>::put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
extern "C" IL2CPP_METHOD_ATTR void IAsyncOperationWithProgress_2_put_Completed_m796962860 (RuntimeObject* __this, AsyncOperationWithProgressCompletedHandler_2_t3173780358 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_put_Completed_m796962860_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t1186396931* ____iasyncOperationWithProgress_2_t1186396931 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t1186396931::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t1186396931));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationWithProgressCompletedHandler_2_t3173780358_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationWithProgressCompletedHandler_2_t3173780358_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgressCompletedHandler_2_t3173780358_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperationWithProgress_2_t1186396931->IAsyncOperationWithProgress_2_put_Completed_m796962860(____handler0_marshaled);
	____iasyncOperationWithProgress_2_t1186396931->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress> Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.Object>::get_Completed()
extern "C" IL2CPP_METHOD_ATTR AsyncOperationWithProgressCompletedHandler_2_t3173780358 * IAsyncOperationWithProgress_2_get_Completed_m2596256679 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_get_Completed_m2596256679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t1186396931* ____iasyncOperationWithProgress_2_t1186396931 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t1186396931::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t1186396931));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationWithProgressCompletedHandler_2_t3173780358_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t1186396931->IAsyncOperationWithProgress_2_get_Completed_m2596256679(&returnValue);
	____iasyncOperationWithProgress_2_t1186396931->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationWithProgressCompletedHandler_2_t3173780358 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationWithProgressCompletedHandler_2_t3173780358 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationWithProgressCompletedHandler_2_t3173780358*)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_t3173780358_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationWithProgressCompletedHandler_2_Invoke_m1272920396_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationWithProgressCompletedHandler_2_Invoke_m1272920396_RuntimeMethod_var);
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
// TResult Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.Object>::GetResults()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * IAsyncOperationWithProgress_2_GetResults_m4125002903 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_GetResults_m4125002903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t1186396931* ____iasyncOperationWithProgress_2_t1186396931 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t1186396931::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t1186396931));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppIInspectable* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t1186396931->IAsyncOperationWithProgress_2_GetResults_m4125002903(&returnValue);
	____iasyncOperationWithProgress_2_t1186396931->Release();

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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>::put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
extern "C" IL2CPP_METHOD_ATTR void IAsyncOperationWithProgress_2_put_Progress_m1879259012 (RuntimeObject* __this, AsyncOperationProgressHandler_2_t4160583571 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_put_Progress_m1879259012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t666352745* ____iasyncOperationWithProgress_2_t666352745 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t666352745::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t666352745));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationProgressHandler_2_t4160583571_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationProgressHandler_2_t4160583571_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationProgressHandler_2_t4160583571_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperationWithProgress_2_t666352745->IAsyncOperationWithProgress_2_put_Progress_m1879259012(____handler0_marshaled);
	____iasyncOperationWithProgress_2_t666352745->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress> Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>::get_Progress()
extern "C" IL2CPP_METHOD_ATTR AsyncOperationProgressHandler_2_t4160583571 * IAsyncOperationWithProgress_2_get_Progress_m1058255273 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_get_Progress_m1058255273_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t666352745* ____iasyncOperationWithProgress_2_t666352745 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t666352745::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t666352745));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationProgressHandler_2_t4160583571_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t666352745->IAsyncOperationWithProgress_2_get_Progress_m1058255273(&returnValue);
	____iasyncOperationWithProgress_2_t666352745->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationProgressHandler_2_t4160583571 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationProgressHandler_2_t4160583571 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationProgressHandler_2_t4160583571*)il2cpp_codegen_object_new(AsyncOperationProgressHandler_2_t4160583571_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationProgressHandler_2_Invoke_m3878254636_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationProgressHandler_2_Invoke_m3878254636_RuntimeMethod_var);
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
// System.Void Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>::put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
extern "C" IL2CPP_METHOD_ATTR void IAsyncOperationWithProgress_2_put_Completed_m2338839716 (RuntimeObject* __this, AsyncOperationWithProgressCompletedHandler_2_t2653736172 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_put_Completed_m2338839716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t666352745* ____iasyncOperationWithProgress_2_t666352745 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t666352745::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t666352745));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationWithProgressCompletedHandler_2_t2653736172_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationWithProgressCompletedHandler_2_t2653736172_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgressCompletedHandler_2_t2653736172_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperationWithProgress_2_t666352745->IAsyncOperationWithProgress_2_put_Completed_m2338839716(____handler0_marshaled);
	____iasyncOperationWithProgress_2_t666352745->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress> Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>::get_Completed()
extern "C" IL2CPP_METHOD_ATTR AsyncOperationWithProgressCompletedHandler_2_t2653736172 * IAsyncOperationWithProgress_2_get_Completed_m2626479363 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_get_Completed_m2626479363_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t666352745* ____iasyncOperationWithProgress_2_t666352745 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t666352745::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t666352745));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationWithProgressCompletedHandler_2_t2653736172_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t666352745->IAsyncOperationWithProgress_2_get_Completed_m2626479363(&returnValue);
	____iasyncOperationWithProgress_2_t666352745->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationWithProgressCompletedHandler_2_t2653736172 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationWithProgressCompletedHandler_2_t2653736172 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationWithProgressCompletedHandler_2_t2653736172*)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_t2653736172_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationWithProgressCompletedHandler_2_Invoke_m2996415322_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationWithProgressCompletedHandler_2_Invoke_m2996415322_RuntimeMethod_var);
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
// TResult Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>::GetResults()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * IAsyncOperationWithProgress_2_GetResults_m2250808291 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_GetResults_m2250808291_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t666352745* ____iasyncOperationWithProgress_2_t666352745 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t666352745::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t666352745));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppIInspectable* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t666352745->IAsyncOperationWithProgress_2_GetResults_m2250808291(&returnValue);
	____iasyncOperationWithProgress_2_t666352745->Release();

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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>::put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
extern "C" IL2CPP_METHOD_ATTR void IAsyncOperationWithProgress_2_put_Progress_m1633053105 (RuntimeObject* __this, AsyncOperationProgressHandler_2_t4087444949 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_put_Progress_m1633053105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t593214123* ____iasyncOperationWithProgress_2_t593214123 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t593214123::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t593214123));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationProgressHandler_2_t4087444949_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationProgressHandler_2_t4087444949_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationProgressHandler_2_t4087444949_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperationWithProgress_2_t593214123->IAsyncOperationWithProgress_2_put_Progress_m1633053105(____handler0_marshaled);
	____iasyncOperationWithProgress_2_t593214123->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress> Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>::get_Progress()
extern "C" IL2CPP_METHOD_ATTR AsyncOperationProgressHandler_2_t4087444949 * IAsyncOperationWithProgress_2_get_Progress_m165963889 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_get_Progress_m165963889_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t593214123* ____iasyncOperationWithProgress_2_t593214123 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t593214123::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t593214123));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationProgressHandler_2_t4087444949_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t593214123->IAsyncOperationWithProgress_2_get_Progress_m165963889(&returnValue);
	____iasyncOperationWithProgress_2_t593214123->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationProgressHandler_2_t4087444949 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationProgressHandler_2_t4087444949 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationProgressHandler_2_t4087444949*)il2cpp_codegen_object_new(AsyncOperationProgressHandler_2_t4087444949_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationProgressHandler_2_Invoke_m1906555057_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationProgressHandler_2_Invoke_m1906555057_RuntimeMethod_var);
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
// System.Void Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>::put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
extern "C" IL2CPP_METHOD_ATTR void IAsyncOperationWithProgress_2_put_Completed_m483007812 (RuntimeObject* __this, AsyncOperationWithProgressCompletedHandler_2_t2580597550 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_put_Completed_m483007812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t593214123* ____iasyncOperationWithProgress_2_t593214123 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t593214123::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t593214123));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperationWithProgress_2_t593214123->IAsyncOperationWithProgress_2_put_Completed_m483007812(____handler0_marshaled);
	____iasyncOperationWithProgress_2_t593214123->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress> Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>::get_Completed()
extern "C" IL2CPP_METHOD_ATTR AsyncOperationWithProgressCompletedHandler_2_t2580597550 * IAsyncOperationWithProgress_2_get_Completed_m655232302 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_get_Completed_m655232302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t593214123* ____iasyncOperationWithProgress_2_t593214123 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t593214123::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t593214123));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t593214123->IAsyncOperationWithProgress_2_get_Completed_m655232302(&returnValue);
	____iasyncOperationWithProgress_2_t593214123->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationWithProgressCompletedHandler_2_t2580597550 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationWithProgressCompletedHandler_2_t2580597550 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationWithProgressCompletedHandler_2_t2580597550*)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_t2580597550_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationWithProgressCompletedHandler_2_Invoke_m369172062_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationWithProgressCompletedHandler_2_Invoke_m369172062_RuntimeMethod_var);
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
// TResult Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>::GetResults()
extern "C" IL2CPP_METHOD_ATTR uint32_t IAsyncOperationWithProgress_2_GetResults_m3754792249 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IAsyncOperationWithProgress_2_t593214123* ____iasyncOperationWithProgress_2_t593214123 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t593214123::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t593214123));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____iasyncOperationWithProgress_2_t593214123->IAsyncOperationWithProgress_2_GetResults_m3754792249(&returnValue);
	____iasyncOperationWithProgress_2_t593214123->Release();

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
// System.Void Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>::put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
extern "C" IL2CPP_METHOD_ATTR void IAsyncOperationWithProgress_2_put_Progress_m809910966 (RuntimeObject* __this, AsyncOperationProgressHandler_2_t821837630 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_put_Progress_m809910966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t1622574100* ____iasyncOperationWithProgress_2_t1622574100 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t1622574100::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t1622574100));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationProgressHandler_2_t821837630_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationProgressHandler_2_t821837630_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationProgressHandler_2_t821837630_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperationWithProgress_2_t1622574100->IAsyncOperationWithProgress_2_put_Progress_m809910966(____handler0_marshaled);
	____iasyncOperationWithProgress_2_t1622574100->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress> Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>::get_Progress()
extern "C" IL2CPP_METHOD_ATTR AsyncOperationProgressHandler_2_t821837630 * IAsyncOperationWithProgress_2_get_Progress_m489652616 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_get_Progress_m489652616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t1622574100* ____iasyncOperationWithProgress_2_t1622574100 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t1622574100::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t1622574100));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationProgressHandler_2_t821837630_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t1622574100->IAsyncOperationWithProgress_2_get_Progress_m489652616(&returnValue);
	____iasyncOperationWithProgress_2_t1622574100->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationProgressHandler_2_t821837630 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationProgressHandler_2_t821837630 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationProgressHandler_2_t821837630*)il2cpp_codegen_object_new(AsyncOperationProgressHandler_2_t821837630_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationProgressHandler_2_Invoke_m6457722_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationProgressHandler_2_Invoke_m6457722_RuntimeMethod_var);
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
// System.Void Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>::put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
extern "C" IL2CPP_METHOD_ATTR void IAsyncOperationWithProgress_2_put_Completed_m3126232629 (RuntimeObject* __this, AsyncOperationWithProgressCompletedHandler_2_t3609957527 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_put_Completed_m3126232629_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t1622574100* ____iasyncOperationWithProgress_2_t1622574100 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t1622574100::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t1622574100));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperationWithProgress_2_t1622574100->IAsyncOperationWithProgress_2_put_Completed_m3126232629(____handler0_marshaled);
	____iasyncOperationWithProgress_2_t1622574100->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress> Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>::get_Completed()
extern "C" IL2CPP_METHOD_ATTR AsyncOperationWithProgressCompletedHandler_2_t3609957527 * IAsyncOperationWithProgress_2_get_Completed_m4203981877 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_get_Completed_m4203981877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t1622574100* ____iasyncOperationWithProgress_2_t1622574100 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t1622574100::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t1622574100));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t1622574100->IAsyncOperationWithProgress_2_get_Completed_m4203981877(&returnValue);
	____iasyncOperationWithProgress_2_t1622574100->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationWithProgressCompletedHandler_2_t3609957527 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationWithProgressCompletedHandler_2_t3609957527 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationWithProgressCompletedHandler_2_t3609957527*)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_t3609957527_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationWithProgressCompletedHandler_2_Invoke_m2483366708_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationWithProgressCompletedHandler_2_Invoke_m2483366708_RuntimeMethod_var);
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
// TResult Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>::GetResults()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IAsyncOperationWithProgress_2_GetResults_m3465034556 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_GetResults_m3465034556_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t1622574100* ____iasyncOperationWithProgress_2_t1622574100 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t1622574100::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t1622574100));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IBuffer_t541192229* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t1622574100->IAsyncOperationWithProgress_2_GetResults_m3465034556(&returnValue);
	____iasyncOperationWithProgress_2_t1622574100->Release();

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
// System.Void Windows.Foundation.IAsyncOperation`1<System.Boolean>::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
extern "C" IL2CPP_METHOD_ATTR void IAsyncOperation_1_put_Completed_m1783482745 (RuntimeObject* __this, AsyncOperationCompletedHandler_1_t1437760040 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_put_Completed_m1783482745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t3013442981* ____iasyncOperation_1_t3013442981 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t3013442981::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t3013442981));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperation_1_t3013442981->IAsyncOperation_1_put_Completed_m1783482745(____handler0_marshaled);
	____iasyncOperation_1_t3013442981->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationCompletedHandler`1<TResult> Windows.Foundation.IAsyncOperation`1<System.Boolean>::get_Completed()
extern "C" IL2CPP_METHOD_ATTR AsyncOperationCompletedHandler_1_t1437760040 * IAsyncOperation_1_get_Completed_m2903702275 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_get_Completed_m2903702275_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t3013442981* ____iasyncOperation_1_t3013442981 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t3013442981::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t3013442981));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperation_1_t3013442981->IAsyncOperation_1_get_Completed_m2903702275(&returnValue);
	____iasyncOperation_1_t3013442981->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationCompletedHandler_1_t1437760040 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_t1437760040 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationCompletedHandler_1_t1437760040*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t1437760040_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationCompletedHandler_1_Invoke_m1728644989_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_m1728644989_RuntimeMethod_var);
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
// TResult Windows.Foundation.IAsyncOperation`1<System.Boolean>::GetResults()
extern "C" IL2CPP_METHOD_ATTR bool IAsyncOperation_1_GetResults_m183360251 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IAsyncOperation_1_t3013442981* ____iasyncOperation_1_t3013442981 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t3013442981::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t3013442981));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____iasyncOperation_1_t3013442981->IAsyncOperation_1_GetResults_m183360251(&returnValue);
	____iasyncOperation_1_t3013442981->Release();

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
// System.Void Windows.Foundation.IAsyncOperation`1<System.Object>::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
extern "C" IL2CPP_METHOD_ATTR void IAsyncOperation_1_put_Completed_m2440562410 (RuntimeObject* __this, AsyncOperationCompletedHandler_1_t125610943 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_put_Completed_m2440562410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t1701293884* ____iasyncOperation_1_t1701293884 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t1701293884::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t1701293884));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationCompletedHandler_1_t125610943_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_t125610943_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_t125610943_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperation_1_t1701293884->IAsyncOperation_1_put_Completed_m2440562410(____handler0_marshaled);
	____iasyncOperation_1_t1701293884->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationCompletedHandler`1<TResult> Windows.Foundation.IAsyncOperation`1<System.Object>::get_Completed()
extern "C" IL2CPP_METHOD_ATTR AsyncOperationCompletedHandler_1_t125610943 * IAsyncOperation_1_get_Completed_m1801998692 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_get_Completed_m1801998692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t1701293884* ____iasyncOperation_1_t1701293884 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t1701293884::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t1701293884));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationCompletedHandler_1_t125610943_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperation_1_t1701293884->IAsyncOperation_1_get_Completed_m1801998692(&returnValue);
	____iasyncOperation_1_t1701293884->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationCompletedHandler_1_t125610943 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_t125610943 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationCompletedHandler_1_t125610943*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t125610943_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationCompletedHandler_1_Invoke_m4027491544_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_m4027491544_RuntimeMethod_var);
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
// TResult Windows.Foundation.IAsyncOperation`1<System.Object>::GetResults()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * IAsyncOperation_1_GetResults_m313133751 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_GetResults_m313133751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t1701293884* ____iasyncOperation_1_t1701293884 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t1701293884::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t1701293884));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppIInspectable* returnValue = NULL;
	hr = ____iasyncOperation_1_t1701293884->IAsyncOperation_1_GetResults_m313133751(&returnValue);
	____iasyncOperation_1_t1701293884->Release();

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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.IAsyncOperation`1<System.UInt32>::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
extern "C" IL2CPP_METHOD_ATTR void IAsyncOperation_1_put_Completed_m1437779878 (RuntimeObject* __this, AsyncOperationCompletedHandler_1_t3900534053 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_put_Completed_m1437779878_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t1181249698* ____iasyncOperation_1_t1181249698 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t1181249698::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t1181249698));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
	hr = ____iasyncOperation_1_t1181249698->IAsyncOperation_1_put_Completed_m1437779878(____handler0_marshaled);
	____iasyncOperation_1_t1181249698->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationCompletedHandler`1<TResult> Windows.Foundation.IAsyncOperation`1<System.UInt32>::get_Completed()
extern "C" IL2CPP_METHOD_ATTR AsyncOperationCompletedHandler_1_t3900534053 * IAsyncOperation_1_get_Completed_m2736054029 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_get_Completed_m2736054029_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t1181249698* ____iasyncOperation_1_t1181249698 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t1181249698::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t1181249698));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperation_1_t1181249698->IAsyncOperation_1_get_Completed_m2736054029(&returnValue);
	____iasyncOperation_1_t1181249698->Release();

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
// TResult Windows.Foundation.IAsyncOperation`1<System.UInt32>::GetResults()
extern "C" IL2CPP_METHOD_ATTR uint32_t IAsyncOperation_1_GetResults_m2010780058 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IAsyncOperation_1_t1181249698* ____iasyncOperation_1_t1181249698 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t1181249698::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t1181249698));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____iasyncOperation_1_t1181249698->IAsyncOperation_1_GetResults_m2010780058(&returnValue);
	____iasyncOperation_1_t1181249698->Release();

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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
extern "C" IL2CPP_METHOD_ATTR void IAsyncOperation_1_put_Completed_m2708255201 (RuntimeObject* __this, AsyncOperationCompletedHandler_1_t3662811833 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_put_Completed_m2708255201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t943527478* ____iasyncOperation_1_t943527478 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t943527478::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t943527478));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationCompletedHandler_1_t3662811833_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_t3662811833_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_t3662811833_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperation_1_t943527478->IAsyncOperation_1_put_Completed_m2708255201(____handler0_marshaled);
	____iasyncOperation_1_t943527478->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationCompletedHandler`1<TResult> Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>::get_Completed()
extern "C" IL2CPP_METHOD_ATTR AsyncOperationCompletedHandler_1_t3662811833 * IAsyncOperation_1_get_Completed_m1799896646 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_get_Completed_m1799896646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t943527478* ____iasyncOperation_1_t943527478 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t943527478::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t943527478));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationCompletedHandler_1_t3662811833_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperation_1_t943527478->IAsyncOperation_1_get_Completed_m1799896646(&returnValue);
	____iasyncOperation_1_t943527478->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationCompletedHandler_1_t3662811833 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_t3662811833 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationCompletedHandler_1_t3662811833*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t3662811833_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationCompletedHandler_1_Invoke_m990580978_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_m990580978_RuntimeMethod_var);
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
// TResult Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>::GetResults()
extern "C" IL2CPP_METHOD_ATTR SpeechSynthesisStream_t2322339758 * IAsyncOperation_1_GetResults_m1078041023 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_GetResults_m1078041023_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t943527478* ____iasyncOperation_1_t943527478 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t943527478::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t943527478));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	ISpeechSynthesisStream_t764091608* returnValue = NULL;
	hr = ____iasyncOperation_1_t943527478->IAsyncOperation_1_GetResults_m1078041023(&returnValue);
	____iasyncOperation_1_t943527478->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	SpeechSynthesisStream_t2322339758 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<SpeechSynthesisStream_t2322339758>(returnValue, SpeechSynthesisStream_t2322339758_il2cpp_TypeInfo_var);
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
// System.Void Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
extern "C" IL2CPP_METHOD_ATTR void IAsyncOperation_1_put_Completed_m1174308971 (RuntimeObject* __this, AsyncOperationCompletedHandler_1_t3092276191 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_put_Completed_m1174308971_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t372991836* ____iasyncOperation_1_t372991836 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t372991836::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t372991836));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationCompletedHandler_1_t3092276191_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_t3092276191_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_t3092276191_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperation_1_t372991836->IAsyncOperation_1_put_Completed_m1174308971(____handler0_marshaled);
	____iasyncOperation_1_t372991836->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationCompletedHandler`1<TResult> Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>::get_Completed()
extern "C" IL2CPP_METHOD_ATTR AsyncOperationCompletedHandler_1_t3092276191 * IAsyncOperation_1_get_Completed_m2669246745 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_get_Completed_m2669246745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t372991836* ____iasyncOperation_1_t372991836 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t372991836::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t372991836));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationCompletedHandler_1_t3092276191_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperation_1_t372991836->IAsyncOperation_1_get_Completed_m2669246745(&returnValue);
	____iasyncOperation_1_t372991836->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationCompletedHandler_1_t3092276191 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_t3092276191 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationCompletedHandler_1_t3092276191*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t3092276191_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationCompletedHandler_1_Invoke_m122450152_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_m122450152_RuntimeMethod_var);
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
// TResult Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>::GetResults()
extern "C" IL2CPP_METHOD_ATTR StorageFile_t1751804116 * IAsyncOperation_1_GetResults_m4007442614 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_GetResults_m4007442614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t372991836* ____iasyncOperation_1_t372991836 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t372991836::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t372991836));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IStorageFile_t455187485* returnValue = NULL;
	hr = ____iasyncOperation_1_t372991836->IAsyncOperation_1_GetResults_m4007442614(&returnValue);
	____iasyncOperation_1_t372991836->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	StorageFile_t1751804116 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<StorageFile_t1751804116>(returnValue, StorageFile_t1751804116_il2cpp_TypeInfo_var);
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
// System.Void Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFolder>::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
extern "C" IL2CPP_METHOD_ATTR void IAsyncOperation_1_put_Completed_m2910006857 (RuntimeObject* __this, AsyncOperationCompletedHandler_1_t2325952763 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_put_Completed_m2910006857_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t3901635704* ____iasyncOperation_1_t3901635704 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t3901635704::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t3901635704));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationCompletedHandler_1_t2325952763_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_t2325952763_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_t2325952763_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperation_1_t3901635704->IAsyncOperation_1_put_Completed_m2910006857(____handler0_marshaled);
	____iasyncOperation_1_t3901635704->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationCompletedHandler`1<TResult> Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFolder>::get_Completed()
extern "C" IL2CPP_METHOD_ATTR AsyncOperationCompletedHandler_1_t2325952763 * IAsyncOperation_1_get_Completed_m2270643935 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_get_Completed_m2270643935_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t3901635704* ____iasyncOperation_1_t3901635704 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t3901635704::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t3901635704));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationCompletedHandler_1_t2325952763_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperation_1_t3901635704->IAsyncOperation_1_get_Completed_m2270643935(&returnValue);
	____iasyncOperation_1_t3901635704->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationCompletedHandler_1_t2325952763 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_t2325952763 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationCompletedHandler_1_t2325952763*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t2325952763_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationCompletedHandler_1_Invoke_m510864878_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_m510864878_RuntimeMethod_var);
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
// TResult Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFolder>::GetResults()
extern "C" IL2CPP_METHOD_ATTR StorageFolder_t985480688 * IAsyncOperation_1_GetResults_m2895527307 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_GetResults_m2895527307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t3901635704* ____iasyncOperation_1_t3901635704 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t3901635704::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t3901635704));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IStorageFolder_t2414910357* returnValue = NULL;
	hr = ____iasyncOperation_1_t3901635704->IAsyncOperation_1_GetResults_m2895527307(&returnValue);
	____iasyncOperation_1_t3901635704->Release();

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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStream>::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
extern "C" IL2CPP_METHOD_ATTR void IAsyncOperation_1_put_Completed_m1751653406 (RuntimeObject* __this, AsyncOperationCompletedHandler_1_t3440468126 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_put_Completed_m1751653406_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t721183771* ____iasyncOperation_1_t721183771 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t721183771::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t721183771));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationCompletedHandler_1_t3440468126_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_t3440468126_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_t3440468126_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperation_1_t721183771->IAsyncOperation_1_put_Completed_m1751653406(____handler0_marshaled);
	____iasyncOperation_1_t721183771->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationCompletedHandler`1<TResult> Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStream>::get_Completed()
extern "C" IL2CPP_METHOD_ATTR AsyncOperationCompletedHandler_1_t3440468126 * IAsyncOperation_1_get_Completed_m3598311264 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_get_Completed_m3598311264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t721183771* ____iasyncOperation_1_t721183771 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t721183771::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t721183771));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationCompletedHandler_1_t3440468126_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperation_1_t721183771->IAsyncOperation_1_get_Completed_m3598311264(&returnValue);
	____iasyncOperation_1_t721183771->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationCompletedHandler_1_t3440468126 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_t3440468126 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationCompletedHandler_1_t3440468126*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t3440468126_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationCompletedHandler_1_Invoke_m2733685339_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_m2733685339_RuntimeMethod_var);
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
// TResult Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStream>::GetResults()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IAsyncOperation_1_GetResults_m2960108873 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_GetResults_m2960108873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t721183771* ____iasyncOperation_1_t721183771 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t721183771::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t721183771));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IRandomAccessStream_t2099996051* returnValue = NULL;
	hr = ____iasyncOperation_1_t721183771->IAsyncOperation_1_GetResults_m2960108873(&returnValue);
	____iasyncOperation_1_t721183771->Release();

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
// System.Void Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
extern "C" IL2CPP_METHOD_ATTR void IAsyncOperation_1_put_Completed_m677968592 (RuntimeObject* __this, AsyncOperationCompletedHandler_1_t342432431 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_put_Completed_m677968592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t1918115372* ____iasyncOperation_1_t1918115372 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t1918115372::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t1918115372));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationCompletedHandler_1_t342432431_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_t342432431_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_t342432431_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperation_1_t1918115372->IAsyncOperation_1_put_Completed_m677968592(____handler0_marshaled);
	____iasyncOperation_1_t1918115372->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationCompletedHandler`1<TResult> Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>::get_Completed()
extern "C" IL2CPP_METHOD_ATTR AsyncOperationCompletedHandler_1_t342432431 * IAsyncOperation_1_get_Completed_m1527642250 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_get_Completed_m1527642250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t1918115372* ____iasyncOperation_1_t1918115372 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t1918115372::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t1918115372));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationCompletedHandler_1_t342432431_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperation_1_t1918115372->IAsyncOperation_1_get_Completed_m1527642250(&returnValue);
	____iasyncOperation_1_t1918115372->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationCompletedHandler_1_t342432431 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_t342432431 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationCompletedHandler_1_t342432431*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t342432431_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationCompletedHandler_1_Invoke_m388471121_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_m388471121_RuntimeMethod_var);
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
// TResult Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>::GetResults()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IAsyncOperation_1_GetResults_m4077769623 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_GetResults_m4077769623_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t1918115372* ____iasyncOperation_1_t1918115372 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t1918115372::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t1918115372));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IRandomAccessStreamWithContentType_t3296927652* returnValue = NULL;
	hr = ____iasyncOperation_1_t1918115372->IAsyncOperation_1_GetResults_m4077769623(&returnValue);
	____iasyncOperation_1_t1918115372->Release();

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
// T Windows.Foundation.IReference`1<System.AttributeTargets>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m95326068 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1037206413* ____ireference_1_t1037206413 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1037206413::IID, reinterpret_cast<void**>(&____ireference_1_t1037206413));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t1037206413->IReference_1_get_Value_m95326068(&returnValue);
	____ireference_1_t1037206413->Release();

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
// T Windows.Foundation.IReference`1<System.Boolean>::get_Value()
extern "C" IL2CPP_METHOD_ATTR bool IReference_1_get_Value_m774017165 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3645423686* ____ireference_1_t3645423686 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3645423686::IID, reinterpret_cast<void**>(&____ireference_1_t3645423686));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ireference_1_t3645423686->IReference_1_get_Value_m774017165(&returnValue);
	____ireference_1_t3645423686->Release();

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
// T Windows.Foundation.IReference`1<System.Byte>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint8_t IReference_1_get_Value_m3247461990 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t387464801* ____ireference_1_t387464801 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t387464801::IID, reinterpret_cast<void**>(&____ireference_1_t387464801));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint8_t returnValue = 0;
	hr = ____ireference_1_t387464801->IReference_1_get_Value_m3247461990(&returnValue);
	____ireference_1_t387464801->Release();

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
// T Windows.Foundation.IReference`1<System.Char>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar IReference_1_get_Value_m704688121 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2887628895* ____ireference_1_t2887628895 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2887628895::IID, reinterpret_cast<void**>(&____ireference_1_t2887628895));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppChar returnValue = 0;
	hr = ____ireference_1_t2887628895->IReference_1_get_Value_m704688121(&returnValue);
	____ireference_1_t2887628895->Release();

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
// T Windows.Foundation.IReference`1<System.Collections.Specialized.NotifyCollectionChangedAction>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m2725733907 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t309621807* ____ireference_1_t309621807 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t309621807::IID, reinterpret_cast<void**>(&____ireference_1_t309621807));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t309621807->IReference_1_get_Value_m2725733907(&returnValue);
	____ireference_1_t309621807->Release();

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
// T Windows.Foundation.IReference`1<System.DateTimeOffset>::get_Value()
extern "C" IL2CPP_METHOD_ATTR DateTimeOffset_t3229287507  IReference_1_get_Value_m2049683846 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReference_1_get_Value_m2049683846_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReference_1_t2482455932* ____ireference_1_t2482455932 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2482455932::IID, reinterpret_cast<void**>(&____ireference_1_t2482455932));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	DateTime_t1679451545  returnValue = {};
	hr = ____ireference_1_t2482455932->IReference_1_get_Value_m2049683846(&returnValue);
	____ireference_1_t2482455932->Release();

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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Double>::get_Value()
extern "C" IL2CPP_METHOD_ATTR double IReference_1_get_Value_m3861827098 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t4142801084* ____ireference_1_t4142801084 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t4142801084::IID, reinterpret_cast<void**>(&____ireference_1_t4142801084));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	double returnValue = 0.0;
	hr = ____ireference_1_t4142801084->IReference_1_get_Value_m3861827098(&returnValue);
	____ireference_1_t4142801084->Release();

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
// T Windows.Foundation.IReference`1<System.Exception>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Exception_t * IReference_1_get_Value_m3319376935 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t689905674* ____ireference_1_t689905674 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t689905674::IID, reinterpret_cast<void**>(&____ireference_1_t689905674));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t689905674->IReference_1_get_Value_m3319376935(&returnValue);
	____ireference_1_t689905674->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return (returnValue != IL2CPP_S_OK ? reinterpret_cast<Exception_t *>(il2cpp_codegen_com_get_exception(returnValue, false)) : NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Guid>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Guid_t  IReference_1_get_Value_m2917423479 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2446701312* ____ireference_1_t2446701312 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2446701312::IID, reinterpret_cast<void**>(&____ireference_1_t2446701312));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Guid_t  returnValue = {};
	hr = ____ireference_1_t2446701312->IReference_1_get_Value_m2917423479(&returnValue);
	____ireference_1_t2446701312->Release();

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
// T Windows.Foundation.IReference`1<System.Int16>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int16_t IReference_1_get_Value_m3359388353 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1805988812* ____ireference_1_t1805988812 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1805988812::IID, reinterpret_cast<void**>(&____ireference_1_t1805988812));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int16_t returnValue = 0;
	hr = ____ireference_1_t1805988812->IReference_1_get_Value_m3359388353(&returnValue);
	____ireference_1_t1805988812->Release();

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
// T Windows.Foundation.IReference`1<System.Int32>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m1946804912 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2204114178* ____ireference_1_t2204114178 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2204114178::IID, reinterpret_cast<void**>(&____ireference_1_t2204114178));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t2204114178->IReference_1_get_Value_m1946804912(&returnValue);
	____ireference_1_t2204114178->Release();

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
// T Windows.Foundation.IReference`1<System.Int64>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int64_t IReference_1_get_Value_m197260093 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2989735729* ____ireference_1_t2989735729 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2989735729::IID, reinterpret_cast<void**>(&____ireference_1_t2989735729));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int64_t returnValue = 0;
	hr = ____ireference_1_t2989735729->IReference_1_get_Value_m197260093(&returnValue);
	____ireference_1_t2989735729->Release();

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
// T Windows.Foundation.IReference`1<System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * IReference_1_get_Value_m3229386239 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReference_1_get_Value_m3229386239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReference_1_t2333274589* ____ireference_1_t2333274589 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2333274589::IID, reinterpret_cast<void**>(&____ireference_1_t2333274589));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppIInspectable* returnValue = NULL;
	hr = ____ireference_1_t2333274589->IReference_1_get_Value_m3229386239(&returnValue);
	____ireference_1_t2333274589->Release();

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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::get_Value()
extern "C" IL2CPP_METHOD_ATTR EventRegistrationToken_t318890788  IReference_1_get_Value_m777133319 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3867026509* ____ireference_1_t3867026509 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3867026509::IID, reinterpret_cast<void**>(&____ireference_1_t3867026509));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	EventRegistrationToken_t318890788  returnValue = {};
	hr = ____ireference_1_t3867026509->IReference_1_get_Value_m777133319(&returnValue);
	____ireference_1_t3867026509->Release();

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
// T Windows.Foundation.IReference`1<System.Single>::get_Value()
extern "C" IL2CPP_METHOD_ATTR float IReference_1_get_Value_m1034221680 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t650435199* ____ireference_1_t650435199 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t650435199::IID, reinterpret_cast<void**>(&____ireference_1_t650435199));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	float returnValue = 0.0f;
	hr = ____ireference_1_t650435199->IReference_1_get_Value_m1034221680(&returnValue);
	____ireference_1_t650435199->Release();

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
// T Windows.Foundation.IReference`1<System.String>::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* IReference_1_get_Value_m4216510932 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1100619114* ____ireference_1_t1100619114 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1100619114::IID, reinterpret_cast<void**>(&____ireference_1_t1100619114));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppHString returnValue = NULL;
	hr = ____ireference_1_t1100619114->IReference_1_get_Value_m4216510932(&returnValue);
	____ireference_1_t1100619114->Release();

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
// T Windows.Foundation.IReference`1<System.TimeSpan>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  IReference_1_get_Value_m2770668730 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t134327674* ____ireference_1_t134327674 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t134327674::IID, reinterpret_cast<void**>(&____ireference_1_t134327674));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	TimeSpan_t881159249  returnValue = {};
	hr = ____ireference_1_t134327674->IReference_1_get_Value_m2770668730(&returnValue);
	____ireference_1_t134327674->Release();

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
// T Windows.Foundation.IReference`1<System.Type>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Type_t * IReference_1_get_Value_m2081172832 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1737113185* ____ireference_1_t1737113185 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1737113185::IID, reinterpret_cast<void**>(&____ireference_1_t1737113185));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppWindowsRuntimeTypeName returnValue = Il2CppWindowsRuntimeTypeName();
	hr = ____ireference_1_t1737113185->IReference_1_get_Value_m2081172832(&returnValue);
	____ireference_1_t1737113185->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	Type_t * _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_type_from_native(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_delete_native_type(returnValue);

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
// T Windows.Foundation.IReference`1<System.UInt16>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint16_t IReference_1_get_Value_m1209658772 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1430893383* ____ireference_1_t1430893383 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1430893383::IID, reinterpret_cast<void**>(&____ireference_1_t1430893383));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint16_t returnValue = 0;
	hr = ____ireference_1_t1430893383->IReference_1_get_Value_m1209658772(&returnValue);
	____ireference_1_t1430893383->Release();

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
// T Windows.Foundation.IReference`1<System.UInt32>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint32_t IReference_1_get_Value_m1308423508 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1813230403* ____ireference_1_t1813230403 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1813230403::IID, reinterpret_cast<void**>(&____ireference_1_t1813230403));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ireference_1_t1813230403->IReference_1_get_Value_m1308423508(&returnValue);
	____ireference_1_t1813230403->Release();

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
// T Windows.Foundation.IReference`1<System.UInt64>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint64_t IReference_1_get_Value_m2294903021 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3387208517* ____ireference_1_t3387208517 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3387208517::IID, reinterpret_cast<void**>(&____ireference_1_t3387208517));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint64_t returnValue = 0;
	hr = ____ireference_1_t3387208517->IReference_1_get_Value_m2294903021(&returnValue);
	____ireference_1_t3387208517->Release();

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
// T Windows.Foundation.IReference`1<Windows.Foundation.AsyncStatus>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m2017125470 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1403654299* ____ireference_1_t1403654299 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1403654299::IID, reinterpret_cast<void**>(&____ireference_1_t1403654299));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t1403654299->IReference_1_get_Value_m2017125470(&returnValue);
	____ireference_1_t1403654299->Release();

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
// T Windows.Foundation.IReference`1<Windows.Foundation.DateTime>::get_Value()
extern "C" IL2CPP_METHOD_ATTR DateTime_t1679451545  IReference_1_get_Value_m1126360047 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t932619970* ____ireference_1_t932619970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t932619970::IID, reinterpret_cast<void**>(&____ireference_1_t932619970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	DateTime_t1679451545  returnValue = {};
	hr = ____ireference_1_t932619970->IReference_1_get_Value_m1126360047(&returnValue);
	____ireference_1_t932619970->Release();

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
// T Windows.Foundation.IReference`1<Windows.Foundation.EventRegistrationToken>::get_Value()
extern "C" IL2CPP_METHOD_ATTR EventRegistrationToken_t3152277946  IReference_1_get_Value_m2795834790 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2405446371* ____ireference_1_t2405446371 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2405446371::IID, reinterpret_cast<void**>(&____ireference_1_t2405446371));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	EventRegistrationToken_t3152277946  returnValue = {};
	hr = ____ireference_1_t2405446371->IReference_1_get_Value_m2795834790(&returnValue);
	____ireference_1_t2405446371->Release();

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
// T Windows.Foundation.IReference`1<Windows.Foundation.FoundationContract>::get_Value()
extern "C" IL2CPP_METHOD_ATTR FoundationContract_t3651383009  IReference_1_get_Value_m919830547 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2904551434* ____ireference_1_t2904551434 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2904551434::IID, reinterpret_cast<void**>(&____ireference_1_t2904551434));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	FoundationContract_t3651383009  returnValue = {};
	hr = ____ireference_1_t2904551434->IReference_1_get_Value_m919830547(&returnValue);
	____ireference_1_t2904551434->Release();

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
// T Windows.Foundation.IReference`1<Windows.Foundation.HResult>::get_Value()
extern "C" IL2CPP_METHOD_ATTR HResult_t3073183193  IReference_1_get_Value_m3795436356 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2326351618* ____ireference_1_t2326351618 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2326351618::IID, reinterpret_cast<void**>(&____ireference_1_t2326351618));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	HResult_t3073183193  returnValue = {};
	hr = ____ireference_1_t2326351618->IReference_1_get_Value_m3795436356(&returnValue);
	____ireference_1_t2326351618->Release();

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
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.AttributeTargets>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint32_t IReference_1_get_Value_m800375591 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1714021653* ____ireference_1_t1714021653 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1714021653::IID, reinterpret_cast<void**>(&____ireference_1_t1714021653));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ireference_1_t1714021653->IReference_1_get_Value_m800375591(&returnValue);
	____ireference_1_t1714021653->Release();

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
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.CompositionType>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m56861080 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1873685880* ____ireference_1_t1873685880 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1873685880::IID, reinterpret_cast<void**>(&____ireference_1_t1873685880));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t1873685880->IReference_1_get_Value_m56861080(&returnValue);
	____ireference_1_t1873685880->Release();

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
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.MarshalingType>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m4241848242 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2809364818* ____ireference_1_t2809364818 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2809364818::IID, reinterpret_cast<void**>(&____ireference_1_t2809364818));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t2809364818->IReference_1_get_Value_m4241848242(&returnValue);
	____ireference_1_t2809364818->Release();

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
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.ThreadingModel>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m3959947048 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2091189898* ____ireference_1_t2091189898 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2091189898::IID, reinterpret_cast<void**>(&____ireference_1_t2091189898));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t2091189898->IReference_1_get_Value_m3959947048(&returnValue);
	____ireference_1_t2091189898->Release();

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
// T Windows.Foundation.IReference`1<Windows.Foundation.Point>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Point_t4164953539  IReference_1_get_Value_m2248936515 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3418121964* ____ireference_1_t3418121964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3418121964::IID, reinterpret_cast<void**>(&____ireference_1_t3418121964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Point_t4164953539  returnValue = {};
	hr = ____ireference_1_t3418121964->IReference_1_get_Value_m2248936515(&returnValue);
	____ireference_1_t3418121964->Release();

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
// T Windows.Foundation.IReference`1<Windows.Foundation.Point>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Point_t4164953540  IReference_1_get_Value_m2248936516 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3418121965* ____ireference_1_t3418121965 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3418121965::IID, reinterpret_cast<void**>(&____ireference_1_t3418121965));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Point_t4164953540  returnValue = {};
	hr = ____ireference_1_t3418121965->IReference_1_get_Value_m2248936516(&returnValue);
	____ireference_1_t3418121965->Release();

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
// T Windows.Foundation.IReference`1<Windows.Foundation.PropertyType>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m4223149003 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2284596779* ____ireference_1_t2284596779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2284596779::IID, reinterpret_cast<void**>(&____ireference_1_t2284596779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t2284596779->IReference_1_get_Value_m4223149003(&returnValue);
	____ireference_1_t2284596779->Release();

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
// T Windows.Foundation.IReference`1<Windows.Foundation.Rect>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Rect_t2695113488  IReference_1_get_Value_m2582268702 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1948281912* ____ireference_1_t1948281912 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1948281912::IID, reinterpret_cast<void**>(&____ireference_1_t1948281912));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Rect_t2695113488  returnValue = {};
	hr = ____ireference_1_t1948281912->IReference_1_get_Value_m2582268702(&returnValue);
	____ireference_1_t1948281912->Release();

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
// T Windows.Foundation.IReference`1<Windows.Foundation.Rect>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Rect_t2695113487  IReference_1_get_Value_m2582268703 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1948281913* ____ireference_1_t1948281913 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1948281913::IID, reinterpret_cast<void**>(&____ireference_1_t1948281913));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Rect_t2695113487  returnValue = {};
	hr = ____ireference_1_t1948281913->IReference_1_get_Value_m2582268703(&returnValue);
	____ireference_1_t1948281913->Release();

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
// T Windows.Foundation.IReference`1<Windows.Foundation.Size>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Size_t550917639  IReference_1_get_Value_m3618386193 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t4099053359* ____ireference_1_t4099053359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t4099053359::IID, reinterpret_cast<void**>(&____ireference_1_t4099053359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Size_t550917639  returnValue = {};
	hr = ____ireference_1_t4099053359->IReference_1_get_Value_m3618386193(&returnValue);
	____ireference_1_t4099053359->Release();

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
// T Windows.Foundation.IReference`1<Windows.Foundation.Size>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Size_t550917638  IReference_1_get_Value_m3618386194 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t4099053360* ____ireference_1_t4099053360 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t4099053360::IID, reinterpret_cast<void**>(&____ireference_1_t4099053360));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Size_t550917638  returnValue = {};
	hr = ____ireference_1_t4099053360->IReference_1_get_Value_m3618386194(&returnValue);
	____ireference_1_t4099053360->Release();

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
// T Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t1755640982  IReference_1_get_Value_m3415674831 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1008809407* ____ireference_1_t1008809407 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1008809407::IID, reinterpret_cast<void**>(&____ireference_1_t1008809407));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	TimeSpan_t1755640982  returnValue = {};
	hr = ____ireference_1_t1008809407->IReference_1_get_Value_m3415674831(&returnValue);
	____ireference_1_t1008809407->Release();

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
// T Windows.Foundation.IReference`1<Windows.Foundation.UniversalApiContract>::get_Value()
extern "C" IL2CPP_METHOD_ATTR UniversalApiContract_t3367004861  IReference_1_get_Value_m2468794183 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2620173286* ____ireference_1_t2620173286 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2620173286::IID, reinterpret_cast<void**>(&____ireference_1_t2620173286));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	UniversalApiContract_t3367004861  returnValue = {};
	hr = ____ireference_1_t2620173286->IReference_1_get_Value_m2468794183(&returnValue);
	____ireference_1_t2620173286->Release();

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
// T Windows.Foundation.IReference`1<Windows.Media.Capture.MediaCategory>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m1562853724 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2431064701* ____ireference_1_t2431064701 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2431064701::IID, reinterpret_cast<void**>(&____ireference_1_t2431064701));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t2431064701->IReference_1_get_Value_m1562853724(&returnValue);
	____ireference_1_t2431064701->Release();

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
// T Windows.Foundation.IReference`1<Windows.Media.Capture.StreamingCaptureMode>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m2051665395 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3164493645* ____ireference_1_t3164493645 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3164493645::IID, reinterpret_cast<void**>(&____ireference_1_t3164493645));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t3164493645->IReference_1_get_Value_m2051665395(&returnValue);
	____ireference_1_t3164493645->Release();

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
// T Windows.Foundation.IReference`1<Windows.Networking.HostNameType>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m1424367424 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3423936504* ____ireference_1_t3423936504 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3423936504::IID, reinterpret_cast<void**>(&____ireference_1_t3423936504));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t3423936504->IReference_1_get_Value_m1424367424(&returnValue);
	____ireference_1_t3423936504->Release();

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
// T Windows.Foundation.IReference`1<Windows.Storage.CreationCollisionOption>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m2204867723 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1256324868* ____ireference_1_t1256324868 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1256324868::IID, reinterpret_cast<void**>(&____ireference_1_t1256324868));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t1256324868->IReference_1_get_Value_m2204867723(&returnValue);
	____ireference_1_t1256324868->Release();

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
// T Windows.Foundation.IReference`1<Windows.Storage.FileAccessMode>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m1269367142 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1870003812* ____ireference_1_t1870003812 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1870003812::IID, reinterpret_cast<void**>(&____ireference_1_t1870003812));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t1870003812->IReference_1_get_Value_m1269367142(&returnValue);
	____ireference_1_t1870003812->Release();

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
// T Windows.Foundation.IReference`1<Windows.Storage.Streams.InputStreamOptions>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint32_t IReference_1_get_Value_m2331768150 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2154907404* ____ireference_1_t2154907404 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2154907404::IID, reinterpret_cast<void**>(&____ireference_1_t2154907404));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ireference_1_t2154907404->IReference_1_get_Value_m2331768150(&returnValue);
	____ireference_1_t2154907404->Release();

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
// T Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.NotifyCollectionChangedAction>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m14739056 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3926795489* ____ireference_1_t3926795489 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3926795489::IID, reinterpret_cast<void**>(&____ireference_1_t3926795489));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t3926795489->IReference_1_get_Value_m14739056(&returnValue);
	____ireference_1_t3926795489->Release();

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
// T Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeKind>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m2990591067 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1526750185* ____ireference_1_t1526750185 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1526750185::IID, reinterpret_cast<void**>(&____ireference_1_t1526750185));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t1526750185->IReference_1_get_Value_m2990591067(&returnValue);
	____ireference_1_t1526750185->Release();

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
// T Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeName>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TypeName_t4208425108  IReference_1_get_Value_m3274607421 (RuntimeObject* __this, const RuntimeMethod* method)
{


	IReference_1_t3461593533* ____ireference_1_t3461593533 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3461593533::IID, reinterpret_cast<void**>(&____ireference_1_t3461593533));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	TypeName_t4208425108_marshaled_windows_runtime returnValue = {};
	hr = ____ireference_1_t3461593533->IReference_1_get_Value_m3274607421(&returnValue);
	____ireference_1_t3461593533->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	TypeName_t4208425108  _returnValue_unmarshaled;
	memset(&_returnValue_unmarshaled, 0, sizeof(_returnValue_unmarshaled));
	TypeName_t4208425108_marshal_windows_runtime_back(returnValue, _returnValue_unmarshaled);

	// Marshaling cleanup of return value native representation
	TypeName_t4208425108_marshal_windows_runtime_cleanup(returnValue);

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
