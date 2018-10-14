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


// IActivationFactory
struct Il2CppIActivationFactory;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// Windows.Foundation.IAsyncAction
struct IAsyncAction_t3072713919;
// Windows.Foundation.Metadata.IApiInformationStatics
struct IApiInformationStatics_t1368946868;
// Windows.Networking.Connectivity.INetworkInformationStatics
struct INetworkInformationStatics_t1568055678;
// Windows.Networking.Connectivity.INetworkInformationStatics2
struct INetworkInformationStatics2_t442609477;
// Windows.Networking.IHostNameFactory
struct IHostNameFactory_t2985905689;
// Windows.Networking.IHostNameStatics
struct IHostNameStatics_t664333692;
// Windows.Storage.IStorageFileStatics
struct IStorageFileStatics_t4131808966;
// Windows.Storage.IStorageFolderStatics
struct IStorageFolderStatics_t333412554;
// Windows.Storage.Streams.IDataReaderFactory
struct IDataReaderFactory_t2217455388;
// Windows.Storage.Streams.IDataReaderStatics
struct IDataReaderStatics_t1343138968;
// Windows.Storage.Streams.IDataWriterFactory
struct IDataWriterFactory_t624500286;

struct DateTime_t1679451545 ;
struct Guid_t ;
struct IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper;
struct IAsyncAction_t3072713919;
struct IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t1622574100;
struct IAsyncOperationWithProgress_2_t593214123;
struct IAsyncOperation_1_t1181249698;
struct IAsyncOperation_1_t1918115372;
struct IAsyncOperation_1_t3013442981;
struct IAsyncOperation_1_t372991836;
struct IAsyncOperation_1_t3901635704;
struct IAsyncOperation_1_t721183771;
struct IBuffer_t541192229;
struct IDataReader_t3392321383;
struct IDataWriter_t1260434628;
struct IHostName_t3179521082;
struct IInputStream_t2821136229;
struct IOutputStream_t2042351338;
struct IVectorView_1_t2228900081;
struct Point_t4164953539 ;
struct Rect_t2695113487 ;
struct Size_t550917638 ;
struct TimeSpan_t881159249 ;



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
// Windows.Foundation.IAsyncAction
struct NOVTABLE IAsyncAction_t3072713919 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_put_Completed_m1173868328(IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_get_Completed_m1835005524(IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_GetResults_m1540137877() = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.UInt32>
struct NOVTABLE IAsyncOperation_1_t1181249698 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m1437779878(IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m2736054029(IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m2010780058(uint32_t* comReturnValue) = 0;
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
#ifndef U24ARRAYTYPEU3D12_T2488454196_H
#define U24ARRAYTYPEU3D12_T2488454196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D12_t2488454196 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_t2488454196__padding[12];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D12_T2488454196_H
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
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255371_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255371  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46
	U24ArrayTypeU3D12_t2488454196  ___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0)); }
	inline U24ArrayTypeU3D12_t2488454196  get_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0() const { return ___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0; }
	inline U24ArrayTypeU3D12_t2488454196 * get_address_of_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0() { return &___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0; }
	inline void set_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0(U24ArrayTypeU3D12_t2488454196  value)
	{
		___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255371_H
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
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef BASEMESHEFFECT_T2440176439_H
#define BASEMESHEFFECT_T2440176439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.BaseMeshEffect
struct  BaseMeshEffect_t2440176439  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_t1660335611 * ___m_Graphic_4;

public:
	inline static int32_t get_offset_of_m_Graphic_4() { return static_cast<int32_t>(offsetof(BaseMeshEffect_t2440176439, ___m_Graphic_4)); }
	inline Graphic_t1660335611 * get_m_Graphic_4() const { return ___m_Graphic_4; }
	inline Graphic_t1660335611 ** get_address_of_m_Graphic_4() { return &___m_Graphic_4; }
	inline void set_m_Graphic_4(Graphic_t1660335611 * value)
	{
		___m_Graphic_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Graphic_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMESHEFFECT_T2440176439_H
#ifndef SHADOW_T773074319_H
#define SHADOW_T773074319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Shadow
struct  Shadow_t773074319  : public BaseMeshEffect_t2440176439
{
public:
	// UnityEngine.Color UnityEngine.UI.Shadow::m_EffectColor
	Color_t2555686324  ___m_EffectColor_5;
	// UnityEngine.Vector2 UnityEngine.UI.Shadow::m_EffectDistance
	Vector2_t2156229523  ___m_EffectDistance_6;
	// System.Boolean UnityEngine.UI.Shadow::m_UseGraphicAlpha
	bool ___m_UseGraphicAlpha_7;

public:
	inline static int32_t get_offset_of_m_EffectColor_5() { return static_cast<int32_t>(offsetof(Shadow_t773074319, ___m_EffectColor_5)); }
	inline Color_t2555686324  get_m_EffectColor_5() const { return ___m_EffectColor_5; }
	inline Color_t2555686324 * get_address_of_m_EffectColor_5() { return &___m_EffectColor_5; }
	inline void set_m_EffectColor_5(Color_t2555686324  value)
	{
		___m_EffectColor_5 = value;
	}

	inline static int32_t get_offset_of_m_EffectDistance_6() { return static_cast<int32_t>(offsetof(Shadow_t773074319, ___m_EffectDistance_6)); }
	inline Vector2_t2156229523  get_m_EffectDistance_6() const { return ___m_EffectDistance_6; }
	inline Vector2_t2156229523 * get_address_of_m_EffectDistance_6() { return &___m_EffectDistance_6; }
	inline void set_m_EffectDistance_6(Vector2_t2156229523  value)
	{
		___m_EffectDistance_6 = value;
	}

	inline static int32_t get_offset_of_m_UseGraphicAlpha_7() { return static_cast<int32_t>(offsetof(Shadow_t773074319, ___m_UseGraphicAlpha_7)); }
	inline bool get_m_UseGraphicAlpha_7() const { return ___m_UseGraphicAlpha_7; }
	inline bool* get_address_of_m_UseGraphicAlpha_7() { return &___m_UseGraphicAlpha_7; }
	inline void set_m_UseGraphicAlpha_7(bool value)
	{
		___m_UseGraphicAlpha_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADOW_T773074319_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5300 = { sizeof (Shadow_t773074319), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5300[4] = 
{
	Shadow_t773074319::get_offset_of_m_EffectColor_5(),
	Shadow_t773074319::get_offset_of_m_EffectDistance_6(),
	Shadow_t773074319::get_offset_of_m_UseGraphicAlpha_7(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5301 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255371), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5301[1] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields::get_offset_of_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5302 = { sizeof (U24ArrayTypeU3D12_t2488454196)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D12_t2488454196 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5303 = { sizeof (U3CModuleU3E_t692745587), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5304 = { 0, sizeof(IClosable_t326290202*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5305 = { sizeof (WebHostHiddenAttribute_t2021537596), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5306 = { sizeof (DualApiPartitionAttribute_t1301304994), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5306[1] = 
{
	DualApiPartitionAttribute_t1301304994::get_offset_of_version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5307 = { sizeof (MuseAttribute_t3401286167), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5307[1] = 
{
	MuseAttribute_t3401286167::get_offset_of_Version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5308 = { sizeof (PropertyType_t3031428354)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5308[42] = 
{
	PropertyType_t3031428354::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5309 = { sizeof (Point_t4164953540)+ sizeof (RuntimeObject), sizeof(Point_t4164953540 ), 0, 0 };
extern const int32_t g_FieldOffsetTable5309[2] = 
{
	Point_t4164953540::get_offset_of_X_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Point_t4164953540::get_offset_of_Y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5310 = { sizeof (Size_t550917639)+ sizeof (RuntimeObject), sizeof(Size_t550917639 ), 0, 0 };
extern const int32_t g_FieldOffsetTable5310[2] = 
{
	Size_t550917639::get_offset_of_Width_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Size_t550917639::get_offset_of_Height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5311 = { sizeof (Rect_t2695113488)+ sizeof (RuntimeObject), sizeof(Rect_t2695113488 ), 0, 0 };
extern const int32_t g_FieldOffsetTable5311[4] = 
{
	Rect_t2695113488::get_offset_of_X_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2695113488::get_offset_of_Y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2695113488::get_offset_of_Width_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2695113488::get_offset_of_Height_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5312 = { sizeof (DateTime_t1679451545)+ sizeof (RuntimeObject), sizeof(DateTime_t1679451545 ), 0, 0 };
extern const int32_t g_FieldOffsetTable5312[1] = 
{
	DateTime_t1679451545::get_offset_of_UniversalTime_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5313 = { sizeof (TimeSpan_t1755640982)+ sizeof (RuntimeObject), sizeof(TimeSpan_t1755640982 ), 0, 0 };
extern const int32_t g_FieldOffsetTable5313[1] = 
{
	TimeSpan_t1755640982::get_offset_of_Duration_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5314 = { 0, sizeof(IPropertyValue_t3169763779*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5315 = { 0, sizeof(IStringable_t1634798504*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5316 = { sizeof (AsyncActionCompletedHandler_t4142409509), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5317 = { 0, sizeof(IApiInformationStatics_t1368946868*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5318 = { sizeof (ApiInformation_t812843232), -1, sizeof(ApiInformation_t812843232_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5319 = { sizeof (ActivatableAttribute_t4098936231), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5320 = { sizeof (ContractVersionAttribute_t1666784187), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5321 = { sizeof (AllowMultipleAttribute_t3314144467), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5322 = { sizeof (AttributeUsageAttribute_t1422441135), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5323 = { sizeof (AttributeTargets_t2460853228)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5323[14] = 
{
	AttributeTargets_t2460853228::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5324 = { sizeof (DefaultOverloadAttribute_t2513707992), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5325 = { sizeof (DefaultAttribute_t1509828399), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5326 = { sizeof (GuidAttribute_t2682955351), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5327 = { sizeof (ComposableAttribute_t2299833422), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5328 = { sizeof (CompositionType_t2620517455)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5328[3] = 
{
	CompositionType_t2620517455::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5329 = { sizeof (OverloadAttribute_t2178303703), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5330 = { sizeof (ApiContractAttribute_t3160257459), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5331 = { sizeof (StaticAttribute_t2174868556), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5332 = { sizeof (ThreadingAttribute_t685453408), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5333 = { sizeof (ThreadingModel_t2838021473)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5333[5] = 
{
	ThreadingModel_t2838021473::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5334 = { sizeof (MarshalingBehaviorAttribute_t570737848), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5335 = { sizeof (MarshalingType_t3556196393)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5335[5] = 
{
	MarshalingType_t3556196393::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5336 = { sizeof (ExclusiveToAttribute_t3124418018), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5337 = { sizeof (LengthIsAttribute_t613149204), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5338 = { sizeof (AsyncStatus_t2150485874)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5338[5] = 
{
	AsyncStatus_t2150485874::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5339 = { sizeof (EventRegistrationToken_t3152277946)+ sizeof (RuntimeObject), sizeof(EventRegistrationToken_t3152277946 ), 0, 0 };
extern const int32_t g_FieldOffsetTable5339[1] = 
{
	EventRegistrationToken_t3152277946::get_offset_of_Value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5340 = { sizeof (HResult_t3073183193)+ sizeof (RuntimeObject), sizeof(HResult_t3073183193 ), 0, 0 };
extern const int32_t g_FieldOffsetTable5340[1] = 
{
	HResult_t3073183193::get_offset_of_Value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5341 = { sizeof (RemoteAsyncAttribute_t33115854), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5342 = { 0, sizeof(IAsyncInfo_t2425795444*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5343 = { 0, sizeof(IAsyncAction_t3072713919*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5344 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5345 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5346 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5347 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5348 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5349 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5350 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5351 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5352 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5353 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5354 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5355 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5356 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5357 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5358 = { sizeof (FoundationContract_t3651383009)+ sizeof (RuntimeObject), sizeof(FoundationContract_t3651383009 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5359 = { sizeof (DataReaderLoadOperation_t4248924386), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5360 = { 0, sizeof(IDataReader_t3392321383*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5361 = { 0, sizeof(IDataReaderFactory_t2217455388*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5362 = { sizeof (DataReader_t2381813649), -1, sizeof(DataReader_t2381813649_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5363 = { 0, sizeof(IDataReaderStatics_t1343138968*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5364 = { sizeof (DataWriterStoreOperation_t1087990177), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5365 = { 0, sizeof(IDataWriter_t1260434628*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5366 = { 0, sizeof(IDataWriterFactory_t624500286*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5367 = { sizeof (DataWriter_t841151054), -1, sizeof(DataWriter_t841151054_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5368 = { 0, sizeof(IBuffer_t541192229*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5369 = { sizeof (InputStreamOptions_t2901738979)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5369[4] = 
{
	InputStreamOptions_t2901738979::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5370 = { 0, sizeof(IContentTypeProvider_t1806097440*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5371 = { 0, sizeof(IInputStream_t2821136229*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5372 = { 0, sizeof(IOutputStream_t2042351338*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5373 = { 0, sizeof(IRandomAccessStream_t2099996051*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5374 = { 0, sizeof(IRandomAccessStreamWithContentType_t3296927652*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5375 = { sizeof (HostNameType_t4170768079)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5375[5] = 
{
	HostNameType_t4170768079::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5376 = { 0, sizeof(IHostNameStatics_t664333692*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5377 = { 0, sizeof(IHostName_t3179521082*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5378 = { sizeof (HostName_t2890034819), -1, sizeof(HostName_t2890034819_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5379 = { 0, sizeof(IHostNameFactory_t2985905689*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5380 = { 0, sizeof(INetworkInformationStatics_t1568055678*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5381 = { 0, sizeof(INetworkInformationStatics2_t442609477*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5382 = { sizeof (NetworkInformation_t482159730), -1, sizeof(NetworkInformation_t482159730_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5383 = { sizeof (UniversalApiContract_t3367004861)+ sizeof (RuntimeObject), sizeof(UniversalApiContract_t3367004861 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5384 = { 0, sizeof(IRandomAccessStreamReference_t2718546672*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5385 = { sizeof (StorageFolder_t985480688), -1, sizeof(StorageFolder_t985480688_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5386 = { sizeof (CreationCollisionOption_t2003156443)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5386[5] = 
{
	CreationCollisionOption_t2003156443::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5387 = { sizeof (StorageFile_t1751804116), -1, sizeof(StorageFile_t1751804116_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5388 = { sizeof (FileAccessMode_t2616835387)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5388[3] = 
{
	FileAccessMode_t2616835387::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5389 = { 0, sizeof(IStorageItem_t3194585767*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5390 = { 0, sizeof(IStorageFileStatics_t4131808966*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5391 = { 0, sizeof(IStorageFolder_t2414910357*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5392 = { 0, sizeof(IInputStreamReference_t980626503*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5393 = { 0, sizeof(IStorageFile_t455187485*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5394 = { 0, sizeof(IStorageFolderStatics_t333412554*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5395 = { 0, sizeof(IStorageItem2_t2827190580*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5396 = { 0, sizeof(IStorageItemProperties_t2031733036*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5397 = { 0, sizeof(IStorageItemProperties2_t3993257882*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5398 = { 0, sizeof(IStorageItemPropertiesWithProvider_t3527078644*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5399 = { 0, sizeof(IStorageFilePropertiesWithAvailability_t1554344922*), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
