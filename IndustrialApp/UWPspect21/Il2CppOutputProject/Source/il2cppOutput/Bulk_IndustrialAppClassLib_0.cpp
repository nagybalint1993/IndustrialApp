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
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// IndustrialApp.Models.Container
struct Container_t316474441;
// IndustrialApp.Models.ContainerPart
struct ContainerPart_t657533908;
// IndustrialApp.Models.ContainerPartContent
struct ContainerPartContent_t1730771384;
// IndustrialApp.Models.ContainerPartContent[]
struct ContainerPartContentU5BU5D_t2100400233;
// IndustrialApp.Models.ContainerPart[]
struct ContainerPartU5BU5D_t2715067997;
// IndustrialApp.Models.Container[]
struct ContainerU5BU5D_t722656372;
// IndustrialApp.Models.Task
struct Task_t2909004558;
// IndustrialApp.Models.TaskElement
struct TaskElement_t3088884066;
// IndustrialApp.Models.TaskElement[]
struct TaskElementU5BU5D_t4031910615;
// IndustrialApp.Models.Task[]
struct TaskU5BU5D_t3452836091;
// IndustrialApp.Models.Type
struct Type_t3796628608;
// IndustrialApp.Models.Type[]
struct TypeU5BU5D_t1823680897;
// IndustrialApp.Network.INetworkProvider
struct INetworkProvider_t2893229667;
// IndustrialApp.Network.NetworkProvider
struct NetworkProvider_t1853015457;
// IndustrialApp.Network.Providers.ContainerPartContentProvider
struct ContainerPartContentProvider_t2760789786;
// IndustrialApp.Network.Providers.ContainerPartContentProvider/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t1343003519;
// IndustrialApp.Network.Providers.ContainerPartProvider
struct ContainerPartProvider_t3752118680;
// IndustrialApp.Network.Providers.ContainerPartProvider/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t1249878227;
// IndustrialApp.Network.Providers.TaskElementProvider
struct TaskElementProvider_t4208168369;
// IndustrialApp.Network.Providers.TaskElementProvider/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t1688314418;
// IndustrialApp.Network.Providers.TaskProvider
struct TaskProvider_t1351891238;
// IndustrialApp.Network.Providers.TypeProvider
struct TypeProvider_t516275896;
// IndustrialApp.Network.Providers.TypeProvider/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t3017055237;
// IndustrialApp.Presenter.Presenter
struct Presenter_t2628193080;
// IndustrialApp.TestData.Data
struct Data_t2790604980;
// System.Action`1<IndustrialApp.Models.ContainerPart>
struct Action_1_t830001503;
// System.Action`1<IndustrialApp.Models.Type>
struct Action_1_t3969096203;
// System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPartContent>>
struct Action_1_t3375313721;
// System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.Task>>
struct Action_1_t258579599;
// System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement>>
struct Action_1_t438459107;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Collections.Generic.IEnumerable`1<IndustrialApp.Models.ContainerPart>
struct IEnumerable_1_t3932354093;
// System.Collections.Generic.IEnumerable`1<IndustrialApp.Models.ContainerPartContent>
struct IEnumerable_1_t710624273;
// System.Collections.Generic.IEnumerable`1<IndustrialApp.Models.TaskElement>
struct IEnumerable_1_t2068736955;
// System.Collections.Generic.IEnumerable`1<IndustrialApp.Models.Type>
struct IEnumerable_1_t2776481497;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.List`1<IndustrialApp.Models.Container>
struct List_1_t1788549183;
// System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPart>
struct List_1_t2129608650;
// System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPartContent>
struct List_1_t3202846126;
// System.Collections.Generic.List`1<IndustrialApp.Models.Task>
struct List_1_t86112004;
// System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement>
struct List_1_t265991512;
// System.Collections.Generic.List`1<IndustrialApp.Models.Type>
struct List_1_t973736054;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Comparison`1<IndustrialApp.Models.TaskElement>
struct Comparison_1_t2863815245;
// System.Comparison`1<System.Object>
struct Comparison_1_t2855037343;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Exception
struct Exception_t;
// System.Func`2<IndustrialApp.Models.ContainerPart,System.Boolean>
struct Func_2_t3630408143;
// System.Func`2<IndustrialApp.Models.ContainerPartContent,System.Boolean>
struct Func_2_t3015740379;
// System.Func`2<IndustrialApp.Models.TaskElement,System.Boolean>
struct Func_2_t652283465;
// System.Func`2<IndustrialApp.Models.Type,System.Boolean>
struct Func_2_t2739021043;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3759279471;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;

extern RuntimeClass* Action_1_t258579599_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3375313721_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3969096203_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t438459107_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t830001503_il2cpp_TypeInfo_var;
extern RuntimeClass* Comparison_1_t2863815245_il2cpp_TypeInfo_var;
extern RuntimeClass* ContainerPartContentProvider_t2760789786_il2cpp_TypeInfo_var;
extern RuntimeClass* ContainerPartContent_t1730771384_il2cpp_TypeInfo_var;
extern RuntimeClass* ContainerPartProvider_t3752118680_il2cpp_TypeInfo_var;
extern RuntimeClass* ContainerPart_t657533908_il2cpp_TypeInfo_var;
extern RuntimeClass* Container_t316474441_il2cpp_TypeInfo_var;
extern RuntimeClass* Data_t2790604980_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t2739021043_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t3015740379_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t3630408143_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t652283465_il2cpp_TypeInfo_var;
extern RuntimeClass* INetworkProvider_t2893229667_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1788549183_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2129608650_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t265991512_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3202846126_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t86112004_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t973736054_il2cpp_TypeInfo_var;
extern RuntimeClass* NetworkProvider_t1853015457_il2cpp_TypeInfo_var;
extern RuntimeClass* Presenter_t2628193080_il2cpp_TypeInfo_var;
extern RuntimeClass* TaskElementProvider_t4208168369_il2cpp_TypeInfo_var;
extern RuntimeClass* TaskElement_t3088884066_il2cpp_TypeInfo_var;
extern RuntimeClass* TaskProvider_t1351891238_il2cpp_TypeInfo_var;
extern RuntimeClass* Task_t2909004558_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeProvider_t516275896_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t3796628608_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass0_0_t1343003519_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass0_0_t1688314418_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass0_0_t3017055237_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass1_0_t1249878227_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1066350946;
extern String_t* _stringLiteral1129251956;
extern String_t* _stringLiteral1631663451;
extern String_t* _stringLiteral1754612247;
extern String_t* _stringLiteral2129715005;
extern String_t* _stringLiteral2176608473;
extern String_t* _stringLiteral2272470971;
extern String_t* _stringLiteral2283874966;
extern String_t* _stringLiteral2353969269;
extern String_t* _stringLiteral2384747326;
extern String_t* _stringLiteral2412508795;
extern String_t* _stringLiteral2423832746;
extern String_t* _stringLiteral2483846703;
extern String_t* _stringLiteral2516846080;
extern String_t* _stringLiteral25741930;
extern String_t* _stringLiteral2579151324;
extern String_t* _stringLiteral2631617447;
extern String_t* _stringLiteral3067833062;
extern String_t* _stringLiteral3071356890;
extern String_t* _stringLiteral314648255;
extern String_t* _stringLiteral3391198747;
extern String_t* _stringLiteral3452614531;
extern String_t* _stringLiteral3578084782;
extern String_t* _stringLiteral3650924909;
extern String_t* _stringLiteral3774154421;
extern String_t* _stringLiteral3867147580;
extern String_t* _stringLiteral3886213331;
extern String_t* _stringLiteral4079358085;
extern String_t* _stringLiteral4161747271;
extern String_t* _stringLiteral4189730914;
extern String_t* _stringLiteral4252703562;
extern String_t* _stringLiteral620603308;
extern String_t* _stringLiteral726238142;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral866995314;
extern String_t* _stringLiteral922710549;
extern String_t* _stringLiteral929935725;
extern const RuntimeMethod* Action_1_Invoke_m1761487300_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m378731122_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m3965891849_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m4017256563_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m924010743_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m1607596760_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m326101804_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m4034923160_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m4087466066_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m801666496_RuntimeMethod_var;
extern const RuntimeMethod* Comparison_1__ctor_m480731477_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_FirstOrDefault_TisContainerPartContent_t1730771384_m105442033_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_FirstOrDefault_TisContainerPart_t657533908_m2171362115_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_FirstOrDefault_TisType_t3796628608_m990579966_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_TisContainerPartContent_t1730771384_m3454200384_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_TisTaskElement_t3088884066_m2657642510_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Where_TisContainerPartContent_t1730771384_m3645680843_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Where_TisContainerPart_t657533908_m2790318315_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Where_TisTaskElement_t3088884066_m2999901523_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Where_TisType_t3796628608_m3914285340_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m1667980302_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m4022234016_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m4167014293_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m492416703_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m131262500_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2327984056_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3045151032_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m4176142816_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m4230244688_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m52963370_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Sort_m1385941542_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1108266200_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2073288200_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2318470930_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2932880824_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3278675588_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m752663648_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m4084110266_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1718185249_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3679477170_RuntimeMethod_var;
extern const RuntimeMethod* Presenter_GetContainerPartAsyncCallback_m2059718648_RuntimeMethod_var;
extern const RuntimeMethod* Presenter_GetContainerPartContentCallback_m2711738192_RuntimeMethod_var;
extern const RuntimeMethod* Presenter_GetTaskElementsCallback_m1456055435_RuntimeMethod_var;
extern const RuntimeMethod* Presenter_GetTasksCallback_m3979892150_RuntimeMethod_var;
extern const RuntimeMethod* Presenter_GetTypeAsyncCallback_m1526958518_RuntimeMethod_var;
extern const RuntimeMethod* Presenter_SortByOrder_m1765080460_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CGetContainerPartContentAsyncU3Eb__0_m3007290703_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CGetTaskElementsToTaskAsyncU3Eb__0_m536018882_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CGetTypeAsyncU3Eb__0_m389640211_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CGetContainerPartAsyncU3Eb__0_m358351485_RuntimeMethod_var;
extern const uint32_t ContainerPartContentProvider_GetContainerPartContentAsync_m3136740307_MetadataUsageId;
extern const uint32_t ContainerPartProvider_GetContainerPartAsync_m653557885_MetadataUsageId;
extern const uint32_t Data__ctor_m3247443232_MetadataUsageId;
extern const uint32_t NetworkProvider__ctor_m3382210048_MetadataUsageId;
extern const uint32_t Presenter_DoTaskElement_m916569570_MetadataUsageId;
extern const uint32_t Presenter_GetContainerPartContentCallback_m2711738192_MetadataUsageId;
extern const uint32_t Presenter_GetContainerParts_m1678227289_MetadataUsageId;
extern const uint32_t Presenter_GetPresenter_m1125739121_MetadataUsageId;
extern const uint32_t Presenter_GetTaskElementsCallback_m1456055435_MetadataUsageId;
extern const uint32_t Presenter_GetTasksCallback_m3979892150_MetadataUsageId;
extern const uint32_t Presenter_GetTypeAsyncCallback_m1526958518_MetadataUsageId;
extern const uint32_t Presenter_Start_m1246865443_MetadataUsageId;
extern const uint32_t Presenter__ctor_m4147757247_MetadataUsageId;
extern const uint32_t TaskElementProvider_GetTaskElementsToTaskAsync_m618119372_MetadataUsageId;
extern const uint32_t TaskProvider_GetTasksAsync_m447590941_MetadataUsageId;
extern const uint32_t TypeProvider_GetTypeAsync_m2873725762_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;



#ifndef U3CMODULEU3E_T692745590_H
#define U3CMODULEU3E_T692745590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745590 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745590_H
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
#ifndef CONTAINER_T316474441_H
#define CONTAINER_T316474441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IndustrialApp.Models.Container
struct  Container_t316474441  : public RuntimeObject
{
public:
	// System.Int32 IndustrialApp.Models.Container::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Container_t316474441, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTAINER_T316474441_H
#ifndef CONTAINERPART_T657533908_H
#define CONTAINERPART_T657533908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IndustrialApp.Models.ContainerPart
struct  ContainerPart_t657533908  : public RuntimeObject
{
public:
	// System.Int32 IndustrialApp.Models.ContainerPart::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.Int32 IndustrialApp.Models.ContainerPart::<ContainerId>k__BackingField
	int32_t ___U3CContainerIdU3Ek__BackingField_1;
	// System.String IndustrialApp.Models.ContainerPart::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Single IndustrialApp.Models.ContainerPart::<XCoordinate>k__BackingField
	float ___U3CXCoordinateU3Ek__BackingField_3;
	// System.Single IndustrialApp.Models.ContainerPart::<YCoordinate>k__BackingField
	float ___U3CYCoordinateU3Ek__BackingField_4;
	// System.Single IndustrialApp.Models.ContainerPart::<Width>k__BackingField
	float ___U3CWidthU3Ek__BackingField_5;
	// System.Single IndustrialApp.Models.ContainerPart::<Height>k__BackingField
	float ___U3CHeightU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ContainerPart_t657533908, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CContainerIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ContainerPart_t657533908, ___U3CContainerIdU3Ek__BackingField_1)); }
	inline int32_t get_U3CContainerIdU3Ek__BackingField_1() const { return ___U3CContainerIdU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CContainerIdU3Ek__BackingField_1() { return &___U3CContainerIdU3Ek__BackingField_1; }
	inline void set_U3CContainerIdU3Ek__BackingField_1(int32_t value)
	{
		___U3CContainerIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ContainerPart_t657533908, ___U3CNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CNameU3Ek__BackingField_2() const { return ___U3CNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_2() { return &___U3CNameU3Ek__BackingField_2; }
	inline void set_U3CNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CXCoordinateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ContainerPart_t657533908, ___U3CXCoordinateU3Ek__BackingField_3)); }
	inline float get_U3CXCoordinateU3Ek__BackingField_3() const { return ___U3CXCoordinateU3Ek__BackingField_3; }
	inline float* get_address_of_U3CXCoordinateU3Ek__BackingField_3() { return &___U3CXCoordinateU3Ek__BackingField_3; }
	inline void set_U3CXCoordinateU3Ek__BackingField_3(float value)
	{
		___U3CXCoordinateU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CYCoordinateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ContainerPart_t657533908, ___U3CYCoordinateU3Ek__BackingField_4)); }
	inline float get_U3CYCoordinateU3Ek__BackingField_4() const { return ___U3CYCoordinateU3Ek__BackingField_4; }
	inline float* get_address_of_U3CYCoordinateU3Ek__BackingField_4() { return &___U3CYCoordinateU3Ek__BackingField_4; }
	inline void set_U3CYCoordinateU3Ek__BackingField_4(float value)
	{
		___U3CYCoordinateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ContainerPart_t657533908, ___U3CWidthU3Ek__BackingField_5)); }
	inline float get_U3CWidthU3Ek__BackingField_5() const { return ___U3CWidthU3Ek__BackingField_5; }
	inline float* get_address_of_U3CWidthU3Ek__BackingField_5() { return &___U3CWidthU3Ek__BackingField_5; }
	inline void set_U3CWidthU3Ek__BackingField_5(float value)
	{
		___U3CWidthU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ContainerPart_t657533908, ___U3CHeightU3Ek__BackingField_6)); }
	inline float get_U3CHeightU3Ek__BackingField_6() const { return ___U3CHeightU3Ek__BackingField_6; }
	inline float* get_address_of_U3CHeightU3Ek__BackingField_6() { return &___U3CHeightU3Ek__BackingField_6; }
	inline void set_U3CHeightU3Ek__BackingField_6(float value)
	{
		___U3CHeightU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTAINERPART_T657533908_H
#ifndef CONTAINERPARTCONTENT_T1730771384_H
#define CONTAINERPARTCONTENT_T1730771384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IndustrialApp.Models.ContainerPartContent
struct  ContainerPartContent_t1730771384  : public RuntimeObject
{
public:
	// System.Int32 IndustrialApp.Models.ContainerPartContent::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.Int32 IndustrialApp.Models.ContainerPartContent::<ContainerPartId>k__BackingField
	int32_t ___U3CContainerPartIdU3Ek__BackingField_1;
	// System.Int32 IndustrialApp.Models.ContainerPartContent::<TypeId>k__BackingField
	int32_t ___U3CTypeIdU3Ek__BackingField_2;
	// System.Int32 IndustrialApp.Models.ContainerPartContent::<Amount>k__BackingField
	int32_t ___U3CAmountU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ContainerPartContent_t1730771384, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CContainerPartIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ContainerPartContent_t1730771384, ___U3CContainerPartIdU3Ek__BackingField_1)); }
	inline int32_t get_U3CContainerPartIdU3Ek__BackingField_1() const { return ___U3CContainerPartIdU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CContainerPartIdU3Ek__BackingField_1() { return &___U3CContainerPartIdU3Ek__BackingField_1; }
	inline void set_U3CContainerPartIdU3Ek__BackingField_1(int32_t value)
	{
		___U3CContainerPartIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTypeIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ContainerPartContent_t1730771384, ___U3CTypeIdU3Ek__BackingField_2)); }
	inline int32_t get_U3CTypeIdU3Ek__BackingField_2() const { return ___U3CTypeIdU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTypeIdU3Ek__BackingField_2() { return &___U3CTypeIdU3Ek__BackingField_2; }
	inline void set_U3CTypeIdU3Ek__BackingField_2(int32_t value)
	{
		___U3CTypeIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CAmountU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ContainerPartContent_t1730771384, ___U3CAmountU3Ek__BackingField_3)); }
	inline int32_t get_U3CAmountU3Ek__BackingField_3() const { return ___U3CAmountU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CAmountU3Ek__BackingField_3() { return &___U3CAmountU3Ek__BackingField_3; }
	inline void set_U3CAmountU3Ek__BackingField_3(int32_t value)
	{
		___U3CAmountU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTAINERPARTCONTENT_T1730771384_H
#ifndef TASK_T2909004558_H
#define TASK_T2909004558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IndustrialApp.Models.Task
struct  Task_t2909004558  : public RuntimeObject
{
public:
	// System.Int32 IndustrialApp.Models.Task::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.String IndustrialApp.Models.Task::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.String IndustrialApp.Models.Task::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Task_t2909004558, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Task_t2909004558, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Task_t2909004558, ___U3CDescriptionU3Ek__BackingField_2)); }
	inline String_t* get_U3CDescriptionU3Ek__BackingField_2() const { return ___U3CDescriptionU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CDescriptionU3Ek__BackingField_2() { return &___U3CDescriptionU3Ek__BackingField_2; }
	inline void set_U3CDescriptionU3Ek__BackingField_2(String_t* value)
	{
		___U3CDescriptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDescriptionU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_T2909004558_H
#ifndef TASKELEMENT_T3088884066_H
#define TASKELEMENT_T3088884066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IndustrialApp.Models.TaskElement
struct  TaskElement_t3088884066  : public RuntimeObject
{
public:
	// System.Int32 IndustrialApp.Models.TaskElement::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.String IndustrialApp.Models.TaskElement::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.String IndustrialApp.Models.TaskElement::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_2;
	// System.Int32 IndustrialApp.Models.TaskElement::<Order>k__BackingField
	int32_t ___U3COrderU3Ek__BackingField_3;
	// System.Int32 IndustrialApp.Models.TaskElement::<TaskId>k__BackingField
	int32_t ___U3CTaskIdU3Ek__BackingField_4;
	// System.Int32 IndustrialApp.Models.TaskElement::<TypeId>k__BackingField
	int32_t ___U3CTypeIdU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TaskElement_t3088884066, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TaskElement_t3088884066, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TaskElement_t3088884066, ___U3CDescriptionU3Ek__BackingField_2)); }
	inline String_t* get_U3CDescriptionU3Ek__BackingField_2() const { return ___U3CDescriptionU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CDescriptionU3Ek__BackingField_2() { return &___U3CDescriptionU3Ek__BackingField_2; }
	inline void set_U3CDescriptionU3Ek__BackingField_2(String_t* value)
	{
		___U3CDescriptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDescriptionU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3COrderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TaskElement_t3088884066, ___U3COrderU3Ek__BackingField_3)); }
	inline int32_t get_U3COrderU3Ek__BackingField_3() const { return ___U3COrderU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3COrderU3Ek__BackingField_3() { return &___U3COrderU3Ek__BackingField_3; }
	inline void set_U3COrderU3Ek__BackingField_3(int32_t value)
	{
		___U3COrderU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTaskIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TaskElement_t3088884066, ___U3CTaskIdU3Ek__BackingField_4)); }
	inline int32_t get_U3CTaskIdU3Ek__BackingField_4() const { return ___U3CTaskIdU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CTaskIdU3Ek__BackingField_4() { return &___U3CTaskIdU3Ek__BackingField_4; }
	inline void set_U3CTaskIdU3Ek__BackingField_4(int32_t value)
	{
		___U3CTaskIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CTypeIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TaskElement_t3088884066, ___U3CTypeIdU3Ek__BackingField_5)); }
	inline int32_t get_U3CTypeIdU3Ek__BackingField_5() const { return ___U3CTypeIdU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CTypeIdU3Ek__BackingField_5() { return &___U3CTypeIdU3Ek__BackingField_5; }
	inline void set_U3CTypeIdU3Ek__BackingField_5(int32_t value)
	{
		___U3CTypeIdU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKELEMENT_T3088884066_H
#ifndef TYPE_T3796628608_H
#define TYPE_T3796628608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IndustrialApp.Models.Type
struct  Type_t3796628608  : public RuntimeObject
{
public:
	// System.Int32 IndustrialApp.Models.Type::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.String IndustrialApp.Models.Type::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.String IndustrialApp.Models.Type::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_2;
	// System.String IndustrialApp.Models.Type::<UUID>k__BackingField
	String_t* ___U3CUUIDU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Type_t3796628608, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Type_t3796628608, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Type_t3796628608, ___U3CDescriptionU3Ek__BackingField_2)); }
	inline String_t* get_U3CDescriptionU3Ek__BackingField_2() const { return ___U3CDescriptionU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CDescriptionU3Ek__BackingField_2() { return &___U3CDescriptionU3Ek__BackingField_2; }
	inline void set_U3CDescriptionU3Ek__BackingField_2(String_t* value)
	{
		___U3CDescriptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDescriptionU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CUUIDU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Type_t3796628608, ___U3CUUIDU3Ek__BackingField_3)); }
	inline String_t* get_U3CUUIDU3Ek__BackingField_3() const { return ___U3CUUIDU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CUUIDU3Ek__BackingField_3() { return &___U3CUUIDU3Ek__BackingField_3; }
	inline void set_U3CUUIDU3Ek__BackingField_3(String_t* value)
	{
		___U3CUUIDU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUUIDU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T3796628608_H
#ifndef NETWORKPROVIDER_T1853015457_H
#define NETWORKPROVIDER_T1853015457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IndustrialApp.Network.NetworkProvider
struct  NetworkProvider_t1853015457  : public RuntimeObject
{
public:
	// IndustrialApp.Network.Providers.ContainerPartContentProvider IndustrialApp.Network.NetworkProvider::ContainerPartContentProvider
	ContainerPartContentProvider_t2760789786 * ___ContainerPartContentProvider_0;
	// IndustrialApp.Network.Providers.ContainerPartProvider IndustrialApp.Network.NetworkProvider::ContainerPartProvider
	ContainerPartProvider_t3752118680 * ___ContainerPartProvider_1;
	// IndustrialApp.Network.Providers.TaskElementProvider IndustrialApp.Network.NetworkProvider::TaskElementProvider
	TaskElementProvider_t4208168369 * ___TaskElementProvider_2;
	// IndustrialApp.Network.Providers.TaskProvider IndustrialApp.Network.NetworkProvider::TaskProvider
	TaskProvider_t1351891238 * ___TaskProvider_3;
	// IndustrialApp.Network.Providers.TypeProvider IndustrialApp.Network.NetworkProvider::TypeProvider
	TypeProvider_t516275896 * ___TypeProvider_4;

public:
	inline static int32_t get_offset_of_ContainerPartContentProvider_0() { return static_cast<int32_t>(offsetof(NetworkProvider_t1853015457, ___ContainerPartContentProvider_0)); }
	inline ContainerPartContentProvider_t2760789786 * get_ContainerPartContentProvider_0() const { return ___ContainerPartContentProvider_0; }
	inline ContainerPartContentProvider_t2760789786 ** get_address_of_ContainerPartContentProvider_0() { return &___ContainerPartContentProvider_0; }
	inline void set_ContainerPartContentProvider_0(ContainerPartContentProvider_t2760789786 * value)
	{
		___ContainerPartContentProvider_0 = value;
		Il2CppCodeGenWriteBarrier((&___ContainerPartContentProvider_0), value);
	}

	inline static int32_t get_offset_of_ContainerPartProvider_1() { return static_cast<int32_t>(offsetof(NetworkProvider_t1853015457, ___ContainerPartProvider_1)); }
	inline ContainerPartProvider_t3752118680 * get_ContainerPartProvider_1() const { return ___ContainerPartProvider_1; }
	inline ContainerPartProvider_t3752118680 ** get_address_of_ContainerPartProvider_1() { return &___ContainerPartProvider_1; }
	inline void set_ContainerPartProvider_1(ContainerPartProvider_t3752118680 * value)
	{
		___ContainerPartProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___ContainerPartProvider_1), value);
	}

	inline static int32_t get_offset_of_TaskElementProvider_2() { return static_cast<int32_t>(offsetof(NetworkProvider_t1853015457, ___TaskElementProvider_2)); }
	inline TaskElementProvider_t4208168369 * get_TaskElementProvider_2() const { return ___TaskElementProvider_2; }
	inline TaskElementProvider_t4208168369 ** get_address_of_TaskElementProvider_2() { return &___TaskElementProvider_2; }
	inline void set_TaskElementProvider_2(TaskElementProvider_t4208168369 * value)
	{
		___TaskElementProvider_2 = value;
		Il2CppCodeGenWriteBarrier((&___TaskElementProvider_2), value);
	}

	inline static int32_t get_offset_of_TaskProvider_3() { return static_cast<int32_t>(offsetof(NetworkProvider_t1853015457, ___TaskProvider_3)); }
	inline TaskProvider_t1351891238 * get_TaskProvider_3() const { return ___TaskProvider_3; }
	inline TaskProvider_t1351891238 ** get_address_of_TaskProvider_3() { return &___TaskProvider_3; }
	inline void set_TaskProvider_3(TaskProvider_t1351891238 * value)
	{
		___TaskProvider_3 = value;
		Il2CppCodeGenWriteBarrier((&___TaskProvider_3), value);
	}

	inline static int32_t get_offset_of_TypeProvider_4() { return static_cast<int32_t>(offsetof(NetworkProvider_t1853015457, ___TypeProvider_4)); }
	inline TypeProvider_t516275896 * get_TypeProvider_4() const { return ___TypeProvider_4; }
	inline TypeProvider_t516275896 ** get_address_of_TypeProvider_4() { return &___TypeProvider_4; }
	inline void set_TypeProvider_4(TypeProvider_t516275896 * value)
	{
		___TypeProvider_4 = value;
		Il2CppCodeGenWriteBarrier((&___TypeProvider_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKPROVIDER_T1853015457_H
#ifndef CONTAINERPARTCONTENTPROVIDER_T2760789786_H
#define CONTAINERPARTCONTENTPROVIDER_T2760789786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IndustrialApp.Network.Providers.ContainerPartContentProvider
struct  ContainerPartContentProvider_t2760789786  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTAINERPARTCONTENTPROVIDER_T2760789786_H
#ifndef U3CU3EC__DISPLAYCLASS0_0_T1343003519_H
#define U3CU3EC__DISPLAYCLASS0_0_T1343003519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IndustrialApp.Network.Providers.ContainerPartContentProvider/<>c__DisplayClass0_0
struct  U3CU3Ec__DisplayClass0_0_t1343003519  : public RuntimeObject
{
public:
	// System.Int32 IndustrialApp.Network.Providers.ContainerPartContentProvider/<>c__DisplayClass0_0::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t1343003519, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS0_0_T1343003519_H
#ifndef CONTAINERPARTPROVIDER_T3752118680_H
#define CONTAINERPARTPROVIDER_T3752118680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IndustrialApp.Network.Providers.ContainerPartProvider
struct  ContainerPartProvider_t3752118680  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTAINERPARTPROVIDER_T3752118680_H
#ifndef U3CU3EC__DISPLAYCLASS1_0_T1249878227_H
#define U3CU3EC__DISPLAYCLASS1_0_T1249878227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IndustrialApp.Network.Providers.ContainerPartProvider/<>c__DisplayClass1_0
struct  U3CU3Ec__DisplayClass1_0_t1249878227  : public RuntimeObject
{
public:
	// System.Int32 IndustrialApp.Network.Providers.ContainerPartProvider/<>c__DisplayClass1_0::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t1249878227, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS1_0_T1249878227_H
#ifndef TASKELEMENTPROVIDER_T4208168369_H
#define TASKELEMENTPROVIDER_T4208168369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IndustrialApp.Network.Providers.TaskElementProvider
struct  TaskElementProvider_t4208168369  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKELEMENTPROVIDER_T4208168369_H
#ifndef U3CU3EC__DISPLAYCLASS0_0_T1688314418_H
#define U3CU3EC__DISPLAYCLASS0_0_T1688314418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IndustrialApp.Network.Providers.TaskElementProvider/<>c__DisplayClass0_0
struct  U3CU3Ec__DisplayClass0_0_t1688314418  : public RuntimeObject
{
public:
	// System.Int32 IndustrialApp.Network.Providers.TaskElementProvider/<>c__DisplayClass0_0::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t1688314418, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS0_0_T1688314418_H
#ifndef TASKPROVIDER_T1351891238_H
#define TASKPROVIDER_T1351891238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IndustrialApp.Network.Providers.TaskProvider
struct  TaskProvider_t1351891238  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKPROVIDER_T1351891238_H
#ifndef TYPEPROVIDER_T516275896_H
#define TYPEPROVIDER_T516275896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IndustrialApp.Network.Providers.TypeProvider
struct  TypeProvider_t516275896  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEPROVIDER_T516275896_H
#ifndef U3CU3EC__DISPLAYCLASS0_0_T3017055237_H
#define U3CU3EC__DISPLAYCLASS0_0_T3017055237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IndustrialApp.Network.Providers.TypeProvider/<>c__DisplayClass0_0
struct  U3CU3Ec__DisplayClass0_0_t3017055237  : public RuntimeObject
{
public:
	// System.Int32 IndustrialApp.Network.Providers.TypeProvider/<>c__DisplayClass0_0::typeId
	int32_t ___typeId_0;

public:
	inline static int32_t get_offset_of_typeId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t3017055237, ___typeId_0)); }
	inline int32_t get_typeId_0() const { return ___typeId_0; }
	inline int32_t* get_address_of_typeId_0() { return &___typeId_0; }
	inline void set_typeId_0(int32_t value)
	{
		___typeId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS0_0_T3017055237_H
#ifndef PRESENTER_T2628193080_H
#define PRESENTER_T2628193080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IndustrialApp.Presenter.Presenter
struct  Presenter_t2628193080  : public RuntimeObject
{
public:
	// IndustrialApp.Models.Task IndustrialApp.Presenter.Presenter::<currentTask>k__BackingField
	Task_t2909004558 * ___U3CcurrentTaskU3Ek__BackingField_0;
	// IndustrialApp.Models.Type IndustrialApp.Presenter.Presenter::<currentType>k__BackingField
	Type_t3796628608 * ___U3CcurrentTypeU3Ek__BackingField_1;
	// System.Boolean IndustrialApp.Presenter.Presenter::<containerPartChanged>k__BackingField
	bool ___U3CcontainerPartChangedU3Ek__BackingField_2;
	// IndustrialApp.Models.ContainerPart IndustrialApp.Presenter.Presenter::<currentContainerPart>k__BackingField
	ContainerPart_t657533908 * ___U3CcurrentContainerPartU3Ek__BackingField_3;
	// IndustrialApp.Models.TaskElement IndustrialApp.Presenter.Presenter::<currentTaskElement>k__BackingField
	TaskElement_t3088884066 * ___U3CcurrentTaskElementU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement> IndustrialApp.Presenter.Presenter::<taskelements>k__BackingField
	List_1_t265991512 * ___U3CtaskelementsU3Ek__BackingField_5;
	// System.Int32 IndustrialApp.Presenter.Presenter::<currentElement>k__BackingField
	int32_t ___U3CcurrentElementU3Ek__BackingField_6;
	// System.Boolean IndustrialApp.Presenter.Presenter::<TypeIsReady>k__BackingField
	bool ___U3CTypeIsReadyU3Ek__BackingField_7;
	// IndustrialApp.Network.INetworkProvider IndustrialApp.Presenter.Presenter::networkProvider
	RuntimeObject* ___networkProvider_9;

public:
	inline static int32_t get_offset_of_U3CcurrentTaskU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Presenter_t2628193080, ___U3CcurrentTaskU3Ek__BackingField_0)); }
	inline Task_t2909004558 * get_U3CcurrentTaskU3Ek__BackingField_0() const { return ___U3CcurrentTaskU3Ek__BackingField_0; }
	inline Task_t2909004558 ** get_address_of_U3CcurrentTaskU3Ek__BackingField_0() { return &___U3CcurrentTaskU3Ek__BackingField_0; }
	inline void set_U3CcurrentTaskU3Ek__BackingField_0(Task_t2909004558 * value)
	{
		___U3CcurrentTaskU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcurrentTaskU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CcurrentTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Presenter_t2628193080, ___U3CcurrentTypeU3Ek__BackingField_1)); }
	inline Type_t3796628608 * get_U3CcurrentTypeU3Ek__BackingField_1() const { return ___U3CcurrentTypeU3Ek__BackingField_1; }
	inline Type_t3796628608 ** get_address_of_U3CcurrentTypeU3Ek__BackingField_1() { return &___U3CcurrentTypeU3Ek__BackingField_1; }
	inline void set_U3CcurrentTypeU3Ek__BackingField_1(Type_t3796628608 * value)
	{
		___U3CcurrentTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcurrentTypeU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CcontainerPartChangedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Presenter_t2628193080, ___U3CcontainerPartChangedU3Ek__BackingField_2)); }
	inline bool get_U3CcontainerPartChangedU3Ek__BackingField_2() const { return ___U3CcontainerPartChangedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CcontainerPartChangedU3Ek__BackingField_2() { return &___U3CcontainerPartChangedU3Ek__BackingField_2; }
	inline void set_U3CcontainerPartChangedU3Ek__BackingField_2(bool value)
	{
		___U3CcontainerPartChangedU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentContainerPartU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Presenter_t2628193080, ___U3CcurrentContainerPartU3Ek__BackingField_3)); }
	inline ContainerPart_t657533908 * get_U3CcurrentContainerPartU3Ek__BackingField_3() const { return ___U3CcurrentContainerPartU3Ek__BackingField_3; }
	inline ContainerPart_t657533908 ** get_address_of_U3CcurrentContainerPartU3Ek__BackingField_3() { return &___U3CcurrentContainerPartU3Ek__BackingField_3; }
	inline void set_U3CcurrentContainerPartU3Ek__BackingField_3(ContainerPart_t657533908 * value)
	{
		___U3CcurrentContainerPartU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcurrentContainerPartU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CcurrentTaskElementU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Presenter_t2628193080, ___U3CcurrentTaskElementU3Ek__BackingField_4)); }
	inline TaskElement_t3088884066 * get_U3CcurrentTaskElementU3Ek__BackingField_4() const { return ___U3CcurrentTaskElementU3Ek__BackingField_4; }
	inline TaskElement_t3088884066 ** get_address_of_U3CcurrentTaskElementU3Ek__BackingField_4() { return &___U3CcurrentTaskElementU3Ek__BackingField_4; }
	inline void set_U3CcurrentTaskElementU3Ek__BackingField_4(TaskElement_t3088884066 * value)
	{
		___U3CcurrentTaskElementU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcurrentTaskElementU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CtaskelementsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Presenter_t2628193080, ___U3CtaskelementsU3Ek__BackingField_5)); }
	inline List_1_t265991512 * get_U3CtaskelementsU3Ek__BackingField_5() const { return ___U3CtaskelementsU3Ek__BackingField_5; }
	inline List_1_t265991512 ** get_address_of_U3CtaskelementsU3Ek__BackingField_5() { return &___U3CtaskelementsU3Ek__BackingField_5; }
	inline void set_U3CtaskelementsU3Ek__BackingField_5(List_1_t265991512 * value)
	{
		___U3CtaskelementsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtaskelementsU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CcurrentElementU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Presenter_t2628193080, ___U3CcurrentElementU3Ek__BackingField_6)); }
	inline int32_t get_U3CcurrentElementU3Ek__BackingField_6() const { return ___U3CcurrentElementU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CcurrentElementU3Ek__BackingField_6() { return &___U3CcurrentElementU3Ek__BackingField_6; }
	inline void set_U3CcurrentElementU3Ek__BackingField_6(int32_t value)
	{
		___U3CcurrentElementU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CTypeIsReadyU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Presenter_t2628193080, ___U3CTypeIsReadyU3Ek__BackingField_7)); }
	inline bool get_U3CTypeIsReadyU3Ek__BackingField_7() const { return ___U3CTypeIsReadyU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CTypeIsReadyU3Ek__BackingField_7() { return &___U3CTypeIsReadyU3Ek__BackingField_7; }
	inline void set_U3CTypeIsReadyU3Ek__BackingField_7(bool value)
	{
		___U3CTypeIsReadyU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_networkProvider_9() { return static_cast<int32_t>(offsetof(Presenter_t2628193080, ___networkProvider_9)); }
	inline RuntimeObject* get_networkProvider_9() const { return ___networkProvider_9; }
	inline RuntimeObject** get_address_of_networkProvider_9() { return &___networkProvider_9; }
	inline void set_networkProvider_9(RuntimeObject* value)
	{
		___networkProvider_9 = value;
		Il2CppCodeGenWriteBarrier((&___networkProvider_9), value);
	}
};

struct Presenter_t2628193080_StaticFields
{
public:
	// IndustrialApp.Presenter.Presenter IndustrialApp.Presenter.Presenter::instance
	Presenter_t2628193080 * ___instance_8;

public:
	inline static int32_t get_offset_of_instance_8() { return static_cast<int32_t>(offsetof(Presenter_t2628193080_StaticFields, ___instance_8)); }
	inline Presenter_t2628193080 * get_instance_8() const { return ___instance_8; }
	inline Presenter_t2628193080 ** get_address_of_instance_8() { return &___instance_8; }
	inline void set_instance_8(Presenter_t2628193080 * value)
	{
		___instance_8 = value;
		Il2CppCodeGenWriteBarrier((&___instance_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESENTER_T2628193080_H
#ifndef DATA_T2790604980_H
#define DATA_T2790604980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IndustrialApp.TestData.Data
struct  Data_t2790604980  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<IndustrialApp.Models.Task> IndustrialApp.TestData.Data::taskList
	List_1_t86112004 * ___taskList_0;
	// System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement> IndustrialApp.TestData.Data::taskElementList
	List_1_t265991512 * ___taskElementList_1;
	// System.Collections.Generic.List`1<IndustrialApp.Models.Type> IndustrialApp.TestData.Data::typeList
	List_1_t973736054 * ___typeList_2;
	// System.Collections.Generic.List`1<IndustrialApp.Models.Container> IndustrialApp.TestData.Data::containerList
	List_1_t1788549183 * ___containerList_3;
	// System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPart> IndustrialApp.TestData.Data::containerPartList
	List_1_t2129608650 * ___containerPartList_4;
	// System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPartContent> IndustrialApp.TestData.Data::containerPartContentList
	List_1_t3202846126 * ___containerPartContentList_5;

public:
	inline static int32_t get_offset_of_taskList_0() { return static_cast<int32_t>(offsetof(Data_t2790604980, ___taskList_0)); }
	inline List_1_t86112004 * get_taskList_0() const { return ___taskList_0; }
	inline List_1_t86112004 ** get_address_of_taskList_0() { return &___taskList_0; }
	inline void set_taskList_0(List_1_t86112004 * value)
	{
		___taskList_0 = value;
		Il2CppCodeGenWriteBarrier((&___taskList_0), value);
	}

	inline static int32_t get_offset_of_taskElementList_1() { return static_cast<int32_t>(offsetof(Data_t2790604980, ___taskElementList_1)); }
	inline List_1_t265991512 * get_taskElementList_1() const { return ___taskElementList_1; }
	inline List_1_t265991512 ** get_address_of_taskElementList_1() { return &___taskElementList_1; }
	inline void set_taskElementList_1(List_1_t265991512 * value)
	{
		___taskElementList_1 = value;
		Il2CppCodeGenWriteBarrier((&___taskElementList_1), value);
	}

	inline static int32_t get_offset_of_typeList_2() { return static_cast<int32_t>(offsetof(Data_t2790604980, ___typeList_2)); }
	inline List_1_t973736054 * get_typeList_2() const { return ___typeList_2; }
	inline List_1_t973736054 ** get_address_of_typeList_2() { return &___typeList_2; }
	inline void set_typeList_2(List_1_t973736054 * value)
	{
		___typeList_2 = value;
		Il2CppCodeGenWriteBarrier((&___typeList_2), value);
	}

	inline static int32_t get_offset_of_containerList_3() { return static_cast<int32_t>(offsetof(Data_t2790604980, ___containerList_3)); }
	inline List_1_t1788549183 * get_containerList_3() const { return ___containerList_3; }
	inline List_1_t1788549183 ** get_address_of_containerList_3() { return &___containerList_3; }
	inline void set_containerList_3(List_1_t1788549183 * value)
	{
		___containerList_3 = value;
		Il2CppCodeGenWriteBarrier((&___containerList_3), value);
	}

	inline static int32_t get_offset_of_containerPartList_4() { return static_cast<int32_t>(offsetof(Data_t2790604980, ___containerPartList_4)); }
	inline List_1_t2129608650 * get_containerPartList_4() const { return ___containerPartList_4; }
	inline List_1_t2129608650 ** get_address_of_containerPartList_4() { return &___containerPartList_4; }
	inline void set_containerPartList_4(List_1_t2129608650 * value)
	{
		___containerPartList_4 = value;
		Il2CppCodeGenWriteBarrier((&___containerPartList_4), value);
	}

	inline static int32_t get_offset_of_containerPartContentList_5() { return static_cast<int32_t>(offsetof(Data_t2790604980, ___containerPartContentList_5)); }
	inline List_1_t3202846126 * get_containerPartContentList_5() const { return ___containerPartContentList_5; }
	inline List_1_t3202846126 ** get_address_of_containerPartContentList_5() { return &___containerPartContentList_5; }
	inline void set_containerPartContentList_5(List_1_t3202846126 * value)
	{
		___containerPartContentList_5 = value;
		Il2CppCodeGenWriteBarrier((&___containerPartContentList_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATA_T2790604980_H
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
#ifndef LIST_1_T1788549183_H
#define LIST_1_T1788549183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<IndustrialApp.Models.Container>
struct  List_1_t1788549183  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ContainerU5BU5D_t722656372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1788549183, ____items_1)); }
	inline ContainerU5BU5D_t722656372* get__items_1() const { return ____items_1; }
	inline ContainerU5BU5D_t722656372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ContainerU5BU5D_t722656372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1788549183, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1788549183, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1788549183, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1788549183_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ContainerU5BU5D_t722656372* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1788549183_StaticFields, ____emptyArray_5)); }
	inline ContainerU5BU5D_t722656372* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ContainerU5BU5D_t722656372** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ContainerU5BU5D_t722656372* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1788549183_H
#ifndef LIST_1_T2129608650_H
#define LIST_1_T2129608650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPart>
struct  List_1_t2129608650  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ContainerPartU5BU5D_t2715067997* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2129608650, ____items_1)); }
	inline ContainerPartU5BU5D_t2715067997* get__items_1() const { return ____items_1; }
	inline ContainerPartU5BU5D_t2715067997** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ContainerPartU5BU5D_t2715067997* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2129608650, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2129608650, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2129608650, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2129608650_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ContainerPartU5BU5D_t2715067997* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2129608650_StaticFields, ____emptyArray_5)); }
	inline ContainerPartU5BU5D_t2715067997* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ContainerPartU5BU5D_t2715067997** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ContainerPartU5BU5D_t2715067997* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2129608650_H
#ifndef LIST_1_T3202846126_H
#define LIST_1_T3202846126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPartContent>
struct  List_1_t3202846126  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ContainerPartContentU5BU5D_t2100400233* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3202846126, ____items_1)); }
	inline ContainerPartContentU5BU5D_t2100400233* get__items_1() const { return ____items_1; }
	inline ContainerPartContentU5BU5D_t2100400233** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ContainerPartContentU5BU5D_t2100400233* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3202846126, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3202846126, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3202846126, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3202846126_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ContainerPartContentU5BU5D_t2100400233* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3202846126_StaticFields, ____emptyArray_5)); }
	inline ContainerPartContentU5BU5D_t2100400233* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ContainerPartContentU5BU5D_t2100400233** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ContainerPartContentU5BU5D_t2100400233* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3202846126_H
#ifndef LIST_1_T86112004_H
#define LIST_1_T86112004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<IndustrialApp.Models.Task>
struct  List_1_t86112004  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TaskU5BU5D_t3452836091* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t86112004, ____items_1)); }
	inline TaskU5BU5D_t3452836091* get__items_1() const { return ____items_1; }
	inline TaskU5BU5D_t3452836091** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TaskU5BU5D_t3452836091* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t86112004, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t86112004, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t86112004, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t86112004_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TaskU5BU5D_t3452836091* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t86112004_StaticFields, ____emptyArray_5)); }
	inline TaskU5BU5D_t3452836091* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TaskU5BU5D_t3452836091** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TaskU5BU5D_t3452836091* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T86112004_H
#ifndef LIST_1_T265991512_H
#define LIST_1_T265991512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement>
struct  List_1_t265991512  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TaskElementU5BU5D_t4031910615* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t265991512, ____items_1)); }
	inline TaskElementU5BU5D_t4031910615* get__items_1() const { return ____items_1; }
	inline TaskElementU5BU5D_t4031910615** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TaskElementU5BU5D_t4031910615* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t265991512, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t265991512, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t265991512, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t265991512_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TaskElementU5BU5D_t4031910615* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t265991512_StaticFields, ____emptyArray_5)); }
	inline TaskElementU5BU5D_t4031910615* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TaskElementU5BU5D_t4031910615** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TaskElementU5BU5D_t4031910615* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T265991512_H
#ifndef LIST_1_T973736054_H
#define LIST_1_T973736054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<IndustrialApp.Models.Type>
struct  List_1_t973736054  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TypeU5BU5D_t1823680897* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t973736054, ____items_1)); }
	inline TypeU5BU5D_t1823680897* get__items_1() const { return ____items_1; }
	inline TypeU5BU5D_t1823680897** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TypeU5BU5D_t1823680897* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t973736054, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t973736054, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t973736054, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t973736054_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TypeU5BU5D_t1823680897* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t973736054_StaticFields, ____emptyArray_5)); }
	inline TypeU5BU5D_t1823680897* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TypeU5BU5D_t1823680897** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TypeU5BU5D_t1823680897* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T973736054_H
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
#ifndef ACTION_1_T830001503_H
#define ACTION_1_T830001503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<IndustrialApp.Models.ContainerPart>
struct  Action_1_t830001503  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T830001503_H
#ifndef ACTION_1_T3969096203_H
#define ACTION_1_T3969096203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<IndustrialApp.Models.Type>
struct  Action_1_t3969096203  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3969096203_H
#ifndef ACTION_1_T3375313721_H
#define ACTION_1_T3375313721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPartContent>>
struct  Action_1_t3375313721  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3375313721_H
#ifndef ACTION_1_T258579599_H
#define ACTION_1_T258579599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.Task>>
struct  Action_1_t258579599  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T258579599_H
#ifndef ACTION_1_T438459107_H
#define ACTION_1_T438459107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement>>
struct  Action_1_t438459107  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T438459107_H
#ifndef COMPARISON_1_T2863815245_H
#define COMPARISON_1_T2863815245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<IndustrialApp.Models.TaskElement>
struct  Comparison_1_t2863815245  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T2863815245_H
#ifndef FUNC_2_T3630408143_H
#define FUNC_2_T3630408143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<IndustrialApp.Models.ContainerPart,System.Boolean>
struct  Func_2_t3630408143  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3630408143_H
#ifndef FUNC_2_T3015740379_H
#define FUNC_2_T3015740379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<IndustrialApp.Models.ContainerPartContent,System.Boolean>
struct  Func_2_t3015740379  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3015740379_H
#ifndef FUNC_2_T652283465_H
#define FUNC_2_T652283465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<IndustrialApp.Models.TaskElement,System.Boolean>
struct  Func_2_t652283465  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T652283465_H
#ifndef FUNC_2_T2739021043_H
#define FUNC_2_T2739021043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<IndustrialApp.Models.Type,System.Boolean>
struct  Func_2_t2739021043  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2739021043_H


// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_m135484220_gshared (Func_2_t3759279471 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m3429873137_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3759279471 * p1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR List_1_t257213610 * Enumerable_ToList_TisRuntimeObject_m1484080463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m3161192644_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_m2626233201_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m1328026504_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Comparison_1__ctor_m793514796_gshared (Comparison_1_t2855037343 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_Sort_m2460905229_gshared (List_1_t257213610 * __this, Comparison_1_t2855037343 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void IndustrialApp.Network.Providers.ContainerPartContentProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ContainerPartContentProvider__ctor_m3788148521 (ContainerPartContentProvider_t2760789786 * __this, const RuntimeMethod* method);
// System.Void IndustrialApp.Network.Providers.ContainerPartProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ContainerPartProvider__ctor_m3372961504 (ContainerPartProvider_t3752118680 * __this, const RuntimeMethod* method);
// System.Void IndustrialApp.Network.Providers.TaskElementProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TaskElementProvider__ctor_m1826221872 (TaskElementProvider_t4208168369 * __this, const RuntimeMethod* method);
// System.Void IndustrialApp.Network.Providers.TaskProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TaskProvider__ctor_m4060562787 (TaskProvider_t1351891238 * __this, const RuntimeMethod* method);
// System.Void IndustrialApp.Network.Providers.TypeProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TypeProvider__ctor_m705813917 (TypeProvider_t516275896 * __this, const RuntimeMethod* method);
// System.Void IndustrialApp.Network.Providers.ContainerPartProvider::GetContainerPartAsync(System.Action`1<IndustrialApp.Models.ContainerPart>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ContainerPartProvider_GetContainerPartAsync_m653557885 (ContainerPartProvider_t3752118680 * __this, Action_1_t830001503 * ___getContainerPartsCallback0, int32_t ___id1, const RuntimeMethod* method);
// System.Void IndustrialApp.Network.Providers.ContainerPartContentProvider::GetContainerPartContentAsync(System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPartContent>>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ContainerPartContentProvider_GetContainerPartContentAsync_m3136740307 (ContainerPartContentProvider_t2760789786 * __this, Action_1_t3375313721 * ___getContainerPartContentCallback0, int32_t ___id1, const RuntimeMethod* method);
// System.Void IndustrialApp.Network.Providers.TaskElementProvider::GetTaskElementsToTaskAsync(System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement>>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TaskElementProvider_GetTaskElementsToTaskAsync_m618119372 (TaskElementProvider_t4208168369 * __this, Action_1_t438459107 * ___getTaskElementsCallback0, int32_t ___id1, const RuntimeMethod* method);
// System.Void IndustrialApp.Network.Providers.TaskProvider::GetTasksAsync(System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.Task>>)
extern "C" IL2CPP_METHOD_ATTR void TaskProvider_GetTasksAsync_m447590941 (TaskProvider_t1351891238 * __this, Action_1_t258579599 * ___getTasksCallback0, const RuntimeMethod* method);
// System.Void IndustrialApp.Network.Providers.TypeProvider::GetTypeAsync(System.Action`1<IndustrialApp.Models.Type>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TypeProvider_GetTypeAsync_m2873725762 (TypeProvider_t516275896 * __this, Action_1_t3969096203 * ___getTypeAsyncCallback0, int32_t ___typeId1, const RuntimeMethod* method);
// System.Void IndustrialApp.Network.Providers.ContainerPartContentProvider/<>c__DisplayClass0_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m176941775 (U3CU3Ec__DisplayClass0_0_t1343003519 * __this, const RuntimeMethod* method);
// System.Void IndustrialApp.TestData.Data::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Data__ctor_m3247443232 (Data_t2790604980 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPartContent> IndustrialApp.TestData.Data::get_ContainerPartContentList()
extern "C" IL2CPP_METHOD_ATTR List_1_t3202846126 * Data_get_ContainerPartContentList_m2238924345 (Data_t2790604980 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<IndustrialApp.Models.ContainerPartContent,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m492416703 (Func_2_t3015740379 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3015740379 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m135484220_gshared)(__this, p0, p1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<IndustrialApp.Models.ContainerPartContent>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisContainerPartContent_t1730771384_m3645680843 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3015740379 * p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3015740379 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m3429873137_gshared)(__this /* static, unused */, p0, p1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<IndustrialApp.Models.ContainerPartContent>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t3202846126 * Enumerable_ToList_TisContainerPartContent_t1730771384_m3454200384 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  List_1_t3202846126 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m1484080463_gshared)(__this /* static, unused */, p0, method);
}
// System.Void System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPartContent>>::Invoke(!0)
inline void Action_1_Invoke_m1761487300 (Action_1_t3375313721 * __this, List_1_t3202846126 * p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3375313721 *, List_1_t3202846126 *, const RuntimeMethod*))Action_1_Invoke_m3161192644_gshared)(__this, p0, method);
}
// System.Int32 IndustrialApp.Models.ContainerPartContent::get_TypeId()
extern "C" IL2CPP_METHOD_ATTR int32_t ContainerPartContent_get_TypeId_m2979693901 (ContainerPartContent_t1730771384 * __this, const RuntimeMethod* method);
// System.Void IndustrialApp.Network.Providers.ContainerPartProvider/<>c__DisplayClass1_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m3084447337 (U3CU3Ec__DisplayClass1_0_t1249878227 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPart> IndustrialApp.TestData.Data::get_ContainerPartList()
extern "C" IL2CPP_METHOD_ATTR List_1_t2129608650 * Data_get_ContainerPartList_m2183318721 (Data_t2790604980 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<IndustrialApp.Models.ContainerPart,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4167014293 (Func_2_t3630408143 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3630408143 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m135484220_gshared)(__this, p0, p1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<IndustrialApp.Models.ContainerPart>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisContainerPart_t657533908_m2790318315 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3630408143 * p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3630408143 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m3429873137_gshared)(__this /* static, unused */, p0, p1, method);
}
// !!0 System.Linq.Enumerable::FirstOrDefault<IndustrialApp.Models.ContainerPart>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ContainerPart_t657533908 * Enumerable_FirstOrDefault_TisContainerPart_t657533908_m2171362115 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  ContainerPart_t657533908 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m2626233201_gshared)(__this /* static, unused */, p0, method);
}
// System.Void System.Action`1<IndustrialApp.Models.ContainerPart>::Invoke(!0)
inline void Action_1_Invoke_m378731122 (Action_1_t830001503 * __this, ContainerPart_t657533908 * p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t830001503 *, ContainerPart_t657533908 *, const RuntimeMethod*))Action_1_Invoke_m3161192644_gshared)(__this, p0, method);
}
// System.Int32 IndustrialApp.Models.ContainerPart::get_Id()
extern "C" IL2CPP_METHOD_ATTR int32_t ContainerPart_get_Id_m3531821950 (ContainerPart_t657533908 * __this, const RuntimeMethod* method);
// System.Void IndustrialApp.Network.Providers.TaskElementProvider/<>c__DisplayClass0_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m890919919 (U3CU3Ec__DisplayClass0_0_t1688314418 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement> IndustrialApp.TestData.Data::get_TaskElementList()
extern "C" IL2CPP_METHOD_ATTR List_1_t265991512 * Data_get_TaskElementList_m1844038042 (Data_t2790604980 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<IndustrialApp.Models.TaskElement,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1667980302 (Func_2_t652283465 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t652283465 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m135484220_gshared)(__this, p0, p1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<IndustrialApp.Models.TaskElement>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisTaskElement_t3088884066_m2999901523 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t652283465 * p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t652283465 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m3429873137_gshared)(__this /* static, unused */, p0, p1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<IndustrialApp.Models.TaskElement>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t265991512 * Enumerable_ToList_TisTaskElement_t3088884066_m2657642510 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  List_1_t265991512 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m1484080463_gshared)(__this /* static, unused */, p0, method);
}
// System.Void System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement>>::Invoke(!0)
inline void Action_1_Invoke_m3965891849 (Action_1_t438459107 * __this, List_1_t265991512 * p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t438459107 *, List_1_t265991512 *, const RuntimeMethod*))Action_1_Invoke_m3161192644_gshared)(__this, p0, method);
}
// System.Int32 IndustrialApp.Models.TaskElement::get_TaskId()
extern "C" IL2CPP_METHOD_ATTR int32_t TaskElement_get_TaskId_m2069443330 (TaskElement_t3088884066 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<IndustrialApp.Models.Task> IndustrialApp.TestData.Data::get_TaskList()
extern "C" IL2CPP_METHOD_ATTR List_1_t86112004 * Data_get_TaskList_m2616195783 (Data_t2790604980 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.Task>>::Invoke(!0)
inline void Action_1_Invoke_m924010743 (Action_1_t258579599 * __this, List_1_t86112004 * p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t258579599 *, List_1_t86112004 *, const RuntimeMethod*))Action_1_Invoke_m3161192644_gshared)(__this, p0, method);
}
// System.Void IndustrialApp.Network.Providers.TypeProvider/<>c__DisplayClass0_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m1490352262 (U3CU3Ec__DisplayClass0_0_t3017055237 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<IndustrialApp.Models.Type> IndustrialApp.TestData.Data::get_TypeList()
extern "C" IL2CPP_METHOD_ATTR List_1_t973736054 * Data_get_TypeList_m1935339362 (Data_t2790604980 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<IndustrialApp.Models.Type,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4022234016 (Func_2_t2739021043 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2739021043 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m135484220_gshared)(__this, p0, p1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<IndustrialApp.Models.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisType_t3796628608_m3914285340 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t2739021043 * p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t2739021043 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m3429873137_gshared)(__this /* static, unused */, p0, p1, method);
}
// !!0 System.Linq.Enumerable::FirstOrDefault<IndustrialApp.Models.Type>(System.Collections.Generic.IEnumerable`1<!!0>)
inline Type_t3796628608 * Enumerable_FirstOrDefault_TisType_t3796628608_m990579966 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  Type_t3796628608 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m2626233201_gshared)(__this /* static, unused */, p0, method);
}
// System.Void System.Action`1<IndustrialApp.Models.Type>::Invoke(!0)
inline void Action_1_Invoke_m4017256563 (Action_1_t3969096203 * __this, Type_t3796628608 * p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3969096203 *, Type_t3796628608 *, const RuntimeMethod*))Action_1_Invoke_m3161192644_gshared)(__this, p0, method);
}
// System.Int32 IndustrialApp.Models.Type::get_Id()
extern "C" IL2CPP_METHOD_ATTR int32_t Type_get_Id_m3911992079 (Type_t3796628608 * __this, const RuntimeMethod* method);
// System.Void IndustrialApp.Network.NetworkProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetworkProvider__ctor_m3382210048 (NetworkProvider_t1853015457 * __this, const RuntimeMethod* method);
// System.Void IndustrialApp.Presenter.Presenter::set_containerPartChanged(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Presenter_set_containerPartChanged_m1622384220 (Presenter_t2628193080 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void IndustrialApp.Presenter.Presenter::set_TypeIsReady(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Presenter_set_TypeIsReady_m1801653150 (Presenter_t2628193080 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void IndustrialApp.Presenter.Presenter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Presenter__ctor_m4147757247 (Presenter_t2628193080 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.Task>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1607596760 (Action_1_t258579599 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t258579599 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// !0 System.Collections.Generic.List`1<IndustrialApp.Models.Task>::get_Item(System.Int32)
inline Task_t2909004558 * List_1_get_Item_m3679477170 (List_1_t86112004 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Task_t2909004558 * (*) (List_1_t86112004 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Void IndustrialApp.Presenter.Presenter::set_currentTask(IndustrialApp.Models.Task)
extern "C" IL2CPP_METHOD_ATTR void Presenter_set_currentTask_m1055784021 (Presenter_t2628193080 * __this, Task_t2909004558 * ___value0, const RuntimeMethod* method);
// IndustrialApp.Models.Task IndustrialApp.Presenter.Presenter::get_currentTask()
extern "C" IL2CPP_METHOD_ATTR Task_t2909004558 * Presenter_get_currentTask_m2869933393 (Presenter_t2628193080 * __this, const RuntimeMethod* method);
// System.Int32 IndustrialApp.Models.Task::get_Id()
extern "C" IL2CPP_METHOD_ATTR int32_t Task_get_Id_m829461714 (Task_t2909004558 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Diagnostics.Debug::WriteLine(System.String)
extern "C" IL2CPP_METHOD_ATTR void Debug_WriteLine_m3834261362 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4034923160 (Action_1_t438459107 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t438459107 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// System.Void IndustrialApp.Presenter.Presenter::set_taskelements(System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement>)
extern "C" IL2CPP_METHOD_ATTR void Presenter_set_taskelements_m4189491635 (Presenter_t2628193080 * __this, List_1_t265991512 * ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement>::get_Count()
inline int32_t List_1_get_Count_m4084110266 (List_1_t265991512 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t265991512 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement> IndustrialApp.Presenter.Presenter::get_taskelements()
extern "C" IL2CPP_METHOD_ATTR List_1_t265991512 * Presenter_get_taskelements_m2062141752 (Presenter_t2628193080 * __this, const RuntimeMethod* method);
// System.Void System.Comparison`1<IndustrialApp.Models.TaskElement>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m480731477 (Comparison_1_t2863815245 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t2863815245 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m793514796_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement>::Sort(System.Comparison`1<!0>)
inline void List_1_Sort_m1385941542 (List_1_t265991512 * __this, Comparison_1_t2863815245 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t265991512 *, Comparison_1_t2863815245 *, const RuntimeMethod*))List_1_Sort_m2460905229_gshared)(__this, p0, method);
}
// System.Void IndustrialApp.Presenter.Presenter::set_currentElement(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Presenter_set_currentElement_m1872008039 (Presenter_t2628193080 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void IndustrialApp.Presenter.Presenter::DoTaskElement()
extern "C" IL2CPP_METHOD_ATTR void Presenter_DoTaskElement_m916569570 (Presenter_t2628193080 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPart>::.ctor()
inline void List_1__ctor_m3278675588 (List_1_t2129608650 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2129608650 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void IndustrialApp.Models.ContainerPart::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ContainerPart__ctor_m4006905634 (ContainerPart_t657533908 * __this, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.ContainerPart::set_Id(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ContainerPart_set_Id_m307514070 (ContainerPart_t657533908 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.ContainerPart::set_XCoordinate(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ContainerPart_set_XCoordinate_m1618609712 (ContainerPart_t657533908 * __this, float ___value0, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.ContainerPart::set_YCoordinate(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ContainerPart_set_YCoordinate_m2149759196 (ContainerPart_t657533908 * __this, float ___value0, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.ContainerPart::set_Height(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ContainerPart_set_Height_m2418340638 (ContainerPart_t657533908 * __this, float ___value0, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.ContainerPart::set_Width(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ContainerPart_set_Width_m226063669 (ContainerPart_t657533908 * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPart>::Add(!0)
inline void List_1_Add_m52963370 (List_1_t2129608650 * __this, ContainerPart_t657533908 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2129608650 *, ContainerPart_t657533908 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Int32 IndustrialApp.Presenter.Presenter::get_currentElement()
extern "C" IL2CPP_METHOD_ATTR int32_t Presenter_get_currentElement_m236105054 (Presenter_t2628193080 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement>::get_Item(System.Int32)
inline TaskElement_t3088884066 * List_1_get_Item_m1718185249 (List_1_t265991512 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  TaskElement_t3088884066 * (*) (List_1_t265991512 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Void IndustrialApp.Presenter.Presenter::set_currentTaskElement(IndustrialApp.Models.TaskElement)
extern "C" IL2CPP_METHOD_ATTR void Presenter_set_currentTaskElement_m3366607772 (Presenter_t2628193080 * __this, TaskElement_t3088884066 * ___value0, const RuntimeMethod* method);
// System.Int32 IndustrialApp.Models.TaskElement::get_TypeId()
extern "C" IL2CPP_METHOD_ATTR int32_t TaskElement_get_TypeId_m4237151244 (TaskElement_t3088884066 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<IndustrialApp.Models.Type>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4087466066 (Action_1_t3969096203 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3969096203 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// System.Void IndustrialApp.Presenter.Presenter::set_currentType(IndustrialApp.Models.Type)
extern "C" IL2CPP_METHOD_ATTR void Presenter_set_currentType_m3557518974 (Presenter_t2628193080 * __this, Type_t3796628608 * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPartContent>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m326101804 (Action_1_t3375313721 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3375313721 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// !!0 System.Linq.Enumerable::FirstOrDefault<IndustrialApp.Models.ContainerPartContent>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ContainerPartContent_t1730771384 * Enumerable_FirstOrDefault_TisContainerPartContent_t1730771384_m105442033 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  ContainerPartContent_t1730771384 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m2626233201_gshared)(__this /* static, unused */, p0, method);
}
// System.Void System.Action`1<IndustrialApp.Models.ContainerPart>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m801666496 (Action_1_t830001503 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t830001503 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// System.Int32 IndustrialApp.Models.ContainerPartContent::get_ContainerPartId()
extern "C" IL2CPP_METHOD_ATTR int32_t ContainerPartContent_get_ContainerPartId_m2430713998 (ContainerPartContent_t1730771384 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void IndustrialApp.Presenter.Presenter::set_currentContainerPart(IndustrialApp.Models.ContainerPart)
extern "C" IL2CPP_METHOD_ATTR void Presenter_set_currentContainerPart_m1585931310 (Presenter_t2628193080 * __this, ContainerPart_t657533908 * ___value0, const RuntimeMethod* method);
// System.Int32 IndustrialApp.Models.TaskElement::get_Order()
extern "C" IL2CPP_METHOD_ATTR int32_t TaskElement_get_Order_m3306103704 (TaskElement_t3088884066 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::CompareTo(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_m4284770383 (int32_t* __this, int32_t p0, const RuntimeMethod* method);
// IndustrialApp.Models.Type IndustrialApp.Presenter.Presenter::get_currentType()
extern "C" IL2CPP_METHOD_ATTR Type_t3796628608 * Presenter_get_currentType_m1269828692 (Presenter_t2628193080 * __this, const RuntimeMethod* method);
// System.String IndustrialApp.Models.Type::get_UUID()
extern "C" IL2CPP_METHOD_ATTR String_t* Type_get_UUID_m3695058473 (Type_t3796628608 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<IndustrialApp.Models.Task>::.ctor()
inline void List_1__ctor_m2932880824 (List_1_t86112004 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t86112004 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void IndustrialApp.Models.Task::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Task__ctor_m362106443 (Task_t2909004558 * __this, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.Task::set_Id(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Task_set_Id_m1518891515 (Task_t2909004558 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.Task::set_Name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Task_set_Name_m708463479 (Task_t2909004558 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.Task::set_Description(System.String)
extern "C" IL2CPP_METHOD_ATTR void Task_set_Description_m95321558 (Task_t2909004558 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<IndustrialApp.Models.Task>::Add(!0)
inline void List_1_Add_m4176142816 (List_1_t86112004 * __this, Task_t2909004558 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t86112004 *, Task_t2909004558 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement>::.ctor()
inline void List_1__ctor_m2073288200 (List_1_t265991512 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t265991512 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void IndustrialApp.Models.TaskElement::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TaskElement__ctor_m2239061348 (TaskElement_t3088884066 * __this, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.TaskElement::set_Id(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TaskElement_set_Id_m1630199562 (TaskElement_t3088884066 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.TaskElement::set_Name(System.String)
extern "C" IL2CPP_METHOD_ATTR void TaskElement_set_Name_m4039080639 (TaskElement_t3088884066 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.TaskElement::set_Description(System.String)
extern "C" IL2CPP_METHOD_ATTR void TaskElement_set_Description_m1747179647 (TaskElement_t3088884066 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.TaskElement::set_Order(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TaskElement_set_Order_m1175008702 (TaskElement_t3088884066 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.TaskElement::set_TaskId(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TaskElement_set_TaskId_m1306901283 (TaskElement_t3088884066 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.TaskElement::set_TypeId(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TaskElement_set_TypeId_m4236207784 (TaskElement_t3088884066 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement>::Add(!0)
inline void List_1_Add_m131262500 (List_1_t265991512 * __this, TaskElement_t3088884066 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t265991512 *, TaskElement_t3088884066 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<IndustrialApp.Models.Type>::.ctor()
inline void List_1__ctor_m752663648 (List_1_t973736054 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t973736054 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void IndustrialApp.Models.Type::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Type__ctor_m2686507653 (Type_t3796628608 * __this, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.Type::set_Id(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Type_set_Id_m1994820826 (Type_t3796628608 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.Type::set_Name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Type_set_Name_m560876731 (Type_t3796628608 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.Type::set_Description(System.String)
extern "C" IL2CPP_METHOD_ATTR void Type_set_Description_m229867628 (Type_t3796628608 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.Type::set_UUID(System.String)
extern "C" IL2CPP_METHOD_ATTR void Type_set_UUID_m2499507479 (Type_t3796628608 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<IndustrialApp.Models.Type>::Add(!0)
inline void List_1_Add_m2327984056 (List_1_t973736054 * __this, Type_t3796628608 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t973736054 *, Type_t3796628608 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<IndustrialApp.Models.Container>::.ctor()
inline void List_1__ctor_m2318470930 (List_1_t1788549183 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1788549183 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void IndustrialApp.Models.Container::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Container__ctor_m1304025152 (Container_t316474441 * __this, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.Container::set_Id(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Container_set_Id_m3499567203 (Container_t316474441 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<IndustrialApp.Models.Container>::Add(!0)
inline void List_1_Add_m4230244688 (List_1_t1788549183 * __this, Container_t316474441 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1788549183 *, Container_t316474441 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPartContent>::.ctor()
inline void List_1__ctor_m1108266200 (List_1_t3202846126 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3202846126 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void IndustrialApp.Models.ContainerPartContent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ContainerPartContent__ctor_m2382803909 (ContainerPartContent_t1730771384 * __this, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.ContainerPartContent::set_Id(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ContainerPartContent_set_Id_m1101185761 (ContainerPartContent_t1730771384 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.ContainerPartContent::set_TypeId(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ContainerPartContent_set_TypeId_m3901773082 (ContainerPartContent_t1730771384 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.ContainerPartContent::set_Amount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ContainerPartContent_set_Amount_m3226186816 (ContainerPartContent_t1730771384 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void IndustrialApp.Models.ContainerPartContent::set_ContainerPartId(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ContainerPartContent_set_ContainerPartId_m3247376280 (ContainerPartContent_t1730771384 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPartContent>::Add(!0)
inline void List_1_Add_m3045151032 (List_1_t3202846126 * __this, ContainerPartContent_t1730771384 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3202846126 *, ContainerPartContent_t1730771384 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
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
// System.Void IndustrialApp.Models.Container::set_Id(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Container_set_Id_m3499567203 (Container_t316474441 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void IndustrialApp.Models.Container::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Container__ctor_m1304025152 (Container_t316474441 * __this, const RuntimeMethod* method)
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
// System.Int32 IndustrialApp.Models.ContainerPart::get_Id()
extern "C" IL2CPP_METHOD_ATTR int32_t ContainerPart_get_Id_m3531821950 (ContainerPart_t657533908 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IndustrialApp.Models.ContainerPart::set_Id(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ContainerPart_set_Id_m307514070 (ContainerPart_t657533908 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Single IndustrialApp.Models.ContainerPart::get_XCoordinate()
extern "C" IL2CPP_METHOD_ATTR float ContainerPart_get_XCoordinate_m1226668059 (ContainerPart_t657533908 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CXCoordinateU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void IndustrialApp.Models.ContainerPart::set_XCoordinate(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ContainerPart_set_XCoordinate_m1618609712 (ContainerPart_t657533908 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CXCoordinateU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Single IndustrialApp.Models.ContainerPart::get_YCoordinate()
extern "C" IL2CPP_METHOD_ATTR float ContainerPart_get_YCoordinate_m1226697466 (ContainerPart_t657533908 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CYCoordinateU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void IndustrialApp.Models.ContainerPart::set_YCoordinate(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ContainerPart_set_YCoordinate_m2149759196 (ContainerPart_t657533908 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CYCoordinateU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Single IndustrialApp.Models.ContainerPart::get_Width()
extern "C" IL2CPP_METHOD_ATTR float ContainerPart_get_Width_m1900377364 (ContainerPart_t657533908 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CWidthU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void IndustrialApp.Models.ContainerPart::set_Width(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ContainerPart_set_Width_m226063669 (ContainerPart_t657533908 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CWidthU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Single IndustrialApp.Models.ContainerPart::get_Height()
extern "C" IL2CPP_METHOD_ATTR float ContainerPart_get_Height_m4143708781 (ContainerPart_t657533908 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CHeightU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void IndustrialApp.Models.ContainerPart::set_Height(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ContainerPart_set_Height_m2418340638 (ContainerPart_t657533908 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CHeightU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void IndustrialApp.Models.ContainerPart::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ContainerPart__ctor_m4006905634 (ContainerPart_t657533908 * __this, const RuntimeMethod* method)
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
// System.Void IndustrialApp.Models.ContainerPartContent::set_Id(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ContainerPartContent_set_Id_m1101185761 (ContainerPartContent_t1730771384 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 IndustrialApp.Models.ContainerPartContent::get_ContainerPartId()
extern "C" IL2CPP_METHOD_ATTR int32_t ContainerPartContent_get_ContainerPartId_m2430713998 (ContainerPartContent_t1730771384 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CContainerPartIdU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IndustrialApp.Models.ContainerPartContent::set_ContainerPartId(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ContainerPartContent_set_ContainerPartId_m3247376280 (ContainerPartContent_t1730771384 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CContainerPartIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 IndustrialApp.Models.ContainerPartContent::get_TypeId()
extern "C" IL2CPP_METHOD_ATTR int32_t ContainerPartContent_get_TypeId_m2979693901 (ContainerPartContent_t1730771384 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTypeIdU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void IndustrialApp.Models.ContainerPartContent::set_TypeId(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ContainerPartContent_set_TypeId_m3901773082 (ContainerPartContent_t1730771384 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTypeIdU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void IndustrialApp.Models.ContainerPartContent::set_Amount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ContainerPartContent_set_Amount_m3226186816 (ContainerPartContent_t1730771384 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CAmountU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void IndustrialApp.Models.ContainerPartContent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ContainerPartContent__ctor_m2382803909 (ContainerPartContent_t1730771384 * __this, const RuntimeMethod* method)
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
// System.Int32 IndustrialApp.Models.Task::get_Id()
extern "C" IL2CPP_METHOD_ATTR int32_t Task_get_Id_m829461714 (Task_t2909004558 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IndustrialApp.Models.Task::set_Id(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Task_set_Id_m1518891515 (Task_t2909004558 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String IndustrialApp.Models.Task::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* Task_get_Name_m2949529840 (Task_t2909004558 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IndustrialApp.Models.Task::set_Name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Task_set_Name_m708463479 (Task_t2909004558 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String IndustrialApp.Models.Task::get_Description()
extern "C" IL2CPP_METHOD_ATTR String_t* Task_get_Description_m3455829721 (Task_t2909004558 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDescriptionU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void IndustrialApp.Models.Task::set_Description(System.String)
extern "C" IL2CPP_METHOD_ATTR void Task_set_Description_m95321558 (Task_t2909004558 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDescriptionU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void IndustrialApp.Models.Task::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Task__ctor_m362106443 (Task_t2909004558 * __this, const RuntimeMethod* method)
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
// System.Void IndustrialApp.Models.TaskElement::set_Id(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TaskElement_set_Id_m1630199562 (TaskElement_t3088884066 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String IndustrialApp.Models.TaskElement::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* TaskElement_get_Name_m2509829200 (TaskElement_t3088884066 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IndustrialApp.Models.TaskElement::set_Name(System.String)
extern "C" IL2CPP_METHOD_ATTR void TaskElement_set_Name_m4039080639 (TaskElement_t3088884066 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String IndustrialApp.Models.TaskElement::get_Description()
extern "C" IL2CPP_METHOD_ATTR String_t* TaskElement_get_Description_m94839931 (TaskElement_t3088884066 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDescriptionU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void IndustrialApp.Models.TaskElement::set_Description(System.String)
extern "C" IL2CPP_METHOD_ATTR void TaskElement_set_Description_m1747179647 (TaskElement_t3088884066 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDescriptionU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 IndustrialApp.Models.TaskElement::get_Order()
extern "C" IL2CPP_METHOD_ATTR int32_t TaskElement_get_Order_m3306103704 (TaskElement_t3088884066 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COrderU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void IndustrialApp.Models.TaskElement::set_Order(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TaskElement_set_Order_m1175008702 (TaskElement_t3088884066 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COrderU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 IndustrialApp.Models.TaskElement::get_TaskId()
extern "C" IL2CPP_METHOD_ATTR int32_t TaskElement_get_TaskId_m2069443330 (TaskElement_t3088884066 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTaskIdU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void IndustrialApp.Models.TaskElement::set_TaskId(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TaskElement_set_TaskId_m1306901283 (TaskElement_t3088884066 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTaskIdU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 IndustrialApp.Models.TaskElement::get_TypeId()
extern "C" IL2CPP_METHOD_ATTR int32_t TaskElement_get_TypeId_m4237151244 (TaskElement_t3088884066 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTypeIdU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void IndustrialApp.Models.TaskElement::set_TypeId(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TaskElement_set_TypeId_m4236207784 (TaskElement_t3088884066 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTypeIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void IndustrialApp.Models.TaskElement::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TaskElement__ctor_m2239061348 (TaskElement_t3088884066 * __this, const RuntimeMethod* method)
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
// System.Int32 IndustrialApp.Models.Type::get_Id()
extern "C" IL2CPP_METHOD_ATTR int32_t Type_get_Id_m3911992079 (Type_t3796628608 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IndustrialApp.Models.Type::set_Id(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Type_set_Id_m1994820826 (Type_t3796628608 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void IndustrialApp.Models.Type::set_Name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Type_set_Name_m560876731 (Type_t3796628608 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void IndustrialApp.Models.Type::set_Description(System.String)
extern "C" IL2CPP_METHOD_ATTR void Type_set_Description_m229867628 (Type_t3796628608 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDescriptionU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String IndustrialApp.Models.Type::get_UUID()
extern "C" IL2CPP_METHOD_ATTR String_t* Type_get_UUID_m3695058473 (Type_t3796628608 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CUUIDU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void IndustrialApp.Models.Type::set_UUID(System.String)
extern "C" IL2CPP_METHOD_ATTR void Type_set_UUID_m2499507479 (Type_t3796628608 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CUUIDU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void IndustrialApp.Models.Type::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Type__ctor_m2686507653 (Type_t3796628608 * __this, const RuntimeMethod* method)
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
// System.Void IndustrialApp.Network.NetworkProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetworkProvider__ctor_m3382210048 (NetworkProvider_t1853015457 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkProvider__ctor_m3382210048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ContainerPartContentProvider_t2760789786 * L_0 = (ContainerPartContentProvider_t2760789786 *)il2cpp_codegen_object_new(ContainerPartContentProvider_t2760789786_il2cpp_TypeInfo_var);
		ContainerPartContentProvider__ctor_m3788148521(L_0, /*hidden argument*/NULL);
		__this->set_ContainerPartContentProvider_0(L_0);
		ContainerPartProvider_t3752118680 * L_1 = (ContainerPartProvider_t3752118680 *)il2cpp_codegen_object_new(ContainerPartProvider_t3752118680_il2cpp_TypeInfo_var);
		ContainerPartProvider__ctor_m3372961504(L_1, /*hidden argument*/NULL);
		__this->set_ContainerPartProvider_1(L_1);
		TaskElementProvider_t4208168369 * L_2 = (TaskElementProvider_t4208168369 *)il2cpp_codegen_object_new(TaskElementProvider_t4208168369_il2cpp_TypeInfo_var);
		TaskElementProvider__ctor_m1826221872(L_2, /*hidden argument*/NULL);
		__this->set_TaskElementProvider_2(L_2);
		TaskProvider_t1351891238 * L_3 = (TaskProvider_t1351891238 *)il2cpp_codegen_object_new(TaskProvider_t1351891238_il2cpp_TypeInfo_var);
		TaskProvider__ctor_m4060562787(L_3, /*hidden argument*/NULL);
		__this->set_TaskProvider_3(L_3);
		TypeProvider_t516275896 * L_4 = (TypeProvider_t516275896 *)il2cpp_codegen_object_new(TypeProvider_t516275896_il2cpp_TypeInfo_var);
		TypeProvider__ctor_m705813917(L_4, /*hidden argument*/NULL);
		__this->set_TypeProvider_4(L_4);
		return;
	}
}
// System.Void IndustrialApp.Network.NetworkProvider::GetContainerPartAsync(System.Action`1<IndustrialApp.Models.ContainerPart>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NetworkProvider_GetContainerPartAsync_m3755033340 (NetworkProvider_t1853015457 * __this, Action_1_t830001503 * ___getContainerPartsCallback0, int32_t ___id1, const RuntimeMethod* method)
{
	{
		ContainerPartProvider_t3752118680 * L_0 = __this->get_ContainerPartProvider_1();
		Action_1_t830001503 * L_1 = ___getContainerPartsCallback0;
		int32_t L_2 = ___id1;
		NullCheck(L_0);
		ContainerPartProvider_GetContainerPartAsync_m653557885(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IndustrialApp.Network.NetworkProvider::GetContainerPartContentAsync(System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPartContent>>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NetworkProvider_GetContainerPartContentAsync_m2834298931 (NetworkProvider_t1853015457 * __this, Action_1_t3375313721 * ___getContainerPartContentCallback0, int32_t ___id1, const RuntimeMethod* method)
{
	{
		ContainerPartContentProvider_t2760789786 * L_0 = __this->get_ContainerPartContentProvider_0();
		Action_1_t3375313721 * L_1 = ___getContainerPartContentCallback0;
		int32_t L_2 = ___id1;
		NullCheck(L_0);
		ContainerPartContentProvider_GetContainerPartContentAsync_m3136740307(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IndustrialApp.Network.NetworkProvider::GetTaskElementsToTaskAsync(System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement>>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NetworkProvider_GetTaskElementsToTaskAsync_m1605033559 (NetworkProvider_t1853015457 * __this, Action_1_t438459107 * ___getTaskElementsCallback0, int32_t ___id1, const RuntimeMethod* method)
{
	{
		TaskElementProvider_t4208168369 * L_0 = __this->get_TaskElementProvider_2();
		Action_1_t438459107 * L_1 = ___getTaskElementsCallback0;
		int32_t L_2 = ___id1;
		NullCheck(L_0);
		TaskElementProvider_GetTaskElementsToTaskAsync_m618119372(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IndustrialApp.Network.NetworkProvider::GetTasksAsync(System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.Task>>)
extern "C" IL2CPP_METHOD_ATTR void NetworkProvider_GetTasksAsync_m2413100322 (NetworkProvider_t1853015457 * __this, Action_1_t258579599 * ___getTasksCallback0, const RuntimeMethod* method)
{
	{
		TaskProvider_t1351891238 * L_0 = __this->get_TaskProvider_3();
		Action_1_t258579599 * L_1 = ___getTasksCallback0;
		NullCheck(L_0);
		TaskProvider_GetTasksAsync_m447590941(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IndustrialApp.Network.NetworkProvider::GetTypeAsync(System.Action`1<IndustrialApp.Models.Type>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NetworkProvider_GetTypeAsync_m3797844597 (NetworkProvider_t1853015457 * __this, Action_1_t3969096203 * ___getTypeAsyncCallback0, int32_t ___typeId1, const RuntimeMethod* method)
{
	{
		TypeProvider_t516275896 * L_0 = __this->get_TypeProvider_4();
		Action_1_t3969096203 * L_1 = ___getTypeAsyncCallback0;
		int32_t L_2 = ___typeId1;
		NullCheck(L_0);
		TypeProvider_GetTypeAsync_m2873725762(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void IndustrialApp.Network.Providers.ContainerPartContentProvider::GetContainerPartContentAsync(System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPartContent>>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ContainerPartContentProvider_GetContainerPartContentAsync_m3136740307 (ContainerPartContentProvider_t2760789786 * __this, Action_1_t3375313721 * ___getContainerPartContentCallback0, int32_t ___id1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ContainerPartContentProvider_GetContainerPartContentAsync_m3136740307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t1343003519 * V_0 = NULL;
	List_1_t3202846126 * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t1343003519 * L_0 = (U3CU3Ec__DisplayClass0_0_t1343003519 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t1343003519_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass0_0__ctor_m176941775(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_t1343003519 * L_1 = V_0;
		int32_t L_2 = ___id1;
		NullCheck(L_1);
		L_1->set_id_0(L_2);
		Data_t2790604980 * L_3 = (Data_t2790604980 *)il2cpp_codegen_object_new(Data_t2790604980_il2cpp_TypeInfo_var);
		Data__ctor_m3247443232(L_3, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_t3202846126 * L_4 = Data_get_ContainerPartContentList_m2238924345(L_3, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass0_0_t1343003519 * L_5 = V_0;
		intptr_t L_6 = (intptr_t)U3CU3Ec__DisplayClass0_0_U3CGetContainerPartContentAsyncU3Eb__0_m3007290703_RuntimeMethod_var;
		Func_2_t3015740379 * L_7 = (Func_2_t3015740379 *)il2cpp_codegen_object_new(Func_2_t3015740379_il2cpp_TypeInfo_var);
		Func_2__ctor_m492416703(L_7, L_5, L_6, /*hidden argument*/Func_2__ctor_m492416703_RuntimeMethod_var);
		RuntimeObject* L_8 = Enumerable_Where_TisContainerPartContent_t1730771384_m3645680843(NULL /*static, unused*/, L_4, L_7, /*hidden argument*/Enumerable_Where_TisContainerPartContent_t1730771384_m3645680843_RuntimeMethod_var);
		List_1_t3202846126 * L_9 = Enumerable_ToList_TisContainerPartContent_t1730771384_m3454200384(NULL /*static, unused*/, L_8, /*hidden argument*/Enumerable_ToList_TisContainerPartContent_t1730771384_m3454200384_RuntimeMethod_var);
		V_1 = L_9;
		Action_1_t3375313721 * L_10 = ___getContainerPartContentCallback0;
		List_1_t3202846126 * L_11 = V_1;
		NullCheck(L_10);
		Action_1_Invoke_m1761487300(L_10, L_11, /*hidden argument*/Action_1_Invoke_m1761487300_RuntimeMethod_var);
		return;
	}
}
// System.Void IndustrialApp.Network.Providers.ContainerPartContentProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ContainerPartContentProvider__ctor_m3788148521 (ContainerPartContentProvider_t2760789786 * __this, const RuntimeMethod* method)
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
// System.Void IndustrialApp.Network.Providers.ContainerPartContentProvider/<>c__DisplayClass0_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m176941775 (U3CU3Ec__DisplayClass0_0_t1343003519 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean IndustrialApp.Network.Providers.ContainerPartContentProvider/<>c__DisplayClass0_0::<GetContainerPartContentAsync>b__0(IndustrialApp.Models.ContainerPartContent)
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_0_U3CGetContainerPartContentAsyncU3Eb__0_m3007290703 (U3CU3Ec__DisplayClass0_0_t1343003519 * __this, ContainerPartContent_t1730771384 * ___cp0, const RuntimeMethod* method)
{
	{
		ContainerPartContent_t1730771384 * L_0 = ___cp0;
		NullCheck(L_0);
		int32_t L_1 = ContainerPartContent_get_TypeId_m2979693901(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_id_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void IndustrialApp.Network.Providers.ContainerPartProvider::GetContainerPartAsync(System.Action`1<IndustrialApp.Models.ContainerPart>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ContainerPartProvider_GetContainerPartAsync_m653557885 (ContainerPartProvider_t3752118680 * __this, Action_1_t830001503 * ___getContainerPartsCallback0, int32_t ___id1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ContainerPartProvider_GetContainerPartAsync_m653557885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t1249878227 * V_0 = NULL;
	ContainerPart_t657533908 * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t1249878227 * L_0 = (U3CU3Ec__DisplayClass1_0_t1249878227 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t1249878227_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1_0__ctor_m3084447337(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t1249878227 * L_1 = V_0;
		int32_t L_2 = ___id1;
		NullCheck(L_1);
		L_1->set_id_0(L_2);
		Data_t2790604980 * L_3 = (Data_t2790604980 *)il2cpp_codegen_object_new(Data_t2790604980_il2cpp_TypeInfo_var);
		Data__ctor_m3247443232(L_3, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_t2129608650 * L_4 = Data_get_ContainerPartList_m2183318721(L_3, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass1_0_t1249878227 * L_5 = V_0;
		intptr_t L_6 = (intptr_t)U3CU3Ec__DisplayClass1_0_U3CGetContainerPartAsyncU3Eb__0_m358351485_RuntimeMethod_var;
		Func_2_t3630408143 * L_7 = (Func_2_t3630408143 *)il2cpp_codegen_object_new(Func_2_t3630408143_il2cpp_TypeInfo_var);
		Func_2__ctor_m4167014293(L_7, L_5, L_6, /*hidden argument*/Func_2__ctor_m4167014293_RuntimeMethod_var);
		RuntimeObject* L_8 = Enumerable_Where_TisContainerPart_t657533908_m2790318315(NULL /*static, unused*/, L_4, L_7, /*hidden argument*/Enumerable_Where_TisContainerPart_t657533908_m2790318315_RuntimeMethod_var);
		ContainerPart_t657533908 * L_9 = Enumerable_FirstOrDefault_TisContainerPart_t657533908_m2171362115(NULL /*static, unused*/, L_8, /*hidden argument*/Enumerable_FirstOrDefault_TisContainerPart_t657533908_m2171362115_RuntimeMethod_var);
		V_1 = L_9;
		Action_1_t830001503 * L_10 = ___getContainerPartsCallback0;
		ContainerPart_t657533908 * L_11 = V_1;
		NullCheck(L_10);
		Action_1_Invoke_m378731122(L_10, L_11, /*hidden argument*/Action_1_Invoke_m378731122_RuntimeMethod_var);
		return;
	}
}
// System.Void IndustrialApp.Network.Providers.ContainerPartProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ContainerPartProvider__ctor_m3372961504 (ContainerPartProvider_t3752118680 * __this, const RuntimeMethod* method)
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
// System.Void IndustrialApp.Network.Providers.ContainerPartProvider/<>c__DisplayClass1_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m3084447337 (U3CU3Ec__DisplayClass1_0_t1249878227 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean IndustrialApp.Network.Providers.ContainerPartProvider/<>c__DisplayClass1_0::<GetContainerPartAsync>b__0(IndustrialApp.Models.ContainerPart)
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass1_0_U3CGetContainerPartAsyncU3Eb__0_m358351485 (U3CU3Ec__DisplayClass1_0_t1249878227 * __this, ContainerPart_t657533908 * ___cp0, const RuntimeMethod* method)
{
	{
		ContainerPart_t657533908 * L_0 = ___cp0;
		NullCheck(L_0);
		int32_t L_1 = ContainerPart_get_Id_m3531821950(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_id_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void IndustrialApp.Network.Providers.TaskElementProvider::GetTaskElementsToTaskAsync(System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement>>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TaskElementProvider_GetTaskElementsToTaskAsync_m618119372 (TaskElementProvider_t4208168369 * __this, Action_1_t438459107 * ___getTaskElementsCallback0, int32_t ___id1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskElementProvider_GetTaskElementsToTaskAsync_m618119372_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t1688314418 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t1688314418 * L_0 = (U3CU3Ec__DisplayClass0_0_t1688314418 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t1688314418_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass0_0__ctor_m890919919(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_t1688314418 * L_1 = V_0;
		int32_t L_2 = ___id1;
		NullCheck(L_1);
		L_1->set_id_0(L_2);
		Action_1_t438459107 * L_3 = ___getTaskElementsCallback0;
		Data_t2790604980 * L_4 = (Data_t2790604980 *)il2cpp_codegen_object_new(Data_t2790604980_il2cpp_TypeInfo_var);
		Data__ctor_m3247443232(L_4, /*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_t265991512 * L_5 = Data_get_TaskElementList_m1844038042(L_4, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass0_0_t1688314418 * L_6 = V_0;
		intptr_t L_7 = (intptr_t)U3CU3Ec__DisplayClass0_0_U3CGetTaskElementsToTaskAsyncU3Eb__0_m536018882_RuntimeMethod_var;
		Func_2_t652283465 * L_8 = (Func_2_t652283465 *)il2cpp_codegen_object_new(Func_2_t652283465_il2cpp_TypeInfo_var);
		Func_2__ctor_m1667980302(L_8, L_6, L_7, /*hidden argument*/Func_2__ctor_m1667980302_RuntimeMethod_var);
		RuntimeObject* L_9 = Enumerable_Where_TisTaskElement_t3088884066_m2999901523(NULL /*static, unused*/, L_5, L_8, /*hidden argument*/Enumerable_Where_TisTaskElement_t3088884066_m2999901523_RuntimeMethod_var);
		List_1_t265991512 * L_10 = Enumerable_ToList_TisTaskElement_t3088884066_m2657642510(NULL /*static, unused*/, L_9, /*hidden argument*/Enumerable_ToList_TisTaskElement_t3088884066_m2657642510_RuntimeMethod_var);
		NullCheck(L_3);
		Action_1_Invoke_m3965891849(L_3, L_10, /*hidden argument*/Action_1_Invoke_m3965891849_RuntimeMethod_var);
		return;
	}
}
// System.Void IndustrialApp.Network.Providers.TaskElementProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TaskElementProvider__ctor_m1826221872 (TaskElementProvider_t4208168369 * __this, const RuntimeMethod* method)
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
// System.Void IndustrialApp.Network.Providers.TaskElementProvider/<>c__DisplayClass0_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m890919919 (U3CU3Ec__DisplayClass0_0_t1688314418 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean IndustrialApp.Network.Providers.TaskElementProvider/<>c__DisplayClass0_0::<GetTaskElementsToTaskAsync>b__0(IndustrialApp.Models.TaskElement)
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_0_U3CGetTaskElementsToTaskAsyncU3Eb__0_m536018882 (U3CU3Ec__DisplayClass0_0_t1688314418 * __this, TaskElement_t3088884066 * ___te0, const RuntimeMethod* method)
{
	{
		TaskElement_t3088884066 * L_0 = ___te0;
		NullCheck(L_0);
		int32_t L_1 = TaskElement_get_TaskId_m2069443330(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_id_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void IndustrialApp.Network.Providers.TaskProvider::GetTasksAsync(System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.Task>>)
extern "C" IL2CPP_METHOD_ATTR void TaskProvider_GetTasksAsync_m447590941 (TaskProvider_t1351891238 * __this, Action_1_t258579599 * ___getTasksCallback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskProvider_GetTasksAsync_m447590941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t258579599 * L_0 = ___getTasksCallback0;
		Data_t2790604980 * L_1 = (Data_t2790604980 *)il2cpp_codegen_object_new(Data_t2790604980_il2cpp_TypeInfo_var);
		Data__ctor_m3247443232(L_1, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_t86112004 * L_2 = Data_get_TaskList_m2616195783(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Action_1_Invoke_m924010743(L_0, L_2, /*hidden argument*/Action_1_Invoke_m924010743_RuntimeMethod_var);
		return;
	}
}
// System.Void IndustrialApp.Network.Providers.TaskProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TaskProvider__ctor_m4060562787 (TaskProvider_t1351891238 * __this, const RuntimeMethod* method)
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
// System.Void IndustrialApp.Network.Providers.TypeProvider::GetTypeAsync(System.Action`1<IndustrialApp.Models.Type>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TypeProvider_GetTypeAsync_m2873725762 (TypeProvider_t516275896 * __this, Action_1_t3969096203 * ___getTypeAsyncCallback0, int32_t ___typeId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeProvider_GetTypeAsync_m2873725762_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t3017055237 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t3017055237 * L_0 = (U3CU3Ec__DisplayClass0_0_t3017055237 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t3017055237_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass0_0__ctor_m1490352262(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_t3017055237 * L_1 = V_0;
		int32_t L_2 = ___typeId1;
		NullCheck(L_1);
		L_1->set_typeId_0(L_2);
		Action_1_t3969096203 * L_3 = ___getTypeAsyncCallback0;
		Data_t2790604980 * L_4 = (Data_t2790604980 *)il2cpp_codegen_object_new(Data_t2790604980_il2cpp_TypeInfo_var);
		Data__ctor_m3247443232(L_4, /*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_t973736054 * L_5 = Data_get_TypeList_m1935339362(L_4, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass0_0_t3017055237 * L_6 = V_0;
		intptr_t L_7 = (intptr_t)U3CU3Ec__DisplayClass0_0_U3CGetTypeAsyncU3Eb__0_m389640211_RuntimeMethod_var;
		Func_2_t2739021043 * L_8 = (Func_2_t2739021043 *)il2cpp_codegen_object_new(Func_2_t2739021043_il2cpp_TypeInfo_var);
		Func_2__ctor_m4022234016(L_8, L_6, L_7, /*hidden argument*/Func_2__ctor_m4022234016_RuntimeMethod_var);
		RuntimeObject* L_9 = Enumerable_Where_TisType_t3796628608_m3914285340(NULL /*static, unused*/, L_5, L_8, /*hidden argument*/Enumerable_Where_TisType_t3796628608_m3914285340_RuntimeMethod_var);
		Type_t3796628608 * L_10 = Enumerable_FirstOrDefault_TisType_t3796628608_m990579966(NULL /*static, unused*/, L_9, /*hidden argument*/Enumerable_FirstOrDefault_TisType_t3796628608_m990579966_RuntimeMethod_var);
		NullCheck(L_3);
		Action_1_Invoke_m4017256563(L_3, L_10, /*hidden argument*/Action_1_Invoke_m4017256563_RuntimeMethod_var);
		return;
	}
}
// System.Void IndustrialApp.Network.Providers.TypeProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TypeProvider__ctor_m705813917 (TypeProvider_t516275896 * __this, const RuntimeMethod* method)
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
// System.Void IndustrialApp.Network.Providers.TypeProvider/<>c__DisplayClass0_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m1490352262 (U3CU3Ec__DisplayClass0_0_t3017055237 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean IndustrialApp.Network.Providers.TypeProvider/<>c__DisplayClass0_0::<GetTypeAsync>b__0(IndustrialApp.Models.Type)
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_0_U3CGetTypeAsyncU3Eb__0_m389640211 (U3CU3Ec__DisplayClass0_0_t3017055237 * __this, Type_t3796628608 * ___t0, const RuntimeMethod* method)
{
	{
		Type_t3796628608 * L_0 = ___t0;
		NullCheck(L_0);
		int32_t L_1 = Type_get_Id_m3911992079(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_typeId_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// IndustrialApp.Models.Task IndustrialApp.Presenter.Presenter::get_currentTask()
extern "C" IL2CPP_METHOD_ATTR Task_t2909004558 * Presenter_get_currentTask_m2869933393 (Presenter_t2628193080 * __this, const RuntimeMethod* method)
{
	{
		Task_t2909004558 * L_0 = __this->get_U3CcurrentTaskU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IndustrialApp.Presenter.Presenter::set_currentTask(IndustrialApp.Models.Task)
extern "C" IL2CPP_METHOD_ATTR void Presenter_set_currentTask_m1055784021 (Presenter_t2628193080 * __this, Task_t2909004558 * ___value0, const RuntimeMethod* method)
{
	{
		Task_t2909004558 * L_0 = ___value0;
		__this->set_U3CcurrentTaskU3Ek__BackingField_0(L_0);
		return;
	}
}
// IndustrialApp.Models.Type IndustrialApp.Presenter.Presenter::get_currentType()
extern "C" IL2CPP_METHOD_ATTR Type_t3796628608 * Presenter_get_currentType_m1269828692 (Presenter_t2628193080 * __this, const RuntimeMethod* method)
{
	{
		Type_t3796628608 * L_0 = __this->get_U3CcurrentTypeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IndustrialApp.Presenter.Presenter::set_currentType(IndustrialApp.Models.Type)
extern "C" IL2CPP_METHOD_ATTR void Presenter_set_currentType_m3557518974 (Presenter_t2628193080 * __this, Type_t3796628608 * ___value0, const RuntimeMethod* method)
{
	{
		Type_t3796628608 * L_0 = ___value0;
		__this->set_U3CcurrentTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean IndustrialApp.Presenter.Presenter::get_containerPartChanged()
extern "C" IL2CPP_METHOD_ATTR bool Presenter_get_containerPartChanged_m595235157 (Presenter_t2628193080 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CcontainerPartChangedU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void IndustrialApp.Presenter.Presenter::set_containerPartChanged(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Presenter_set_containerPartChanged_m1622384220 (Presenter_t2628193080 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CcontainerPartChangedU3Ek__BackingField_2(L_0);
		return;
	}
}
// IndustrialApp.Models.ContainerPart IndustrialApp.Presenter.Presenter::get_currentContainerPart()
extern "C" IL2CPP_METHOD_ATTR ContainerPart_t657533908 * Presenter_get_currentContainerPart_m1488340956 (Presenter_t2628193080 * __this, const RuntimeMethod* method)
{
	{
		ContainerPart_t657533908 * L_0 = __this->get_U3CcurrentContainerPartU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void IndustrialApp.Presenter.Presenter::set_currentContainerPart(IndustrialApp.Models.ContainerPart)
extern "C" IL2CPP_METHOD_ATTR void Presenter_set_currentContainerPart_m1585931310 (Presenter_t2628193080 * __this, ContainerPart_t657533908 * ___value0, const RuntimeMethod* method)
{
	{
		ContainerPart_t657533908 * L_0 = ___value0;
		__this->set_U3CcurrentContainerPartU3Ek__BackingField_3(L_0);
		return;
	}
}
// IndustrialApp.Models.TaskElement IndustrialApp.Presenter.Presenter::get_currentTaskElement()
extern "C" IL2CPP_METHOD_ATTR TaskElement_t3088884066 * Presenter_get_currentTaskElement_m2999618856 (Presenter_t2628193080 * __this, const RuntimeMethod* method)
{
	{
		TaskElement_t3088884066 * L_0 = __this->get_U3CcurrentTaskElementU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void IndustrialApp.Presenter.Presenter::set_currentTaskElement(IndustrialApp.Models.TaskElement)
extern "C" IL2CPP_METHOD_ATTR void Presenter_set_currentTaskElement_m3366607772 (Presenter_t2628193080 * __this, TaskElement_t3088884066 * ___value0, const RuntimeMethod* method)
{
	{
		TaskElement_t3088884066 * L_0 = ___value0;
		__this->set_U3CcurrentTaskElementU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement> IndustrialApp.Presenter.Presenter::get_taskelements()
extern "C" IL2CPP_METHOD_ATTR List_1_t265991512 * Presenter_get_taskelements_m2062141752 (Presenter_t2628193080 * __this, const RuntimeMethod* method)
{
	{
		List_1_t265991512 * L_0 = __this->get_U3CtaskelementsU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void IndustrialApp.Presenter.Presenter::set_taskelements(System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement>)
extern "C" IL2CPP_METHOD_ATTR void Presenter_set_taskelements_m4189491635 (Presenter_t2628193080 * __this, List_1_t265991512 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t265991512 * L_0 = ___value0;
		__this->set_U3CtaskelementsU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 IndustrialApp.Presenter.Presenter::get_currentElement()
extern "C" IL2CPP_METHOD_ATTR int32_t Presenter_get_currentElement_m236105054 (Presenter_t2628193080 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CcurrentElementU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void IndustrialApp.Presenter.Presenter::set_currentElement(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Presenter_set_currentElement_m1872008039 (Presenter_t2628193080 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CcurrentElementU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean IndustrialApp.Presenter.Presenter::get_TypeIsReady()
extern "C" IL2CPP_METHOD_ATTR bool Presenter_get_TypeIsReady_m3405979387 (Presenter_t2628193080 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CTypeIsReadyU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void IndustrialApp.Presenter.Presenter::set_TypeIsReady(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Presenter_set_TypeIsReady_m1801653150 (Presenter_t2628193080 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CTypeIsReadyU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void IndustrialApp.Presenter.Presenter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Presenter__ctor_m4147757247 (Presenter_t2628193080 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Presenter__ctor_m4147757247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		NetworkProvider_t1853015457 * L_0 = (NetworkProvider_t1853015457 *)il2cpp_codegen_object_new(NetworkProvider_t1853015457_il2cpp_TypeInfo_var);
		NetworkProvider__ctor_m3382210048(L_0, /*hidden argument*/NULL);
		__this->set_networkProvider_9(L_0);
		Presenter_set_containerPartChanged_m1622384220(__this, (bool)0, /*hidden argument*/NULL);
		Presenter_set_TypeIsReady_m1801653150(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// IndustrialApp.Presenter.Presenter IndustrialApp.Presenter.Presenter::GetPresenter()
extern "C" IL2CPP_METHOD_ATTR Presenter_t2628193080 * Presenter_GetPresenter_m1125739121 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Presenter_GetPresenter_m1125739121_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Presenter_t2628193080 * V_1 = NULL;
	{
		Presenter_t2628193080 * L_0 = ((Presenter_t2628193080_StaticFields*)il2cpp_codegen_static_fields_for(Presenter_t2628193080_il2cpp_TypeInfo_var))->get_instance_8();
		V_0 = (bool)((((RuntimeObject*)(Presenter_t2628193080 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Presenter_t2628193080 * L_2 = (Presenter_t2628193080 *)il2cpp_codegen_object_new(Presenter_t2628193080_il2cpp_TypeInfo_var);
		Presenter__ctor_m4147757247(L_2, /*hidden argument*/NULL);
		((Presenter_t2628193080_StaticFields*)il2cpp_codegen_static_fields_for(Presenter_t2628193080_il2cpp_TypeInfo_var))->set_instance_8(L_2);
	}

IL_0019:
	{
		Presenter_t2628193080 * L_3 = ((Presenter_t2628193080_StaticFields*)il2cpp_codegen_static_fields_for(Presenter_t2628193080_il2cpp_TypeInfo_var))->get_instance_8();
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		Presenter_t2628193080 * L_4 = V_1;
		return L_4;
	}
}
// System.Void IndustrialApp.Presenter.Presenter::Start()
extern "C" IL2CPP_METHOD_ATTR void Presenter_Start_m1246865443 (Presenter_t2628193080 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Presenter_Start_m1246865443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_networkProvider_9();
		intptr_t L_1 = (intptr_t)Presenter_GetTasksCallback_m3979892150_RuntimeMethod_var;
		Action_1_t258579599 * L_2 = (Action_1_t258579599 *)il2cpp_codegen_object_new(Action_1_t258579599_il2cpp_TypeInfo_var);
		Action_1__ctor_m1607596760(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m1607596760_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_t258579599 * >::Invoke(0 /* System.Void IndustrialApp.Network.INetworkProvider::GetTasksAsync(System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.Task>>) */, INetworkProvider_t2893229667_il2cpp_TypeInfo_var, L_0, L_2);
		return;
	}
}
// System.Void IndustrialApp.Presenter.Presenter::GetTasksCallback(System.Collections.Generic.List`1<IndustrialApp.Models.Task>)
extern "C" IL2CPP_METHOD_ATTR void Presenter_GetTasksCallback_m3979892150 (Presenter_t2628193080 * __this, List_1_t86112004 * ___tasks0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Presenter_GetTasksCallback_m3979892150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_t86112004 * L_0 = ___tasks0;
		V_0 = (bool)((!(((RuntimeObject*)(List_1_t86112004 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005c;
		}
	}
	{
		List_1_t86112004 * L_2 = ___tasks0;
		NullCheck(L_2);
		Task_t2909004558 * L_3 = List_1_get_Item_m3679477170(L_2, 0, /*hidden argument*/List_1_get_Item_m3679477170_RuntimeMethod_var);
		Presenter_set_currentTask_m1055784021(__this, L_3, /*hidden argument*/NULL);
		Task_t2909004558 * L_4 = Presenter_get_currentTask_m2869933393(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = Task_get_Id_m829461714(L_4, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral4161747271, L_7, /*hidden argument*/NULL);
		Debug_WriteLine_m3834261362(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		RuntimeObject* L_9 = __this->get_networkProvider_9();
		intptr_t L_10 = (intptr_t)Presenter_GetTaskElementsCallback_m1456055435_RuntimeMethod_var;
		Action_1_t438459107 * L_11 = (Action_1_t438459107 *)il2cpp_codegen_object_new(Action_1_t438459107_il2cpp_TypeInfo_var);
		Action_1__ctor_m4034923160(L_11, __this, L_10, /*hidden argument*/Action_1__ctor_m4034923160_RuntimeMethod_var);
		Task_t2909004558 * L_12 = Presenter_get_currentTask_m2869933393(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = Task_get_Id_m829461714(L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker2< Action_1_t438459107 *, int32_t >::Invoke(1 /* System.Void IndustrialApp.Network.INetworkProvider::GetTaskElementsToTaskAsync(System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement>>,System.Int32) */, INetworkProvider_t2893229667_il2cpp_TypeInfo_var, L_9, L_11, L_13);
	}

IL_005c:
	{
		return;
	}
}
// System.Void IndustrialApp.Presenter.Presenter::GetTaskElementsCallback(System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement>)
extern "C" IL2CPP_METHOD_ATTR void Presenter_GetTaskElementsCallback_m1456055435 (Presenter_t2628193080 * __this, List_1_t265991512 * ___elements0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Presenter_GetTaskElementsCallback_m1456055435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_t265991512 * L_0 = ___elements0;
		V_0 = (bool)((!(((RuntimeObject*)(List_1_t265991512 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		List_1_t265991512 * L_2 = ___elements0;
		Presenter_set_taskelements_m4189491635(__this, L_2, /*hidden argument*/NULL);
		List_1_t265991512 * L_3 = ___elements0;
		NullCheck(L_3);
		int32_t L_4 = List_1_get_Count_m4084110266(L_3, /*hidden argument*/List_1_get_Count_m4084110266_RuntimeMethod_var);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3867147580, L_6, _stringLiteral1631663451, /*hidden argument*/NULL);
		Debug_WriteLine_m3834261362(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		List_1_t265991512 * L_8 = Presenter_get_taskelements_m2062141752(__this, /*hidden argument*/NULL);
		intptr_t L_9 = (intptr_t)Presenter_SortByOrder_m1765080460_RuntimeMethod_var;
		Comparison_1_t2863815245 * L_10 = (Comparison_1_t2863815245 *)il2cpp_codegen_object_new(Comparison_1_t2863815245_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m480731477(L_10, __this, L_9, /*hidden argument*/Comparison_1__ctor_m480731477_RuntimeMethod_var);
		NullCheck(L_8);
		List_1_Sort_m1385941542(L_8, L_10, /*hidden argument*/List_1_Sort_m1385941542_RuntimeMethod_var);
		Presenter_set_currentElement_m1872008039(__this, 0, /*hidden argument*/NULL);
		Presenter_DoTaskElement_m916569570(__this, /*hidden argument*/NULL);
	}

IL_005a:
	{
		return;
	}
}
// System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPart> IndustrialApp.Presenter.Presenter::GetContainerParts(System.String)
extern "C" IL2CPP_METHOD_ATTR List_1_t2129608650 * Presenter_GetContainerParts_m1678227289 (Presenter_t2628193080 * __this, String_t* ___uuid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Presenter_GetContainerParts_m1678227289_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2129608650 * V_0 = NULL;
	List_1_t2129608650 * V_1 = NULL;
	{
		List_1_t2129608650 * L_0 = (List_1_t2129608650 *)il2cpp_codegen_object_new(List_1_t2129608650_il2cpp_TypeInfo_var);
		List_1__ctor_m3278675588(L_0, /*hidden argument*/List_1__ctor_m3278675588_RuntimeMethod_var);
		List_1_t2129608650 * L_1 = L_0;
		ContainerPart_t657533908 * L_2 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_2, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_3 = L_2;
		NullCheck(L_3);
		ContainerPart_set_Id_m307514070(L_3, 1, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_4 = L_3;
		NullCheck(L_4);
		ContainerPart_set_XCoordinate_m1618609712(L_4, (0.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_5 = L_4;
		NullCheck(L_5);
		ContainerPart_set_YCoordinate_m2149759196(L_5, (0.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_6 = L_5;
		NullCheck(L_6);
		ContainerPart_set_Height_m2418340638(L_6, (0.055f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_7 = L_6;
		NullCheck(L_7);
		ContainerPart_set_Width_m226063669(L_7, (0.27f), /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_m52963370(L_1, L_7, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_8 = L_1;
		ContainerPart_t657533908 * L_9 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_9, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_10 = L_9;
		NullCheck(L_10);
		ContainerPart_set_Id_m307514070(L_10, 2, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_11 = L_10;
		NullCheck(L_11);
		ContainerPart_set_XCoordinate_m1618609712(L_11, (0.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_12 = L_11;
		NullCheck(L_12);
		ContainerPart_set_YCoordinate_m2149759196(L_12, (0.066f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_13 = L_12;
		NullCheck(L_13);
		ContainerPart_set_Height_m2418340638(L_13, (0.055f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_14 = L_13;
		NullCheck(L_14);
		ContainerPart_set_Width_m226063669(L_14, (0.13f), /*hidden argument*/NULL);
		NullCheck(L_8);
		List_1_Add_m52963370(L_8, L_14, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_15 = L_8;
		ContainerPart_t657533908 * L_16 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_16, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_17 = L_16;
		NullCheck(L_17);
		ContainerPart_set_Id_m307514070(L_17, 3, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_18 = L_17;
		NullCheck(L_18);
		ContainerPart_set_XCoordinate_m1618609712(L_18, (0.14f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_19 = L_18;
		NullCheck(L_19);
		ContainerPart_set_YCoordinate_m2149759196(L_19, (0.066f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_20 = L_19;
		NullCheck(L_20);
		ContainerPart_set_Height_m2418340638(L_20, (0.055f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_21 = L_20;
		NullCheck(L_21);
		ContainerPart_set_Width_m226063669(L_21, (0.13f), /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_Add_m52963370(L_15, L_21, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_22 = L_15;
		ContainerPart_t657533908 * L_23 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_23, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_24 = L_23;
		NullCheck(L_24);
		ContainerPart_set_Id_m307514070(L_24, 4, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_25 = L_24;
		NullCheck(L_25);
		ContainerPart_set_XCoordinate_m1618609712(L_25, (0.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_26 = L_25;
		NullCheck(L_26);
		ContainerPart_set_YCoordinate_m2149759196(L_26, (0.13f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_27 = L_26;
		NullCheck(L_27);
		ContainerPart_set_Height_m2418340638(L_27, (0.035f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_28 = L_27;
		NullCheck(L_28);
		ContainerPart_set_Width_m226063669(L_28, (0.045f), /*hidden argument*/NULL);
		NullCheck(L_22);
		List_1_Add_m52963370(L_22, L_28, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_29 = L_22;
		ContainerPart_t657533908 * L_30 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_30, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_31 = L_30;
		NullCheck(L_31);
		ContainerPart_set_Id_m307514070(L_31, 5, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_32 = L_31;
		NullCheck(L_32);
		ContainerPart_set_XCoordinate_m1618609712(L_32, (0.055f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_33 = L_32;
		NullCheck(L_33);
		ContainerPart_set_YCoordinate_m2149759196(L_33, (0.13f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_34 = L_33;
		NullCheck(L_34);
		ContainerPart_set_Height_m2418340638(L_34, (0.035f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_35 = L_34;
		NullCheck(L_35);
		ContainerPart_set_Width_m226063669(L_35, (0.045f), /*hidden argument*/NULL);
		NullCheck(L_29);
		List_1_Add_m52963370(L_29, L_35, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_36 = L_29;
		ContainerPart_t657533908 * L_37 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_37, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_38 = L_37;
		NullCheck(L_38);
		ContainerPart_set_Id_m307514070(L_38, 6, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_39 = L_38;
		NullCheck(L_39);
		ContainerPart_set_XCoordinate_m1618609712(L_39, (0.11f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_40 = L_39;
		NullCheck(L_40);
		ContainerPart_set_YCoordinate_m2149759196(L_40, (0.13f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_41 = L_40;
		NullCheck(L_41);
		ContainerPart_set_Height_m2418340638(L_41, (0.035f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_42 = L_41;
		NullCheck(L_42);
		ContainerPart_set_Width_m226063669(L_42, (0.045f), /*hidden argument*/NULL);
		NullCheck(L_36);
		List_1_Add_m52963370(L_36, L_42, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_43 = L_36;
		ContainerPart_t657533908 * L_44 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_44, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_45 = L_44;
		NullCheck(L_45);
		ContainerPart_set_Id_m307514070(L_45, 7, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_46 = L_45;
		NullCheck(L_46);
		ContainerPart_set_XCoordinate_m1618609712(L_46, (0.165f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_47 = L_46;
		NullCheck(L_47);
		ContainerPart_set_YCoordinate_m2149759196(L_47, (0.13f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_48 = L_47;
		NullCheck(L_48);
		ContainerPart_set_Height_m2418340638(L_48, (0.035f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_49 = L_48;
		NullCheck(L_49);
		ContainerPart_set_Width_m226063669(L_49, (0.045f), /*hidden argument*/NULL);
		NullCheck(L_43);
		List_1_Add_m52963370(L_43, L_49, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_50 = L_43;
		ContainerPart_t657533908 * L_51 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_51, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_52 = L_51;
		NullCheck(L_52);
		ContainerPart_set_Id_m307514070(L_52, 8, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_53 = L_52;
		NullCheck(L_53);
		ContainerPart_set_XCoordinate_m1618609712(L_53, (0.22f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_54 = L_53;
		NullCheck(L_54);
		ContainerPart_set_YCoordinate_m2149759196(L_54, (0.13f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_55 = L_54;
		NullCheck(L_55);
		ContainerPart_set_Height_m2418340638(L_55, (0.035f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_56 = L_55;
		NullCheck(L_56);
		ContainerPart_set_Width_m226063669(L_56, (0.045f), /*hidden argument*/NULL);
		NullCheck(L_50);
		List_1_Add_m52963370(L_50, L_56, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_57 = L_50;
		ContainerPart_t657533908 * L_58 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_58, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_59 = L_58;
		NullCheck(L_59);
		ContainerPart_set_Id_m307514070(L_59, ((int32_t)9), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_60 = L_59;
		NullCheck(L_60);
		ContainerPart_set_XCoordinate_m1618609712(L_60, (0.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_61 = L_60;
		NullCheck(L_61);
		ContainerPart_set_YCoordinate_m2149759196(L_61, (0.175f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_62 = L_61;
		NullCheck(L_62);
		ContainerPart_set_Height_m2418340638(L_62, (0.035f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_63 = L_62;
		NullCheck(L_63);
		ContainerPart_set_Width_m226063669(L_63, (0.045f), /*hidden argument*/NULL);
		NullCheck(L_57);
		List_1_Add_m52963370(L_57, L_63, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_64 = L_57;
		ContainerPart_t657533908 * L_65 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_65, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_66 = L_65;
		NullCheck(L_66);
		ContainerPart_set_Id_m307514070(L_66, ((int32_t)10), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_67 = L_66;
		NullCheck(L_67);
		ContainerPart_set_XCoordinate_m1618609712(L_67, (0.055f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_68 = L_67;
		NullCheck(L_68);
		ContainerPart_set_YCoordinate_m2149759196(L_68, (0.175f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_69 = L_68;
		NullCheck(L_69);
		ContainerPart_set_Height_m2418340638(L_69, (0.035f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_70 = L_69;
		NullCheck(L_70);
		ContainerPart_set_Width_m226063669(L_70, (0.045f), /*hidden argument*/NULL);
		NullCheck(L_64);
		List_1_Add_m52963370(L_64, L_70, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_71 = L_64;
		ContainerPart_t657533908 * L_72 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_72, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_73 = L_72;
		NullCheck(L_73);
		ContainerPart_set_Id_m307514070(L_73, ((int32_t)11), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_74 = L_73;
		NullCheck(L_74);
		ContainerPart_set_XCoordinate_m1618609712(L_74, (0.11f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_75 = L_74;
		NullCheck(L_75);
		ContainerPart_set_YCoordinate_m2149759196(L_75, (0.175f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_76 = L_75;
		NullCheck(L_76);
		ContainerPart_set_Height_m2418340638(L_76, (0.035f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_77 = L_76;
		NullCheck(L_77);
		ContainerPart_set_Width_m226063669(L_77, (0.045f), /*hidden argument*/NULL);
		NullCheck(L_71);
		List_1_Add_m52963370(L_71, L_77, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_78 = L_71;
		ContainerPart_t657533908 * L_79 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_79, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_80 = L_79;
		NullCheck(L_80);
		ContainerPart_set_Id_m307514070(L_80, ((int32_t)12), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_81 = L_80;
		NullCheck(L_81);
		ContainerPart_set_XCoordinate_m1618609712(L_81, (0.165f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_82 = L_81;
		NullCheck(L_82);
		ContainerPart_set_YCoordinate_m2149759196(L_82, (0.175f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_83 = L_82;
		NullCheck(L_83);
		ContainerPart_set_Height_m2418340638(L_83, (0.035f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_84 = L_83;
		NullCheck(L_84);
		ContainerPart_set_Width_m226063669(L_84, (0.045f), /*hidden argument*/NULL);
		NullCheck(L_78);
		List_1_Add_m52963370(L_78, L_84, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_85 = L_78;
		ContainerPart_t657533908 * L_86 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_86, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_87 = L_86;
		NullCheck(L_87);
		ContainerPart_set_Id_m307514070(L_87, ((int32_t)13), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_88 = L_87;
		NullCheck(L_88);
		ContainerPart_set_XCoordinate_m1618609712(L_88, (0.22f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_89 = L_88;
		NullCheck(L_89);
		ContainerPart_set_YCoordinate_m2149759196(L_89, (0.175f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_90 = L_89;
		NullCheck(L_90);
		ContainerPart_set_Height_m2418340638(L_90, (0.035f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_91 = L_90;
		NullCheck(L_91);
		ContainerPart_set_Width_m226063669(L_91, (0.045f), /*hidden argument*/NULL);
		NullCheck(L_85);
		List_1_Add_m52963370(L_85, L_91, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_92 = L_85;
		ContainerPart_t657533908 * L_93 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_93, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_94 = L_93;
		NullCheck(L_94);
		ContainerPart_set_Id_m307514070(L_94, ((int32_t)14), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_95 = L_94;
		NullCheck(L_95);
		ContainerPart_set_XCoordinate_m1618609712(L_95, (0.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_96 = L_95;
		NullCheck(L_96);
		ContainerPart_set_YCoordinate_m2149759196(L_96, (0.22f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_97 = L_96;
		NullCheck(L_97);
		ContainerPart_set_Height_m2418340638(L_97, (0.035f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_98 = L_97;
		NullCheck(L_98);
		ContainerPart_set_Width_m226063669(L_98, (0.045f), /*hidden argument*/NULL);
		NullCheck(L_92);
		List_1_Add_m52963370(L_92, L_98, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_99 = L_92;
		ContainerPart_t657533908 * L_100 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_100, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_101 = L_100;
		NullCheck(L_101);
		ContainerPart_set_Id_m307514070(L_101, ((int32_t)15), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_102 = L_101;
		NullCheck(L_102);
		ContainerPart_set_XCoordinate_m1618609712(L_102, (0.055f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_103 = L_102;
		NullCheck(L_103);
		ContainerPart_set_YCoordinate_m2149759196(L_103, (0.22f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_104 = L_103;
		NullCheck(L_104);
		ContainerPart_set_Height_m2418340638(L_104, (0.035f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_105 = L_104;
		NullCheck(L_105);
		ContainerPart_set_Width_m226063669(L_105, (0.045f), /*hidden argument*/NULL);
		NullCheck(L_99);
		List_1_Add_m52963370(L_99, L_105, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_106 = L_99;
		ContainerPart_t657533908 * L_107 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_107, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_108 = L_107;
		NullCheck(L_108);
		ContainerPart_set_Id_m307514070(L_108, ((int32_t)16), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_109 = L_108;
		NullCheck(L_109);
		ContainerPart_set_XCoordinate_m1618609712(L_109, (0.11f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_110 = L_109;
		NullCheck(L_110);
		ContainerPart_set_YCoordinate_m2149759196(L_110, (0.22f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_111 = L_110;
		NullCheck(L_111);
		ContainerPart_set_Height_m2418340638(L_111, (0.035f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_112 = L_111;
		NullCheck(L_112);
		ContainerPart_set_Width_m226063669(L_112, (0.045f), /*hidden argument*/NULL);
		NullCheck(L_106);
		List_1_Add_m52963370(L_106, L_112, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_113 = L_106;
		ContainerPart_t657533908 * L_114 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_114, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_115 = L_114;
		NullCheck(L_115);
		ContainerPart_set_Id_m307514070(L_115, ((int32_t)17), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_116 = L_115;
		NullCheck(L_116);
		ContainerPart_set_XCoordinate_m1618609712(L_116, (0.165f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_117 = L_116;
		NullCheck(L_117);
		ContainerPart_set_YCoordinate_m2149759196(L_117, (0.22f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_118 = L_117;
		NullCheck(L_118);
		ContainerPart_set_Height_m2418340638(L_118, (0.035f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_119 = L_118;
		NullCheck(L_119);
		ContainerPart_set_Width_m226063669(L_119, (0.045f), /*hidden argument*/NULL);
		NullCheck(L_113);
		List_1_Add_m52963370(L_113, L_119, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_120 = L_113;
		ContainerPart_t657533908 * L_121 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_121, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_122 = L_121;
		NullCheck(L_122);
		ContainerPart_set_Id_m307514070(L_122, ((int32_t)18), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_123 = L_122;
		NullCheck(L_123);
		ContainerPart_set_XCoordinate_m1618609712(L_123, (0.22f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_124 = L_123;
		NullCheck(L_124);
		ContainerPart_set_YCoordinate_m2149759196(L_124, (0.22f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_125 = L_124;
		NullCheck(L_125);
		ContainerPart_set_Height_m2418340638(L_125, (0.035f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_126 = L_125;
		NullCheck(L_126);
		ContainerPart_set_Width_m226063669(L_126, (0.045f), /*hidden argument*/NULL);
		NullCheck(L_120);
		List_1_Add_m52963370(L_120, L_126, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		V_0 = L_120;
		List_1_t2129608650 * L_127 = V_0;
		V_1 = L_127;
		goto IL_04dd;
	}

IL_04dd:
	{
		List_1_t2129608650 * L_128 = V_1;
		return L_128;
	}
}
// System.Void IndustrialApp.Presenter.Presenter::DoTaskElement()
extern "C" IL2CPP_METHOD_ATTR void Presenter_DoTaskElement_m916569570 (Presenter_t2628193080 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Presenter_DoTaskElement_m916569570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TaskElement_t3088884066 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		List_1_t265991512 * L_0 = Presenter_get_taskelements_m2062141752(__this, /*hidden argument*/NULL);
		int32_t L_1 = Presenter_get_currentElement_m236105054(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TaskElement_t3088884066 * L_2 = List_1_get_Item_m1718185249(L_0, L_1, /*hidden argument*/List_1_get_Item_m1718185249_RuntimeMethod_var);
		V_0 = L_2;
		TaskElement_t3088884066 * L_3 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(TaskElement_t3088884066 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0076;
		}
	}
	{
		List_1_t265991512 * L_5 = Presenter_get_taskelements_m2062141752(__this, /*hidden argument*/NULL);
		int32_t L_6 = Presenter_get_currentElement_m236105054(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		TaskElement_t3088884066 * L_7 = List_1_get_Item_m1718185249(L_5, L_6, /*hidden argument*/List_1_get_Item_m1718185249_RuntimeMethod_var);
		Presenter_set_currentTaskElement_m3366607772(__this, L_7, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = TaskElement_get_TypeId_m4237151244(L_8, /*hidden argument*/NULL);
		V_2 = (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0063;
		}
	}
	{
		RuntimeObject* L_11 = __this->get_networkProvider_9();
		intptr_t L_12 = (intptr_t)Presenter_GetTypeAsyncCallback_m1526958518_RuntimeMethod_var;
		Action_1_t3969096203 * L_13 = (Action_1_t3969096203 *)il2cpp_codegen_object_new(Action_1_t3969096203_il2cpp_TypeInfo_var);
		Action_1__ctor_m4087466066(L_13, __this, L_12, /*hidden argument*/Action_1__ctor_m4087466066_RuntimeMethod_var);
		TaskElement_t3088884066 * L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = TaskElement_get_TypeId_m4237151244(L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		InterfaceActionInvoker2< Action_1_t3969096203 *, int32_t >::Invoke(3 /* System.Void IndustrialApp.Network.INetworkProvider::GetTypeAsync(System.Action`1<IndustrialApp.Models.Type>,System.Int32) */, INetworkProvider_t2893229667_il2cpp_TypeInfo_var, L_11, L_13, L_15);
		goto IL_0075;
	}

IL_0063:
	{
		Presenter_set_containerPartChanged_m1622384220(__this, (bool)1, /*hidden argument*/NULL);
		Presenter_set_TypeIsReady_m1801653150(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0075:
	{
	}

IL_0076:
	{
		return;
	}
}
// System.Void IndustrialApp.Presenter.Presenter::TaskElementDone()
extern "C" IL2CPP_METHOD_ATTR void Presenter_TaskElementDone_m3303028740 (Presenter_t2628193080 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Presenter_get_currentElement_m236105054(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		Presenter_set_currentElement_m1872008039(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		Presenter_set_TypeIsReady_m1801653150(__this, (bool)0, /*hidden argument*/NULL);
		Presenter_DoTaskElement_m916569570(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IndustrialApp.Presenter.Presenter::DoPreviousTaskElement()
extern "C" IL2CPP_METHOD_ATTR void Presenter_DoPreviousTaskElement_m3203934426 (Presenter_t2628193080 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = Presenter_get_currentElement_m236105054(__this, /*hidden argument*/NULL);
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		Presenter_set_TypeIsReady_m1801653150(__this, (bool)0, /*hidden argument*/NULL);
		int32_t L_2 = Presenter_get_currentElement_m236105054(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		Presenter_set_currentElement_m1872008039(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		Presenter_DoTaskElement_m916569570(__this, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void IndustrialApp.Presenter.Presenter::GetTypeAsyncCallback(IndustrialApp.Models.Type)
extern "C" IL2CPP_METHOD_ATTR void Presenter_GetTypeAsyncCallback_m1526958518 (Presenter_t2628193080 * __this, Type_t3796628608 * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Presenter_GetTypeAsyncCallback_m1526958518_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t3796628608 * L_0 = ___type0;
		Presenter_set_currentType_m3557518974(__this, L_0, /*hidden argument*/NULL);
		Type_t3796628608 * L_1 = ___type0;
		V_0 = (bool)((!(((RuntimeObject*)(Type_t3796628608 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_networkProvider_9();
		intptr_t L_4 = (intptr_t)Presenter_GetContainerPartContentCallback_m2711738192_RuntimeMethod_var;
		Action_1_t3375313721 * L_5 = (Action_1_t3375313721 *)il2cpp_codegen_object_new(Action_1_t3375313721_il2cpp_TypeInfo_var);
		Action_1__ctor_m326101804(L_5, __this, L_4, /*hidden argument*/Action_1__ctor_m326101804_RuntimeMethod_var);
		Type_t3796628608 * L_6 = ___type0;
		NullCheck(L_6);
		int32_t L_7 = Type_get_Id_m3911992079(L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		InterfaceActionInvoker2< Action_1_t3375313721 *, int32_t >::Invoke(4 /* System.Void IndustrialApp.Network.INetworkProvider::GetContainerPartContentAsync(System.Action`1<System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPartContent>>,System.Int32) */, INetworkProvider_t2893229667_il2cpp_TypeInfo_var, L_3, L_5, L_7);
		goto IL_0035;
	}

IL_0033:
	{
	}

IL_0035:
	{
		return;
	}
}
// System.Void IndustrialApp.Presenter.Presenter::GetContainerPartContentCallback(System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPartContent>)
extern "C" IL2CPP_METHOD_ATTR void Presenter_GetContainerPartContentCallback_m2711738192 (Presenter_t2628193080 * __this, List_1_t3202846126 * ___cpcList0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Presenter_GetContainerPartContentCallback_m2711738192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ContainerPartContent_t1730771384 * V_1 = NULL;
	{
		List_1_t3202846126 * L_0 = ___cpcList0;
		V_0 = (bool)((!(((RuntimeObject*)(List_1_t3202846126 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		List_1_t3202846126 * L_2 = ___cpcList0;
		ContainerPartContent_t1730771384 * L_3 = Enumerable_FirstOrDefault_TisContainerPartContent_t1730771384_m105442033(NULL /*static, unused*/, L_2, /*hidden argument*/Enumerable_FirstOrDefault_TisContainerPartContent_t1730771384_m105442033_RuntimeMethod_var);
		V_1 = L_3;
		RuntimeObject* L_4 = __this->get_networkProvider_9();
		intptr_t L_5 = (intptr_t)Presenter_GetContainerPartAsyncCallback_m2059718648_RuntimeMethod_var;
		Action_1_t830001503 * L_6 = (Action_1_t830001503 *)il2cpp_codegen_object_new(Action_1_t830001503_il2cpp_TypeInfo_var);
		Action_1__ctor_m801666496(L_6, __this, L_5, /*hidden argument*/Action_1__ctor_m801666496_RuntimeMethod_var);
		ContainerPartContent_t1730771384 * L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = ContainerPartContent_get_ContainerPartId_m2430713998(L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< Action_1_t830001503 *, int32_t >::Invoke(2 /* System.Void IndustrialApp.Network.INetworkProvider::GetContainerPartAsync(System.Action`1<IndustrialApp.Models.ContainerPart>,System.Int32) */, INetworkProvider_t2893229667_il2cpp_TypeInfo_var, L_4, L_6, L_8);
		goto IL_003e;
	}

IL_0032:
	{
		Exception_t * L_9 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_9, _stringLiteral2579151324, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, Presenter_GetContainerPartContentCallback_m2711738192_RuntimeMethod_var);
	}

IL_003e:
	{
		return;
	}
}
// System.Void IndustrialApp.Presenter.Presenter::GetContainerPartAsyncCallback(IndustrialApp.Models.ContainerPart)
extern "C" IL2CPP_METHOD_ATTR void Presenter_GetContainerPartAsyncCallback_m2059718648 (Presenter_t2628193080 * __this, ContainerPart_t657533908 * ___cp0, const RuntimeMethod* method)
{
	{
		ContainerPart_t657533908 * L_0 = ___cp0;
		Presenter_set_currentContainerPart_m1585931310(__this, L_0, /*hidden argument*/NULL);
		Presenter_set_containerPartChanged_m1622384220(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 IndustrialApp.Presenter.Presenter::SortByOrder(IndustrialApp.Models.TaskElement,IndustrialApp.Models.TaskElement)
extern "C" IL2CPP_METHOD_ATTR int32_t Presenter_SortByOrder_m1765080460 (Presenter_t2628193080 * __this, TaskElement_t3088884066 * ___a0, TaskElement_t3088884066 * ___b1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		TaskElement_t3088884066 * L_0 = ___a0;
		NullCheck(L_0);
		int32_t L_1 = TaskElement_get_Order_m3306103704(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		TaskElement_t3088884066 * L_2 = ___b1;
		NullCheck(L_2);
		int32_t L_3 = TaskElement_get_Order_m3306103704(L_2, /*hidden argument*/NULL);
		int32_t L_4 = Int32_CompareTo_m4284770383((int32_t*)(&V_0), L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.Void IndustrialApp.Presenter.Presenter::TypeFound(System.String)
extern "C" IL2CPP_METHOD_ATTR void Presenter_TypeFound_m927587346 (Presenter_t2628193080 * __this, String_t* ___uuid0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Type_t3796628608 * L_0 = Presenter_get_currentType_m1269828692(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = Type_get_UUID_m3695058473(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___uuid0;
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		Presenter_set_TypeIsReady_m1801653150(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0020:
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
// System.Void IndustrialApp.TestData.Data::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Data__ctor_m3247443232 (Data_t2790604980 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Data__ctor_m3247443232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		List_1_t86112004 * L_0 = (List_1_t86112004 *)il2cpp_codegen_object_new(List_1_t86112004_il2cpp_TypeInfo_var);
		List_1__ctor_m2932880824(L_0, /*hidden argument*/List_1__ctor_m2932880824_RuntimeMethod_var);
		List_1_t86112004 * L_1 = L_0;
		Task_t2909004558 * L_2 = (Task_t2909004558 *)il2cpp_codegen_object_new(Task_t2909004558_il2cpp_TypeInfo_var);
		Task__ctor_m362106443(L_2, /*hidden argument*/NULL);
		Task_t2909004558 * L_3 = L_2;
		NullCheck(L_3);
		Task_set_Id_m1518891515(L_3, 1, /*hidden argument*/NULL);
		Task_t2909004558 * L_4 = L_3;
		NullCheck(L_4);
		Task_set_Name_m708463479(L_4, _stringLiteral25741930, /*hidden argument*/NULL);
		Task_t2909004558 * L_5 = L_4;
		NullCheck(L_5);
		Task_set_Description_m95321558(L_5, _stringLiteral3067833062, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_m4176142816(L_1, L_5, /*hidden argument*/List_1_Add_m4176142816_RuntimeMethod_var);
		__this->set_taskList_0(L_1);
		List_1_t265991512 * L_6 = (List_1_t265991512 *)il2cpp_codegen_object_new(List_1_t265991512_il2cpp_TypeInfo_var);
		List_1__ctor_m2073288200(L_6, /*hidden argument*/List_1__ctor_m2073288200_RuntimeMethod_var);
		List_1_t265991512 * L_7 = L_6;
		TaskElement_t3088884066 * L_8 = (TaskElement_t3088884066 *)il2cpp_codegen_object_new(TaskElement_t3088884066_il2cpp_TypeInfo_var);
		TaskElement__ctor_m2239061348(L_8, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_9 = L_8;
		NullCheck(L_9);
		TaskElement_set_Id_m1630199562(L_9, 1, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_10 = L_9;
		NullCheck(L_10);
		TaskElement_set_Name_m4039080639(L_10, _stringLiteral3578084782, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_11 = L_10;
		NullCheck(L_11);
		TaskElement_set_Description_m1747179647(L_11, _stringLiteral1754612247, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_12 = L_11;
		NullCheck(L_12);
		TaskElement_set_Order_m1175008702(L_12, 1, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_13 = L_12;
		NullCheck(L_13);
		TaskElement_set_TaskId_m1306901283(L_13, 1, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_14 = L_13;
		NullCheck(L_14);
		TaskElement_set_TypeId_m4236207784(L_14, 1, /*hidden argument*/NULL);
		NullCheck(L_7);
		List_1_Add_m131262500(L_7, L_14, /*hidden argument*/List_1_Add_m131262500_RuntimeMethod_var);
		List_1_t265991512 * L_15 = L_7;
		TaskElement_t3088884066 * L_16 = (TaskElement_t3088884066 *)il2cpp_codegen_object_new(TaskElement_t3088884066_il2cpp_TypeInfo_var);
		TaskElement__ctor_m2239061348(L_16, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_17 = L_16;
		NullCheck(L_17);
		TaskElement_set_Id_m1630199562(L_17, 2, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_18 = L_17;
		NullCheck(L_18);
		TaskElement_set_Name_m4039080639(L_18, _stringLiteral2483846703, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_19 = L_18;
		NullCheck(L_19);
		TaskElement_set_Description_m1747179647(L_19, _stringLiteral2412508795, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_20 = L_19;
		NullCheck(L_20);
		TaskElement_set_TaskId_m1306901283(L_20, 1, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_21 = L_20;
		NullCheck(L_21);
		TaskElement_set_TypeId_m4236207784(L_21, 2, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_22 = L_21;
		NullCheck(L_22);
		TaskElement_set_Order_m1175008702(L_22, 2, /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_Add_m131262500(L_15, L_22, /*hidden argument*/List_1_Add_m131262500_RuntimeMethod_var);
		List_1_t265991512 * L_23 = L_15;
		TaskElement_t3088884066 * L_24 = (TaskElement_t3088884066 *)il2cpp_codegen_object_new(TaskElement_t3088884066_il2cpp_TypeInfo_var);
		TaskElement__ctor_m2239061348(L_24, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_25 = L_24;
		NullCheck(L_25);
		TaskElement_set_Id_m1630199562(L_25, 3, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_26 = L_25;
		NullCheck(L_26);
		TaskElement_set_Name_m4039080639(L_26, _stringLiteral2272470971, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_27 = L_26;
		NullCheck(L_27);
		TaskElement_set_Description_m1747179647(L_27, _stringLiteral866995314, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_28 = L_27;
		NullCheck(L_28);
		TaskElement_set_TaskId_m1306901283(L_28, 1, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_29 = L_28;
		NullCheck(L_29);
		TaskElement_set_Order_m1175008702(L_29, 3, /*hidden argument*/NULL);
		NullCheck(L_23);
		List_1_Add_m131262500(L_23, L_29, /*hidden argument*/List_1_Add_m131262500_RuntimeMethod_var);
		List_1_t265991512 * L_30 = L_23;
		TaskElement_t3088884066 * L_31 = (TaskElement_t3088884066 *)il2cpp_codegen_object_new(TaskElement_t3088884066_il2cpp_TypeInfo_var);
		TaskElement__ctor_m2239061348(L_31, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_32 = L_31;
		NullCheck(L_32);
		TaskElement_set_Id_m1630199562(L_32, 4, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_33 = L_32;
		NullCheck(L_33);
		TaskElement_set_Name_m4039080639(L_33, _stringLiteral4252703562, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_34 = L_33;
		NullCheck(L_34);
		TaskElement_set_Description_m1747179647(L_34, _stringLiteral3391198747, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_35 = L_34;
		NullCheck(L_35);
		TaskElement_set_TaskId_m1306901283(L_35, 1, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_36 = L_35;
		NullCheck(L_36);
		TaskElement_set_TypeId_m4236207784(L_36, 3, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_37 = L_36;
		NullCheck(L_37);
		TaskElement_set_Order_m1175008702(L_37, 4, /*hidden argument*/NULL);
		NullCheck(L_30);
		List_1_Add_m131262500(L_30, L_37, /*hidden argument*/List_1_Add_m131262500_RuntimeMethod_var);
		List_1_t265991512 * L_38 = L_30;
		TaskElement_t3088884066 * L_39 = (TaskElement_t3088884066 *)il2cpp_codegen_object_new(TaskElement_t3088884066_il2cpp_TypeInfo_var);
		TaskElement__ctor_m2239061348(L_39, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_40 = L_39;
		NullCheck(L_40);
		TaskElement_set_Id_m1630199562(L_40, 5, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_41 = L_40;
		NullCheck(L_41);
		TaskElement_set_Name_m4039080639(L_41, _stringLiteral726238142, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_42 = L_41;
		NullCheck(L_42);
		TaskElement_set_Description_m1747179647(L_42, _stringLiteral2384747326, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_43 = L_42;
		NullCheck(L_43);
		TaskElement_set_TaskId_m1306901283(L_43, 1, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_44 = L_43;
		NullCheck(L_44);
		TaskElement_set_TypeId_m4236207784(L_44, 4, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_45 = L_44;
		NullCheck(L_45);
		TaskElement_set_Order_m1175008702(L_45, 5, /*hidden argument*/NULL);
		NullCheck(L_38);
		List_1_Add_m131262500(L_38, L_45, /*hidden argument*/List_1_Add_m131262500_RuntimeMethod_var);
		List_1_t265991512 * L_46 = L_38;
		TaskElement_t3088884066 * L_47 = (TaskElement_t3088884066 *)il2cpp_codegen_object_new(TaskElement_t3088884066_il2cpp_TypeInfo_var);
		TaskElement__ctor_m2239061348(L_47, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_48 = L_47;
		NullCheck(L_48);
		TaskElement_set_Id_m1630199562(L_48, 6, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_49 = L_48;
		NullCheck(L_49);
		TaskElement_set_Name_m4039080639(L_49, _stringLiteral1129251956, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_50 = L_49;
		NullCheck(L_50);
		TaskElement_set_Description_m1747179647(L_50, _stringLiteral2176608473, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_51 = L_50;
		NullCheck(L_51);
		TaskElement_set_TaskId_m1306901283(L_51, 1, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_52 = L_51;
		NullCheck(L_52);
		TaskElement_set_TypeId_m4236207784(L_52, 5, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_53 = L_52;
		NullCheck(L_53);
		TaskElement_set_Order_m1175008702(L_53, 6, /*hidden argument*/NULL);
		NullCheck(L_46);
		List_1_Add_m131262500(L_46, L_53, /*hidden argument*/List_1_Add_m131262500_RuntimeMethod_var);
		List_1_t265991512 * L_54 = L_46;
		TaskElement_t3088884066 * L_55 = (TaskElement_t3088884066 *)il2cpp_codegen_object_new(TaskElement_t3088884066_il2cpp_TypeInfo_var);
		TaskElement__ctor_m2239061348(L_55, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_56 = L_55;
		NullCheck(L_56);
		TaskElement_set_Id_m1630199562(L_56, 6, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_57 = L_56;
		NullCheck(L_57);
		TaskElement_set_Name_m4039080639(L_57, _stringLiteral620603308, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_58 = L_57;
		NullCheck(L_58);
		TaskElement_set_Description_m1747179647(L_58, _stringLiteral3774154421, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_59 = L_58;
		NullCheck(L_59);
		TaskElement_set_TaskId_m1306901283(L_59, 1, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_60 = L_59;
		NullCheck(L_60);
		TaskElement_set_TypeId_m4236207784(L_60, 6, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_61 = L_60;
		NullCheck(L_61);
		TaskElement_set_Order_m1175008702(L_61, 7, /*hidden argument*/NULL);
		NullCheck(L_54);
		List_1_Add_m131262500(L_54, L_61, /*hidden argument*/List_1_Add_m131262500_RuntimeMethod_var);
		List_1_t265991512 * L_62 = L_54;
		TaskElement_t3088884066 * L_63 = (TaskElement_t3088884066 *)il2cpp_codegen_object_new(TaskElement_t3088884066_il2cpp_TypeInfo_var);
		TaskElement__ctor_m2239061348(L_63, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_64 = L_63;
		NullCheck(L_64);
		TaskElement_set_Id_m1630199562(L_64, 6, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_65 = L_64;
		NullCheck(L_65);
		TaskElement_set_Name_m4039080639(L_65, _stringLiteral2631617447, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_66 = L_65;
		NullCheck(L_66);
		TaskElement_set_Description_m1747179647(L_66, _stringLiteral2283874966, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_67 = L_66;
		NullCheck(L_67);
		TaskElement_set_TaskId_m1306901283(L_67, 1, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_68 = L_67;
		NullCheck(L_68);
		TaskElement_set_TypeId_m4236207784(L_68, 7, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_69 = L_68;
		NullCheck(L_69);
		TaskElement_set_Order_m1175008702(L_69, 8, /*hidden argument*/NULL);
		NullCheck(L_62);
		List_1_Add_m131262500(L_62, L_69, /*hidden argument*/List_1_Add_m131262500_RuntimeMethod_var);
		List_1_t265991512 * L_70 = L_62;
		TaskElement_t3088884066 * L_71 = (TaskElement_t3088884066 *)il2cpp_codegen_object_new(TaskElement_t3088884066_il2cpp_TypeInfo_var);
		TaskElement__ctor_m2239061348(L_71, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_72 = L_71;
		NullCheck(L_72);
		TaskElement_set_Id_m1630199562(L_72, 6, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_73 = L_72;
		NullCheck(L_73);
		TaskElement_set_Name_m4039080639(L_73, _stringLiteral4189730914, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_74 = L_73;
		NullCheck(L_74);
		TaskElement_set_Description_m1747179647(L_74, _stringLiteral2129715005, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_75 = L_74;
		NullCheck(L_75);
		TaskElement_set_TaskId_m1306901283(L_75, 1, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_76 = L_75;
		NullCheck(L_76);
		TaskElement_set_Order_m1175008702(L_76, ((int32_t)9), /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_77 = L_76;
		NullCheck(L_77);
		TaskElement_set_TypeId_m4236207784(L_77, 0, /*hidden argument*/NULL);
		NullCheck(L_70);
		List_1_Add_m131262500(L_70, L_77, /*hidden argument*/List_1_Add_m131262500_RuntimeMethod_var);
		List_1_t265991512 * L_78 = L_70;
		TaskElement_t3088884066 * L_79 = (TaskElement_t3088884066 *)il2cpp_codegen_object_new(TaskElement_t3088884066_il2cpp_TypeInfo_var);
		TaskElement__ctor_m2239061348(L_79, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_80 = L_79;
		NullCheck(L_80);
		TaskElement_set_Id_m1630199562(L_80, 6, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_81 = L_80;
		NullCheck(L_81);
		TaskElement_set_Name_m4039080639(L_81, _stringLiteral922710549, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_82 = L_81;
		NullCheck(L_82);
		TaskElement_set_Description_m1747179647(L_82, _stringLiteral757602046, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_83 = L_82;
		NullCheck(L_83);
		TaskElement_set_TaskId_m1306901283(L_83, 1, /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_84 = L_83;
		NullCheck(L_84);
		TaskElement_set_Order_m1175008702(L_84, ((int32_t)10), /*hidden argument*/NULL);
		TaskElement_t3088884066 * L_85 = L_84;
		NullCheck(L_85);
		TaskElement_set_TypeId_m4236207784(L_85, 0, /*hidden argument*/NULL);
		NullCheck(L_78);
		List_1_Add_m131262500(L_78, L_85, /*hidden argument*/List_1_Add_m131262500_RuntimeMethod_var);
		__this->set_taskElementList_1(L_78);
		List_1_t973736054 * L_86 = (List_1_t973736054 *)il2cpp_codegen_object_new(List_1_t973736054_il2cpp_TypeInfo_var);
		List_1__ctor_m752663648(L_86, /*hidden argument*/List_1__ctor_m752663648_RuntimeMethod_var);
		List_1_t973736054 * L_87 = L_86;
		Type_t3796628608 * L_88 = (Type_t3796628608 *)il2cpp_codegen_object_new(Type_t3796628608_il2cpp_TypeInfo_var);
		Type__ctor_m2686507653(L_88, /*hidden argument*/NULL);
		Type_t3796628608 * L_89 = L_88;
		NullCheck(L_89);
		Type_set_Id_m1994820826(L_89, 1, /*hidden argument*/NULL);
		Type_t3796628608 * L_90 = L_89;
		NullCheck(L_90);
		Type_set_Name_m560876731(L_90, _stringLiteral314648255, /*hidden argument*/NULL);
		Type_t3796628608 * L_91 = L_90;
		NullCheck(L_91);
		Type_set_Description_m229867628(L_91, _stringLiteral3452614531, /*hidden argument*/NULL);
		Type_t3796628608 * L_92 = L_91;
		NullCheck(L_92);
		Type_set_UUID_m2499507479(L_92, _stringLiteral314648255, /*hidden argument*/NULL);
		NullCheck(L_87);
		List_1_Add_m2327984056(L_87, L_92, /*hidden argument*/List_1_Add_m2327984056_RuntimeMethod_var);
		List_1_t973736054 * L_93 = L_87;
		Type_t3796628608 * L_94 = (Type_t3796628608 *)il2cpp_codegen_object_new(Type_t3796628608_il2cpp_TypeInfo_var);
		Type__ctor_m2686507653(L_94, /*hidden argument*/NULL);
		Type_t3796628608 * L_95 = L_94;
		NullCheck(L_95);
		Type_set_Id_m1994820826(L_95, 2, /*hidden argument*/NULL);
		Type_t3796628608 * L_96 = L_95;
		NullCheck(L_96);
		Type_set_Name_m560876731(L_96, _stringLiteral4079358085, /*hidden argument*/NULL);
		Type_t3796628608 * L_97 = L_96;
		NullCheck(L_97);
		Type_set_Description_m229867628(L_97, _stringLiteral3452614531, /*hidden argument*/NULL);
		Type_t3796628608 * L_98 = L_97;
		NullCheck(L_98);
		Type_set_UUID_m2499507479(L_98, _stringLiteral2423832746, /*hidden argument*/NULL);
		NullCheck(L_93);
		List_1_Add_m2327984056(L_93, L_98, /*hidden argument*/List_1_Add_m2327984056_RuntimeMethod_var);
		List_1_t973736054 * L_99 = L_93;
		Type_t3796628608 * L_100 = (Type_t3796628608 *)il2cpp_codegen_object_new(Type_t3796628608_il2cpp_TypeInfo_var);
		Type__ctor_m2686507653(L_100, /*hidden argument*/NULL);
		Type_t3796628608 * L_101 = L_100;
		NullCheck(L_101);
		Type_set_Id_m1994820826(L_101, 3, /*hidden argument*/NULL);
		Type_t3796628608 * L_102 = L_101;
		NullCheck(L_102);
		Type_set_Name_m560876731(L_102, _stringLiteral3650924909, /*hidden argument*/NULL);
		Type_t3796628608 * L_103 = L_102;
		NullCheck(L_103);
		Type_set_Description_m229867628(L_103, _stringLiteral3452614531, /*hidden argument*/NULL);
		Type_t3796628608 * L_104 = L_103;
		NullCheck(L_104);
		Type_set_UUID_m2499507479(L_104, _stringLiteral3650924909, /*hidden argument*/NULL);
		NullCheck(L_99);
		List_1_Add_m2327984056(L_99, L_104, /*hidden argument*/List_1_Add_m2327984056_RuntimeMethod_var);
		List_1_t973736054 * L_105 = L_99;
		Type_t3796628608 * L_106 = (Type_t3796628608 *)il2cpp_codegen_object_new(Type_t3796628608_il2cpp_TypeInfo_var);
		Type__ctor_m2686507653(L_106, /*hidden argument*/NULL);
		Type_t3796628608 * L_107 = L_106;
		NullCheck(L_107);
		Type_set_Id_m1994820826(L_107, 6, /*hidden argument*/NULL);
		Type_t3796628608 * L_108 = L_107;
		NullCheck(L_108);
		Type_set_Name_m560876731(L_108, _stringLiteral929935725, /*hidden argument*/NULL);
		Type_t3796628608 * L_109 = L_108;
		NullCheck(L_109);
		Type_set_Description_m229867628(L_109, _stringLiteral3452614531, /*hidden argument*/NULL);
		Type_t3796628608 * L_110 = L_109;
		NullCheck(L_110);
		Type_set_UUID_m2499507479(L_110, _stringLiteral929935725, /*hidden argument*/NULL);
		NullCheck(L_105);
		List_1_Add_m2327984056(L_105, L_110, /*hidden argument*/List_1_Add_m2327984056_RuntimeMethod_var);
		List_1_t973736054 * L_111 = L_105;
		Type_t3796628608 * L_112 = (Type_t3796628608 *)il2cpp_codegen_object_new(Type_t3796628608_il2cpp_TypeInfo_var);
		Type__ctor_m2686507653(L_112, /*hidden argument*/NULL);
		Type_t3796628608 * L_113 = L_112;
		NullCheck(L_113);
		Type_set_Id_m1994820826(L_113, 7, /*hidden argument*/NULL);
		Type_t3796628608 * L_114 = L_113;
		NullCheck(L_114);
		Type_set_Name_m560876731(L_114, _stringLiteral3071356890, /*hidden argument*/NULL);
		Type_t3796628608 * L_115 = L_114;
		NullCheck(L_115);
		Type_set_Description_m229867628(L_115, _stringLiteral3452614531, /*hidden argument*/NULL);
		Type_t3796628608 * L_116 = L_115;
		NullCheck(L_116);
		Type_set_UUID_m2499507479(L_116, _stringLiteral3071356890, /*hidden argument*/NULL);
		NullCheck(L_111);
		List_1_Add_m2327984056(L_111, L_116, /*hidden argument*/List_1_Add_m2327984056_RuntimeMethod_var);
		List_1_t973736054 * L_117 = L_111;
		Type_t3796628608 * L_118 = (Type_t3796628608 *)il2cpp_codegen_object_new(Type_t3796628608_il2cpp_TypeInfo_var);
		Type__ctor_m2686507653(L_118, /*hidden argument*/NULL);
		Type_t3796628608 * L_119 = L_118;
		NullCheck(L_119);
		Type_set_Id_m1994820826(L_119, 4, /*hidden argument*/NULL);
		Type_t3796628608 * L_120 = L_119;
		NullCheck(L_120);
		Type_set_Name_m560876731(L_120, _stringLiteral3886213331, /*hidden argument*/NULL);
		Type_t3796628608 * L_121 = L_120;
		NullCheck(L_121);
		Type_set_Description_m229867628(L_121, _stringLiteral3452614531, /*hidden argument*/NULL);
		Type_t3796628608 * L_122 = L_121;
		NullCheck(L_122);
		Type_set_UUID_m2499507479(L_122, _stringLiteral3886213331, /*hidden argument*/NULL);
		NullCheck(L_117);
		List_1_Add_m2327984056(L_117, L_122, /*hidden argument*/List_1_Add_m2327984056_RuntimeMethod_var);
		List_1_t973736054 * L_123 = L_117;
		Type_t3796628608 * L_124 = (Type_t3796628608 *)il2cpp_codegen_object_new(Type_t3796628608_il2cpp_TypeInfo_var);
		Type__ctor_m2686507653(L_124, /*hidden argument*/NULL);
		Type_t3796628608 * L_125 = L_124;
		NullCheck(L_125);
		Type_set_Id_m1994820826(L_125, 5, /*hidden argument*/NULL);
		Type_t3796628608 * L_126 = L_125;
		NullCheck(L_126);
		Type_set_Name_m560876731(L_126, _stringLiteral2353969269, /*hidden argument*/NULL);
		Type_t3796628608 * L_127 = L_126;
		NullCheck(L_127);
		Type_set_Description_m229867628(L_127, _stringLiteral3452614531, /*hidden argument*/NULL);
		Type_t3796628608 * L_128 = L_127;
		NullCheck(L_128);
		Type_set_UUID_m2499507479(L_128, _stringLiteral1066350946, /*hidden argument*/NULL);
		NullCheck(L_123);
		List_1_Add_m2327984056(L_123, L_128, /*hidden argument*/List_1_Add_m2327984056_RuntimeMethod_var);
		List_1_t973736054 * L_129 = L_123;
		Type_t3796628608 * L_130 = (Type_t3796628608 *)il2cpp_codegen_object_new(Type_t3796628608_il2cpp_TypeInfo_var);
		Type__ctor_m2686507653(L_130, /*hidden argument*/NULL);
		Type_t3796628608 * L_131 = L_130;
		NullCheck(L_131);
		Type_set_Id_m1994820826(L_131, 8, /*hidden argument*/NULL);
		Type_t3796628608 * L_132 = L_131;
		NullCheck(L_132);
		Type_set_Name_m560876731(L_132, _stringLiteral2516846080, /*hidden argument*/NULL);
		Type_t3796628608 * L_133 = L_132;
		NullCheck(L_133);
		Type_set_Description_m229867628(L_133, _stringLiteral3452614531, /*hidden argument*/NULL);
		Type_t3796628608 * L_134 = L_133;
		NullCheck(L_134);
		Type_set_UUID_m2499507479(L_134, _stringLiteral2516846080, /*hidden argument*/NULL);
		NullCheck(L_129);
		List_1_Add_m2327984056(L_129, L_134, /*hidden argument*/List_1_Add_m2327984056_RuntimeMethod_var);
		__this->set_typeList_2(L_129);
		List_1_t1788549183 * L_135 = (List_1_t1788549183 *)il2cpp_codegen_object_new(List_1_t1788549183_il2cpp_TypeInfo_var);
		List_1__ctor_m2318470930(L_135, /*hidden argument*/List_1__ctor_m2318470930_RuntimeMethod_var);
		List_1_t1788549183 * L_136 = L_135;
		Container_t316474441 * L_137 = (Container_t316474441 *)il2cpp_codegen_object_new(Container_t316474441_il2cpp_TypeInfo_var);
		Container__ctor_m1304025152(L_137, /*hidden argument*/NULL);
		Container_t316474441 * L_138 = L_137;
		NullCheck(L_138);
		Container_set_Id_m3499567203(L_138, 1, /*hidden argument*/NULL);
		NullCheck(L_136);
		List_1_Add_m4230244688(L_136, L_138, /*hidden argument*/List_1_Add_m4230244688_RuntimeMethod_var);
		__this->set_containerList_3(L_136);
		List_1_t2129608650 * L_139 = (List_1_t2129608650 *)il2cpp_codegen_object_new(List_1_t2129608650_il2cpp_TypeInfo_var);
		List_1__ctor_m3278675588(L_139, /*hidden argument*/List_1__ctor_m3278675588_RuntimeMethod_var);
		List_1_t2129608650 * L_140 = L_139;
		ContainerPart_t657533908 * L_141 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_141, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_142 = L_141;
		NullCheck(L_142);
		ContainerPart_set_Id_m307514070(L_142, 1, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_143 = L_142;
		NullCheck(L_143);
		ContainerPart_set_XCoordinate_m1618609712(L_143, (0.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_144 = L_143;
		NullCheck(L_144);
		ContainerPart_set_YCoordinate_m2149759196(L_144, (0.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_145 = L_144;
		NullCheck(L_145);
		ContainerPart_set_Height_m2418340638(L_145, (55.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_146 = L_145;
		NullCheck(L_146);
		ContainerPart_set_Width_m226063669(L_146, (270.0f), /*hidden argument*/NULL);
		NullCheck(L_140);
		List_1_Add_m52963370(L_140, L_146, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_147 = L_140;
		ContainerPart_t657533908 * L_148 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_148, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_149 = L_148;
		NullCheck(L_149);
		ContainerPart_set_Id_m307514070(L_149, 2, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_150 = L_149;
		NullCheck(L_150);
		ContainerPart_set_XCoordinate_m1618609712(L_150, (0.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_151 = L_150;
		NullCheck(L_151);
		ContainerPart_set_YCoordinate_m2149759196(L_151, (66.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_152 = L_151;
		NullCheck(L_152);
		ContainerPart_set_Height_m2418340638(L_152, (55.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_153 = L_152;
		NullCheck(L_153);
		ContainerPart_set_Width_m226063669(L_153, (130.0f), /*hidden argument*/NULL);
		NullCheck(L_147);
		List_1_Add_m52963370(L_147, L_153, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_154 = L_147;
		ContainerPart_t657533908 * L_155 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_155, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_156 = L_155;
		NullCheck(L_156);
		ContainerPart_set_Id_m307514070(L_156, 3, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_157 = L_156;
		NullCheck(L_157);
		ContainerPart_set_XCoordinate_m1618609712(L_157, (140.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_158 = L_157;
		NullCheck(L_158);
		ContainerPart_set_YCoordinate_m2149759196(L_158, (66.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_159 = L_158;
		NullCheck(L_159);
		ContainerPart_set_Height_m2418340638(L_159, (55.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_160 = L_159;
		NullCheck(L_160);
		ContainerPart_set_Width_m226063669(L_160, (130.0f), /*hidden argument*/NULL);
		NullCheck(L_154);
		List_1_Add_m52963370(L_154, L_160, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_161 = L_154;
		ContainerPart_t657533908 * L_162 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_162, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_163 = L_162;
		NullCheck(L_163);
		ContainerPart_set_Id_m307514070(L_163, 4, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_164 = L_163;
		NullCheck(L_164);
		ContainerPart_set_XCoordinate_m1618609712(L_164, (0.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_165 = L_164;
		NullCheck(L_165);
		ContainerPart_set_YCoordinate_m2149759196(L_165, (130.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_166 = L_165;
		NullCheck(L_166);
		ContainerPart_set_Height_m2418340638(L_166, (35.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_167 = L_166;
		NullCheck(L_167);
		ContainerPart_set_Width_m226063669(L_167, (45.0f), /*hidden argument*/NULL);
		NullCheck(L_161);
		List_1_Add_m52963370(L_161, L_167, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_168 = L_161;
		ContainerPart_t657533908 * L_169 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_169, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_170 = L_169;
		NullCheck(L_170);
		ContainerPart_set_Id_m307514070(L_170, 5, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_171 = L_170;
		NullCheck(L_171);
		ContainerPart_set_XCoordinate_m1618609712(L_171, (55.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_172 = L_171;
		NullCheck(L_172);
		ContainerPart_set_YCoordinate_m2149759196(L_172, (130.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_173 = L_172;
		NullCheck(L_173);
		ContainerPart_set_Height_m2418340638(L_173, (35.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_174 = L_173;
		NullCheck(L_174);
		ContainerPart_set_Width_m226063669(L_174, (45.0f), /*hidden argument*/NULL);
		NullCheck(L_168);
		List_1_Add_m52963370(L_168, L_174, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_175 = L_168;
		ContainerPart_t657533908 * L_176 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_176, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_177 = L_176;
		NullCheck(L_177);
		ContainerPart_set_Id_m307514070(L_177, 6, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_178 = L_177;
		NullCheck(L_178);
		ContainerPart_set_XCoordinate_m1618609712(L_178, (110.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_179 = L_178;
		NullCheck(L_179);
		ContainerPart_set_YCoordinate_m2149759196(L_179, (130.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_180 = L_179;
		NullCheck(L_180);
		ContainerPart_set_Height_m2418340638(L_180, (35.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_181 = L_180;
		NullCheck(L_181);
		ContainerPart_set_Width_m226063669(L_181, (45.0f), /*hidden argument*/NULL);
		NullCheck(L_175);
		List_1_Add_m52963370(L_175, L_181, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_182 = L_175;
		ContainerPart_t657533908 * L_183 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_183, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_184 = L_183;
		NullCheck(L_184);
		ContainerPart_set_Id_m307514070(L_184, 7, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_185 = L_184;
		NullCheck(L_185);
		ContainerPart_set_XCoordinate_m1618609712(L_185, (165.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_186 = L_185;
		NullCheck(L_186);
		ContainerPart_set_YCoordinate_m2149759196(L_186, (130.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_187 = L_186;
		NullCheck(L_187);
		ContainerPart_set_Height_m2418340638(L_187, (35.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_188 = L_187;
		NullCheck(L_188);
		ContainerPart_set_Width_m226063669(L_188, (45.0f), /*hidden argument*/NULL);
		NullCheck(L_182);
		List_1_Add_m52963370(L_182, L_188, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_189 = L_182;
		ContainerPart_t657533908 * L_190 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_190, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_191 = L_190;
		NullCheck(L_191);
		ContainerPart_set_Id_m307514070(L_191, 8, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_192 = L_191;
		NullCheck(L_192);
		ContainerPart_set_XCoordinate_m1618609712(L_192, (220.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_193 = L_192;
		NullCheck(L_193);
		ContainerPart_set_YCoordinate_m2149759196(L_193, (130.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_194 = L_193;
		NullCheck(L_194);
		ContainerPart_set_Height_m2418340638(L_194, (35.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_195 = L_194;
		NullCheck(L_195);
		ContainerPart_set_Width_m226063669(L_195, (45.0f), /*hidden argument*/NULL);
		NullCheck(L_189);
		List_1_Add_m52963370(L_189, L_195, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_196 = L_189;
		ContainerPart_t657533908 * L_197 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_197, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_198 = L_197;
		NullCheck(L_198);
		ContainerPart_set_Id_m307514070(L_198, ((int32_t)9), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_199 = L_198;
		NullCheck(L_199);
		ContainerPart_set_XCoordinate_m1618609712(L_199, (0.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_200 = L_199;
		NullCheck(L_200);
		ContainerPart_set_YCoordinate_m2149759196(L_200, (185.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_201 = L_200;
		NullCheck(L_201);
		ContainerPart_set_Height_m2418340638(L_201, (35.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_202 = L_201;
		NullCheck(L_202);
		ContainerPart_set_Width_m226063669(L_202, (45.0f), /*hidden argument*/NULL);
		NullCheck(L_196);
		List_1_Add_m52963370(L_196, L_202, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_203 = L_196;
		ContainerPart_t657533908 * L_204 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_204, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_205 = L_204;
		NullCheck(L_205);
		ContainerPart_set_Id_m307514070(L_205, ((int32_t)10), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_206 = L_205;
		NullCheck(L_206);
		ContainerPart_set_XCoordinate_m1618609712(L_206, (55.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_207 = L_206;
		NullCheck(L_207);
		ContainerPart_set_YCoordinate_m2149759196(L_207, (185.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_208 = L_207;
		NullCheck(L_208);
		ContainerPart_set_Height_m2418340638(L_208, (35.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_209 = L_208;
		NullCheck(L_209);
		ContainerPart_set_Width_m226063669(L_209, (45.0f), /*hidden argument*/NULL);
		NullCheck(L_203);
		List_1_Add_m52963370(L_203, L_209, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_210 = L_203;
		ContainerPart_t657533908 * L_211 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_211, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_212 = L_211;
		NullCheck(L_212);
		ContainerPart_set_Id_m307514070(L_212, ((int32_t)11), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_213 = L_212;
		NullCheck(L_213);
		ContainerPart_set_XCoordinate_m1618609712(L_213, (110.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_214 = L_213;
		NullCheck(L_214);
		ContainerPart_set_YCoordinate_m2149759196(L_214, (185.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_215 = L_214;
		NullCheck(L_215);
		ContainerPart_set_Height_m2418340638(L_215, (35.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_216 = L_215;
		NullCheck(L_216);
		ContainerPart_set_Width_m226063669(L_216, (45.0f), /*hidden argument*/NULL);
		NullCheck(L_210);
		List_1_Add_m52963370(L_210, L_216, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_217 = L_210;
		ContainerPart_t657533908 * L_218 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_218, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_219 = L_218;
		NullCheck(L_219);
		ContainerPart_set_Id_m307514070(L_219, ((int32_t)12), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_220 = L_219;
		NullCheck(L_220);
		ContainerPart_set_XCoordinate_m1618609712(L_220, (165.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_221 = L_220;
		NullCheck(L_221);
		ContainerPart_set_YCoordinate_m2149759196(L_221, (185.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_222 = L_221;
		NullCheck(L_222);
		ContainerPart_set_Height_m2418340638(L_222, (35.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_223 = L_222;
		NullCheck(L_223);
		ContainerPart_set_Width_m226063669(L_223, (45.0f), /*hidden argument*/NULL);
		NullCheck(L_217);
		List_1_Add_m52963370(L_217, L_223, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_224 = L_217;
		ContainerPart_t657533908 * L_225 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_225, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_226 = L_225;
		NullCheck(L_226);
		ContainerPart_set_Id_m307514070(L_226, ((int32_t)13), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_227 = L_226;
		NullCheck(L_227);
		ContainerPart_set_XCoordinate_m1618609712(L_227, (220.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_228 = L_227;
		NullCheck(L_228);
		ContainerPart_set_YCoordinate_m2149759196(L_228, (185.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_229 = L_228;
		NullCheck(L_229);
		ContainerPart_set_Height_m2418340638(L_229, (35.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_230 = L_229;
		NullCheck(L_230);
		ContainerPart_set_Width_m226063669(L_230, (45.0f), /*hidden argument*/NULL);
		NullCheck(L_224);
		List_1_Add_m52963370(L_224, L_230, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_231 = L_224;
		ContainerPart_t657533908 * L_232 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_232, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_233 = L_232;
		NullCheck(L_233);
		ContainerPart_set_Id_m307514070(L_233, ((int32_t)14), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_234 = L_233;
		NullCheck(L_234);
		ContainerPart_set_XCoordinate_m1618609712(L_234, (0.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_235 = L_234;
		NullCheck(L_235);
		ContainerPart_set_YCoordinate_m2149759196(L_235, (240.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_236 = L_235;
		NullCheck(L_236);
		ContainerPart_set_Height_m2418340638(L_236, (35.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_237 = L_236;
		NullCheck(L_237);
		ContainerPart_set_Width_m226063669(L_237, (45.0f), /*hidden argument*/NULL);
		NullCheck(L_231);
		List_1_Add_m52963370(L_231, L_237, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_238 = L_231;
		ContainerPart_t657533908 * L_239 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_239, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_240 = L_239;
		NullCheck(L_240);
		ContainerPart_set_Id_m307514070(L_240, ((int32_t)15), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_241 = L_240;
		NullCheck(L_241);
		ContainerPart_set_XCoordinate_m1618609712(L_241, (55.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_242 = L_241;
		NullCheck(L_242);
		ContainerPart_set_YCoordinate_m2149759196(L_242, (240.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_243 = L_242;
		NullCheck(L_243);
		ContainerPart_set_Height_m2418340638(L_243, (35.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_244 = L_243;
		NullCheck(L_244);
		ContainerPart_set_Width_m226063669(L_244, (45.0f), /*hidden argument*/NULL);
		NullCheck(L_238);
		List_1_Add_m52963370(L_238, L_244, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_245 = L_238;
		ContainerPart_t657533908 * L_246 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_246, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_247 = L_246;
		NullCheck(L_247);
		ContainerPart_set_Id_m307514070(L_247, ((int32_t)16), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_248 = L_247;
		NullCheck(L_248);
		ContainerPart_set_XCoordinate_m1618609712(L_248, (110.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_249 = L_248;
		NullCheck(L_249);
		ContainerPart_set_YCoordinate_m2149759196(L_249, (240.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_250 = L_249;
		NullCheck(L_250);
		ContainerPart_set_Height_m2418340638(L_250, (35.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_251 = L_250;
		NullCheck(L_251);
		ContainerPart_set_Width_m226063669(L_251, (45.0f), /*hidden argument*/NULL);
		NullCheck(L_245);
		List_1_Add_m52963370(L_245, L_251, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_252 = L_245;
		ContainerPart_t657533908 * L_253 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_253, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_254 = L_253;
		NullCheck(L_254);
		ContainerPart_set_Id_m307514070(L_254, ((int32_t)17), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_255 = L_254;
		NullCheck(L_255);
		ContainerPart_set_XCoordinate_m1618609712(L_255, (165.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_256 = L_255;
		NullCheck(L_256);
		ContainerPart_set_YCoordinate_m2149759196(L_256, (240.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_257 = L_256;
		NullCheck(L_257);
		ContainerPart_set_Height_m2418340638(L_257, (35.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_258 = L_257;
		NullCheck(L_258);
		ContainerPart_set_Width_m226063669(L_258, (45.0f), /*hidden argument*/NULL);
		NullCheck(L_252);
		List_1_Add_m52963370(L_252, L_258, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		List_1_t2129608650 * L_259 = L_252;
		ContainerPart_t657533908 * L_260 = (ContainerPart_t657533908 *)il2cpp_codegen_object_new(ContainerPart_t657533908_il2cpp_TypeInfo_var);
		ContainerPart__ctor_m4006905634(L_260, /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_261 = L_260;
		NullCheck(L_261);
		ContainerPart_set_Id_m307514070(L_261, ((int32_t)18), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_262 = L_261;
		NullCheck(L_262);
		ContainerPart_set_XCoordinate_m1618609712(L_262, (220.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_263 = L_262;
		NullCheck(L_263);
		ContainerPart_set_YCoordinate_m2149759196(L_263, (240.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_264 = L_263;
		NullCheck(L_264);
		ContainerPart_set_Height_m2418340638(L_264, (35.0f), /*hidden argument*/NULL);
		ContainerPart_t657533908 * L_265 = L_264;
		NullCheck(L_265);
		ContainerPart_set_Width_m226063669(L_265, (45.0f), /*hidden argument*/NULL);
		NullCheck(L_259);
		List_1_Add_m52963370(L_259, L_265, /*hidden argument*/List_1_Add_m52963370_RuntimeMethod_var);
		__this->set_containerPartList_4(L_259);
		List_1_t3202846126 * L_266 = (List_1_t3202846126 *)il2cpp_codegen_object_new(List_1_t3202846126_il2cpp_TypeInfo_var);
		List_1__ctor_m1108266200(L_266, /*hidden argument*/List_1__ctor_m1108266200_RuntimeMethod_var);
		List_1_t3202846126 * L_267 = L_266;
		ContainerPartContent_t1730771384 * L_268 = (ContainerPartContent_t1730771384 *)il2cpp_codegen_object_new(ContainerPartContent_t1730771384_il2cpp_TypeInfo_var);
		ContainerPartContent__ctor_m2382803909(L_268, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_269 = L_268;
		NullCheck(L_269);
		ContainerPartContent_set_Id_m1101185761(L_269, 1, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_270 = L_269;
		NullCheck(L_270);
		ContainerPartContent_set_TypeId_m3901773082(L_270, 1, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_271 = L_270;
		NullCheck(L_271);
		ContainerPartContent_set_Amount_m3226186816(L_271, 1, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_272 = L_271;
		NullCheck(L_272);
		ContainerPartContent_set_ContainerPartId_m3247376280(L_272, 3, /*hidden argument*/NULL);
		NullCheck(L_267);
		List_1_Add_m3045151032(L_267, L_272, /*hidden argument*/List_1_Add_m3045151032_RuntimeMethod_var);
		List_1_t3202846126 * L_273 = L_267;
		ContainerPartContent_t1730771384 * L_274 = (ContainerPartContent_t1730771384 *)il2cpp_codegen_object_new(ContainerPartContent_t1730771384_il2cpp_TypeInfo_var);
		ContainerPartContent__ctor_m2382803909(L_274, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_275 = L_274;
		NullCheck(L_275);
		ContainerPartContent_set_Id_m1101185761(L_275, 2, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_276 = L_275;
		NullCheck(L_276);
		ContainerPartContent_set_TypeId_m3901773082(L_276, 2, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_277 = L_276;
		NullCheck(L_277);
		ContainerPartContent_set_Amount_m3226186816(L_277, 2, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_278 = L_277;
		NullCheck(L_278);
		ContainerPartContent_set_ContainerPartId_m3247376280(L_278, ((int32_t)17), /*hidden argument*/NULL);
		NullCheck(L_273);
		List_1_Add_m3045151032(L_273, L_278, /*hidden argument*/List_1_Add_m3045151032_RuntimeMethod_var);
		List_1_t3202846126 * L_279 = L_273;
		ContainerPartContent_t1730771384 * L_280 = (ContainerPartContent_t1730771384 *)il2cpp_codegen_object_new(ContainerPartContent_t1730771384_il2cpp_TypeInfo_var);
		ContainerPartContent__ctor_m2382803909(L_280, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_281 = L_280;
		NullCheck(L_281);
		ContainerPartContent_set_Id_m1101185761(L_281, 3, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_282 = L_281;
		NullCheck(L_282);
		ContainerPartContent_set_TypeId_m3901773082(L_282, 3, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_283 = L_282;
		NullCheck(L_283);
		ContainerPartContent_set_Amount_m3226186816(L_283, 1, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_284 = L_283;
		NullCheck(L_284);
		ContainerPartContent_set_ContainerPartId_m3247376280(L_284, 7, /*hidden argument*/NULL);
		NullCheck(L_279);
		List_1_Add_m3045151032(L_279, L_284, /*hidden argument*/List_1_Add_m3045151032_RuntimeMethod_var);
		List_1_t3202846126 * L_285 = L_279;
		ContainerPartContent_t1730771384 * L_286 = (ContainerPartContent_t1730771384 *)il2cpp_codegen_object_new(ContainerPartContent_t1730771384_il2cpp_TypeInfo_var);
		ContainerPartContent__ctor_m2382803909(L_286, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_287 = L_286;
		NullCheck(L_287);
		ContainerPartContent_set_Id_m1101185761(L_287, 4, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_288 = L_287;
		NullCheck(L_288);
		ContainerPartContent_set_TypeId_m3901773082(L_288, 4, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_289 = L_288;
		NullCheck(L_289);
		ContainerPartContent_set_Amount_m3226186816(L_289, 2, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_290 = L_289;
		NullCheck(L_290);
		ContainerPartContent_set_ContainerPartId_m3247376280(L_290, ((int32_t)12), /*hidden argument*/NULL);
		NullCheck(L_285);
		List_1_Add_m3045151032(L_285, L_290, /*hidden argument*/List_1_Add_m3045151032_RuntimeMethod_var);
		List_1_t3202846126 * L_291 = L_285;
		ContainerPartContent_t1730771384 * L_292 = (ContainerPartContent_t1730771384 *)il2cpp_codegen_object_new(ContainerPartContent_t1730771384_il2cpp_TypeInfo_var);
		ContainerPartContent__ctor_m2382803909(L_292, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_293 = L_292;
		NullCheck(L_293);
		ContainerPartContent_set_Id_m1101185761(L_293, 5, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_294 = L_293;
		NullCheck(L_294);
		ContainerPartContent_set_TypeId_m3901773082(L_294, 5, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_295 = L_294;
		NullCheck(L_295);
		ContainerPartContent_set_Amount_m3226186816(L_295, 1, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_296 = L_295;
		NullCheck(L_296);
		ContainerPartContent_set_ContainerPartId_m3247376280(L_296, 5, /*hidden argument*/NULL);
		NullCheck(L_291);
		List_1_Add_m3045151032(L_291, L_296, /*hidden argument*/List_1_Add_m3045151032_RuntimeMethod_var);
		List_1_t3202846126 * L_297 = L_291;
		ContainerPartContent_t1730771384 * L_298 = (ContainerPartContent_t1730771384 *)il2cpp_codegen_object_new(ContainerPartContent_t1730771384_il2cpp_TypeInfo_var);
		ContainerPartContent__ctor_m2382803909(L_298, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_299 = L_298;
		NullCheck(L_299);
		ContainerPartContent_set_Id_m1101185761(L_299, 6, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_300 = L_299;
		NullCheck(L_300);
		ContainerPartContent_set_TypeId_m3901773082(L_300, 6, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_301 = L_300;
		NullCheck(L_301);
		ContainerPartContent_set_Amount_m3226186816(L_301, 2, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_302 = L_301;
		NullCheck(L_302);
		ContainerPartContent_set_ContainerPartId_m3247376280(L_302, ((int32_t)10), /*hidden argument*/NULL);
		NullCheck(L_297);
		List_1_Add_m3045151032(L_297, L_302, /*hidden argument*/List_1_Add_m3045151032_RuntimeMethod_var);
		List_1_t3202846126 * L_303 = L_297;
		ContainerPartContent_t1730771384 * L_304 = (ContainerPartContent_t1730771384 *)il2cpp_codegen_object_new(ContainerPartContent_t1730771384_il2cpp_TypeInfo_var);
		ContainerPartContent__ctor_m2382803909(L_304, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_305 = L_304;
		NullCheck(L_305);
		ContainerPartContent_set_Id_m1101185761(L_305, 7, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_306 = L_305;
		NullCheck(L_306);
		ContainerPartContent_set_TypeId_m3901773082(L_306, 7, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_307 = L_306;
		NullCheck(L_307);
		ContainerPartContent_set_Amount_m3226186816(L_307, 1, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_308 = L_307;
		NullCheck(L_308);
		ContainerPartContent_set_ContainerPartId_m3247376280(L_308, ((int32_t)11), /*hidden argument*/NULL);
		NullCheck(L_303);
		List_1_Add_m3045151032(L_303, L_308, /*hidden argument*/List_1_Add_m3045151032_RuntimeMethod_var);
		List_1_t3202846126 * L_309 = L_303;
		ContainerPartContent_t1730771384 * L_310 = (ContainerPartContent_t1730771384 *)il2cpp_codegen_object_new(ContainerPartContent_t1730771384_il2cpp_TypeInfo_var);
		ContainerPartContent__ctor_m2382803909(L_310, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_311 = L_310;
		NullCheck(L_311);
		ContainerPartContent_set_Id_m1101185761(L_311, 8, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_312 = L_311;
		NullCheck(L_312);
		ContainerPartContent_set_TypeId_m3901773082(L_312, 8, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_313 = L_312;
		NullCheck(L_313);
		ContainerPartContent_set_Amount_m3226186816(L_313, 2, /*hidden argument*/NULL);
		ContainerPartContent_t1730771384 * L_314 = L_313;
		NullCheck(L_314);
		ContainerPartContent_set_ContainerPartId_m3247376280(L_314, ((int32_t)15), /*hidden argument*/NULL);
		NullCheck(L_309);
		List_1_Add_m3045151032(L_309, L_314, /*hidden argument*/List_1_Add_m3045151032_RuntimeMethod_var);
		__this->set_containerPartContentList_5(L_309);
		return;
	}
}
// System.Collections.Generic.List`1<IndustrialApp.Models.Task> IndustrialApp.TestData.Data::get_TaskList()
extern "C" IL2CPP_METHOD_ATTR List_1_t86112004 * Data_get_TaskList_m2616195783 (Data_t2790604980 * __this, const RuntimeMethod* method)
{
	{
		List_1_t86112004 * L_0 = __this->get_taskList_0();
		return L_0;
	}
}
// System.Collections.Generic.List`1<IndustrialApp.Models.TaskElement> IndustrialApp.TestData.Data::get_TaskElementList()
extern "C" IL2CPP_METHOD_ATTR List_1_t265991512 * Data_get_TaskElementList_m1844038042 (Data_t2790604980 * __this, const RuntimeMethod* method)
{
	{
		List_1_t265991512 * L_0 = __this->get_taskElementList_1();
		return L_0;
	}
}
// System.Collections.Generic.List`1<IndustrialApp.Models.Type> IndustrialApp.TestData.Data::get_TypeList()
extern "C" IL2CPP_METHOD_ATTR List_1_t973736054 * Data_get_TypeList_m1935339362 (Data_t2790604980 * __this, const RuntimeMethod* method)
{
	{
		List_1_t973736054 * L_0 = __this->get_typeList_2();
		return L_0;
	}
}
// System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPart> IndustrialApp.TestData.Data::get_ContainerPartList()
extern "C" IL2CPP_METHOD_ATTR List_1_t2129608650 * Data_get_ContainerPartList_m2183318721 (Data_t2790604980 * __this, const RuntimeMethod* method)
{
	{
		List_1_t2129608650 * L_0 = __this->get_containerPartList_4();
		return L_0;
	}
}
// System.Collections.Generic.List`1<IndustrialApp.Models.ContainerPartContent> IndustrialApp.TestData.Data::get_ContainerPartContentList()
extern "C" IL2CPP_METHOD_ATTR List_1_t3202846126 * Data_get_ContainerPartContentList_m2238924345 (Data_t2790604980 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3202846126 * L_0 = __this->get_containerPartContentList_5();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
