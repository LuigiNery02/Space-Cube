﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Action[]
struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.Advertisements.Platform.Android.AndroidBanner
struct AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5;
// UnityEngine.Advertisements.AndroidInitializationListener
struct AndroidInitializationListener_tF65DEA3F298A6ECC9F3DF4B908BD467806C247A2;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF;
// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60;
// UnityEngine.Advertisements.AndroidLoadListener
struct AndroidLoadListener_t37472178ECE0150EA229AF3418C3A1DF94E8434C;
// UnityEngine.Advertisements.Platform.Android.AndroidPlatform
struct AndroidPlatform_t5F6E43FB12332D23A519FEA3FC36680CC22BB10D;
// UnityEngine.Advertisements.AndroidShowListener
struct AndroidShowListener_t3B074F139445BE977C5F558AA79AC50E484DA25E;
// UnityEngine.Advertisements.Utilities.ApplicationQuit
struct ApplicationQuit_t657F2DAE714A71F21A98C0C0E84E52B25FA7E545;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Advertisements.Banner
struct Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F;
// UnityEngine.Advertisements.Platform.Android.BannerBundle
struct BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754;
// UnityEngine.Advertisements.BannerLoadOptions
struct BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04;
// UnityEngine.Advertisements.BannerOptions
struct BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C;
// UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder
struct BannerPlaceholder_tC41703F3C8608948B2B9C1190ADEE2D3203C92EF;
// UnityEngine.Advertisements.Utilities.CoroutineExecutor
struct CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// UnityEngine.GUISettings
struct GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0;
// UnityEngine.GUISkin
struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.Advertisements.IBanner
struct IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.Advertisements.INativeBanner
struct INativeBanner_tDEFFF9227E3F58FC94BD11DF21D57649BD34D1AD;
// UnityEngine.Advertisements.INativePlatform
struct INativePlatform_t7A89C573A0E74F740D2695065CDAD93E06D5FFC7;
// UnityEngine.Advertisements.Platform.IPlatform
struct IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB;
// UnityEngine.Advertisements.IUnityAdsInitializationListener
struct IUnityAdsInitializationListener_tB5A65E66AB4768647B0CD180A7F8E7A220B6D813;
// UnityEngine.Advertisements.IUnityAdsLoadListener
struct IUnityAdsLoadListener_t0F5E5882B3CFA2DF54E323857F9A0DE8D7EA7A69;
// UnityEngine.Advertisements.IUnityAdsShowListener
struct IUnityAdsShowListener_t7732F4D848E7DE736C3DC87AEA1E4227F12149D1;
// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager
struct IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69;
// UnityEngine.Advertisements.MetaData
struct MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Advertisements.Platform.Platform
struct Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_t99ED612696DAD41A1A88FE552D9CE1C94BDCF020;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch
struct UnityAdsInitializationListenerMainDispatch_t76A004DF9FF6E896C44173A1E98331315B5664D5;
// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch
struct UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1;
// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch
struct UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965;
// UnityEngine.Advertisements.Utilities.UnityLifecycleManager
struct UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F;
// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner
struct UnsupportedBanner_t1DA7D47F668F1BB7022E73E73FD20E9AF6430B8A;
// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform
struct UnsupportedPlatform_tD53C59393F9D738905A86DCBC05B11379818156B;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tB47B13384B9A3F1944891B8C9FA9E3BE01202575;
// UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t1259023F657AC381A5246AAAE924EA37D321C1AF;
// UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tD1845FF1E152A3B416CD8CBB099FDAA323AA48A0;
// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback
struct ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA;
// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback
struct LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4;
// UnityEngine.Advertisements.BannerOptions/BannerCallback
struct BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E;
// UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tCAF2299D2F9FD299B0CBE1A09CB39A25BE979704;
// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tE1AE55BCCE6224A508A6F88F3123EEA082367F4C;
// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t491D260B7FE1FACC2CB6EBA57BEA49CADE475943;
// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tD88AA8605E676865E294999340DEC825F600576B;
// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t8336A18BEB5666AF440FA677DBF16ADFF5BCC350;
// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t86A277E25E487EF72252C654D23AE0BABC59D1F8;
// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tEF1B0EA625A51111CE26BD8256642CD24A75E64F;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidInitializationListener_tF65DEA3F298A6ECC9F3DF4B908BD467806C247A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidLoadListener_t37472178ECE0150EA229AF3418C3A1DF94E8434C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidPlatform_t5F6E43FB12332D23A519FEA3FC36680CC22BB10D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidShowListener_t3B074F139445BE977C5F558AA79AC50E484DA25E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativeBanner_tDEFFF9227E3F58FC94BD11DF21D57649BD34D1AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativePlatform_t7A89C573A0E74F740D2695065CDAD93E06D5FFC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityAdsInitializationListener_tB5A65E66AB4768647B0CD180A7F8E7A220B6D813_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityAdsLoadListener_t0F5E5882B3CFA2DF54E323857F9A0DE8D7EA7A69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityAdsShowListener_t7732F4D848E7DE736C3DC87AEA1E4227F12149D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingMethodException_t84403BAD115335684834149401CDDFF3BDD42B41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_tB47B13384B9A3F1944891B8C9FA9E3BE01202575_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_t1259023F657AC381A5246AAAE924EA37D321C1AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass20_0_tD1845FF1E152A3B416CD8CBB099FDAA323AA48A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tD88AA8605E676865E294999340DEC825F600576B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tE1AE55BCCE6224A508A6F88F3123EEA082367F4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t491D260B7FE1FACC2CB6EBA57BEA49CADE475943_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t8336A18BEB5666AF440FA677DBF16ADFF5BCC350_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tCAF2299D2F9FD299B0CBE1A09CB39A25BE979704_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t86A277E25E487EF72252C654D23AE0BABC59D1F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_tEF1B0EA625A51111CE26BD8256642CD24A75E64F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsInitializationListenerMainDispatch_t76A004DF9FF6E896C44173A1E98331315B5664D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsupportedBanner_t1DA7D47F668F1BB7022E73E73FD20E9AF6430B8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsupportedPlatform_tD53C59393F9D738905A86DCBC05B11379818156B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01FB309691201B1A5D72C0BC0668E49439FA11C5;
IL2CPP_EXTERN_C String_t* _stringLiteral029DDB27A67D116CA80AAFAE9000FC797056C197;
IL2CPP_EXTERN_C String_t* _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA;
IL2CPP_EXTERN_C String_t* _stringLiteral1073EDD32EA0B0FD3BCAF9C644DE00B100741265;
IL2CPP_EXTERN_C String_t* _stringLiteral1960F177DBF9ED9808DEA1773FEEF144EC8E4C7F;
IL2CPP_EXTERN_C String_t* _stringLiteral1CA693FCFD526B83AF173A1829A1703B75FEFC0E;
IL2CPP_EXTERN_C String_t* _stringLiteral1D185DB91E3DF09D623D41B1D7987E6F4A5D419D;
IL2CPP_EXTERN_C String_t* _stringLiteral1D4E110BD86EB84CCC35696802475A8556299334;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA3D52181353D83E31C59DC26E66ADDA6680C79;
IL2CPP_EXTERN_C String_t* _stringLiteral36A7D89431BEAA223457D97EF62FEE269808ED7B;
IL2CPP_EXTERN_C String_t* _stringLiteral3E6D79FB7A672657560825D4EBF2050737CCAF6E;
IL2CPP_EXTERN_C String_t* _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192;
IL2CPP_EXTERN_C String_t* _stringLiteral46308C2360498265204DA7350FCD77C6D5A57F9C;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4EC9FD747E1362F76CCE0E68488AB9A1F71729AA;
IL2CPP_EXTERN_C String_t* _stringLiteral5288AA775893C983428668C2C3DE7154A4254F58;
IL2CPP_EXTERN_C String_t* _stringLiteral5416DA66FCD064B00AC9807723143002DA52C7B3;
IL2CPP_EXTERN_C String_t* _stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741;
IL2CPP_EXTERN_C String_t* _stringLiteral621CE18D79B55039EFE55A04E6BFD7A549E31192;
IL2CPP_EXTERN_C String_t* _stringLiteral684D1C9AD6F5D83264667D7FCC62B008CFD8E5FD;
IL2CPP_EXTERN_C String_t* _stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80;
IL2CPP_EXTERN_C String_t* _stringLiteral750B47A9E43C9EA610F98792362D027D33B89ECB;
IL2CPP_EXTERN_C String_t* _stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58;
IL2CPP_EXTERN_C String_t* _stringLiteral7D40F3F0C41EC73A97A45783093FA83DC6B51E9F;
IL2CPP_EXTERN_C String_t* _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D;
IL2CPP_EXTERN_C String_t* _stringLiteral84B4C675C9F3E79A1D308FF8C010110E9F4D7327;
IL2CPP_EXTERN_C String_t* _stringLiteral84BD1FA2B6D34A46940BEA516DAA6B3107B0C9DD;
IL2CPP_EXTERN_C String_t* _stringLiteral8776C6B9757743C85B42D4041703FD2BFBA9F722;
IL2CPP_EXTERN_C String_t* _stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF;
IL2CPP_EXTERN_C String_t* _stringLiteral8CAC7A1CF27146D11E92BE39054D8E4594FE9B3D;
IL2CPP_EXTERN_C String_t* _stringLiteral939E5F4A986FA1522F2818B2E87F98C768D55320;
IL2CPP_EXTERN_C String_t* _stringLiteral97D34C2FB9E9844A9F8172EB3FADC29227F6FFE0;
IL2CPP_EXTERN_C String_t* _stringLiteral998C6D819F4FEB5C09C82BCC9B537AD6F2280964;
IL2CPP_EXTERN_C String_t* _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralA5FDB5AC0DA6EFB2AD96E6A2A36EE08EA416A714;
IL2CPP_EXTERN_C String_t* _stringLiteralAE839BB5479CD2F5F696EC09ACD408C4D13EAEFC;
IL2CPP_EXTERN_C String_t* _stringLiteralB040439619EE49D63AB73416AB10D1423D032871;
IL2CPP_EXTERN_C String_t* _stringLiteralB1F0531186F6B4040AB9184A7B44C2B0A8E9FFF8;
IL2CPP_EXTERN_C String_t* _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E;
IL2CPP_EXTERN_C String_t* _stringLiteralC2CF9460CF1354EAF3436608352EAD04C04E560A;
IL2CPP_EXTERN_C String_t* _stringLiteralC35E0E0F7815ECC9EEC880D111BBFC20D2A55240;
IL2CPP_EXTERN_C String_t* _stringLiteralC6D00A6763BDEB8C18D1862BD06DFCB3D7627412;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralCF0425E7DDA63941C9BCBB6016B6525349B18A96;
IL2CPP_EXTERN_C String_t* _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1;
IL2CPP_EXTERN_C String_t* _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052;
IL2CPP_EXTERN_C String_t* _stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBanner_U3CHideU3Eb__13_0_mAEF6BAFF267490CBDFCD2FC5C7D542640AA94CDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBanner_U3CHideU3Eb__13_1_mCD879634C71A15386103679E0BA787128443D2F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBanner_U3ConUnityBannerClickU3Eb__19_0_m807942AFA8EA5258E565457837BFC4E16F7DDA70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_0_mDC9C5562DA0BC6D88D7F506938787E72D2319627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_1_m469E73202154EA7225DBD310142EA1EB0BC902CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsInitializationError_tC78751E75D787D0A82CFB8FDD1B970C60E182346_m7B52FE08EE4800A3D8800FD2FCE918B0C8B90519_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsLoadError_t7BFF3D66FEE9ACEFDAABAEC17849431B62341699_m0F69D80C060D672A0C31983FD5724AE742F03C09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowCompletionState_t559AE84836657714B7E907D54424E60DCFEB49F9_m18336F5A010C868A7B0136BE6EB1346C46F3BAB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowError_t3D75FEF84406BF32A558BCA7583F84D94E2B1AC9_mE10C092D576BA7E38FD2F7F64FBEFE60FB019030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisApplicationQuit_t657F2DAE714A71F21A98C0C0E84E52B25FA7E545_mDAE6D5EDBB1095429DCD8DA9D908DCE432B18A25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C_mAC324675A097D376C6713A9B429DC4226C5D3687_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C_m91083AE9CC6A962A5C4F95CF2273E4DDD0F4D0AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CLoadU3Eb__0_mD3834E44B9DF03C3BB7A3928CA4C5EE5FE2DF28C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__0_mC3E0CFA7F86A0124DC47E7E97CCF5B45C8EBD391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__1_m01600ECD46838323F617DAD679607E63C58BAE0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass20_0_U3ConUnityBannerErrorU3Eb__0_m69839D6F5C290AFDFDEA13DA5D9D116B8527B97F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3COnUnityAdsAdLoadedU3Eb__0_m780C11C0852C5B481A9F0A06911F43444B8163F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3COnUnityAdsShowFailureU3Eb__0_mCD60D9106DF44B89222234DFC2ED5908BB9E96D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3COnInitializationFailedU3Eb__0_mD04100C934BA18541523CD9B9AD50249CC4635C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3COnUnityAdsFailedToLoadU3Eb__0_mE1EED92A8BB50BA4D477617035805CD7BEEAE6D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3COnUnityAdsShowStartU3Eb__0_m12980CA7B968A2291756C876715657A69207F9AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COnUnityAdsShowClickU3Eb__0_m33BF88ACFC04D921D2C3DAE0BD3C5BF50E5C7AA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3COnUnityAdsShowCompleteU3Eb__0_mB981FBF0E2A450C9820222CB1D4DE50F2016A6C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAdsInitializationListenerMainDispatch_U3COnInitializationCompleteU3Eb__3_0_m051E35696A8A7FBAC626D874F166AAABEEDFA57B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFF3B89B0D92EFA4589045A706301E29281BF864A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
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
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____array_0)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__array_0() const { return ____array_0; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// UnityEngine.Advertisements.Advertisement
struct Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C  : public RuntimeObject
{
public:

public:
};

struct Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_StaticFields
{
public:
	// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.Advertisement::s_Platform
	RuntimeObject* ___s_Platform_0;

public:
	inline static int32_t get_offset_of_s_Platform_0() { return static_cast<int32_t>(offsetof(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_StaticFields, ___s_Platform_0)); }
	inline RuntimeObject* get_s_Platform_0() const { return ___s_Platform_0; }
	inline RuntimeObject** get_address_of_s_Platform_0() { return &___s_Platform_0; }
	inline void set_s_Platform_0(RuntimeObject* value)
	{
		___s_Platform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Platform_0), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};


// UnityEngine.Advertisements.Platform.Android.AndroidPlatform
struct AndroidPlatform_t5F6E43FB12332D23A519FEA3FC36680CC22BB10D  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.Platform.Android.AndroidPlatform::m_Platform
	RuntimeObject* ___m_Platform_0;
	// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.AndroidPlatform::m_CurrentActivity
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___m_CurrentActivity_1;
	// UnityEngine.AndroidJavaClass UnityEngine.Advertisements.Platform.Android.AndroidPlatform::m_UnityAds
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___m_UnityAds_2;

public:
	inline static int32_t get_offset_of_m_Platform_0() { return static_cast<int32_t>(offsetof(AndroidPlatform_t5F6E43FB12332D23A519FEA3FC36680CC22BB10D, ___m_Platform_0)); }
	inline RuntimeObject* get_m_Platform_0() const { return ___m_Platform_0; }
	inline RuntimeObject** get_address_of_m_Platform_0() { return &___m_Platform_0; }
	inline void set_m_Platform_0(RuntimeObject* value)
	{
		___m_Platform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Platform_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentActivity_1() { return static_cast<int32_t>(offsetof(AndroidPlatform_t5F6E43FB12332D23A519FEA3FC36680CC22BB10D, ___m_CurrentActivity_1)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_m_CurrentActivity_1() const { return ___m_CurrentActivity_1; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_m_CurrentActivity_1() { return &___m_CurrentActivity_1; }
	inline void set_m_CurrentActivity_1(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___m_CurrentActivity_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentActivity_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnityAds_2() { return static_cast<int32_t>(offsetof(AndroidPlatform_t5F6E43FB12332D23A519FEA3FC36680CC22BB10D, ___m_UnityAds_2)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_m_UnityAds_2() const { return ___m_UnityAds_2; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_m_UnityAds_2() { return &___m_UnityAds_2; }
	inline void set_m_UnityAds_2(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___m_UnityAds_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UnityAds_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.Advertisements.Banner
struct Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Banner::<UnityLifecycleManager>k__BackingField
	RuntimeObject* ___U3CUnityLifecycleManagerU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Advertisements.Banner::<ShowAfterLoad>k__BackingField
	bool ___U3CShowAfterLoadU3Ek__BackingField_1;
	// UnityEngine.Advertisements.INativeBanner UnityEngine.Advertisements.Banner::m_NativeBanner
	RuntimeObject* ___m_NativeBanner_2;

public:
	inline static int32_t get_offset_of_U3CUnityLifecycleManagerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F, ___U3CUnityLifecycleManagerU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CUnityLifecycleManagerU3Ek__BackingField_0() const { return ___U3CUnityLifecycleManagerU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CUnityLifecycleManagerU3Ek__BackingField_0() { return &___U3CUnityLifecycleManagerU3Ek__BackingField_0; }
	inline void set_U3CUnityLifecycleManagerU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CUnityLifecycleManagerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnityLifecycleManagerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShowAfterLoadU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F, ___U3CShowAfterLoadU3Ek__BackingField_1)); }
	inline bool get_U3CShowAfterLoadU3Ek__BackingField_1() const { return ___U3CShowAfterLoadU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CShowAfterLoadU3Ek__BackingField_1() { return &___U3CShowAfterLoadU3Ek__BackingField_1; }
	inline void set_U3CShowAfterLoadU3Ek__BackingField_1(bool value)
	{
		___U3CShowAfterLoadU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_m_NativeBanner_2() { return static_cast<int32_t>(offsetof(Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F, ___m_NativeBanner_2)); }
	inline RuntimeObject* get_m_NativeBanner_2() const { return ___m_NativeBanner_2; }
	inline RuntimeObject** get_address_of_m_NativeBanner_2() { return &___m_NativeBanner_2; }
	inline void set_m_NativeBanner_2(RuntimeObject* value)
	{
		___m_NativeBanner_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NativeBanner_2), (void*)value);
	}
};


// UnityEngine.Advertisements.Platform.Android.BannerBundle
struct BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.BannerBundle::<bannerView>k__BackingField
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___U3CbannerViewU3Ek__BackingField_0;
	// System.String UnityEngine.Advertisements.Platform.Android.BannerBundle::<bannerPlacementId>k__BackingField
	String_t* ___U3CbannerPlacementIdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CbannerViewU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754, ___U3CbannerViewU3Ek__BackingField_0)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_U3CbannerViewU3Ek__BackingField_0() const { return ___U3CbannerViewU3Ek__BackingField_0; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_U3CbannerViewU3Ek__BackingField_0() { return &___U3CbannerViewU3Ek__BackingField_0; }
	inline void set_U3CbannerViewU3Ek__BackingField_0(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___U3CbannerViewU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbannerViewU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbannerPlacementIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754, ___U3CbannerPlacementIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CbannerPlacementIdU3Ek__BackingField_1() const { return ___U3CbannerPlacementIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CbannerPlacementIdU3Ek__BackingField_1() { return &___U3CbannerPlacementIdU3Ek__BackingField_1; }
	inline void set_U3CbannerPlacementIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CbannerPlacementIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbannerPlacementIdU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Advertisements.BannerLoadOptions
struct BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback UnityEngine.Advertisements.BannerLoadOptions::<loadCallback>k__BackingField
	LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4 * ___U3CloadCallbackU3Ek__BackingField_0;
	// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback UnityEngine.Advertisements.BannerLoadOptions::<errorCallback>k__BackingField
	ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA * ___U3CerrorCallbackU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CloadCallbackU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04, ___U3CloadCallbackU3Ek__BackingField_0)); }
	inline LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4 * get_U3CloadCallbackU3Ek__BackingField_0() const { return ___U3CloadCallbackU3Ek__BackingField_0; }
	inline LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4 ** get_address_of_U3CloadCallbackU3Ek__BackingField_0() { return &___U3CloadCallbackU3Ek__BackingField_0; }
	inline void set_U3CloadCallbackU3Ek__BackingField_0(LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4 * value)
	{
		___U3CloadCallbackU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CloadCallbackU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CerrorCallbackU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04, ___U3CerrorCallbackU3Ek__BackingField_1)); }
	inline ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA * get_U3CerrorCallbackU3Ek__BackingField_1() const { return ___U3CerrorCallbackU3Ek__BackingField_1; }
	inline ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA ** get_address_of_U3CerrorCallbackU3Ek__BackingField_1() { return &___U3CerrorCallbackU3Ek__BackingField_1; }
	inline void set_U3CerrorCallbackU3Ek__BackingField_1(ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA * value)
	{
		___U3CerrorCallbackU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CerrorCallbackU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Advertisements.BannerOptions
struct BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<showCallback>k__BackingField
	BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * ___U3CshowCallbackU3Ek__BackingField_0;
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<hideCallback>k__BackingField
	BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * ___U3ChideCallbackU3Ek__BackingField_1;
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<clickCallback>k__BackingField
	BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * ___U3CclickCallbackU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CshowCallbackU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C, ___U3CshowCallbackU3Ek__BackingField_0)); }
	inline BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * get_U3CshowCallbackU3Ek__BackingField_0() const { return ___U3CshowCallbackU3Ek__BackingField_0; }
	inline BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 ** get_address_of_U3CshowCallbackU3Ek__BackingField_0() { return &___U3CshowCallbackU3Ek__BackingField_0; }
	inline void set_U3CshowCallbackU3Ek__BackingField_0(BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * value)
	{
		___U3CshowCallbackU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CshowCallbackU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChideCallbackU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C, ___U3ChideCallbackU3Ek__BackingField_1)); }
	inline BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * get_U3ChideCallbackU3Ek__BackingField_1() const { return ___U3ChideCallbackU3Ek__BackingField_1; }
	inline BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 ** get_address_of_U3ChideCallbackU3Ek__BackingField_1() { return &___U3ChideCallbackU3Ek__BackingField_1; }
	inline void set_U3ChideCallbackU3Ek__BackingField_1(BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * value)
	{
		___U3ChideCallbackU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ChideCallbackU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CclickCallbackU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C, ___U3CclickCallbackU3Ek__BackingField_2)); }
	inline BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * get_U3CclickCallbackU3Ek__BackingField_2() const { return ___U3CclickCallbackU3Ek__BackingField_2; }
	inline BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 ** get_address_of_U3CclickCallbackU3Ek__BackingField_2() { return &___U3CclickCallbackU3Ek__BackingField_2; }
	inline void set_U3CclickCallbackU3Ek__BackingField_2(BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * value)
	{
		___U3CclickCallbackU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CclickCallbackU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.Advertisements.Utilities.EnumUtilities
struct EnumUtilities_t1A9F280C3C9A273741B2732561A6DB2ABE1347D8  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Advertisements.MetaData
struct MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::m_MetaData
	RuntimeObject* ___m_MetaData_0;
	// System.String UnityEngine.Advertisements.MetaData::<category>k__BackingField
	String_t* ___U3CcategoryU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_MetaData_0() { return static_cast<int32_t>(offsetof(MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A, ___m_MetaData_0)); }
	inline RuntimeObject* get_m_MetaData_0() const { return ___m_MetaData_0; }
	inline RuntimeObject** get_address_of_m_MetaData_0() { return &___m_MetaData_0; }
	inline void set_m_MetaData_0(RuntimeObject* value)
	{
		___m_MetaData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MetaData_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcategoryU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A, ___U3CcategoryU3Ek__BackingField_1)); }
	inline String_t* get_U3CcategoryU3Ek__BackingField_1() const { return ___U3CcategoryU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CcategoryU3Ek__BackingField_1() { return &___U3CcategoryU3Ek__BackingField_1; }
	inline void set_U3CcategoryU3Ek__BackingField_1(String_t* value)
	{
		___U3CcategoryU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcategoryU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Advertisements.Platform.Platform
struct Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.Platform::<Banner>k__BackingField
	RuntimeObject* ___U3CBannerU3Ek__BackingField_0;
	// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Platform.Platform::<UnityLifecycleManager>k__BackingField
	RuntimeObject* ___U3CUnityLifecycleManagerU3Ek__BackingField_1;
	// UnityEngine.Advertisements.INativePlatform UnityEngine.Advertisements.Platform.Platform::<NativePlatform>k__BackingField
	RuntimeObject* ___U3CNativePlatformU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Advertisements.Platform.Platform::<IsShowing>k__BackingField
	bool ___U3CIsShowingU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CBannerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032, ___U3CBannerU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CBannerU3Ek__BackingField_0() const { return ___U3CBannerU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CBannerU3Ek__BackingField_0() { return &___U3CBannerU3Ek__BackingField_0; }
	inline void set_U3CBannerU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CBannerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBannerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUnityLifecycleManagerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032, ___U3CUnityLifecycleManagerU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CUnityLifecycleManagerU3Ek__BackingField_1() const { return ___U3CUnityLifecycleManagerU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CUnityLifecycleManagerU3Ek__BackingField_1() { return &___U3CUnityLifecycleManagerU3Ek__BackingField_1; }
	inline void set_U3CUnityLifecycleManagerU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CUnityLifecycleManagerU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnityLifecycleManagerU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNativePlatformU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032, ___U3CNativePlatformU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CNativePlatformU3Ek__BackingField_2() const { return ___U3CNativePlatformU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CNativePlatformU3Ek__BackingField_2() { return &___U3CNativePlatformU3Ek__BackingField_2; }
	inline void set_U3CNativePlatformU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CNativePlatformU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNativePlatformU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsShowingU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032, ___U3CIsShowingU3Ek__BackingField_3)); }
	inline bool get_U3CIsShowingU3Ek__BackingField_3() const { return ___U3CIsShowingU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsShowingU3Ek__BackingField_3() { return &___U3CIsShowingU3Ek__BackingField_3; }
	inline void set_U3CIsShowingU3Ek__BackingField_3(bool value)
	{
		___U3CIsShowingU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_t99ED612696DAD41A1A88FE552D9CE1C94BDCF020  : public RuntimeObject
{
public:
	// System.String UnityEngine.Advertisements.ShowOptions::<gamerSid>k__BackingField
	String_t* ___U3CgamerSidU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CgamerSidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ShowOptions_t99ED612696DAD41A1A88FE552D9CE1C94BDCF020, ___U3CgamerSidU3Ek__BackingField_0)); }
	inline String_t* get_U3CgamerSidU3Ek__BackingField_0() const { return ___U3CgamerSidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CgamerSidU3Ek__BackingField_0() { return &___U3CgamerSidU3Ek__BackingField_0; }
	inline void set_U3CgamerSidU3Ek__BackingField_0(String_t* value)
	{
		___U3CgamerSidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgamerSidU3Ek__BackingField_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch
struct UnityAdsInitializationListenerMainDispatch_t76A004DF9FF6E896C44173A1E98331315B5664D5  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.IUnityAdsInitializationListener UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch::m_InitializationListener
	RuntimeObject* ___m_InitializationListener_0;
	// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch::m_LifecycleManager
	RuntimeObject* ___m_LifecycleManager_1;

public:
	inline static int32_t get_offset_of_m_InitializationListener_0() { return static_cast<int32_t>(offsetof(UnityAdsInitializationListenerMainDispatch_t76A004DF9FF6E896C44173A1E98331315B5664D5, ___m_InitializationListener_0)); }
	inline RuntimeObject* get_m_InitializationListener_0() const { return ___m_InitializationListener_0; }
	inline RuntimeObject** get_address_of_m_InitializationListener_0() { return &___m_InitializationListener_0; }
	inline void set_m_InitializationListener_0(RuntimeObject* value)
	{
		___m_InitializationListener_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InitializationListener_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_LifecycleManager_1() { return static_cast<int32_t>(offsetof(UnityAdsInitializationListenerMainDispatch_t76A004DF9FF6E896C44173A1E98331315B5664D5, ___m_LifecycleManager_1)); }
	inline RuntimeObject* get_m_LifecycleManager_1() const { return ___m_LifecycleManager_1; }
	inline RuntimeObject** get_address_of_m_LifecycleManager_1() { return &___m_LifecycleManager_1; }
	inline void set_m_LifecycleManager_1(RuntimeObject* value)
	{
		___m_LifecycleManager_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LifecycleManager_1), (void*)value);
	}
};


// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch
struct UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.IUnityAdsLoadListener UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch::m_LoadListener
	RuntimeObject* ___m_LoadListener_0;
	// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch::m_LifecycleManager
	RuntimeObject* ___m_LifecycleManager_1;

public:
	inline static int32_t get_offset_of_m_LoadListener_0() { return static_cast<int32_t>(offsetof(UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1, ___m_LoadListener_0)); }
	inline RuntimeObject* get_m_LoadListener_0() const { return ___m_LoadListener_0; }
	inline RuntimeObject** get_address_of_m_LoadListener_0() { return &___m_LoadListener_0; }
	inline void set_m_LoadListener_0(RuntimeObject* value)
	{
		___m_LoadListener_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LoadListener_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_LifecycleManager_1() { return static_cast<int32_t>(offsetof(UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1, ___m_LifecycleManager_1)); }
	inline RuntimeObject* get_m_LifecycleManager_1() const { return ___m_LifecycleManager_1; }
	inline RuntimeObject** get_address_of_m_LifecycleManager_1() { return &___m_LifecycleManager_1; }
	inline void set_m_LifecycleManager_1(RuntimeObject* value)
	{
		___m_LifecycleManager_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LifecycleManager_1), (void*)value);
	}
};


// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch
struct UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.IUnityAdsShowListener UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch::m_ShowListener
	RuntimeObject* ___m_ShowListener_0;
	// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch::m_LifecycleManager
	RuntimeObject* ___m_LifecycleManager_1;

public:
	inline static int32_t get_offset_of_m_ShowListener_0() { return static_cast<int32_t>(offsetof(UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965, ___m_ShowListener_0)); }
	inline RuntimeObject* get_m_ShowListener_0() const { return ___m_ShowListener_0; }
	inline RuntimeObject** get_address_of_m_ShowListener_0() { return &___m_ShowListener_0; }
	inline void set_m_ShowListener_0(RuntimeObject* value)
	{
		___m_ShowListener_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShowListener_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_LifecycleManager_1() { return static_cast<int32_t>(offsetof(UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965, ___m_LifecycleManager_1)); }
	inline RuntimeObject* get_m_LifecycleManager_1() const { return ___m_LifecycleManager_1; }
	inline RuntimeObject** get_address_of_m_LifecycleManager_1() { return &___m_LifecycleManager_1; }
	inline void set_m_LifecycleManager_1(RuntimeObject* value)
	{
		___m_LifecycleManager_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LifecycleManager_1), (void*)value);
	}
};


// UnityEngine.Advertisements.Utilities.UnityLifecycleManager
struct UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.Advertisements.Utilities.CoroutineExecutor UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_CoroutineExecutor
	CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * ___m_CoroutineExecutor_1;
	// UnityEngine.Advertisements.Utilities.ApplicationQuit UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_ApplicationQuit
	ApplicationQuit_t657F2DAE714A71F21A98C0C0E84E52B25FA7E545 * ___m_ApplicationQuit_2;
	// System.Boolean UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_Disposed
	bool ___m_Disposed_3;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_CoroutineExecutor_1() { return static_cast<int32_t>(offsetof(UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F, ___m_CoroutineExecutor_1)); }
	inline CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * get_m_CoroutineExecutor_1() const { return ___m_CoroutineExecutor_1; }
	inline CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C ** get_address_of_m_CoroutineExecutor_1() { return &___m_CoroutineExecutor_1; }
	inline void set_m_CoroutineExecutor_1(CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * value)
	{
		___m_CoroutineExecutor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CoroutineExecutor_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ApplicationQuit_2() { return static_cast<int32_t>(offsetof(UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F, ___m_ApplicationQuit_2)); }
	inline ApplicationQuit_t657F2DAE714A71F21A98C0C0E84E52B25FA7E545 * get_m_ApplicationQuit_2() const { return ___m_ApplicationQuit_2; }
	inline ApplicationQuit_t657F2DAE714A71F21A98C0C0E84E52B25FA7E545 ** get_address_of_m_ApplicationQuit_2() { return &___m_ApplicationQuit_2; }
	inline void set_m_ApplicationQuit_2(ApplicationQuit_t657F2DAE714A71F21A98C0C0E84E52B25FA7E545 * value)
	{
		___m_ApplicationQuit_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ApplicationQuit_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Disposed_3() { return static_cast<int32_t>(offsetof(UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F, ___m_Disposed_3)); }
	inline bool get_m_Disposed_3() const { return ___m_Disposed_3; }
	inline bool* get_address_of_m_Disposed_3() { return &___m_Disposed_3; }
	inline void set_m_Disposed_3(bool value)
	{
		___m_Disposed_3 = value;
	}
};


// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner
struct UnsupportedBanner_t1DA7D47F668F1BB7022E73E73FD20E9AF6430B8A  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform
struct UnsupportedPlatform_tD53C59393F9D738905A86DCBC05B11379818156B  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.Advertisements.Advertisement/Banner
struct Banner_t2336CA4B70D3325448FF42E0566E2C8007F688D8  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tB47B13384B9A3F1944891B8C9FA9E3BE01202575  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.BannerLoadOptions UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass11_0::loadOptions
	BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * ___loadOptions_0;

public:
	inline static int32_t get_offset_of_loadOptions_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tB47B13384B9A3F1944891B8C9FA9E3BE01202575, ___loadOptions_0)); }
	inline BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * get_loadOptions_0() const { return ___loadOptions_0; }
	inline BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 ** get_address_of_loadOptions_0() { return &___loadOptions_0; }
	inline void set_loadOptions_0(BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * value)
	{
		___loadOptions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadOptions_0), (void*)value);
	}
};


// UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t1259023F657AC381A5246AAAE924EA37D321C1AF  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.Platform.Android.AndroidBanner UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0::<>4__this
	AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * ___U3CU3E4__this_0;
	// UnityEngine.Advertisements.BannerOptions UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0::showOptions
	BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * ___showOptions_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t1259023F657AC381A5246AAAE924EA37D321C1AF, ___U3CU3E4__this_0)); }
	inline AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_showOptions_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t1259023F657AC381A5246AAAE924EA37D321C1AF, ___showOptions_1)); }
	inline BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * get_showOptions_1() const { return ___showOptions_1; }
	inline BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C ** get_address_of_showOptions_1() { return &___showOptions_1; }
	inline void set_showOptions_1(BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * value)
	{
		___showOptions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___showOptions_1), (void*)value);
	}
};


// UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tD1845FF1E152A3B416CD8CBB099FDAA323AA48A0  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.Platform.Android.AndroidBanner UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0::<>4__this
	AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * ___U3CU3E4__this_0;
	// System.String UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0::message
	String_t* ___message_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_tD1845FF1E152A3B416CD8CBB099FDAA323AA48A0, ___U3CU3E4__this_0)); }
	inline AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_tD1845FF1E152A3B416CD8CBB099FDAA323AA48A0, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_1), (void*)value);
	}
};


// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tE1AE55BCCE6224A508A6F88F3123EEA082367F4C  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass3_0::<>4__this
	UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1 * ___U3CU3E4__this_0;
	// System.String UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass3_0::placementId
	String_t* ___placementId_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tE1AE55BCCE6224A508A6F88F3123EEA082367F4C, ___U3CU3E4__this_0)); }
	inline UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tE1AE55BCCE6224A508A6F88F3123EEA082367F4C, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementId_1), (void*)value);
	}
};


// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t8336A18BEB5666AF440FA677DBF16ADFF5BCC350  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass4_0::<>4__this
	UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * ___U3CU3E4__this_0;
	// System.String UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass4_0::placementId
	String_t* ___placementId_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t8336A18BEB5666AF440FA677DBF16ADFF5BCC350, ___U3CU3E4__this_0)); }
	inline UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t8336A18BEB5666AF440FA677DBF16ADFF5BCC350, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementId_1), (void*)value);
	}
};


// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t86A277E25E487EF72252C654D23AE0BABC59D1F8  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass5_0::<>4__this
	UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * ___U3CU3E4__this_0;
	// System.String UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass5_0::placementId
	String_t* ___placementId_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t86A277E25E487EF72252C654D23AE0BABC59D1F8, ___U3CU3E4__this_0)); }
	inline UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t86A277E25E487EF72252C654D23AE0BABC59D1F8, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementId_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// UnityEngine.Advertisements.BannerPosition
struct BannerPosition_tE0F68077FAE40996BD5981C12C5881FD35F29157 
{
public:
	// System.Int32 UnityEngine.Advertisements.BannerPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BannerPosition_tE0F68077FAE40996BD5981C12C5881FD35F29157, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ScaleMode
struct ScaleMode_t2D41D186D047D8156791981072D8E7F8759ABB49 
{
public:
	// System.Int32 UnityEngine.ScaleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScaleMode_t2D41D186D047D8156791981072D8E7F8759ABB49, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Advertisements.UnityAdsInitializationError
struct UnityAdsInitializationError_tC78751E75D787D0A82CFB8FDD1B970C60E182346 
{
public:
	// System.Int32 UnityEngine.Advertisements.UnityAdsInitializationError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityAdsInitializationError_tC78751E75D787D0A82CFB8FDD1B970C60E182346, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Advertisements.UnityAdsLoadError
struct UnityAdsLoadError_t7BFF3D66FEE9ACEFDAABAEC17849431B62341699 
{
public:
	// System.Int32 UnityEngine.Advertisements.UnityAdsLoadError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityAdsLoadError_t7BFF3D66FEE9ACEFDAABAEC17849431B62341699, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Advertisements.UnityAdsShowCompletionState
struct UnityAdsShowCompletionState_t559AE84836657714B7E907D54424E60DCFEB49F9 
{
public:
	// System.Int32 UnityEngine.Advertisements.UnityAdsShowCompletionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityAdsShowCompletionState_t559AE84836657714B7E907D54424E60DCFEB49F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Advertisements.UnityAdsShowError
struct UnityAdsShowError_t3D75FEF84406BF32A558BCA7583F84D94E2B1AC9 
{
public:
	// System.Int32 UnityEngine.Advertisements.UnityAdsShowError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityAdsShowError_t3D75FEF84406BF32A558BCA7583F84D94E2B1AC9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Advertisements.Platform.Android.AndroidBanner
struct AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_Banner
	RuntimeObject* ___m_Banner_4;
	// UnityEngine.AndroidJavaClass UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_BannersClass
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___m_BannersClass_5;
	// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_CurrentActivity
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___m_CurrentActivity_6;
	// UnityEngine.Advertisements.Platform.Android.BannerBundle UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_BannerBundle
	BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * ___m_BannerBundle_7;
	// UnityEngine.Advertisements.BannerLoadOptions UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_BannerLoadOptions
	BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * ___m_BannerLoadOptions_8;
	// UnityEngine.Advertisements.BannerOptions UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_BannerShowOptions
	BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * ___m_BannerShowOptions_9;
	// System.Boolean UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_ListenerIsSet
	bool ___m_ListenerIsSet_10;

public:
	inline static int32_t get_offset_of_m_Banner_4() { return static_cast<int32_t>(offsetof(AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5, ___m_Banner_4)); }
	inline RuntimeObject* get_m_Banner_4() const { return ___m_Banner_4; }
	inline RuntimeObject** get_address_of_m_Banner_4() { return &___m_Banner_4; }
	inline void set_m_Banner_4(RuntimeObject* value)
	{
		___m_Banner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Banner_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_BannersClass_5() { return static_cast<int32_t>(offsetof(AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5, ___m_BannersClass_5)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_m_BannersClass_5() const { return ___m_BannersClass_5; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_m_BannersClass_5() { return &___m_BannersClass_5; }
	inline void set_m_BannersClass_5(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___m_BannersClass_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BannersClass_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentActivity_6() { return static_cast<int32_t>(offsetof(AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5, ___m_CurrentActivity_6)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_m_CurrentActivity_6() const { return ___m_CurrentActivity_6; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_m_CurrentActivity_6() { return &___m_CurrentActivity_6; }
	inline void set_m_CurrentActivity_6(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___m_CurrentActivity_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentActivity_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BannerBundle_7() { return static_cast<int32_t>(offsetof(AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5, ___m_BannerBundle_7)); }
	inline BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * get_m_BannerBundle_7() const { return ___m_BannerBundle_7; }
	inline BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 ** get_address_of_m_BannerBundle_7() { return &___m_BannerBundle_7; }
	inline void set_m_BannerBundle_7(BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * value)
	{
		___m_BannerBundle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BannerBundle_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_BannerLoadOptions_8() { return static_cast<int32_t>(offsetof(AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5, ___m_BannerLoadOptions_8)); }
	inline BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * get_m_BannerLoadOptions_8() const { return ___m_BannerLoadOptions_8; }
	inline BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 ** get_address_of_m_BannerLoadOptions_8() { return &___m_BannerLoadOptions_8; }
	inline void set_m_BannerLoadOptions_8(BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * value)
	{
		___m_BannerLoadOptions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BannerLoadOptions_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_BannerShowOptions_9() { return static_cast<int32_t>(offsetof(AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5, ___m_BannerShowOptions_9)); }
	inline BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * get_m_BannerShowOptions_9() const { return ___m_BannerShowOptions_9; }
	inline BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C ** get_address_of_m_BannerShowOptions_9() { return &___m_BannerShowOptions_9; }
	inline void set_m_BannerShowOptions_9(BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * value)
	{
		___m_BannerShowOptions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BannerShowOptions_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_ListenerIsSet_10() { return static_cast<int32_t>(offsetof(AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5, ___m_ListenerIsSet_10)); }
	inline bool get_m_ListenerIsSet_10() const { return ___m_ListenerIsSet_10; }
	inline bool* get_address_of_m_ListenerIsSet_10() { return &___m_ListenerIsSet_10; }
	inline void set_m_ListenerIsSet_10(bool value)
	{
		___m_ListenerIsSet_10 = value;
	}
};


// UnityEngine.Advertisements.AndroidInitializationListener
struct AndroidInitializationListener_tF65DEA3F298A6ECC9F3DF4B908BD467806C247A2  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// UnityEngine.Advertisements.IUnityAdsInitializationListener UnityEngine.Advertisements.AndroidInitializationListener::m_ManagedListener
	RuntimeObject* ___m_ManagedListener_5;

public:
	inline static int32_t get_offset_of_m_ManagedListener_5() { return static_cast<int32_t>(offsetof(AndroidInitializationListener_tF65DEA3F298A6ECC9F3DF4B908BD467806C247A2, ___m_ManagedListener_5)); }
	inline RuntimeObject* get_m_ManagedListener_5() const { return ___m_ManagedListener_5; }
	inline RuntimeObject** get_address_of_m_ManagedListener_5() { return &___m_ManagedListener_5; }
	inline void set_m_ManagedListener_5(RuntimeObject* value)
	{
		___m_ManagedListener_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ManagedListener_5), (void*)value);
	}
};


// UnityEngine.Advertisements.AndroidLoadListener
struct AndroidLoadListener_t37472178ECE0150EA229AF3418C3A1DF94E8434C  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// UnityEngine.Advertisements.IUnityAdsLoadListener UnityEngine.Advertisements.AndroidLoadListener::m_ManagedListener
	RuntimeObject* ___m_ManagedListener_5;

public:
	inline static int32_t get_offset_of_m_ManagedListener_5() { return static_cast<int32_t>(offsetof(AndroidLoadListener_t37472178ECE0150EA229AF3418C3A1DF94E8434C, ___m_ManagedListener_5)); }
	inline RuntimeObject* get_m_ManagedListener_5() const { return ___m_ManagedListener_5; }
	inline RuntimeObject** get_address_of_m_ManagedListener_5() { return &___m_ManagedListener_5; }
	inline void set_m_ManagedListener_5(RuntimeObject* value)
	{
		___m_ManagedListener_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ManagedListener_5), (void*)value);
	}
};


// UnityEngine.Advertisements.AndroidShowListener
struct AndroidShowListener_t3B074F139445BE977C5F558AA79AC50E484DA25E  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.AndroidShowListener::m_Platform
	RuntimeObject* ___m_Platform_5;
	// UnityEngine.Advertisements.IUnityAdsShowListener UnityEngine.Advertisements.AndroidShowListener::m_ManagedListener
	RuntimeObject* ___m_ManagedListener_6;

public:
	inline static int32_t get_offset_of_m_Platform_5() { return static_cast<int32_t>(offsetof(AndroidShowListener_t3B074F139445BE977C5F558AA79AC50E484DA25E, ___m_Platform_5)); }
	inline RuntimeObject* get_m_Platform_5() const { return ___m_Platform_5; }
	inline RuntimeObject** get_address_of_m_Platform_5() { return &___m_Platform_5; }
	inline void set_m_Platform_5(RuntimeObject* value)
	{
		___m_Platform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Platform_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ManagedListener_6() { return static_cast<int32_t>(offsetof(AndroidShowListener_t3B074F139445BE977C5F558AA79AC50E484DA25E, ___m_ManagedListener_6)); }
	inline RuntimeObject* get_m_ManagedListener_6() const { return ___m_ManagedListener_6; }
	inline RuntimeObject** get_address_of_m_ManagedListener_6() { return &___m_ManagedListener_6; }
	inline void set_m_ManagedListener_6(RuntimeObject* value)
	{
		___m_ManagedListener_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ManagedListener_6), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tCAF2299D2F9FD299B0CBE1A09CB39A25BE979704  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch/<>c__DisplayClass4_0::<>4__this
	UnityAdsInitializationListenerMainDispatch_t76A004DF9FF6E896C44173A1E98331315B5664D5 * ___U3CU3E4__this_0;
	// UnityEngine.Advertisements.UnityAdsInitializationError UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch/<>c__DisplayClass4_0::error
	int32_t ___error_1;
	// System.String UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch/<>c__DisplayClass4_0::message
	String_t* ___message_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tCAF2299D2F9FD299B0CBE1A09CB39A25BE979704, ___U3CU3E4__this_0)); }
	inline UnityAdsInitializationListenerMainDispatch_t76A004DF9FF6E896C44173A1E98331315B5664D5 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline UnityAdsInitializationListenerMainDispatch_t76A004DF9FF6E896C44173A1E98331315B5664D5 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(UnityAdsInitializationListenerMainDispatch_t76A004DF9FF6E896C44173A1E98331315B5664D5 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tCAF2299D2F9FD299B0CBE1A09CB39A25BE979704, ___error_1)); }
	inline int32_t get_error_1() const { return ___error_1; }
	inline int32_t* get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(int32_t value)
	{
		___error_1 = value;
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tCAF2299D2F9FD299B0CBE1A09CB39A25BE979704, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_2), (void*)value);
	}
};


// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t491D260B7FE1FACC2CB6EBA57BEA49CADE475943  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass4_0::<>4__this
	UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1 * ___U3CU3E4__this_0;
	// System.String UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass4_0::placementId
	String_t* ___placementId_1;
	// UnityEngine.Advertisements.UnityAdsLoadError UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass4_0::error
	int32_t ___error_2;
	// System.String UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass4_0::message
	String_t* ___message_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t491D260B7FE1FACC2CB6EBA57BEA49CADE475943, ___U3CU3E4__this_0)); }
	inline UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t491D260B7FE1FACC2CB6EBA57BEA49CADE475943, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementId_1), (void*)value);
	}

	inline static int32_t get_offset_of_error_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t491D260B7FE1FACC2CB6EBA57BEA49CADE475943, ___error_2)); }
	inline int32_t get_error_2() const { return ___error_2; }
	inline int32_t* get_address_of_error_2() { return &___error_2; }
	inline void set_error_2(int32_t value)
	{
		___error_2 = value;
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t491D260B7FE1FACC2CB6EBA57BEA49CADE475943, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_3), (void*)value);
	}
};


// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tD88AA8605E676865E294999340DEC825F600576B  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass3_0::<>4__this
	UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * ___U3CU3E4__this_0;
	// System.String UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass3_0::placementId
	String_t* ___placementId_1;
	// UnityEngine.Advertisements.UnityAdsShowError UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass3_0::error
	int32_t ___error_2;
	// System.String UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass3_0::message
	String_t* ___message_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tD88AA8605E676865E294999340DEC825F600576B, ___U3CU3E4__this_0)); }
	inline UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tD88AA8605E676865E294999340DEC825F600576B, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementId_1), (void*)value);
	}

	inline static int32_t get_offset_of_error_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tD88AA8605E676865E294999340DEC825F600576B, ___error_2)); }
	inline int32_t get_error_2() const { return ___error_2; }
	inline int32_t* get_address_of_error_2() { return &___error_2; }
	inline void set_error_2(int32_t value)
	{
		___error_2 = value;
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tD88AA8605E676865E294999340DEC825F600576B, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_3), (void*)value);
	}
};


// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tEF1B0EA625A51111CE26BD8256642CD24A75E64F  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass6_0::<>4__this
	UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * ___U3CU3E4__this_0;
	// System.String UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass6_0::placementId
	String_t* ___placementId_1;
	// UnityEngine.Advertisements.UnityAdsShowCompletionState UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass6_0::showCompletionState
	int32_t ___showCompletionState_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tEF1B0EA625A51111CE26BD8256642CD24A75E64F, ___U3CU3E4__this_0)); }
	inline UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tEF1B0EA625A51111CE26BD8256642CD24A75E64F, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementId_1), (void*)value);
	}

	inline static int32_t get_offset_of_showCompletionState_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tEF1B0EA625A51111CE26BD8256642CD24A75E64F, ___showCompletionState_2)); }
	inline int32_t get_showCompletionState_2() const { return ___showCompletionState_2; }
	inline int32_t* get_address_of_showCompletionState_2() { return &___showCompletionState_2; }
	inline void set_showCompletionState_2(int32_t value)
	{
		___showCompletionState_2 = value;
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.GUISkin
struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * ___m_Styles_31;

public:
	inline static int32_t get_offset_of_m_Font_4() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Font_4)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_m_Font_4() const { return ___m_Font_4; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_m_Font_4() { return &___m_Font_4; }
	inline void set_m_Font_4(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___m_Font_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Font_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_box_5() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_box_5)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_box_5() const { return ___m_box_5; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_box_5() { return &___m_box_5; }
	inline void set_m_box_5(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_box_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_box_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_button_6() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_button_6)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_button_6() const { return ___m_button_6; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_button_6() { return &___m_button_6; }
	inline void set_m_button_6(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_button_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_button_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_toggle_7() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_toggle_7)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_toggle_7() const { return ___m_toggle_7; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_toggle_7() { return &___m_toggle_7; }
	inline void set_m_toggle_7(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_toggle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_toggle_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_label_8() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_label_8)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_label_8() const { return ___m_label_8; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_label_8() { return &___m_label_8; }
	inline void set_m_label_8(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_label_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_label_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_textField_9() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textField_9)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textField_9() const { return ___m_textField_9; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textField_9() { return &___m_textField_9; }
	inline void set_m_textField_9(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_textArea_10() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textArea_10)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textArea_10() const { return ___m_textArea_10; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textArea_10() { return &___m_textArea_10; }
	inline void set_m_textArea_10(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textArea_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textArea_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_window_11() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_window_11)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_window_11() const { return ___m_window_11; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_window_11() { return &___m_window_11; }
	inline void set_m_window_11(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_window_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_window_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSlider_12)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSlider_12() const { return ___m_horizontalSlider_12; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSlider_12() { return &___m_horizontalSlider_12; }
	inline void set_m_horizontalSlider_12(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSlider_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumb_13)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumb_13() const { return ___m_horizontalSliderThumb_13; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumb_13() { return &___m_horizontalSliderThumb_13; }
	inline void set_m_horizontalSliderThumb_13(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumb_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumbExtent_14() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumbExtent_14)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumbExtent_14() const { return ___m_horizontalSliderThumbExtent_14; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumbExtent_14() { return &___m_horizontalSliderThumbExtent_14; }
	inline void set_m_horizontalSliderThumbExtent_14(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumbExtent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumbExtent_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_15() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSlider_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSlider_15() const { return ___m_verticalSlider_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSlider_15() { return &___m_verticalSlider_15; }
	inline void set_m_verticalSlider_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSlider_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSlider_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_16() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumb_16)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumb_16() const { return ___m_verticalSliderThumb_16; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumb_16() { return &___m_verticalSliderThumb_16; }
	inline void set_m_verticalSliderThumb_16(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumb_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumb_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumbExtent_17() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumbExtent_17)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumbExtent_17() const { return ___m_verticalSliderThumbExtent_17; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumbExtent_17() { return &___m_verticalSliderThumbExtent_17; }
	inline void set_m_verticalSliderThumbExtent_17(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumbExtent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumbExtent_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_SliderMixed_18() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_SliderMixed_18)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SliderMixed_18() const { return ___m_SliderMixed_18; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SliderMixed_18() { return &___m_SliderMixed_18; }
	inline void set_m_SliderMixed_18(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SliderMixed_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SliderMixed_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_19() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbar_19)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbar_19() const { return ___m_horizontalScrollbar_19; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbar_19() { return &___m_horizontalScrollbar_19; }
	inline void set_m_horizontalScrollbar_19(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbar_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbar_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_20() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarThumb_20)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarThumb_20() const { return ___m_horizontalScrollbarThumb_20; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarThumb_20() { return &___m_horizontalScrollbarThumb_20; }
	inline void set_m_horizontalScrollbarThumb_20(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarThumb_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarThumb_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_21() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarLeftButton_21)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarLeftButton_21() const { return ___m_horizontalScrollbarLeftButton_21; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarLeftButton_21() { return &___m_horizontalScrollbarLeftButton_21; }
	inline void set_m_horizontalScrollbarLeftButton_21(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarLeftButton_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarLeftButton_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_22() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarRightButton_22)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarRightButton_22() const { return ___m_horizontalScrollbarRightButton_22; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarRightButton_22() { return &___m_horizontalScrollbarRightButton_22; }
	inline void set_m_horizontalScrollbarRightButton_22(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarRightButton_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarRightButton_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_23() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbar_23)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbar_23() const { return ___m_verticalScrollbar_23; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbar_23() { return &___m_verticalScrollbar_23; }
	inline void set_m_verticalScrollbar_23(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbar_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbar_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_24() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarThumb_24)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarThumb_24() const { return ___m_verticalScrollbarThumb_24; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarThumb_24() { return &___m_verticalScrollbarThumb_24; }
	inline void set_m_verticalScrollbarThumb_24(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarThumb_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarThumb_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_25() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarUpButton_25)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarUpButton_25() const { return ___m_verticalScrollbarUpButton_25; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarUpButton_25() { return &___m_verticalScrollbarUpButton_25; }
	inline void set_m_verticalScrollbarUpButton_25(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarUpButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarUpButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_26() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarDownButton_26)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarDownButton_26() const { return ___m_verticalScrollbarDownButton_26; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarDownButton_26() { return &___m_verticalScrollbarDownButton_26; }
	inline void set_m_verticalScrollbarDownButton_26(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarDownButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarDownButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScrollView_27() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_ScrollView_27)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_ScrollView_27() const { return ___m_ScrollView_27; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_ScrollView_27() { return &___m_ScrollView_27; }
	inline void set_m_ScrollView_27(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_ScrollView_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScrollView_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_28() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_CustomStyles_28)); }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* get_m_CustomStyles_28() const { return ___m_CustomStyles_28; }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70** get_address_of_m_CustomStyles_28() { return &___m_CustomStyles_28; }
	inline void set_m_CustomStyles_28(GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* value)
	{
		___m_CustomStyles_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomStyles_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Settings_29() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Settings_29)); }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * get_m_Settings_29() const { return ___m_Settings_29; }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 ** get_address_of_m_Settings_29() { return &___m_Settings_29; }
	inline void set_m_Settings_29(GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * value)
	{
		___m_Settings_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Settings_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Styles_31() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Styles_31)); }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * get_m_Styles_31() const { return ___m_Styles_31; }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 ** get_address_of_m_Styles_31() { return &___m_Styles_31; }
	inline void set_m_Styles_31(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * value)
	{
		___m_Styles_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Styles_31), (void*)value);
	}
};

struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___current_33;

public:
	inline static int32_t get_offset_of_ms_Error_30() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___ms_Error_30)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_ms_Error_30() const { return ___ms_Error_30; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_ms_Error_30() { return &___ms_Error_30; }
	inline void set_ms_Error_30(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___ms_Error_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ms_Error_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_32() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___m_SkinChanged_32)); }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * get_m_SkinChanged_32() const { return ___m_SkinChanged_32; }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E ** get_address_of_m_SkinChanged_32() { return &___m_SkinChanged_32; }
	inline void set_m_SkinChanged_32(SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * value)
	{
		___m_SkinChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SkinChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_current_33() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___current_33)); }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * get_current_33() const { return ___current_33; }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 ** get_address_of_current_33() { return &___current_33; }
	inline void set_current_33(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * value)
	{
		___current_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_33), (void*)value);
	}
};


// System.MemberAccessException
struct MemberAccessException_tD623E47056C7D98D56B63B4B954D4E5E128A30FC  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback
struct ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback
struct LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.BannerOptions/BannerCallback
struct BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800  : public MulticastDelegate_t
{
public:

public:
};


// System.MissingMemberException
struct MissingMemberException_t890E7665FD7C812DAD826E4B5CF55F20F16CF639  : public MemberAccessException_tD623E47056C7D98D56B63B4B954D4E5E128A30FC
{
public:
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_17;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_18;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Signature_19;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(MissingMemberException_t890E7665FD7C812DAD826E4B5CF55F20F16CF639, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassName_17), (void*)value);
	}

	inline static int32_t get_offset_of_MemberName_18() { return static_cast<int32_t>(offsetof(MissingMemberException_t890E7665FD7C812DAD826E4B5CF55F20F16CF639, ___MemberName_18)); }
	inline String_t* get_MemberName_18() const { return ___MemberName_18; }
	inline String_t** get_address_of_MemberName_18() { return &___MemberName_18; }
	inline void set_MemberName_18(String_t* value)
	{
		___MemberName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberName_18), (void*)value);
	}

	inline static int32_t get_offset_of_Signature_19() { return static_cast<int32_t>(offsetof(MissingMemberException_t890E7665FD7C812DAD826E4B5CF55F20F16CF639, ___Signature_19)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Signature_19() const { return ___Signature_19; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Signature_19() { return &___Signature_19; }
	inline void set_Signature_19(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Signature_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Signature_19), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Advertisements.Utilities.ApplicationQuit
struct ApplicationQuit_t657F2DAE714A71F21A98C0C0E84E52B25FA7E545  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Advertisements.Utilities.ApplicationQuit::OnApplicationQuitEventHandler
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___OnApplicationQuitEventHandler_4;

public:
	inline static int32_t get_offset_of_OnApplicationQuitEventHandler_4() { return static_cast<int32_t>(offsetof(ApplicationQuit_t657F2DAE714A71F21A98C0C0E84E52B25FA7E545, ___OnApplicationQuitEventHandler_4)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_OnApplicationQuitEventHandler_4() const { return ___OnApplicationQuitEventHandler_4; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_OnApplicationQuitEventHandler_4() { return &___OnApplicationQuitEventHandler_4; }
	inline void set_OnApplicationQuitEventHandler_4(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___OnApplicationQuitEventHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnApplicationQuitEventHandler_4), (void*)value);
	}
};


// UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder
struct BannerPlaceholder_tC41703F3C8608948B2B9C1190ADEE2D3203C92EF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Texture2D UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::aTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___aTexture_4;
	// UnityEngine.Advertisements.BannerPosition UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BannerPosition
	int32_t ___BannerPosition_5;
	// UnityEngine.Advertisements.BannerOptions UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BannerOptions
	BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * ___BannerOptions_6;
	// System.Boolean UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::IsShowing
	bool ___IsShowing_7;

public:
	inline static int32_t get_offset_of_aTexture_4() { return static_cast<int32_t>(offsetof(BannerPlaceholder_tC41703F3C8608948B2B9C1190ADEE2D3203C92EF, ___aTexture_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_aTexture_4() const { return ___aTexture_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_aTexture_4() { return &___aTexture_4; }
	inline void set_aTexture_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___aTexture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aTexture_4), (void*)value);
	}

	inline static int32_t get_offset_of_BannerPosition_5() { return static_cast<int32_t>(offsetof(BannerPlaceholder_tC41703F3C8608948B2B9C1190ADEE2D3203C92EF, ___BannerPosition_5)); }
	inline int32_t get_BannerPosition_5() const { return ___BannerPosition_5; }
	inline int32_t* get_address_of_BannerPosition_5() { return &___BannerPosition_5; }
	inline void set_BannerPosition_5(int32_t value)
	{
		___BannerPosition_5 = value;
	}

	inline static int32_t get_offset_of_BannerOptions_6() { return static_cast<int32_t>(offsetof(BannerPlaceholder_tC41703F3C8608948B2B9C1190ADEE2D3203C92EF, ___BannerOptions_6)); }
	inline BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * get_BannerOptions_6() const { return ___BannerOptions_6; }
	inline BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C ** get_address_of_BannerOptions_6() { return &___BannerOptions_6; }
	inline void set_BannerOptions_6(BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * value)
	{
		___BannerOptions_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BannerOptions_6), (void*)value);
	}

	inline static int32_t get_offset_of_IsShowing_7() { return static_cast<int32_t>(offsetof(BannerPlaceholder_tC41703F3C8608948B2B9C1190ADEE2D3203C92EF, ___IsShowing_7)); }
	inline bool get_IsShowing_7() const { return ___IsShowing_7; }
	inline bool* get_address_of_IsShowing_7() { return &___IsShowing_7; }
	inline void set_IsShowing_7(bool value)
	{
		___IsShowing_7 = value;
	}
};


// UnityEngine.Advertisements.Utilities.CoroutineExecutor
struct CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 UnityEngine.Advertisements.Utilities.CoroutineExecutor::referenceCount
	int32_t ___referenceCount_4;
	// System.Collections.Generic.Queue`1<System.Action> UnityEngine.Advertisements.Utilities.CoroutineExecutor::queue
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * ___queue_5;

public:
	inline static int32_t get_offset_of_referenceCount_4() { return static_cast<int32_t>(offsetof(CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C, ___referenceCount_4)); }
	inline int32_t get_referenceCount_4() const { return ___referenceCount_4; }
	inline int32_t* get_address_of_referenceCount_4() { return &___referenceCount_4; }
	inline void set_referenceCount_4(int32_t value)
	{
		___referenceCount_4 = value;
	}

	inline static int32_t get_offset_of_queue_5() { return static_cast<int32_t>(offsetof(CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C, ___queue_5)); }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * get_queue_5() const { return ___queue_5; }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 ** get_address_of_queue_5() { return &___queue_5; }
	inline void set_queue_5(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * value)
	{
		___queue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_5), (void*)value);
	}
};


// System.MissingMethodException
struct MissingMethodException_t84403BAD115335684834149401CDDFF3BDD42B41  : public MissingMemberException_t890E7665FD7C812DAD826E4B5CF55F20F16CF639
{
public:
	// System.String System.MissingMethodException::signature
	String_t* ___signature_20;

public:
	inline static int32_t get_offset_of_signature_20() { return static_cast<int32_t>(offsetof(MissingMethodException_t84403BAD115335684834149401CDDFF3BDD42B41, ___signature_20)); }
	inline String_t* get_signature_20() const { return ___signature_20; }
	inline String_t** get_address_of_signature_20() { return &___signature_20; }
	inline void set_signature_20(String_t* value)
	{
		___signature_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signature_20), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// T UnityEngine.Advertisements.Utilities.EnumUtilities::GetEnumFromAndroidJavaObject<System.Int32Enum>(UnityEngine.AndroidJavaObject,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumUtilities_GetEnumFromAndroidJavaObject_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m0B3379DC181E9CCB0BAAAF33F29C9CE52B66C573_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___androidJavaObject0, int32_t ___defaultValue1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.Advertisement::CreatePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Advertisement_CreatePlatform_mCF97E69EDBC5759BDBC75B33859BE290263842EE (const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Advertisement::IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_IsSupported_m2683ACFEB26E638E89A07FD1EFFC8D76D91ECECE (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch::.ctor(UnityEngine.Advertisements.IUnityAdsInitializationListener,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsInitializationListenerMainDispatch__ctor_m0BBF024CDFC16F246180AB67369F8F4C5BDAD555 (UnityAdsInitializationListenerMainDispatch_t76A004DF9FF6E896C44173A1E98331315B5664D5 * __this, RuntimeObject* ___initializationListener0, RuntimeObject* ___lifecycleManager1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch::.ctor(UnityEngine.Advertisements.IUnityAdsLoadListener,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsLoadListenerMainDispatch__ctor_m099FC74DA9763DE86BED8202D943F58B5FE18C8D (UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1 * __this, RuntimeObject* ___loadListener0, RuntimeObject* ___lifecycleManager1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m2DA3339D7728FD464505F86A197F353F5CB94843 (String_t* ___placementId0, ShowOptions_t99ED612696DAD41A1A88FE552D9CE1C94BDCF020 * ___showOptions1, RuntimeObject* ___showListener2, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch::.ctor(UnityEngine.Advertisements.IUnityAdsShowListener,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsShowListenerMainDispatch__ctor_m3711E6A7C005519454E69EA6661C96EE3E2DECFA (UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * __this, RuntimeObject* ___showListener0, RuntimeObject* ___lifecycleManager1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager__ctor_mD5B7C6A270E63A5CD2454E3A19F723888C154382 (UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner__ctor_mB2B8F67326BE74B9C4A09CDBEEFB325E0F43292A (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform__ctor_m6EF2F5216BC3D36670B2EDA84A7C02B7CFBCCA67 (AndroidPlatform_t5F6E43FB12332D23A519FEA3FC36680CC22BB10D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Banner::.ctor(UnityEngine.Advertisements.INativeBanner,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner__ctor_mDD474E5221852E045390D1936756F5D8D12BE65F (Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F * __this, RuntimeObject* ___nativeBanner0, RuntimeObject* ___unityLifecycleManager1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Platform::.ctor(UnityEngine.Advertisements.INativePlatform,UnityEngine.Advertisements.IBanner,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_mF416C20B8789325D367945C5C4C6C0C50F04B168 (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, RuntimeObject* ___nativePlatform0, RuntimeObject* ___banner1, RuntimeObject* ___unityLifecycleManager2, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform__ctor_mF38876EA54B85DD18B4AECD76280324F9211F7AE (UnsupportedPlatform_tD53C59393F9D738905A86DCBC05B11379818156B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner__ctor_m72A13F1DD5C9E3254B372EFA3AB4EE10F939A0F5 (UnsupportedBanner_t1DA7D47F668F1BB7022E73E73FD20E9AF6430B8A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921 (const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.AndroidPlatform::GetCurrentAndroidActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidPlatform_GetCurrentAndroidActivity_m8876E65007374A8C3ADF6DD423252316EACDEA1C (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m72D89BD8BEFBB501CC028D6757E881CD503465AE (U3CU3Ec__DisplayClass11_0_tB47B13384B9A3F1944891B8C9FA9E3BE01202575 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Platform.Android.BannerBundle::get_bannerPlacementId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BannerBundle_get_bannerPlacementId_mAED7E362ED7353743DBE095CDA321AA1BA9CA509_inline (BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::Hide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_Hide_m6C916D8A3164B9262319F414727A1E962F7CFE22 (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, bool ___destroy0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mB18FD3844677EEF1B43EDC618D02E6FAAB99DD58 (U3CU3Ec__DisplayClass12_0_t1259023F657AC381A5246AAAE924EA37D321C1AF * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaRunnable::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnable__ctor_m385F79E7C422595C3F8504D588807799A7CF4727 (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::Load(System.String,UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_Load_mEC392C825976739C68646F72A5533613A04E323F (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, String_t* ___placementId0, BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * ___loadOptions1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_hideCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * BannerOptions_get_hideCallback_m4917D20A8FC89C11E8F0DA848352136A643EFD6E_inline (BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.Advertisements.Platform.Android.BannerBundle::.ctor(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerBundle__ctor_mF58FB0BFECD4B8CCE0F047B6C7C639D909A4663D (BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * __this, String_t* ___bannerPlacementId0, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___bannerView1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m4EF050CFDE00E3C2DEE7FECD70906AFA8C8089A9 (U3CU3Ec__DisplayClass20_0_tD1845FF1E152A3B416CD8CBB099FDAA323AA48A0 * __this, const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.BannerBundle::get_bannerView()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * BannerBundle_get_bannerView_m20FD8F37C6B4CBCAC0A242DDCCCCC0CFC410A6DB_inline (BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback_Invoke_m7EF16702D77941C484593A5269ED82D50C2BF211 (BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_showCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * BannerOptions_get_showCallback_m7F006DF1E195FA0DB4018B578A1501C16A3C8ABD_inline (BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback UnityEngine.Advertisements.BannerLoadOptions::get_loadCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4 * BannerLoadOptions_get_loadCallback_m1E53B8D279969186E9C26F708D740CE341021E1D_inline (BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCallback_Invoke_mDABBB7DD68958B1E5291A13DF1989CCAAF379763 (LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4 * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_clickCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * BannerOptions_get_clickCallback_m3FF6E63F23ADB2E8BD2690AFE55AE1A90DF8B3C9_inline (BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * __this, const RuntimeMethod* method);
// T UnityEngine.Advertisements.Utilities.EnumUtilities::GetEnumFromAndroidJavaObject<UnityEngine.Advertisements.UnityAdsInitializationError>(UnityEngine.AndroidJavaObject,T)
inline int32_t EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsInitializationError_tC78751E75D787D0A82CFB8FDD1B970C60E182346_m7B52FE08EE4800A3D8800FD2FCE918B0C8B90519 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___androidJavaObject0, int32_t ___defaultValue1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, int32_t, const RuntimeMethod*))EnumUtilities_GetEnumFromAndroidJavaObject_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m0B3379DC181E9CCB0BAAAF33F29C9CE52B66C573_gshared)(___androidJavaObject0, ___defaultValue1, method);
}
// T UnityEngine.Advertisements.Utilities.EnumUtilities::GetEnumFromAndroidJavaObject<UnityEngine.Advertisements.UnityAdsLoadError>(UnityEngine.AndroidJavaObject,T)
inline int32_t EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsLoadError_t7BFF3D66FEE9ACEFDAABAEC17849431B62341699_m0F69D80C060D672A0C31983FD5724AE742F03C09 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___androidJavaObject0, int32_t ___defaultValue1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, int32_t, const RuntimeMethod*))EnumUtilities_GetEnumFromAndroidJavaObject_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m0B3379DC181E9CCB0BAAAF33F29C9CE52B66C573_gshared)(___androidJavaObject0, ___defaultValue1, method);
}
// System.Void UnityEngine.Advertisements.AndroidInitializationListener::.ctor(UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidInitializationListener__ctor_m67EEAF1D8F71582997CE90D8731126440F29897B (AndroidInitializationListener_tF65DEA3F298A6ECC9F3DF4B908BD467806C247A2 * __this, RuntimeObject* ___initializationListener0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.AndroidLoadListener::.ctor(UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidLoadListener__ctor_m256453455DF0CF141720868CB24739F92BC272E7 (AndroidLoadListener_t37472178ECE0150EA229AF3418C3A1DF94E8434C * __this, RuntimeObject* ___loadListener0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.AndroidShowListener::.ctor(UnityEngine.Advertisements.Platform.IPlatform,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener__ctor_m233DC62153A1CDBA5B1FED4AC03A475AA7B56F9F (AndroidShowListener_t3B074F139445BE977C5F558AA79AC50E484DA25E * __this, RuntimeObject* ___platform0, RuntimeObject* ___showListener1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.MetaData::get_category()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetaData_get_category_m01634B0655A8E8398DBD251759D6CE7F960AEF7C_inline (MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * __this, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::Values()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MetaData_Values_m9A702FADC03CC4AEA44AE1FF1072142D6CBA2092_inline (MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// T UnityEngine.Advertisements.Utilities.EnumUtilities::GetEnumFromAndroidJavaObject<UnityEngine.Advertisements.UnityAdsShowError>(UnityEngine.AndroidJavaObject,T)
inline int32_t EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowError_t3D75FEF84406BF32A558BCA7583F84D94E2B1AC9_mE10C092D576BA7E38FD2F7F64FBEFE60FB019030 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___androidJavaObject0, int32_t ___defaultValue1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, int32_t, const RuntimeMethod*))EnumUtilities_GetEnumFromAndroidJavaObject_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m0B3379DC181E9CCB0BAAAF33F29C9CE52B66C573_gshared)(___androidJavaObject0, ___defaultValue1, method);
}
// T UnityEngine.Advertisements.Utilities.EnumUtilities::GetEnumFromAndroidJavaObject<UnityEngine.Advertisements.UnityAdsShowCompletionState>(UnityEngine.AndroidJavaObject,T)
inline int32_t EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowCompletionState_t559AE84836657714B7E907D54424E60DCFEB49F9_m18336F5A010C868A7B0136BE6EB1346C46F3BAB8 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___androidJavaObject0, int32_t ___defaultValue1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, int32_t, const RuntimeMethod*))EnumUtilities_GetEnumFromAndroidJavaObject_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m0B3379DC181E9CCB0BAAAF33F29C9CE52B66C573_gshared)(___androidJavaObject0, ___defaultValue1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_Invoke_mFFF1FFE59D8285F8A81350E6D5C4D791F44F6AC9 (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_grey_mB2E29B47327F20233856F933DC00ACADEBFDBDFA (const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BackgroundTexture(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * BannerPlaceholder_BackgroundTexture_m293DF04E7B368AE3B9080B22E6FF48594B7F2A12 (int32_t ___width0, int32_t ___height1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F (const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_box_m3877DF429E9B3E7A4ADF39EAAEA4948DD6C38BB0 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mCF8FDA9DA149F528DCDC19680AEED46F25161D89 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::GetBannerRect(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  BannerPlaceholder_GetBannerRect_m9FDCBDF38BA95753723C46D5D941C940BE339F9D (int32_t ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m2D990F18AA1E71C725D759D25935878C8795BCB7 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_m50AFF787DEFFC667E145D1848A9B9C0E84C1DE1E (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, int32_t ___scaleMode2, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_mCBAEFC1F48A5BF6E20691EE14024CEBF93705018 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___colors0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Action>::Dequeue()
inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5 (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	return ((  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Action>::get_Count()
inline int32_t Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_inline (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Action>::.ctor()
inline void Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4 (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.MetaData::set_category(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaData_set_category_m7C17C04FA71B620E17CBF855817317DA4BB55835_inline (MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Advertisements.INativePlatform UnityEngine.Advertisements.Platform.Platform::get_NativePlatform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_NativePlatform_m242BB5680767D51993B32B8A1032A51F43B3ECD2_inline (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_IsInitialized_m68D850C15A7C2F4A091268697F524986F7269B9B (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.MetaData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData__ctor_mD70DF26B182F67DA6605B403EFFD14061145D911 (MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * __this, String_t* ___category0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.MetaData::Set(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData_Set_m2749FCC92C0E858D7D693D3A91AABDBE528B7F02 (MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1 (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_SetMetaData_m75AE211B556BB8A7F129E35A6D6EFF586595613B (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * ___metaData0, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Platform.Platform::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_get_Version_m4981C3DEFDB4F5B5E7AF3A86A35F07DB67A7AB06 (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_IsShowing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Platform_get_IsShowing_m9BD156248CBA7EDCC0501F197D289646D8649911_inline (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.ShowOptions::get_gamerSid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ShowOptions_get_gamerSid_m290022B7CE78E6B3568DFD9547EBA953BF15F1AA_inline (ShowOptions_t99ED612696DAD41A1A88FE552D9CE1C94BDCF020 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Platform::set_IsShowing(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Platform_set_IsShowing_mD23ADD665AA1A55BA6EE3BF160979A19E2CE6DEF_inline (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mD6DE45E52853A14EF448AD6AC412EF352B43110B (U3CU3Ec__DisplayClass4_0_tCAF2299D2F9FD299B0CBE1A09CB39A25BE979704 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mE56CA0753C5B787DF671D744AE2911A1C591064A (U3CU3Ec__DisplayClass3_0_tE1AE55BCCE6224A508A6F88F3123EEA082367F4C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m450192F9B77A2ABBD1381BDA9458C355593CF9CC (U3CU3Ec__DisplayClass4_0_t491D260B7FE1FACC2CB6EBA57BEA49CADE475943 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m870E765CB2BBD78D4CB39A1180D9E963AFAB278E (U3CU3Ec__DisplayClass3_0_tD88AA8605E676865E294999340DEC825F600576B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mA59F545F803A818A0E783ED8551272F30CC1D04D (U3CU3Ec__DisplayClass4_0_t8336A18BEB5666AF440FA677DBF16ADFF5BCC350 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m9C0ED7AF4A57F527CCC9B72F5C4CFDDDE908CE25 (U3CU3Ec__DisplayClass5_0_t86A277E25E487EF72252C654D23AE0BABC59D1F8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mD6C61D8A81BDE48185E76216A2A66CBD3D64C85B (U3CU3Ec__DisplayClass6_0_tEF1B0EA625A51111CE26BD8256642CD24A75E64F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Initialize_mE8EB947E5AD6775988DA2020577DEE236CDF1E5C (UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Advertisements.Utilities.CoroutineExecutor>()
inline CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * GameObject_GetComponent_TisCoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C_m91083AE9CC6A962A5C4F95CF2273E4DDD0F4D0AB (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Advertisements.Utilities.CoroutineExecutor>()
inline CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * GameObject_AddComponent_TisCoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C_mAC324675A097D376C6713A9B429DC4226C5D3687 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Advertisements.Utilities.ApplicationQuit>()
inline ApplicationQuit_t657F2DAE714A71F21A98C0C0E84E52B25FA7E545 * GameObject_AddComponent_TisApplicationQuit_t657F2DAE714A71F21A98C0C0E84E52B25FA7E545_mDAE6D5EDBB1095429DCD8DA9D908DCE432B18A25 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ApplicationQuit_t657F2DAE714A71F21A98C0C0E84E52B25FA7E545 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Action>::Enqueue(!0)
inline void Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09 (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback UnityEngine.Advertisements.BannerLoadOptions::get_errorCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA * BannerLoadOptions_get_errorCallback_m742E504A13CEDCADA2E1F55803D7792173785141_inline (BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback_Invoke_m7230C27B3662E110A0C85BDE8135C853A91EE99C (ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA * __this, String_t* ___message0, const RuntimeMethod* method);
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
// System.Void UnityEngine.Advertisements.Advertisement::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement__cctor_mF58D5BD046D95A7282D82C18BB6331EDDB6898BA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_Platform == null)
		RuntimeObject* L_0 = ((Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var))->get_s_Platform_0();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// s_Platform = CreatePlatform();
		RuntimeObject* L_1;
		L_1 = Advertisement_CreatePlatform_mCF97E69EDBC5759BDBC75B33859BE290263842EE(/*hidden argument*/NULL);
		((Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var))->set_s_Platform_0(L_1);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_isInitialized_m15EA4D8B44335F23364C1F72641F19AAB717BCFB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isInitialized => s_Platform.IsInitialized;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var))->get_s_Platform_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean UnityEngine.Advertisements.Platform.IPlatform::get_IsInitialized() */, IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_isSupported_m6FC3FF3D01C7F835ED4A47F6FBCD5FEAA87C7E54 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isSupported => IsSupported();
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Advertisement_IsSupported_m2683ACFEB26E638E89A07FD1EFFC8D76D91ECECE(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_mB45C589422D7187525CD0B3DCDA05321E83E71F1 (String_t* ___gameId0, bool ___testMode1, RuntimeObject* ___initializationListener2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsInitializationListenerMainDispatch_t76A004DF9FF6E896C44173A1E98331315B5664D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5288AA775893C983428668C2C3DE7154A4254F58);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (initializationListener == null)
		RuntimeObject* L_0 = ___initializationListener2;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// Debug.LogError("initializationListener is null, you will not receive any callbacks");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral5288AA775893C983428668C2C3DE7154A4254F58, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// s_Platform.Initialize(gameId, testMode, new UnityAdsInitializationListenerMainDispatch(initializationListener, s_Platform.UnityLifecycleManager));
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var))->get_s_Platform_0();
		String_t* L_2 = ___gameId0;
		bool L_3 = ___testMode1;
		RuntimeObject* L_4 = ___initializationListener2;
		RuntimeObject* L_5 = ((Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var))->get_s_Platform_0();
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Platform.IPlatform::get_UnityLifecycleManager() */, IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var, L_5);
		UnityAdsInitializationListenerMainDispatch_t76A004DF9FF6E896C44173A1E98331315B5664D5 * L_7 = (UnityAdsInitializationListenerMainDispatch_t76A004DF9FF6E896C44173A1E98331315B5664D5 *)il2cpp_codegen_object_new(UnityAdsInitializationListenerMainDispatch_t76A004DF9FF6E896C44173A1E98331315B5664D5_il2cpp_TypeInfo_var);
		UnityAdsInitializationListenerMainDispatch__ctor_m0BBF024CDFC16F246180AB67369F8F4C5BDAD555(L_7, L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker3< String_t*, bool, RuntimeObject* >::Invoke(3 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener) */, IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_7);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Load_m57EC077466942F7F3F2FA5C03652642A9110D175 (String_t* ___placementId0, RuntimeObject* ___loadListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1F0531186F6B4040AB9184A7B44C2B0A8E9FFF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (loadListener == null)
		RuntimeObject* L_0 = ___loadListener1;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// Debug.LogError("loadListener is null, you will not receive any callbacks");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralB1F0531186F6B4040AB9184A7B44C2B0A8E9FFF8, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// s_Platform.Load(placementId, new UnityAdsLoadListenerMainDispatch(loadListener, s_Platform.UnityLifecycleManager));
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var))->get_s_Platform_0();
		String_t* L_2 = ___placementId0;
		RuntimeObject* L_3 = ___loadListener1;
		RuntimeObject* L_4 = ((Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var))->get_s_Platform_0();
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Platform.IPlatform::get_UnityLifecycleManager() */, IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var, L_4);
		UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1 * L_6 = (UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1 *)il2cpp_codegen_object_new(UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1_il2cpp_TypeInfo_var);
		UnityAdsLoadListenerMainDispatch__ctor_m099FC74DA9763DE86BED8202D943F58B5FE18C8D(L_6, L_3, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(4 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener) */, IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var, L_1, L_2, L_6);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_mF8C0311F6301B900F6AA58AD6BCA9237C32080F8 (String_t* ___placementId0, RuntimeObject* ___showListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Show(placementId, null, showListener);
		String_t* L_0 = ___placementId0;
		RuntimeObject* L_1 = ___showListener1;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		Advertisement_Show_m2DA3339D7728FD464505F86A197F353F5CB94843(L_0, (ShowOptions_t99ED612696DAD41A1A88FE552D9CE1C94BDCF020 *)NULL, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m2DA3339D7728FD464505F86A197F353F5CB94843 (String_t* ___placementId0, ShowOptions_t99ED612696DAD41A1A88FE552D9CE1C94BDCF020 * ___showOptions1, RuntimeObject* ___showListener2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC35E0E0F7815ECC9EEC880D111BBFC20D2A55240);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showListener == null)
		RuntimeObject* L_0 = ___showListener2;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// Debug.LogError("showListener is null, you will not receive any callbacks");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralC35E0E0F7815ECC9EEC880D111BBFC20D2A55240, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// s_Platform.Show(placementId, showOptions, new UnityAdsShowListenerMainDispatch(showListener, s_Platform.UnityLifecycleManager));
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var))->get_s_Platform_0();
		String_t* L_2 = ___placementId0;
		ShowOptions_t99ED612696DAD41A1A88FE552D9CE1C94BDCF020 * L_3 = ___showOptions1;
		RuntimeObject* L_4 = ___showListener2;
		RuntimeObject* L_5 = ((Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var))->get_s_Platform_0();
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Platform.IPlatform::get_UnityLifecycleManager() */, IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var, L_5);
		UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * L_7 = (UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 *)il2cpp_codegen_object_new(UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965_il2cpp_TypeInfo_var);
		UnityAdsShowListenerMainDispatch__ctor_m3711E6A7C005519454E69EA6661C96EE3E2DECFA(L_7, L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker3< String_t*, ShowOptions_t99ED612696DAD41A1A88FE552D9CE1C94BDCF020 *, RuntimeObject* >::Invoke(5 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::Show(System.String,UnityEngine.Advertisements.ShowOptions,UnityEngine.Advertisements.IUnityAdsShowListener) */, IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_7);
		// }
		return;
	}
}
// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.Advertisement::CreatePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Advertisement_CreatePlatform_mCF97E69EDBC5759BDBC75B33859BE290263842EE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPlatform_t5F6E43FB12332D23A519FEA3FC36680CC22BB10D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * V_4 = NULL;
	UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F * V_5 = NULL;
	Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// IUnityLifecycleManager unityLifecycleManager = new UnityLifecycleManager();
		UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F * L_0 = (UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F *)il2cpp_codegen_object_new(UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F_il2cpp_TypeInfo_var);
		UnityLifecycleManager__ctor_mD5B7C6A270E63A5CD2454E3A19F723888C154382(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// nativeBanner = new Platform.Android.AndroidBanner();
		AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * L_1 = (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 *)il2cpp_codegen_object_new(AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5_il2cpp_TypeInfo_var);
		AndroidBanner__ctor_mB2B8F67326BE74B9C4A09CDBEEFB325E0F43292A(L_1, /*hidden argument*/NULL);
		// nativePlatform = new Platform.Android.AndroidPlatform();;
		AndroidPlatform_t5F6E43FB12332D23A519FEA3FC36680CC22BB10D * L_2 = (AndroidPlatform_t5F6E43FB12332D23A519FEA3FC36680CC22BB10D *)il2cpp_codegen_object_new(AndroidPlatform_t5F6E43FB12332D23A519FEA3FC36680CC22BB10D_il2cpp_TypeInfo_var);
		AndroidPlatform__ctor_m6EF2F5216BC3D36670B2EDA84A7C02B7CFBCCA67(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		// IBanner banner = new Advertisements.Banner(nativeBanner, unityLifecycleManager);
		RuntimeObject* L_3 = V_0;
		Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F * L_4 = (Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F *)il2cpp_codegen_object_new(Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F_il2cpp_TypeInfo_var);
		Banner__ctor_mDD474E5221852E045390D1936756F5D8D12BE65F(L_4, L_1, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		// return new Platform.Platform(nativePlatform, banner, unityLifecycleManager);
		RuntimeObject* L_5 = V_1;
		RuntimeObject* L_6 = V_2;
		RuntimeObject* L_7 = V_0;
		Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * L_8 = (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 *)il2cpp_codegen_object_new(Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032_il2cpp_TypeInfo_var);
		Platform__ctor_mF416C20B8789325D367945C5C4C6C0C50F04B168(L_8, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		goto IL_0066;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Exception)
		{
			// catch (Exception exception)
			V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		}

IL_0025:
		try
		{ // begin try (depth: 2)
			// Debug.LogError("Initializing Unity Ads.");
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral750B47A9E43C9EA610F98792362D027D33B89ECB)), /*hidden argument*/NULL);
			// Debug.LogError(exception.Message);
			Exception_t * L_9 = V_4;
			NullCheck(L_9);
			String_t* L_10;
			L_10 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_9);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_10, /*hidden argument*/NULL);
			// }
			goto IL_0040;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t84403BAD115335684834149401CDDFF3BDD42B41_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_003d;
			}
			throw e;
		}

CATCH_003d:
		{ // begin catch(System.MissingMethodException)
			// catch (MissingMethodException)
			// {}
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0040;
		} // end catch (depth: 2)

IL_0040:
		{
			// var unsupportedPlatform = new Platform.Unsupported.UnsupportedPlatform();
			UnsupportedPlatform_tD53C59393F9D738905A86DCBC05B11379818156B * L_11 = (UnsupportedPlatform_tD53C59393F9D738905A86DCBC05B11379818156B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsupportedPlatform_tD53C59393F9D738905A86DCBC05B11379818156B_il2cpp_TypeInfo_var)));
			UnsupportedPlatform__ctor_mF38876EA54B85DD18B4AECD76280324F9211F7AE(L_11, /*hidden argument*/NULL);
			// var coroutineExecutor = new UnityLifecycleManager();
			UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F * L_12 = (UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F_il2cpp_TypeInfo_var)));
			UnityLifecycleManager__ctor_mD5B7C6A270E63A5CD2454E3A19F723888C154382(L_12, /*hidden argument*/NULL);
			V_5 = L_12;
			// var unsupportedBanner = new Platform.Unsupported.UnsupportedBanner();
			UnsupportedBanner_t1DA7D47F668F1BB7022E73E73FD20E9AF6430B8A * L_13 = (UnsupportedBanner_t1DA7D47F668F1BB7022E73E73FD20E9AF6430B8A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsupportedBanner_t1DA7D47F668F1BB7022E73E73FD20E9AF6430B8A_il2cpp_TypeInfo_var)));
			UnsupportedBanner__ctor_m72A13F1DD5C9E3254B372EFA3AB4EE10F939A0F5(L_13, /*hidden argument*/NULL);
			// var genericBanner = new Advertisements.Banner(unsupportedBanner, coroutineExecutor);
			UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F * L_14 = V_5;
			Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F * L_15 = (Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F_il2cpp_TypeInfo_var)));
			Banner__ctor_mDD474E5221852E045390D1936756F5D8D12BE65F(L_15, L_13, L_14, /*hidden argument*/NULL);
			V_6 = L_15;
			// return new Platform.Platform(unsupportedPlatform, genericBanner, coroutineExecutor);
			Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F * L_16 = V_6;
			UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F * L_17 = V_5;
			Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * L_18 = (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032_il2cpp_TypeInfo_var)));
			Platform__ctor_mF416C20B8789325D367945C5C4C6C0C50F04B168(L_18, L_11, L_16, L_17, /*hidden argument*/NULL);
			V_3 = L_18;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0066;
		}
	} // end catch (depth: 1)

IL_0066:
	{
		// }
		RuntimeObject* L_19 = V_3;
		return L_19;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_IsSupported_m2683ACFEB26E638E89A07FD1EFFC8D76D91ECECE (const RuntimeMethod* method)
{
	{
		// return Application.isEditor || Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer;
		bool L_0;
		L_0 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1;
		L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)11))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)8))? 1 : 0);
	}

IL_0019:
	{
		return (bool)1;
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
// System.Boolean UnityEngine.Advertisements.Platform.Android.AndroidBanner::get_IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidBanner_get_IsLoaded_mAB0990936AE8BC1F36B39195E14EB545168885F0 (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsLoaded => m_BannerBundle != null;
		BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * L_0 = __this->get_m_BannerBundle_7();
		return (bool)((!(((RuntimeObject*)(BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner__ctor_mB2B8F67326BE74B9C4A09CDBEEFB325E0F43292A (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE839BB5479CD2F5F696EC09ACD408C4D13EAEFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidBanner() : base("com.unity3d.services.banners.IUnityBannerListener") {}
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteralAE839BB5479CD2F5F696EC09ACD408C4D13EAEFC, /*hidden argument*/NULL);
		// public AndroidBanner() : base("com.unity3d.services.banners.IUnityBannerListener") {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::SetupBanner(UnityEngine.Advertisements.IBanner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_SetupBanner_mA65D1056404F37B054C863EDB22BB2013845E606 (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, RuntimeObject* ___banner0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF0425E7DDA63941C9BCBB6016B6525349B18A96);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Banner = banner;
		RuntimeObject* L_0 = ___banner0;
		__this->set_m_Banner_4(L_0);
		// m_BannersClass = new AndroidJavaClass("com.unity3d.services.banners.UnityBanners");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_1, _stringLiteralCF0425E7DDA63941C9BCBB6016B6525349B18A96, /*hidden argument*/NULL);
		__this->set_m_BannersClass_5(L_1);
		// m_CurrentActivity = AndroidPlatform.GetCurrentAndroidActivity();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
		L_2 = AndroidPlatform_GetCurrentAndroidActivity_m8876E65007374A8C3ADF6DD423252316EACDEA1C(/*hidden argument*/NULL);
		__this->set_m_CurrentActivity_6(L_2);
		// m_BannerBundle = null;
		__this->set_m_BannerBundle_7((BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 *)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::Load(System.String,UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_Load_mEC392C825976739C68646F72A5533613A04E323F (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, String_t* ___placementId0, BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * ___loadOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CLoadU3Eb__0_mD3834E44B9DF03C3BB7A3928CA4C5EE5FE2DF28C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_tB47B13384B9A3F1944891B8C9FA9E3BE01202575_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EC9FD747E1362F76CCE0E68488AB9A1F71729AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2CF9460CF1354EAF3436608352EAD04C04E560A);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass11_0_tB47B13384B9A3F1944891B8C9FA9E3BE01202575 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass11_0_tB47B13384B9A3F1944891B8C9FA9E3BE01202575 * L_0 = (U3CU3Ec__DisplayClass11_0_tB47B13384B9A3F1944891B8C9FA9E3BE01202575 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_tB47B13384B9A3F1944891B8C9FA9E3BE01202575_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass11_0__ctor_m72D89BD8BEFBB501CC028D6757E881CD503465AE(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass11_0_tB47B13384B9A3F1944891B8C9FA9E3BE01202575 * L_1 = V_0;
		BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * L_2 = ___loadOptions1;
		NullCheck(L_1);
		L_1->set_loadOptions_0(L_2);
		// if (!m_ListenerIsSet) {
		bool L_3 = __this->get_m_ListenerIsSet_10();
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		// m_ListenerIsSet = true;
		__this->set_m_ListenerIsSet_10((bool)1);
		// m_BannersClass.CallStatic("setBannerListener", this);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_4 = __this->get_m_BannersClass_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, __this);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)__this);
		NullCheck(L_4);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_4, _stringLiteral4EC9FD747E1362F76CCE0E68488AB9A1F71729AA, L_6, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// m_BannerLoadOptions = loadOptions;
		U3CU3Ec__DisplayClass11_0_tB47B13384B9A3F1944891B8C9FA9E3BE01202575 * L_7 = V_0;
		NullCheck(L_7);
		BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * L_8 = L_7->get_loadOptions_0();
		__this->set_m_BannerLoadOptions_8(L_8);
		// if (m_BannerBundle != null && m_BannerBundle.bannerPlacementId.Equals(placementId))
		BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * L_9 = __this->get_m_BannerBundle_7();
		if (!L_9)
		{
			goto IL_007a;
		}
	}
	{
		BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * L_10 = __this->get_m_BannerBundle_7();
		NullCheck(L_10);
		String_t* L_11;
		L_11 = BannerBundle_get_bannerPlacementId_mAED7E362ED7353743DBE095CDA321AA1BA9CA509_inline(L_10, /*hidden argument*/NULL);
		String_t* L_12 = ___placementId0;
		NullCheck(L_11);
		bool L_13;
		L_13 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     loadOptions?.loadCallback();
		// });
		RuntimeObject* L_14 = __this->get_m_Banner_4();
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var, L_14);
		U3CU3Ec__DisplayClass11_0_tB47B13384B9A3F1944891B8C9FA9E3BE01202575 * L_16 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_17 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_17, L_16, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass11_0_U3CLoadU3Eb__0_mD3834E44B9DF03C3BB7A3928CA4C5EE5FE2DF28C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var, L_15, L_17);
		// }
		return;
	}

IL_007a:
	{
		// if (m_BannerBundle != null)
		BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * L_18 = __this->get_m_BannerBundle_7();
		if (!L_18)
		{
			goto IL_0090;
		}
	}
	{
		// Hide(true);
		AndroidBanner_Hide_m6C916D8A3164B9262319F414727A1E962F7CFE22(__this, (bool)1, /*hidden argument*/NULL);
		// m_BannerBundle = null;
		__this->set_m_BannerBundle_7((BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 *)NULL);
	}

IL_0090:
	{
		// if (placementId != null)
		String_t* L_19 = ___placementId0;
		if (!L_19)
		{
			goto IL_00b7;
		}
	}
	{
		// m_BannersClass.CallStatic("loadBanner", m_CurrentActivity, placementId);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_20 = __this->get_m_BannersClass_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_21;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_23 = __this->get_m_CurrentActivity_6();
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = L_22;
		String_t* L_25 = ___placementId0;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_25);
		NullCheck(L_20);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_20, _stringLiteralC2CF9460CF1354EAF3436608352EAD04C04E560A, L_24, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00b7:
	{
		// m_BannersClass.CallStatic("loadBanner", m_CurrentActivity);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_26 = __this->get_m_BannersClass_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = L_27;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_29 = __this->get_m_CurrentActivity_6();
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_29);
		NullCheck(L_26);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_26, _stringLiteralC2CF9460CF1354EAF3436608352EAD04C04E560A, L_28, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::Show(System.String,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_Show_m50D5AFF7AE2C9548C49ABA060BA084D36D6F671F (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, String_t* ___placementId0, BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * ___showOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__0_mC3E0CFA7F86A0124DC47E7E97CCF5B45C8EBD391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__1_m01600ECD46838323F617DAD679607E63C58BAE0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_t1259023F657AC381A5246AAAE924EA37D321C1AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_t1259023F657AC381A5246AAAE924EA37D321C1AF * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass12_0_t1259023F657AC381A5246AAAE924EA37D321C1AF * L_0 = (U3CU3Ec__DisplayClass12_0_t1259023F657AC381A5246AAAE924EA37D321C1AF *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t1259023F657AC381A5246AAAE924EA37D321C1AF_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass12_0__ctor_mB18FD3844677EEF1B43EDC618D02E6FAAB99DD58(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_t1259023F657AC381A5246AAAE924EA37D321C1AF * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass12_0_t1259023F657AC381A5246AAAE924EA37D321C1AF * L_2 = V_0;
		BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * L_3 = ___showOptions1;
		NullCheck(L_2);
		L_2->set_showOptions_1(L_3);
		// m_BannerShowOptions = showOptions;
		U3CU3Ec__DisplayClass12_0_t1259023F657AC381A5246AAAE924EA37D321C1AF * L_4 = V_0;
		NullCheck(L_4);
		BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * L_5 = L_4->get_showOptions_1();
		__this->set_m_BannerShowOptions_9(L_5);
		// if (m_BannerBundle != null && (string.IsNullOrEmpty(placementId) || m_BannerBundle.bannerPlacementId.Equals(placementId)))
		BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * L_6 = __this->get_m_BannerBundle_7();
		if (!L_6)
		{
			goto IL_0085;
		}
	}
	{
		String_t* L_7 = ___placementId0;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0043;
		}
	}
	{
		BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * L_9 = __this->get_m_BannerBundle_7();
		NullCheck(L_9);
		String_t* L_10;
		L_10 = BannerBundle_get_bannerPlacementId_mAED7E362ED7353743DBE095CDA321AA1BA9CA509_inline(L_9, /*hidden argument*/NULL);
		String_t* L_11 = ___placementId0;
		NullCheck(L_10);
		bool L_12;
		L_12 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0085;
		}
	}

IL_0043:
	{
		// m_CurrentActivity.Call("runOnUiThread", new AndroidJavaRunnable(() =>
		// {
		//     var parent = m_BannerBundle.bannerView.Call<AndroidJavaObject>("getParent");
		//     if (parent == null)
		//     {
		//         var layoutParams = m_BannerBundle.bannerView.Call<AndroidJavaObject>("getLayoutParams");
		//         m_CurrentActivity.Call("addContentView", m_BannerBundle.bannerView, layoutParams);
		//     }
		// }));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_13 = __this->get_m_CurrentActivity_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_14;
		U3CU3Ec__DisplayClass12_0_t1259023F657AC381A5246AAAE924EA37D321C1AF * L_16 = V_0;
		AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * L_17 = (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 *)il2cpp_codegen_object_new(AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		AndroidJavaRunnable__ctor_m385F79E7C422595C3F8504D588807799A7CF4727(L_17, L_16, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__0_mC3E0CFA7F86A0124DC47E7E97CCF5B45C8EBD391_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
		NullCheck(L_13);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_13, _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D, L_15, /*hidden argument*/NULL);
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     showOptions?.showCallback();
		// });
		RuntimeObject* L_18 = __this->get_m_Banner_4();
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var, L_18);
		U3CU3Ec__DisplayClass12_0_t1259023F657AC381A5246AAAE924EA37D321C1AF * L_20 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_21 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_21, L_20, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__1_m01600ECD46838323F617DAD679607E63C58BAE0B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_19);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var, L_19, L_21);
		// }
		return;
	}

IL_0085:
	{
		// if (m_BannerBundle != null)
		BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * L_22 = __this->get_m_BannerBundle_7();
		if (!L_22)
		{
			goto IL_009b;
		}
	}
	{
		// Hide(true);
		AndroidBanner_Hide_m6C916D8A3164B9262319F414727A1E962F7CFE22(__this, (bool)1, /*hidden argument*/NULL);
		// m_BannerBundle = null;
		__this->set_m_BannerBundle_7((BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 *)NULL);
	}

IL_009b:
	{
		// m_Banner.ShowAfterLoad = true;
		RuntimeObject* L_23 = __this->get_m_Banner_4();
		NullCheck(L_23);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.Advertisements.IBanner::set_ShowAfterLoad(System.Boolean) */, IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var, L_23, (bool)1);
		// Load(placementId, null);
		String_t* L_24 = ___placementId0;
		AndroidBanner_Load_mEC392C825976739C68646F72A5533613A04E323F(__this, L_24, (BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::Hide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_Hide_m6C916D8A3164B9262319F414727A1E962F7CFE22 (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, bool ___destroy0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBanner_U3CHideU3Eb__13_0_mAEF6BAFF267490CBDFCD2FC5C7D542640AA94CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBanner_U3CHideU3Eb__13_1_mCD879634C71A15386103679E0BA787128443D2F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF);
		s_Il2CppMethodInitialized = true;
	}
	BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * G_B5_0 = NULL;
	BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * G_B4_0 = NULL;
	BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * G_B6_0 = NULL;
	{
		// if (m_BannerBundle != null)
		BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * L_0 = __this->get_m_BannerBundle_7();
		if (!L_0)
		{
			goto IL_007d;
		}
	}
	{
		// if (destroy)
		bool L_1 = ___destroy0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// m_BannerBundle = null;
		__this->set_m_BannerBundle_7((BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 *)NULL);
		// m_BannersClass.CallStatic("destroy");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_2 = __this->get_m_BannersClass_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
		L_3 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_2, _stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF, L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0028:
	{
		// m_CurrentActivity.Call("runOnUiThread", new AndroidJavaRunnable(() => {
		//     var parent = m_BannerBundle.bannerView.Call<AndroidJavaObject>("getParent");
		//     parent?.Call("removeView", m_BannerBundle.bannerView);
		// }));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = __this->get_m_CurrentActivity_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * L_7 = (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 *)il2cpp_codegen_object_new(AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		AndroidJavaRunnable__ctor_m385F79E7C422595C3F8504D588807799A7CF4727(L_7, __this, (intptr_t)((intptr_t)AndroidBanner_U3CHideU3Eb__13_0_mAEF6BAFF267490CBDFCD2FC5C7D542640AA94CDA_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		NullCheck(L_4);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_4, _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D, L_6, /*hidden argument*/NULL);
		// if (m_BannerShowOptions?.hideCallback != null)
		BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * L_8 = __this->get_m_BannerShowOptions_9();
		BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * L_9 = L_8;
		G_B4_0 = L_9;
		if (L_9)
		{
			G_B5_0 = L_9;
			goto IL_005a;
		}
	}
	{
		G_B6_0 = ((BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 *)(NULL));
		goto IL_005f;
	}

IL_005a:
	{
		NullCheck(G_B5_0);
		BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * L_10;
		L_10 = BannerOptions_get_hideCallback_m4917D20A8FC89C11E8F0DA848352136A643EFD6E_inline(G_B5_0, /*hidden argument*/NULL);
		G_B6_0 = L_10;
	}

IL_005f:
	{
		if (!G_B6_0)
		{
			goto IL_007d;
		}
	}
	{
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     m_BannerShowOptions?.hideCallback();
		// });
		RuntimeObject* L_11 = __this->get_m_Banner_4();
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var, L_11);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_13 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_13, __this, (intptr_t)((intptr_t)AndroidBanner_U3CHideU3Eb__13_1_mCD879634C71A15386103679E0BA787128443D2F5_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::SetPosition(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_SetPosition_mD05CE7754B6CB1FCA3648DED27978BE20BAAA48C (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, int32_t ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1960F177DBF9ED9808DEA1773FEEF144EC8E4C7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36A7D89431BEAA223457D97EF62FEE269808ED7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB040439619EE49D63AB73416AB10D1423D032871);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_1 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_2 = NULL;
	{
		// var index = (int)position;
		int32_t L_0 = ___position0;
		V_0 = L_0;
		// var enumClass = new AndroidJavaClass("com.unity3d.services.banners.view.BannerPosition");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_1, _stringLiteral36A7D89431BEAA223457D97EF62FEE269808ED7B, /*hidden argument*/NULL);
		// var values = enumClass.CallStatic<AndroidJavaObject>("values");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2(L_1, _stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		V_1 = L_3;
		// var bannerPosition = new AndroidJavaClass("java.lang.reflect.Array").CallStatic<AndroidJavaObject>("get", values, index);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_4 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_4, _stringLiteralB040439619EE49D63AB73416AB10D1423D032871, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_7 = V_1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_6;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		NullCheck(L_4);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_12;
		L_12 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2(L_4, _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E, L_8, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		V_2 = L_12;
		// m_BannersClass.CallStatic("setBannerPosition", bannerPosition);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_13 = __this->get_m_BannersClass_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_14;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_16 = V_2;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_16);
		NullCheck(L_13);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_13, _stringLiteral1960F177DBF9ED9808DEA1773FEEF144EC8E4C7F, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::onUnityBannerShow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_onUnityBannerShow_m2939D6ED44650A788A8F9143816310469EC067F6 (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::onUnityBannerHide(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_onUnityBannerHide_mBF4BEFB0B2267821D880CFB5B9197BF2C630ED59 (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::onUnityBannerLoaded(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_onUnityBannerLoaded_m2246DA24AD8244C7FA724CD64E2F557A29004ED3 (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, String_t* ___placementId0, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___view1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_0_mDC9C5562DA0BC6D88D7F506938787E72D2319627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_1_m469E73202154EA7225DBD310142EA1EB0BC902CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1073EDD32EA0B0FD3BCAF9C644DE00B100741265);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E6D79FB7A672657560825D4EBF2050737CCAF6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8776C6B9757743C85B42D4041703FD2BFBA9F722);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	{
		// m_BannerBundle = new BannerBundle(placementId, view);
		String_t* L_0 = ___placementId0;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = ___view1;
		BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * L_2 = (BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 *)il2cpp_codegen_object_new(BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754_il2cpp_TypeInfo_var);
		BannerBundle__ctor_mF58FB0BFECD4B8CCE0F047B6C7C639D909A4663D(L_2, L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_BannerBundle_7(L_2);
		// view.Call("setBackgroundColor", UnityEngine.Advertisements.Utilities.Color.Transparent);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = ___view1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		int32_t L_6 = 0;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		NullCheck(L_3);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_3, _stringLiteral1073EDD32EA0B0FD3BCAF9C644DE00B100741265, L_5, /*hidden argument*/NULL);
		// if (m_Banner.ShowAfterLoad)
		RuntimeObject* L_8 = __this->get_m_Banner_4();
		NullCheck(L_8);
		bool L_9;
		L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.Advertisements.IBanner::get_ShowAfterLoad() */, IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var, L_8);
		if (!L_9)
		{
			goto IL_008b;
		}
	}
	{
		// m_Banner.ShowAfterLoad = false;
		RuntimeObject* L_10 = __this->get_m_Banner_4();
		NullCheck(L_10);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.Advertisements.IBanner::set_ShowAfterLoad(System.Boolean) */, IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var, L_10, (bool)0);
		// var layoutParams = view.Call<AndroidJavaObject>("getLayoutParams");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_11 = ___view1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12;
		L_12 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_11);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_13;
		L_13 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_11, _stringLiteral8776C6B9757743C85B42D4041703FD2BFBA9F722, L_12, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_0 = L_13;
		// m_CurrentActivity.Call("addContentView", view, layoutParams);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_14 = __this->get_m_CurrentActivity_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_15;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_17 = ___view1;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_16;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_19 = V_0;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
		NullCheck(L_14);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_14, _stringLiteral3E6D79FB7A672657560825D4EBF2050737CCAF6E, L_18, /*hidden argument*/NULL);
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     m_BannerShowOptions?.showCallback();
		// });
		RuntimeObject* L_20 = __this->get_m_Banner_4();
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var, L_20);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_22 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_22, __this, (intptr_t)((intptr_t)AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_1_m469E73202154EA7225DBD310142EA1EB0BC902CA_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var, L_21, L_22);
	}

IL_008b:
	{
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     m_BannerLoadOptions?.loadCallback();
		// });
		RuntimeObject* L_23 = __this->get_m_Banner_4();
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var, L_23);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_25 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_25, __this, (intptr_t)((intptr_t)AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_0_mDC9C5562DA0BC6D88D7F506938787E72D2319627_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_24);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var, L_24, L_25);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::onUnityBannerUnloaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_onUnityBannerUnloaded_m232DC93C5B14521C47BFF350710A7596E7CEF433 (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::onUnityBannerClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_onUnityBannerClick_m5398D3714957471548F572DE23BCC956355A9E77 (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBanner_U3ConUnityBannerClickU3Eb__19_0_m807942AFA8EA5258E565457837BFC4E16F7DDA70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     m_BannerShowOptions?.clickCallback();
		// });
		RuntimeObject* L_0 = __this->get_m_Banner_4();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var, L_0);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_2, __this, (intptr_t)((intptr_t)AndroidBanner_U3ConUnityBannerClickU3Eb__19_0_m807942AFA8EA5258E565457837BFC4E16F7DDA70_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::onUnityBannerError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_onUnityBannerError_m899D202EFCBED6D10328B432BD8F4523EA95248C (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_U3ConUnityBannerErrorU3Eb__0_m69839D6F5C290AFDFDEA13DA5D9D116B8527B97F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_tD1845FF1E152A3B416CD8CBB099FDAA323AA48A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass20_0_tD1845FF1E152A3B416CD8CBB099FDAA323AA48A0 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass20_0_tD1845FF1E152A3B416CD8CBB099FDAA323AA48A0 * L_0 = (U3CU3Ec__DisplayClass20_0_tD1845FF1E152A3B416CD8CBB099FDAA323AA48A0 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass20_0_tD1845FF1E152A3B416CD8CBB099FDAA323AA48A0_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass20_0__ctor_m4EF050CFDE00E3C2DEE7FECD70906AFA8C8089A9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass20_0_tD1845FF1E152A3B416CD8CBB099FDAA323AA48A0 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass20_0_tD1845FF1E152A3B416CD8CBB099FDAA323AA48A0 * L_2 = V_0;
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		L_2->set_message_1(L_3);
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     m_BannerLoadOptions?.errorCallback(message);
		// });
		RuntimeObject* L_4 = __this->get_m_Banner_4();
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var, L_4);
		U3CU3Ec__DisplayClass20_0_tD1845FF1E152A3B416CD8CBB099FDAA323AA48A0 * L_6 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass20_0_U3ConUnityBannerErrorU3Eb__0_m69839D6F5C290AFDFDEA13DA5D9D116B8527B97F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var, L_5, L_7);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::<Hide>b__13_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_U3CHideU3Eb__13_0_mAEF6BAFF267490CBDFCD2FC5C7D542640AA94CDA (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D4E110BD86EB84CCC35696802475A8556299334);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral684D1C9AD6F5D83264667D7FCC62B008CFD8E5FD);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * G_B2_0 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * G_B1_0 = NULL;
	{
		// var parent = m_BannerBundle.bannerView.Call<AndroidJavaObject>("getParent");
		BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * L_0 = __this->get_m_BannerBundle_7();
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = BannerBundle_get_bannerView_m20FD8F37C6B4CBCAC0A242DDCCCCC0CFC410A6DB_inline(L_0, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_1, _stringLiteral1D4E110BD86EB84CCC35696802475A8556299334, L_2, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// parent?.Call("removeView", m_BannerBundle.bannerView);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * L_7 = __this->get_m_BannerBundle_7();
		NullCheck(L_7);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8;
		L_8 = BannerBundle_get_bannerView_m20FD8F37C6B4CBCAC0A242DDCCCCC0CFC410A6DB_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		NullCheck(G_B2_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(G_B2_0, _stringLiteral684D1C9AD6F5D83264667D7FCC62B008CFD8E5FD, L_6, /*hidden argument*/NULL);
		// }));
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::<Hide>b__13_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_U3CHideU3Eb__13_1_mCD879634C71A15386103679E0BA787128443D2F5 (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, const RuntimeMethod* method)
{
	BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * G_B2_0 = NULL;
	BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * G_B1_0 = NULL;
	{
		// m_BannerShowOptions?.hideCallback();
		BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * L_0 = __this->get_m_BannerShowOptions_9();
		BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * L_2;
		L_2 = BannerOptions_get_hideCallback_m4917D20A8FC89C11E8F0DA848352136A643EFD6E_inline(G_B2_0, /*hidden argument*/NULL);
		NullCheck(L_2);
		BannerCallback_Invoke_m7EF16702D77941C484593A5269ED82D50C2BF211(L_2, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::<onUnityBannerLoaded>b__17_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_1_m469E73202154EA7225DBD310142EA1EB0BC902CA (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, const RuntimeMethod* method)
{
	BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * G_B2_0 = NULL;
	BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * G_B1_0 = NULL;
	{
		// m_BannerShowOptions?.showCallback();
		BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * L_0 = __this->get_m_BannerShowOptions_9();
		BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * L_2;
		L_2 = BannerOptions_get_showCallback_m7F006DF1E195FA0DB4018B578A1501C16A3C8ABD_inline(G_B2_0, /*hidden argument*/NULL);
		NullCheck(L_2);
		BannerCallback_Invoke_m7EF16702D77941C484593A5269ED82D50C2BF211(L_2, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::<onUnityBannerLoaded>b__17_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_0_mDC9C5562DA0BC6D88D7F506938787E72D2319627 (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, const RuntimeMethod* method)
{
	BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * G_B2_0 = NULL;
	BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * G_B1_0 = NULL;
	{
		// m_BannerLoadOptions?.loadCallback();
		BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * L_0 = __this->get_m_BannerLoadOptions_8();
		BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4 * L_2;
		L_2 = BannerLoadOptions_get_loadCallback_m1E53B8D279969186E9C26F708D740CE341021E1D_inline(G_B2_0, /*hidden argument*/NULL);
		NullCheck(L_2);
		LoadCallback_Invoke_mDABBB7DD68958B1E5291A13DF1989CCAAF379763(L_2, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::<onUnityBannerClick>b__19_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_U3ConUnityBannerClickU3Eb__19_0_m807942AFA8EA5258E565457837BFC4E16F7DDA70 (AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * __this, const RuntimeMethod* method)
{
	BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * G_B2_0 = NULL;
	BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * G_B1_0 = NULL;
	{
		// m_BannerShowOptions?.clickCallback();
		BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * L_0 = __this->get_m_BannerShowOptions_9();
		BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * L_2;
		L_2 = BannerOptions_get_clickCallback_m3FF6E63F23ADB2E8BD2690AFE55AE1A90DF8B3C9_inline(G_B2_0, /*hidden argument*/NULL);
		NullCheck(L_2);
		BannerCallback_Invoke_m7EF16702D77941C484593A5269ED82D50C2BF211(L_2, /*hidden argument*/NULL);
		// });
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
// System.Void UnityEngine.Advertisements.AndroidInitializationListener::.ctor(UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidInitializationListener__ctor_m67EEAF1D8F71582997CE90D8731126440F29897B (AndroidInitializationListener_tF65DEA3F298A6ECC9F3DF4B908BD467806C247A2 * __this, RuntimeObject* ___initializationListener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84B4C675C9F3E79A1D308FF8C010110E9F4D7327);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidInitializationListener(IUnityAdsInitializationListener initializationListener) : base(CLASS_REFERENCE) {
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral84B4C675C9F3E79A1D308FF8C010110E9F4D7327, /*hidden argument*/NULL);
		// m_ManagedListener = initializationListener;
		RuntimeObject* L_0 = ___initializationListener0;
		__this->set_m_ManagedListener_5(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidInitializationListener::onInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidInitializationListener_onInitializationComplete_mCE442F346CF4D9226BFAC04707AA7448C25CBEC9 (AndroidInitializationListener_tF65DEA3F298A6ECC9F3DF4B908BD467806C247A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsInitializationListener_tB5A65E66AB4768647B0CD180A7F8E7A220B6D813_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_ManagedListener?.OnInitializationComplete();
		RuntimeObject* L_0 = __this->get_m_ManagedListener_5();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsInitializationListener::OnInitializationComplete() */, IUnityAdsInitializationListener_tB5A65E66AB4768647B0CD180A7F8E7A220B6D813_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidInitializationListener::onInitializationFailed(UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidInitializationListener_onInitializationFailed_m4ECD86FFCFA5370AC0E344A8CE89771D2E80DC60 (AndroidInitializationListener_tF65DEA3F298A6ECC9F3DF4B908BD467806C247A2 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsInitializationError_tC78751E75D787D0A82CFB8FDD1B970C60E182346_m7B52FE08EE4800A3D8800FD2FCE918B0C8B90519_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsInitializationListener_tB5A65E66AB4768647B0CD180A7F8E7A220B6D813_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_ManagedListener?.OnInitializationFailed(EnumUtilities.GetEnumFromAndroidJavaObject(error, UnityAdsInitializationError.UNKNOWN), message);
		RuntimeObject* L_0 = __this->get_m_ManagedListener_5();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = ___error0;
		int32_t L_3;
		L_3 = EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsInitializationError_tC78751E75D787D0A82CFB8FDD1B970C60E182346_m7B52FE08EE4800A3D8800FD2FCE918B0C8B90519(L_2, 0, /*hidden argument*/EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsInitializationError_tC78751E75D787D0A82CFB8FDD1B970C60E182346_m7B52FE08EE4800A3D8800FD2FCE918B0C8B90519_RuntimeMethod_var);
		String_t* L_4 = ___message1;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsInitializationListener::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String) */, IUnityAdsInitializationListener_tB5A65E66AB4768647B0CD180A7F8E7A220B6D813_il2cpp_TypeInfo_var, G_B2_0, L_3, L_4);
		// }
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
// System.Void UnityEngine.Advertisements.AndroidLoadListener::.ctor(UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidLoadListener__ctor_m256453455DF0CF141720868CB24739F92BC272E7 (AndroidLoadListener_t37472178ECE0150EA229AF3418C3A1DF94E8434C * __this, RuntimeObject* ___loadListener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA3D52181353D83E31C59DC26E66ADDA6680C79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidLoadListener(IUnityAdsLoadListener loadListener) : base(CLASS_REFERENCE) {
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral1FA3D52181353D83E31C59DC26E66ADDA6680C79, /*hidden argument*/NULL);
		// m_ManagedListener = loadListener;
		RuntimeObject* L_0 = ___loadListener0;
		__this->set_m_ManagedListener_5(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidLoadListener::onUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidLoadListener_onUnityAdsAdLoaded_mA0C2D12C2E5842E109008750964258C07587555C (AndroidLoadListener_t37472178ECE0150EA229AF3418C3A1DF94E8434C * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsLoadListener_t0F5E5882B3CFA2DF54E323857F9A0DE8D7EA7A69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_ManagedListener?.OnUnityAdsAdLoaded(placementId);
		RuntimeObject* L_0 = __this->get_m_ManagedListener_5();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = ___placementId0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsLoadListener::OnUnityAdsAdLoaded(System.String) */, IUnityAdsLoadListener_t0F5E5882B3CFA2DF54E323857F9A0DE8D7EA7A69_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidLoadListener::onUnityAdsFailedToLoad(System.String,UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidLoadListener_onUnityAdsFailedToLoad_mE3590E5494531C75B81DBB0425C39BAC3058BAF9 (AndroidLoadListener_t37472178ECE0150EA229AF3418C3A1DF94E8434C * __this, String_t* ___placementId0, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___error1, String_t* ___message2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsLoadError_t7BFF3D66FEE9ACEFDAABAEC17849431B62341699_m0F69D80C060D672A0C31983FD5724AE742F03C09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsLoadListener_t0F5E5882B3CFA2DF54E323857F9A0DE8D7EA7A69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_ManagedListener?.OnUnityAdsFailedToLoad(placementId, EnumUtilities.GetEnumFromAndroidJavaObject(error, UnityAdsLoadError.UNKNOWN), message);
		RuntimeObject* L_0 = __this->get_m_ManagedListener_5();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = ___placementId0;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = ___error1;
		int32_t L_4;
		L_4 = EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsLoadError_t7BFF3D66FEE9ACEFDAABAEC17849431B62341699_m0F69D80C060D672A0C31983FD5724AE742F03C09(L_3, 5, /*hidden argument*/EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsLoadError_t7BFF3D66FEE9ACEFDAABAEC17849431B62341699_m0F69D80C060D672A0C31983FD5724AE742F03C09_RuntimeMethod_var);
		String_t* L_5 = ___message2;
		NullCheck(G_B2_0);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsLoadListener::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String) */, IUnityAdsLoadListener_t0F5E5882B3CFA2DF54E323857F9A0DE8D7EA7A69_il2cpp_TypeInfo_var, G_B2_0, L_2, L_4, L_5);
		// }
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
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::SetupPlatform(UnityEngine.Advertisements.Platform.IPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform_SetupPlatform_mBE9167F1389C7A199696045719D99A0BE6F82572 (AndroidPlatform_t5F6E43FB12332D23A519FEA3FC36680CC22BB10D * __this, RuntimeObject* ___platform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CA693FCFD526B83AF173A1829A1703B75FEFC0E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Platform = platform;
		RuntimeObject* L_0 = ___platform0;
		__this->set_m_Platform_0(L_0);
		// m_CurrentActivity = GetCurrentAndroidActivity();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = AndroidPlatform_GetCurrentAndroidActivity_m8876E65007374A8C3ADF6DD423252316EACDEA1C(/*hidden argument*/NULL);
		__this->set_m_CurrentActivity_1(L_1);
		// m_UnityAds = new AndroidJavaClass(ADS_BASE_CLASS);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_2 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_2, _stringLiteral1CA693FCFD526B83AF173A1829A1703B75FEFC0E, /*hidden argument*/NULL);
		__this->set_m_UnityAds_2(L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform_Initialize_m19ED195166A544790739B46455910D103963AF92 (AndroidPlatform_t5F6E43FB12332D23A519FEA3FC36680CC22BB10D * __this, String_t* ___gameId0, bool ___testMode1, RuntimeObject* ___initializationListener2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidInitializationListener_tF65DEA3F298A6ECC9F3DF4B908BD467806C247A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B2_0 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B1_0 = NULL;
	{
		// m_UnityAds?.CallStatic("initialize", m_CurrentActivity, gameId, testMode, new AndroidInitializationListener(initializationListener));
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = __this->get_m_UnityAds_2();
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = __this->get_m_CurrentActivity_1();
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_3;
		String_t* L_6 = ___gameId0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_5;
		bool L_8 = ___testMode1;
		bool L_9 = L_8;
		RuntimeObject * L_10 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		RuntimeObject* L_12 = ___initializationListener2;
		AndroidInitializationListener_tF65DEA3F298A6ECC9F3DF4B908BD467806C247A2 * L_13 = (AndroidInitializationListener_tF65DEA3F298A6ECC9F3DF4B908BD467806C247A2 *)il2cpp_codegen_object_new(AndroidInitializationListener_tF65DEA3F298A6ECC9F3DF4B908BD467806C247A2_il2cpp_TypeInfo_var);
		AndroidInitializationListener__ctor_m67EEAF1D8F71582997CE90D8731126440F29897B(L_13, L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_13);
		NullCheck(G_B2_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(G_B2_0, _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform_Load_m2157F658E6AE091A2A155EBE366B38E7BD0AE816 (AndroidPlatform_t5F6E43FB12332D23A519FEA3FC36680CC22BB10D * __this, String_t* ___placementId0, RuntimeObject* ___loadListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidLoadListener_t37472178ECE0150EA229AF3418C3A1DF94E8434C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B2_0 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B1_0 = NULL;
	{
		// m_UnityAds?.CallStatic("load", placementId, new AndroidLoadListener(loadListener));
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = __this->get_m_UnityAds_2();
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		String_t* L_4 = ___placementId0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_3;
		RuntimeObject* L_6 = ___loadListener1;
		AndroidLoadListener_t37472178ECE0150EA229AF3418C3A1DF94E8434C * L_7 = (AndroidLoadListener_t37472178ECE0150EA229AF3418C3A1DF94E8434C *)il2cpp_codegen_object_new(AndroidLoadListener_t37472178ECE0150EA229AF3418C3A1DF94E8434C_il2cpp_TypeInfo_var);
		AndroidLoadListener__ctor_m256453455DF0CF141720868CB24739F92BC272E7(L_7, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(G_B2_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(G_B2_0, _stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform_Show_m045197F768DCB376E3339BF6BCC6387B1C58BE15 (AndroidPlatform_t5F6E43FB12332D23A519FEA3FC36680CC22BB10D * __this, String_t* ___placementId0, RuntimeObject* ___showListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidShowListener_t3B074F139445BE977C5F558AA79AC50E484DA25E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B2_0 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B1_0 = NULL;
	{
		// m_UnityAds?.CallStatic("show", m_CurrentActivity, placementId, new AndroidShowListener(m_Platform, showListener));
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = __this->get_m_UnityAds_2();
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = __this->get_m_CurrentActivity_1();
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_3;
		String_t* L_6 = ___placementId0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_5;
		RuntimeObject* L_8 = __this->get_m_Platform_0();
		RuntimeObject* L_9 = ___showListener1;
		AndroidShowListener_t3B074F139445BE977C5F558AA79AC50E484DA25E * L_10 = (AndroidShowListener_t3B074F139445BE977C5F558AA79AC50E484DA25E *)il2cpp_codegen_object_new(AndroidShowListener_t3B074F139445BE977C5F558AA79AC50E484DA25E_il2cpp_TypeInfo_var);
		AndroidShowListener__ctor_m233DC62153A1CDBA5B1FED4AC03A475AA7B56F9F(L_10, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		NullCheck(G_B2_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(G_B2_0, _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform_SetMetaData_m87B7A36EA75D15F9D87BEE7DCCB15BF6D9DA031E (AndroidPlatform_t5F6E43FB12332D23A519FEA3FC36680CC22BB10D * __this, MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * ___metaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01FB309691201B1A5D72C0BC0668E49439FA11C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46308C2360498265204DA7350FCD77C6D5A57F9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84BD1FA2B6D34A46940BEA516DAA6B3107B0C9DD);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var metaDataObject = new AndroidJavaObject(ADS_METADATA_CLASS, m_CurrentActivity);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = __this->get_m_CurrentActivity_1();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_3, _stringLiteral01FB309691201B1A5D72C0BC0668E49439FA11C5, L_1, /*hidden argument*/NULL);
		V_0 = L_3;
		// metaDataObject.Call("setCategory", metaData.category);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * L_7 = ___metaData0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = MetaData_get_category_m01634B0655A8E8398DBD251759D6CE7F960AEF7C_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		NullCheck(L_4);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_4, _stringLiteral84BD1FA2B6D34A46940BEA516DAA6B3107B0C9DD, L_6, /*hidden argument*/NULL);
		// foreach (var entry in metaData.Values())
		MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * L_9 = ___metaData0;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = MetaData_Values_m9A702FADC03CC4AEA44AE1FF1072142D6CBA2092_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var, L_10);
		V_1 = L_11;
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006f;
		}

IL_0042:
		{
			// foreach (var entry in metaData.Values())
			RuntimeObject* L_12 = V_1;
			NullCheck(L_12);
			KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_13;
			L_13 = InterfaceFuncInvoker0< KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB_il2cpp_TypeInfo_var, L_12);
			V_2 = L_13;
			// metaDataObject.Call<bool>("set", entry.Key, entry.Value);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_14 = V_0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_15;
			String_t* L_17;
			L_17 = KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
			NullCheck(L_16);
			ArrayElementTypeCheck (L_16, L_17);
			(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_16;
			RuntimeObject * L_19;
			L_19 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_19);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
			NullCheck(L_14);
			bool L_20;
			L_20 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_14, _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA, L_18, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		}

IL_006f:
		{
			// foreach (var entry in metaData.Values())
			RuntimeObject* L_21 = V_1;
			NullCheck(L_21);
			bool L_22;
			L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_0042;
			}
		}

IL_0077:
		{
			IL2CPP_LEAVE(0x83, FINALLY_0079);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_23 = V_1;
			if (!L_23)
			{
				goto IL_0082;
			}
		}

IL_007c:
		{
			RuntimeObject* L_24 = V_1;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_24);
		}

IL_0082:
		{
			IL2CPP_END_FINALLY(121)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x83, IL_0083)
	}

IL_0083:
	{
		// metaDataObject.Call("commit");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_25 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26;
		L_26 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_25);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_25, _stringLiteral46308C2360498265204DA7350FCD77C6D5A57F9C, L_26, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String UnityEngine.Advertisements.Platform.Android.AndroidPlatform::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlatform_GetVersion_m63E30BD4625295475A427D9163375BCBBDC8AAF7 (AndroidPlatform_t5F6E43FB12332D23A519FEA3FC36680CC22BB10D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CAC7A1CF27146D11E92BE39054D8E4594FE9B3D);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B2_0 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		// return m_UnityAds?.CallStatic<string>("getVersion") ?? "UnknownVersion";
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = __this->get_m_UnityAds_2();
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_001c;
	}

IL_000d:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(G_B2_0, _stringLiteral8CAC7A1CF27146D11E92BE39054D8E4594FE9B3D, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		String_t* L_4 = G_B3_0;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0025;
		}
	}
	{
		G_B5_0 = _stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741;
	}

IL_0025:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Android.AndroidPlatform::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidPlatform_IsInitialized_m166F96FAC492AE86C1A4EFEB81FE76EBFBE3A5C9 (AndroidPlatform_t5F6E43FB12332D23A519FEA3FC36680CC22BB10D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D185DB91E3DF09D623D41B1D7987E6F4A5D419D);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B2_0 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B1_0 = NULL;
	{
		// return m_UnityAds?.CallStatic<bool>("isInitialized") ?? false;
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = __this->get_m_UnityAds_2();
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(G_B2_0);
		bool L_3;
		L_3 = AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB(G_B2_0, _stringLiteral1D185DB91E3DF09D623D41B1D7987E6F4A5D419D, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var);
		return L_3;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.AndroidPlatform::GetCurrentAndroidActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidPlatform_GetCurrentAndroidActivity_m8876E65007374A8C3ADF6DD423252316EACDEA1C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var unityPlayerClass = new AndroidJavaClass(UNITY_PLAYER_CLASS);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		// return unityPlayerClass.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_0, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform__ctor_m6EF2F5216BC3D36670B2EDA84A7C02B7CFBCCA67 (AndroidPlatform_t5F6E43FB12332D23A519FEA3FC36680CC22BB10D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.AndroidShowListener::.ctor(UnityEngine.Advertisements.Platform.IPlatform,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener__ctor_m233DC62153A1CDBA5B1FED4AC03A475AA7B56F9F (AndroidShowListener_t3B074F139445BE977C5F558AA79AC50E484DA25E * __this, RuntimeObject* ___platform0, RuntimeObject* ___showListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral621CE18D79B55039EFE55A04E6BFD7A549E31192);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidShowListener(IPlatform platform, IUnityAdsShowListener showListener) : base(OBJECT_ID) {
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral621CE18D79B55039EFE55A04E6BFD7A549E31192, /*hidden argument*/NULL);
		// m_Platform = platform;
		RuntimeObject* L_0 = ___platform0;
		__this->set_m_Platform_5(L_0);
		// m_ManagedListener = showListener;
		RuntimeObject* L_1 = ___showListener1;
		__this->set_m_ManagedListener_6(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidShowListener::onUnityAdsShowFailure(System.String,UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener_onUnityAdsShowFailure_mD78FD00A7EFBA352A76972823B4D1F22E66F2C61 (AndroidShowListener_t3B074F139445BE977C5F558AA79AC50E484DA25E * __this, String_t* ___placementId0, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___error1, String_t* ___message2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowError_t3D75FEF84406BF32A558BCA7583F84D94E2B1AC9_mE10C092D576BA7E38FD2F7F64FBEFE60FB019030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t7732F4D848E7DE736C3DC87AEA1E4227F12149D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// var enumError = EnumUtilities.GetEnumFromAndroidJavaObject(error, UnityAdsShowError.UNKNOWN);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___error1;
		int32_t L_1;
		L_1 = EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowError_t3D75FEF84406BF32A558BCA7583F84D94E2B1AC9_mE10C092D576BA7E38FD2F7F64FBEFE60FB019030(L_0, 7, /*hidden argument*/EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowError_t3D75FEF84406BF32A558BCA7583F84D94E2B1AC9_mE10C092D576BA7E38FD2F7F64FBEFE60FB019030_RuntimeMethod_var);
		V_0 = L_1;
		// m_Platform.OnUnityAdsShowFailure(placementId, enumError, message);
		RuntimeObject* L_2 = __this->get_m_Platform_5();
		String_t* L_3 = ___placementId0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___message2;
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(6 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String) */, IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		// m_ManagedListener?.OnUnityAdsShowFailure(placementId, enumError, message);
		RuntimeObject* L_6 = __this->get_m_ManagedListener_6();
		RuntimeObject* L_7 = L_6;
		G_B1_0 = L_7;
		if (L_7)
		{
			G_B2_0 = L_7;
			goto IL_0021;
		}
	}
	{
		return;
	}

IL_0021:
	{
		String_t* L_8 = ___placementId0;
		int32_t L_9 = V_0;
		String_t* L_10 = ___message2;
		NullCheck(G_B2_0);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String) */, IUnityAdsShowListener_t7732F4D848E7DE736C3DC87AEA1E4227F12149D1_il2cpp_TypeInfo_var, G_B2_0, L_8, L_9, L_10);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidShowListener::onUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener_onUnityAdsShowStart_m837AE3E0A298CD24B838937C66437ADDD62E3B9C (AndroidShowListener_t3B074F139445BE977C5F558AA79AC50E484DA25E * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t7732F4D848E7DE736C3DC87AEA1E4227F12149D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_Platform.OnUnityAdsShowStart(placementId);
		RuntimeObject* L_0 = __this->get_m_Platform_5();
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(7 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::OnUnityAdsShowStart(System.String) */, IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var, L_0, L_1);
		// m_ManagedListener?.OnUnityAdsShowStart(placementId);
		RuntimeObject* L_2 = __this->get_m_ManagedListener_6();
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		String_t* L_4 = ___placementId0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowStart(System.String) */, IUnityAdsShowListener_t7732F4D848E7DE736C3DC87AEA1E4227F12149D1_il2cpp_TypeInfo_var, G_B2_0, L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidShowListener::onUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener_onUnityAdsShowClick_mFC453DB8134D4548EBCB2D53F6C8AA48318C02BF (AndroidShowListener_t3B074F139445BE977C5F558AA79AC50E484DA25E * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t7732F4D848E7DE736C3DC87AEA1E4227F12149D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_Platform.OnUnityAdsShowClick(placementId);
		RuntimeObject* L_0 = __this->get_m_Platform_5();
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::OnUnityAdsShowClick(System.String) */, IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var, L_0, L_1);
		// m_ManagedListener?.OnUnityAdsShowClick(placementId);
		RuntimeObject* L_2 = __this->get_m_ManagedListener_6();
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		String_t* L_4 = ___placementId0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowClick(System.String) */, IUnityAdsShowListener_t7732F4D848E7DE736C3DC87AEA1E4227F12149D1_il2cpp_TypeInfo_var, G_B2_0, L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidShowListener::onUnityAdsShowComplete(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener_onUnityAdsShowComplete_mDC39540ED367AEEFC1DE937997FD25E40835019B (AndroidShowListener_t3B074F139445BE977C5F558AA79AC50E484DA25E * __this, String_t* ___placementId0, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowCompletionState_t559AE84836657714B7E907D54424E60DCFEB49F9_m18336F5A010C868A7B0136BE6EB1346C46F3BAB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t7732F4D848E7DE736C3DC87AEA1E4227F12149D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// var showCompletionState = EnumUtilities.GetEnumFromAndroidJavaObject(state, UnityAdsShowCompletionState.UNKNOWN);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___state1;
		int32_t L_1;
		L_1 = EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowCompletionState_t559AE84836657714B7E907D54424E60DCFEB49F9_m18336F5A010C868A7B0136BE6EB1346C46F3BAB8(L_0, 2, /*hidden argument*/EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowCompletionState_t559AE84836657714B7E907D54424E60DCFEB49F9_m18336F5A010C868A7B0136BE6EB1346C46F3BAB8_RuntimeMethod_var);
		V_0 = L_1;
		// m_Platform.OnUnityAdsShowComplete(placementId, showCompletionState);
		RuntimeObject* L_2 = __this->get_m_Platform_5();
		String_t* L_3 = ___placementId0;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(9 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState) */, IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		// m_ManagedListener?.OnUnityAdsShowComplete(placementId, showCompletionState);
		RuntimeObject* L_5 = __this->get_m_ManagedListener_6();
		RuntimeObject* L_6 = L_5;
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0020:
	{
		String_t* L_7 = ___placementId0;
		int32_t L_8 = V_0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState) */, IUnityAdsShowListener_t7732F4D848E7DE736C3DC87AEA1E4227F12149D1_il2cpp_TypeInfo_var, G_B2_0, L_7, L_8);
		// }
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
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::add_OnApplicationQuitEventHandler(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit_add_OnApplicationQuitEventHandler_m762124071E8E58EEA62FE526934B5580453CA254 (ApplicationQuit_t657F2DAE714A71F21A98C0C0E84E52B25FA7E545 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_0 = NULL;
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_1 = NULL;
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_2 = NULL;
	{
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = __this->get_OnApplicationQuitEventHandler_4();
		V_0 = L_0;
	}

IL_0007:
	{
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_1 = V_0;
		V_1 = L_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = V_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)CastclassSealed((RuntimeObject*)L_4, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var));
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** L_5 = __this->get_address_of_OnApplicationQuitEventHandler_4();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_6 = V_2;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_7 = V_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_8;
		L_8 = InterlockedCompareExchangeImpl<UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *>((UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 **)L_5, L_6, L_7);
		V_0 = L_8;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_9 = V_0;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)L_9) == ((RuntimeObject*)(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::remove_OnApplicationQuitEventHandler(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit_remove_OnApplicationQuitEventHandler_mCB879E2220F4AED1BFC13F4FFD2CB332D19E6A60 (ApplicationQuit_t657F2DAE714A71F21A98C0C0E84E52B25FA7E545 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_0 = NULL;
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_1 = NULL;
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_2 = NULL;
	{
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = __this->get_OnApplicationQuitEventHandler_4();
		V_0 = L_0;
	}

IL_0007:
	{
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_1 = V_0;
		V_1 = L_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = V_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)CastclassSealed((RuntimeObject*)L_4, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var));
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** L_5 = __this->get_address_of_OnApplicationQuitEventHandler_4();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_6 = V_2;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_7 = V_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_8;
		L_8 = InterlockedCompareExchangeImpl<UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *>((UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 **)L_5, L_6, L_7);
		V_0 = L_8;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_9 = V_0;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)L_9) == ((RuntimeObject*)(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit_OnApplicationQuit_mCAB750C46A0A210D8910479F2BF6B39D79C9B9FF (ApplicationQuit_t657F2DAE714A71F21A98C0C0E84E52B25FA7E545 * __this, const RuntimeMethod* method)
{
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * G_B2_0 = NULL;
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * G_B1_0 = NULL;
	{
		// OnApplicationQuitEventHandler?.Invoke();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = __this->get_OnApplicationQuitEventHandler_4();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		UnityAction_Invoke_mFFF1FFE59D8285F8A81350E6D5C4D791F44F6AC9(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit__ctor_mDA5182896479CF44C084B6049A42FCD92CAFAC81 (ApplicationQuit_t657F2DAE714A71F21A98C0C0E84E52B25FA7E545 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Banner::get_UnityLifecycleManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Banner_get_UnityLifecycleManager_mAC08B890441390B51EDE83425E531B23CEC68372 (Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F * __this, const RuntimeMethod* method)
{
	{
		// public IUnityLifecycleManager UnityLifecycleManager { get; }
		RuntimeObject* L_0 = __this->get_U3CUnityLifecycleManagerU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Banner::get_ShowAfterLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Banner_get_ShowAfterLoad_m64C8DC5F80BAC9A6950D58758710EE5647FE3EBA (Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowAfterLoad { get; set; }
		bool L_0 = __this->get_U3CShowAfterLoadU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Banner::set_ShowAfterLoad(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_set_ShowAfterLoad_m8A20AF56F946CB8D760E788BA9B7770FE5DE4D9B (Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ShowAfterLoad { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CShowAfterLoadU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::.ctor(UnityEngine.Advertisements.INativeBanner,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner__ctor_mDD474E5221852E045390D1936756F5D8D12BE65F (Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F * __this, RuntimeObject* ___nativeBanner0, RuntimeObject* ___unityLifecycleManager1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBanner_tDEFFF9227E3F58FC94BD11DF21D57649BD34D1AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Banner(INativeBanner nativeBanner, IUnityLifecycleManager unityLifecycleManager)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_NativeBanner = nativeBanner;
		RuntimeObject* L_0 = ___nativeBanner0;
		__this->set_m_NativeBanner_2(L_0);
		// UnityLifecycleManager = unityLifecycleManager;
		RuntimeObject* L_1 = ___unityLifecycleManager1;
		__this->set_U3CUnityLifecycleManagerU3Ek__BackingField_0(L_1);
		// m_NativeBanner.SetupBanner(this);
		RuntimeObject* L_2 = __this->get_m_NativeBanner_2();
		NullCheck(L_2);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void UnityEngine.Advertisements.INativeBanner::SetupBanner(UnityEngine.Advertisements.IBanner) */, INativeBanner_tDEFFF9227E3F58FC94BD11DF21D57649BD34D1AD_il2cpp_TypeInfo_var, L_2, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::Load(System.String,UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Load_m7B58B0DAD01E92BE68FCFED26EA6B1F425AC889C (Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F * __this, String_t* ___placementId0, BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * ___loadOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBanner_tDEFFF9227E3F58FC94BD11DF21D57649BD34D1AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NativeBanner.Load(placementId, loadOptions);
		RuntimeObject* L_0 = __this->get_m_NativeBanner_2();
		String_t* L_1 = ___placementId0;
		BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * L_2 = ___loadOptions1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * >::Invoke(1 /* System.Void UnityEngine.Advertisements.INativeBanner::Load(System.String,UnityEngine.Advertisements.BannerLoadOptions) */, INativeBanner_tDEFFF9227E3F58FC94BD11DF21D57649BD34D1AD_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::Show(System.String,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Show_m7791A4297836BE871005352574962083DC4B6C15 (Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F * __this, String_t* ___placementId0, BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * ___showOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBanner_tDEFFF9227E3F58FC94BD11DF21D57649BD34D1AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NativeBanner.Show(placementId, showOptions);
		RuntimeObject* L_0 = __this->get_m_NativeBanner_2();
		String_t* L_1 = ___placementId0;
		BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * L_2 = ___showOptions1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * >::Invoke(2 /* System.Void UnityEngine.Advertisements.INativeBanner::Show(System.String,UnityEngine.Advertisements.BannerOptions) */, INativeBanner_tDEFFF9227E3F58FC94BD11DF21D57649BD34D1AD_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::Hide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Hide_mD6371F02EDE0DF726B95BE9D0170491317E0D6EF (Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F * __this, bool ___destroy0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBanner_tDEFFF9227E3F58FC94BD11DF21D57649BD34D1AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NativeBanner.Hide(destroy);
		RuntimeObject* L_0 = __this->get_m_NativeBanner_2();
		bool L_1 = ___destroy0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void UnityEngine.Advertisements.INativeBanner::Hide(System.Boolean) */, INativeBanner_tDEFFF9227E3F58FC94BD11DF21D57649BD34D1AD_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::SetPosition(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_SetPosition_mE72DB0EE63B4C1140AA0B7955046BC8E1DD7A0F6 (Banner_t8416A7A20DA68433F399CD69446FA3C7F5BDAB9F * __this, int32_t ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBanner_tDEFFF9227E3F58FC94BD11DF21D57649BD34D1AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NativeBanner.SetPosition(position);
		RuntimeObject* L_0 = __this->get_m_NativeBanner_2();
		int32_t L_1 = ___position0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void UnityEngine.Advertisements.INativeBanner::SetPosition(UnityEngine.Advertisements.BannerPosition) */, INativeBanner_tDEFFF9227E3F58FC94BD11DF21D57649BD34D1AD_il2cpp_TypeInfo_var, L_0, L_1);
		// }
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
// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.BannerBundle::get_bannerView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * BannerBundle_get_bannerView_m20FD8F37C6B4CBCAC0A242DDCCCCC0CFC410A6DB (BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * __this, const RuntimeMethod* method)
{
	{
		// public AndroidJavaObject bannerView { get; }
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_U3CbannerViewU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String UnityEngine.Advertisements.Platform.Android.BannerBundle::get_bannerPlacementId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BannerBundle_get_bannerPlacementId_mAED7E362ED7353743DBE095CDA321AA1BA9CA509 (BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * __this, const RuntimeMethod* method)
{
	{
		// public string bannerPlacementId { get; }
		String_t* L_0 = __this->get_U3CbannerPlacementIdU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.BannerBundle::.ctor(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerBundle__ctor_mF58FB0BFECD4B8CCE0F047B6C7C639D909A4663D (BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * __this, String_t* ___bannerPlacementId0, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___bannerView1, const RuntimeMethod* method)
{
	{
		// public BannerBundle(string bannerPlacementId, AndroidJavaObject bannerView)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.bannerPlacementId = bannerPlacementId;
		String_t* L_0 = ___bannerPlacementId0;
		__this->set_U3CbannerPlacementIdU3Ek__BackingField_1(L_0);
		// this.bannerView = bannerView;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = ___bannerView1;
		__this->set_U3CbannerViewU3Ek__BackingField_0(L_1);
		// }
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
// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback UnityEngine.Advertisements.BannerLoadOptions::get_loadCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4 * BannerLoadOptions_get_loadCallback_m1E53B8D279969186E9C26F708D740CE341021E1D (BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * __this, const RuntimeMethod* method)
{
	{
		// public LoadCallback loadCallback { get; set; }
		LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4 * L_0 = __this->get_U3CloadCallbackU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions::set_loadCallback(UnityEngine.Advertisements.BannerLoadOptions/LoadCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerLoadOptions_set_loadCallback_mC570E2A0A01D937BA5947E718C9B5461C9956D10 (BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * __this, LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4 * ___value0, const RuntimeMethod* method)
{
	{
		// public LoadCallback loadCallback { get; set; }
		LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4 * L_0 = ___value0;
		__this->set_U3CloadCallbackU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback UnityEngine.Advertisements.BannerLoadOptions::get_errorCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA * BannerLoadOptions_get_errorCallback_m742E504A13CEDCADA2E1F55803D7792173785141 (BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * __this, const RuntimeMethod* method)
{
	{
		// public ErrorCallback errorCallback { get; set; }
		ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA * L_0 = __this->get_U3CerrorCallbackU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions::set_errorCallback(UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerLoadOptions_set_errorCallback_m408A1232D049940694B62282F1F5F282E32E19F5 (BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * __this, ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA * ___value0, const RuntimeMethod* method)
{
	{
		// public ErrorCallback errorCallback { get; set; }
		ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA * L_0 = ___value0;
		__this->set_U3CerrorCallbackU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerLoadOptions__ctor_mBDED8E49591A9A07186D1A5B8C23052BD95A027C (BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_showCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * BannerOptions_get_showCallback_m7F006DF1E195FA0DB4018B578A1501C16A3C8ABD (BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * __this, const RuntimeMethod* method)
{
	{
		// public BannerCallback showCallback { get; set; }
		BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * L_0 = __this->get_U3CshowCallbackU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.BannerOptions::set_showCallback(UnityEngine.Advertisements.BannerOptions/BannerCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerOptions_set_showCallback_mD85C567DBFF4AEA5E1939F9DE44E34B4A1A42FF5 (BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * __this, BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * ___value0, const RuntimeMethod* method)
{
	{
		// public BannerCallback showCallback { get; set; }
		BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * L_0 = ___value0;
		__this->set_U3CshowCallbackU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_hideCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * BannerOptions_get_hideCallback_m4917D20A8FC89C11E8F0DA848352136A643EFD6E (BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * __this, const RuntimeMethod* method)
{
	{
		// public BannerCallback hideCallback { get; set; }
		BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * L_0 = __this->get_U3ChideCallbackU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.BannerOptions::set_hideCallback(UnityEngine.Advertisements.BannerOptions/BannerCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerOptions_set_hideCallback_mF6AA81196560775FD288516E84D7C8A1717FD984 (BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * __this, BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * ___value0, const RuntimeMethod* method)
{
	{
		// public BannerCallback hideCallback { get; set; }
		BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * L_0 = ___value0;
		__this->set_U3ChideCallbackU3Ek__BackingField_1(L_0);
		return;
	}
}
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_clickCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * BannerOptions_get_clickCallback_m3FF6E63F23ADB2E8BD2690AFE55AE1A90DF8B3C9 (BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * __this, const RuntimeMethod* method)
{
	{
		// public BannerCallback clickCallback { get; set; }
		BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * L_0 = __this->get_U3CclickCallbackU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.BannerOptions::set_clickCallback(UnityEngine.Advertisements.BannerOptions/BannerCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerOptions_set_clickCallback_mAE61BD80F9EC19FD1874DFEF7535A99B9336EFF1 (BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * __this, BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * ___value0, const RuntimeMethod* method)
{
	{
		// public BannerCallback clickCallback { get; set; }
		BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * L_0 = ___value0;
		__this->set_U3CclickCallbackU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.BannerOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerOptions__ctor_mE7AAFFFA5BF2B3373B42FFA68E02DB8483C645FC (BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_Awake_m822B154A3E8219AA74120695CF7AD831EFEADEF4 (BannerPlaceholder_tC41703F3C8608948B2B9C1190ADEE2D3203C92EF * __this, const RuntimeMethod* method)
{
	{
		// IsShowing = false;
		__this->set_IsShowing_7((bool)0);
		// aTexture = BackgroundTexture(320, 50, Color.grey);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_grey_mB2E29B47327F20233856F933DC00ACADEBFDBDFA(/*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1;
		L_1 = BannerPlaceholder_BackgroundTexture_m293DF04E7B368AE3B9080B22E6FF48594B7F2A12(((int32_t)320), ((int32_t)50), L_0, /*hidden argument*/NULL);
		__this->set_aTexture_4(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_OnGUI_m72EFCA09207DF9F63E415FEA335504272C679C6E (BannerPlaceholder_tC41703F3C8608948B2B9C1190ADEE2D3203C92EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97D34C2FB9E9844A9F8172EB3FADC29227F6FFE0);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * G_B5_0 = NULL;
	BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * G_B4_0 = NULL;
	{
		// if (!IsShowing) return;
		bool L_0 = __this->get_IsShowing_7();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!IsShowing) return;
		return;
	}

IL_0009:
	{
		// var myStyle = new GUIStyle(GUI.skin.box) { alignment = TextAnchor.MiddleCenter, fontSize = 20 };
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_1;
		L_1 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_1);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_2;
		L_2 = GUISkin_get_box_m3877DF429E9B3E7A4ADF39EAAEA4948DD6C38BB0(L_1, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_3 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B(L_3, L_2, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_4 = L_3;
		NullCheck(L_4);
		GUIStyle_set_alignment_mCF8FDA9DA149F528DCDC19680AEED46F25161D89(L_4, 4, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_5 = L_4;
		NullCheck(L_5);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_5, ((int32_t)20), /*hidden argument*/NULL);
		V_0 = L_5;
		// if (GUI.Button(GetBannerRect(BannerPosition), aTexture))
		int32_t L_6 = __this->get_BannerPosition_5();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_7;
		L_7 = BannerPlaceholder_GetBannerRect_m9FDCBDF38BA95753723C46D5D941C940BE339F9D(L_6, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = __this->get_aTexture_4();
		bool L_9;
		L_9 = GUI_Button_m2D990F18AA1E71C725D759D25935878C8795BCB7(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		// BannerOptions?.clickCallback();
		BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * L_10 = __this->get_BannerOptions_6();
		BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * L_11 = L_10;
		G_B4_0 = L_11;
		if (L_11)
		{
			G_B5_0 = L_11;
			goto IL_004c;
		}
	}
	{
		goto IL_0056;
	}

IL_004c:
	{
		NullCheck(G_B5_0);
		BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * L_12;
		L_12 = BannerOptions_get_clickCallback_m3FF6E63F23ADB2E8BD2690AFE55AE1A90DF8B3C9_inline(G_B5_0, /*hidden argument*/NULL);
		NullCheck(L_12);
		BannerCallback_Invoke_m7EF16702D77941C484593A5269ED82D50C2BF211(L_12, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// if (aTexture)
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13 = __this->get_aTexture_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0086;
		}
	}
	{
		// var bannerRect = GetBannerRect(BannerPosition);
		int32_t L_15 = __this->get_BannerPosition_5();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_16;
		L_16 = BannerPlaceholder_GetBannerRect_m9FDCBDF38BA95753723C46D5D941C940BE339F9D(L_15, /*hidden argument*/NULL);
		// GUI.DrawTexture(bannerRect, aTexture, ScaleMode.ScaleToFit);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_17 = L_16;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = __this->get_aTexture_4();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m50AFF787DEFFC667E145D1848A9B9C0E84C1DE1E(L_17, L_18, 2, /*hidden argument*/NULL);
		// GUI.Box(bannerRect, "This would be your banner", myStyle);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_19 = V_0;
		GUI_Box_mCBAEFC1F48A5BF6E20691EE14024CEBF93705018(L_17, _stringLiteral97D34C2FB9E9844A9F8172EB3FADC29227F6FFE0, L_19, /*hidden argument*/NULL);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::ShowBanner(UnityEngine.Advertisements.BannerPosition,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_ShowBanner_m8E105A6E932CF2416FB565901EE2970C7BC47F8E (BannerPlaceholder_tC41703F3C8608948B2B9C1190ADEE2D3203C92EF * __this, int32_t ___bannerPosition0, BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * ___bannerOptions1, const RuntimeMethod* method)
{
	{
		// BannerPosition = bannerPosition;
		int32_t L_0 = ___bannerPosition0;
		__this->set_BannerPosition_5(L_0);
		// BannerOptions = bannerOptions;
		BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * L_1 = ___bannerOptions1;
		__this->set_BannerOptions_6(L_1);
		// IsShowing = true;
		__this->set_IsShowing_7((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::HideBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_HideBanner_m5C41FD98D06E061F836CE9108DC88EA49947853E (BannerPlaceholder_tC41703F3C8608948B2B9C1190ADEE2D3203C92EF * __this, const RuntimeMethod* method)
{
	{
		// IsShowing = false;
		__this->set_IsShowing_7((bool)0);
		// }
		return;
	}
}
// UnityEngine.Texture2D UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BackgroundTexture(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * BannerPlaceholder_BackgroundTexture_m293DF04E7B368AE3B9080B22E6FF48594B7F2A12 (int32_t ___width0, int32_t ___height1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var pix = new Color[width * height];
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_2 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)));
		V_0 = L_2;
		// for (var i = 0; i < pix.Length; i++)
		V_1 = 0;
		goto IL_0019;
	}

IL_000d:
	{
		// pix[i] = color;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_3 = V_0;
		int32_t L_4 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = ___color2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_5);
		// for (var i = 0; i < pix.Length; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0019:
	{
		// for (var i = 0; i < pix.Length; i++)
		int32_t L_7 = V_1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// var result = new Texture2D(width, height);
		int32_t L_9 = ___width0;
		int32_t L_10 = ___height1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_11, L_9, L_10, /*hidden argument*/NULL);
		// result.SetPixels(pix);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = L_11;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_13 = V_0;
		NullCheck(L_12);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_12, L_13, /*hidden argument*/NULL);
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = L_12;
		NullCheck(L_14);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_14, /*hidden argument*/NULL);
		// return result;
		return L_14;
	}
}
// UnityEngine.Rect UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::GetBannerRect(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  BannerPlaceholder_GetBannerRect_m9FDCBDF38BA95753723C46D5D941C940BE339F9D (int32_t ___position0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___position0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_004a;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0064;
			}
			case 3:
			{
				goto IL_00d5;
			}
			case 4:
			{
				goto IL_00ae;
			}
			case 5:
			{
				goto IL_00f3;
			}
			case 6:
			{
				goto IL_0085;
			}
		}
	}
	{
		goto IL_0118;
	}

IL_0027:
	{
		// return new Rect(Screen.width / 2 - 160, 0, 320, 50);
		int32_t L_1;
		L_1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_2), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_1/(int32_t)2)), (int32_t)((int32_t)160))))), (0.0f), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_2;
	}

IL_004a:
	{
		// return new Rect(0, 0, 320, 50);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_3), (0.0f), (0.0f), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_3;
	}

IL_0064:
	{
		// return new Rect(Screen.width - 320, 0, 320, 50);
		int32_t L_4;
		L_4 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_5), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)320))))), (0.0f), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_5;
	}

IL_0085:
	{
		// return new Rect(Screen.width / 2 - 160, Screen.height / 2 - 25, 320, 50);
		int32_t L_6;
		L_6 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_7;
		L_7 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_8), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_6/(int32_t)2)), (int32_t)((int32_t)160))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_7/(int32_t)2)), (int32_t)((int32_t)25))))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_8;
	}

IL_00ae:
	{
		// return new Rect(Screen.width / 2 - 160, Screen.height - 50, 320, 50);
		int32_t L_9;
		L_9 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_10;
		L_10 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_11), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_9/(int32_t)2)), (int32_t)((int32_t)160))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)50))))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_11;
	}

IL_00d5:
	{
		// return new Rect(0, Screen.height - 50, 320, 50);
		int32_t L_12;
		L_12 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_13), (0.0f), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)((int32_t)50))))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_13;
	}

IL_00f3:
	{
		// return new Rect(Screen.width - 320, Screen.height - 50, 320, 50);
		int32_t L_14;
		L_14 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_15;
		L_15 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_16), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)((int32_t)320))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)((int32_t)50))))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_16;
	}

IL_0118:
	{
		// return new Rect(Screen.width / 2 - 160, Screen.height - 50, 320, 50);
		int32_t L_17;
		L_17 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_18;
		L_18 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_19), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_17/(int32_t)2)), (int32_t)((int32_t)160))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)((int32_t)50))))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder__ctor_mE141E2D5146B2A67C4AFCE261F4F7EACBA2C8F0E (BannerPlaceholder_tC41703F3C8608948B2B9C1190ADEE2D3203C92EF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Utilities.CoroutineExecutor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineExecutor_Update_m57AC5DCE11148EDE3AE8E3E9347016AAB6498A45 (CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B4_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B3_0 = NULL;
	{
		// lock (queue)
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_0 = __this->get_queue_5();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			goto IL_0029;
		}

IL_0013:
		{
			// queue.Dequeue()?.Invoke();
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_2 = __this->get_queue_5();
			NullCheck(L_2);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3;
			L_3 = Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5(L_2, /*hidden argument*/Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5_RuntimeMethod_var);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = L_3;
			G_B3_0 = L_4;
			if (L_4)
			{
				G_B4_0 = L_4;
				goto IL_0024;
			}
		}

IL_0021:
		{
			goto IL_0029;
		}

IL_0024:
		{
			NullCheck(G_B4_0);
			Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B4_0, /*hidden argument*/NULL);
		}

IL_0029:
		{
			// while (queue.Count > 0)
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_5 = __this->get_queue_5();
			NullCheck(L_5);
			int32_t L_6;
			L_6 = Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_inline(L_5, /*hidden argument*/Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var);
			if ((((int32_t)L_6) > ((int32_t)0)))
			{
				goto IL_0013;
			}
		}

IL_0037:
		{
			// }
			IL2CPP_LEAVE(0x43, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0042;
			}
		}

IL_003c:
		{
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_8 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_0042:
		{
			IL2CPP_END_FINALLY(57)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.CoroutineExecutor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineExecutor__ctor_m9684204520160F7CAC091C39D02F746412C3BA76 (CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly Queue<Action> queue = new Queue<Action>();
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_0 = (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *)il2cpp_codegen_object_new(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4_il2cpp_TypeInfo_var);
		Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4(L_0, /*hidden argument*/Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4_RuntimeMethod_var);
		__this->set_queue_5(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.String UnityEngine.Advertisements.MetaData::get_category()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaData_get_category_m01634B0655A8E8398DBD251759D6CE7F960AEF7C (MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * __this, const RuntimeMethod* method)
{
	{
		// public string category { get; private set; }
		String_t* L_0 = __this->get_U3CcategoryU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::set_category(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData_set_category_m7C17C04FA71B620E17CBF855817317DA4BB55835 (MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string category { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CcategoryU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData__ctor_mD70DF26B182F67DA6605B403EFFD14061145D911 (MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * __this, String_t* ___category0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly IDictionary<string, object> m_MetaData = new Dictionary<string, object>();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		__this->set_m_MetaData_0(L_0);
		// public MetaData(string category)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.category = category;
		String_t* L_1 = ___category0;
		MetaData_set_category_m7C17C04FA71B620E17CBF855817317DA4BB55835_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::Set(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData_Set_m2749FCC92C0E858D7D693D3A91AABDBE528B7F02 (MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MetaData[key] = value;
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
		String_t* L_1 = ___key0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetaData_Values_m9A702FADC03CC4AEA44AE1FF1072142D6CBA2092 (MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * __this, const RuntimeMethod* method)
{
	{
		// return m_MetaData;
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
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
// UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.Platform::get_Banner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_Banner_m3D576E86907B69C916EBCBB85FF86150D870688E (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, const RuntimeMethod* method)
{
	{
		// public IBanner Banner { get; }
		RuntimeObject* L_0 = __this->get_U3CBannerU3Ek__BackingField_0();
		return L_0;
	}
}
// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Platform.Platform::get_UnityLifecycleManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_UnityLifecycleManager_mDDF90C14ED5F6725FB8737155CCC4C75ED8F202B (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, const RuntimeMethod* method)
{
	{
		// public IUnityLifecycleManager UnityLifecycleManager { get; }
		RuntimeObject* L_0 = __this->get_U3CUnityLifecycleManagerU3Ek__BackingField_1();
		return L_0;
	}
}
// UnityEngine.Advertisements.INativePlatform UnityEngine.Advertisements.Platform.Platform::get_NativePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_NativePlatform_m242BB5680767D51993B32B8A1032A51F43B3ECD2 (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, const RuntimeMethod* method)
{
	{
		// public INativePlatform NativePlatform { get; }
		RuntimeObject* L_0 = __this->get_U3CNativePlatformU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_IsInitialized_m68D850C15A7C2F4A091268697F524986F7269B9B (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_t7A89C573A0E74F740D2695065CDAD93E06D5FFC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public bool IsInitialized => NativePlatform?.IsInitialized() ?? false;
		RuntimeObject* L_0;
		L_0 = Platform_get_NativePlatform_m242BB5680767D51993B32B8A1032A51F43B3ECD2_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.Advertisements.INativePlatform::IsInitialized() */, INativePlatform_t7A89C573A0E74F740D2695065CDAD93E06D5FFC7_il2cpp_TypeInfo_var, G_B2_0);
		return L_2;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_IsShowing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_IsShowing_m9BD156248CBA7EDCC0501F197D289646D8649911 (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = __this->get_U3CIsShowingU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::set_IsShowing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_set_IsShowing_mD23ADD665AA1A55BA6EE3BF160979A19E2CE6DEF (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsShowingU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String UnityEngine.Advertisements.Platform.Platform::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_get_Version_m4981C3DEFDB4F5B5E7AF3A86A35F07DB67A7AB06 (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_t7A89C573A0E74F740D2695065CDAD93E06D5FFC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		// public string Version => NativePlatform?.GetVersion() ?? "UnknownVersion";
		RuntimeObject* L_0;
		L_0 = Platform_get_NativePlatform_m242BB5680767D51993B32B8A1032A51F43B3ECD2_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String UnityEngine.Advertisements.INativePlatform::GetVersion() */, INativePlatform_t7A89C573A0E74F740D2695065CDAD93E06D5FFC7_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		String_t* L_3 = G_B3_0;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001b;
		}
	}
	{
		G_B5_0 = _stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741;
	}

IL_001b:
	{
		return G_B5_0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::.ctor(UnityEngine.Advertisements.INativePlatform,UnityEngine.Advertisements.IBanner,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_mF416C20B8789325D367945C5C4C6C0C50F04B168 (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, RuntimeObject* ___nativePlatform0, RuntimeObject* ___banner1, RuntimeObject* ___unityLifecycleManager2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_t7A89C573A0E74F740D2695065CDAD93E06D5FFC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Platform(INativePlatform nativePlatform, IBanner banner, IUnityLifecycleManager unityLifecycleManager)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// NativePlatform = nativePlatform;
		RuntimeObject* L_0 = ___nativePlatform0;
		__this->set_U3CNativePlatformU3Ek__BackingField_2(L_0);
		// Banner = banner;
		RuntimeObject* L_1 = ___banner1;
		__this->set_U3CBannerU3Ek__BackingField_0(L_1);
		// UnityLifecycleManager = unityLifecycleManager;
		RuntimeObject* L_2 = ___unityLifecycleManager2;
		__this->set_U3CUnityLifecycleManagerU3Ek__BackingField_1(L_2);
		// NativePlatform.SetupPlatform(this);
		RuntimeObject* L_3;
		L_3 = Platform_get_NativePlatform_m242BB5680767D51993B32B8A1032A51F43B3ECD2_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void UnityEngine.Advertisements.INativePlatform::SetupPlatform(UnityEngine.Advertisements.Platform.IPlatform) */, INativePlatform_t7A89C573A0E74F740D2695065CDAD93E06D5FFC7_il2cpp_TypeInfo_var, L_3, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Initialize_mD4EDC344F2BB928602BECCA9D756F94F48758D6D (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, String_t* ___gameId0, bool ___testMode1, RuntimeObject* ___initializationListener2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_t7A89C573A0E74F740D2695065CDAD93E06D5FFC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5416DA66FCD064B00AC9807723143002DA52C7B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D40F3F0C41EC73A97A45783093FA83DC6B51E9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6D00A6763BDEB8C18D1862BD06DFCB3D7627412);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052);
		s_Il2CppMethodInitialized = true;
	}
	MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * V_0 = NULL;
	MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * V_1 = NULL;
	{
		// if (!IsInitialized)
		bool L_0;
		L_0 = Platform_get_IsInitialized_m68D850C15A7C2F4A091268697F524986F7269B9B(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_007b;
		}
	}
	{
		// var framework = new MetaData("framework");
		MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * L_1 = (MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A *)il2cpp_codegen_object_new(MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A_il2cpp_TypeInfo_var);
		MetaData__ctor_mD70DF26B182F67DA6605B403EFFD14061145D911(L_1, _stringLiteralC6D00A6763BDEB8C18D1862BD06DFCB3D7627412, /*hidden argument*/NULL);
		V_0 = L_1;
		// framework.Set("name", "Unity");
		MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * L_2 = V_0;
		NullCheck(L_2);
		MetaData_Set_m2749FCC92C0E858D7D693D3A91AABDBE528B7F02(L_2, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A, /*hidden argument*/NULL);
		// framework.Set("version", Application.unityVersion);
		MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * L_3 = V_0;
		String_t* L_4;
		L_4 = Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1(/*hidden argument*/NULL);
		NullCheck(L_3);
		MetaData_Set_m2749FCC92C0E858D7D693D3A91AABDBE528B7F02(L_3, _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052, L_4, /*hidden argument*/NULL);
		// SetMetaData(framework);
		MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * L_5 = V_0;
		Platform_SetMetaData_m75AE211B556BB8A7F129E35A6D6EFF586595613B(__this, L_5, /*hidden argument*/NULL);
		// var adapter = new MetaData("adapter");
		MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * L_6 = (MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A *)il2cpp_codegen_object_new(MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A_il2cpp_TypeInfo_var);
		MetaData__ctor_mD70DF26B182F67DA6605B403EFFD14061145D911(L_6, _stringLiteral5416DA66FCD064B00AC9807723143002DA52C7B3, /*hidden argument*/NULL);
		V_1 = L_6;
		// adapter.Set("name", "Packman");
		MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * L_7 = V_1;
		NullCheck(L_7);
		MetaData_Set_m2749FCC92C0E858D7D693D3A91AABDBE528B7F02(L_7, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, _stringLiteral7D40F3F0C41EC73A97A45783093FA83DC6B51E9F, /*hidden argument*/NULL);
		// adapter.Set("version", Version);
		MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * L_8 = V_1;
		String_t* L_9;
		L_9 = Platform_get_Version_m4981C3DEFDB4F5B5E7AF3A86A35F07DB67A7AB06(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		MetaData_Set_m2749FCC92C0E858D7D693D3A91AABDBE528B7F02(L_8, _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052, L_9, /*hidden argument*/NULL);
		// SetMetaData(adapter);
		MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * L_10 = V_1;
		Platform_SetMetaData_m75AE211B556BB8A7F129E35A6D6EFF586595613B(__this, L_10, /*hidden argument*/NULL);
		// NativePlatform.Initialize(gameId, testMode, initializationListener);
		RuntimeObject* L_11;
		L_11 = Platform_get_NativePlatform_m242BB5680767D51993B32B8A1032A51F43B3ECD2_inline(__this, /*hidden argument*/NULL);
		String_t* L_12 = ___gameId0;
		bool L_13 = ___testMode1;
		RuntimeObject* L_14 = ___initializationListener2;
		NullCheck(L_11);
		InterfaceActionInvoker3< String_t*, bool, RuntimeObject* >::Invoke(1 /* System.Void UnityEngine.Advertisements.INativePlatform::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener) */, INativePlatform_t7A89C573A0E74F740D2695065CDAD93E06D5FFC7_il2cpp_TypeInfo_var, L_11, L_12, L_13, L_14);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Load_mEC845FD190DAFD92F7B631B5778C61D4678AA1A3 (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, String_t* ___placementId0, RuntimeObject* ___loadListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_t7A89C573A0E74F740D2695065CDAD93E06D5FFC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral939E5F4A986FA1522F2818B2E87F98C768D55320);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(placementId))
		String_t* L_0 = ___placementId0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("placementId cannot be nil or empty");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral939E5F4A986FA1522F2818B2E87F98C768D55320, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// NativePlatform.Load(placementId, loadListener);
		RuntimeObject* L_2;
		L_2 = Platform_get_NativePlatform_m242BB5680767D51993B32B8A1032A51F43B3ECD2_inline(__this, /*hidden argument*/NULL);
		String_t* L_3 = ___placementId0;
		RuntimeObject* L_4 = ___loadListener1;
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(2 /* System.Void UnityEngine.Advertisements.INativePlatform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener) */, INativePlatform_t7A89C573A0E74F740D2695065CDAD93E06D5FFC7_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::Show(System.String,UnityEngine.Advertisements.ShowOptions,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Show_mA5CC11BB7B0568FA9C6DA2E5304598953DDD90C6 (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, String_t* ___placementId0, ShowOptions_t99ED612696DAD41A1A88FE552D9CE1C94BDCF020 * ___showOptions1, RuntimeObject* ___showListener2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_t7A89C573A0E74F740D2695065CDAD93E06D5FFC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5FDB5AC0DA6EFB2AD96E6A2A36EE08EA416A714);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A);
		s_Il2CppMethodInitialized = true;
	}
	MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * V_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	{
		// if (IsShowing) return;
		bool L_0;
		L_0 = Platform_get_IsShowing_m9BD156248CBA7EDCC0501F197D289646D8649911_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (IsShowing) return;
		return;
	}

IL_0009:
	{
		// if (showOptions != null)
		ShowOptions_t99ED612696DAD41A1A88FE552D9CE1C94BDCF020 * L_1 = ___showOptions1;
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		// if (!string.IsNullOrEmpty(showOptions.gamerSid))
		ShowOptions_t99ED612696DAD41A1A88FE552D9CE1C94BDCF020 * L_2 = ___showOptions1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ShowOptions_get_gamerSid_m290022B7CE78E6B3568DFD9547EBA953BF15F1AA_inline(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		// var player = new MetaData("player");
		MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * L_5 = (MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A *)il2cpp_codegen_object_new(MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A_il2cpp_TypeInfo_var);
		MetaData__ctor_mD70DF26B182F67DA6605B403EFFD14061145D911(L_5, _stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A, /*hidden argument*/NULL);
		V_0 = L_5;
		// player.Set("server_id", showOptions.gamerSid);
		MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * L_6 = V_0;
		ShowOptions_t99ED612696DAD41A1A88FE552D9CE1C94BDCF020 * L_7 = ___showOptions1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = ShowOptions_get_gamerSid_m290022B7CE78E6B3568DFD9547EBA953BF15F1AA_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		MetaData_Set_m2749FCC92C0E858D7D693D3A91AABDBE528B7F02(L_6, _stringLiteralA5FDB5AC0DA6EFB2AD96E6A2A36EE08EA416A714, L_8, /*hidden argument*/NULL);
		// SetMetaData(player);
		MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * L_9 = V_0;
		Platform_SetMetaData_m75AE211B556BB8A7F129E35A6D6EFF586595613B(__this, L_9, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// NativePlatform.Show(string.IsNullOrEmpty(placementId) ? null : placementId, showListener);
		RuntimeObject* L_10;
		L_10 = Platform_get_NativePlatform_m242BB5680767D51993B32B8A1032A51F43B3ECD2_inline(__this, /*hidden argument*/NULL);
		String_t* L_11 = ___placementId0;
		bool L_12;
		L_12 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_11, /*hidden argument*/NULL);
		G_B6_0 = L_10;
		if (L_12)
		{
			G_B7_0 = L_10;
			goto IL_004d;
		}
	}
	{
		String_t* L_13 = ___placementId0;
		G_B8_0 = L_13;
		G_B8_1 = G_B6_0;
		goto IL_004e;
	}

IL_004d:
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B7_0;
	}

IL_004e:
	{
		RuntimeObject* L_14 = ___showListener2;
		NullCheck(G_B8_1);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(3 /* System.Void UnityEngine.Advertisements.INativePlatform::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener) */, INativePlatform_t7A89C573A0E74F740D2695065CDAD93E06D5FFC7_il2cpp_TypeInfo_var, G_B8_1, G_B8_0, L_14);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_SetMetaData_m75AE211B556BB8A7F129E35A6D6EFF586595613B (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * ___metaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_t7A89C573A0E74F740D2695065CDAD93E06D5FFC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativePlatform.SetMetaData(metaData);
		RuntimeObject* L_0;
		L_0 = Platform_get_NativePlatform_m242BB5680767D51993B32B8A1032A51F43B3ECD2_inline(__this, /*hidden argument*/NULL);
		MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * L_1 = ___metaData0;
		NullCheck(L_0);
		InterfaceActionInvoker1< MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * >::Invoke(4 /* System.Void UnityEngine.Advertisements.INativePlatform::SetMetaData(UnityEngine.Advertisements.MetaData) */, INativePlatform_t7A89C573A0E74F740D2695065CDAD93E06D5FFC7_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnUnityAdsShowFailure_m8C80501D72B83F33A79C825E768496E38B2919D5 (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, String_t* ___placementId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method)
{
	{
		// IsShowing = false;
		Platform_set_IsShowing_mD23ADD665AA1A55BA6EE3BF160979A19E2CE6DEF_inline(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnUnityAdsShowStart_m7771C5A97C8FDAE7F1F6427810B3795E4219800C (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		// IsShowing = true;
		Platform_set_IsShowing_mD23ADD665AA1A55BA6EE3BF160979A19E2CE6DEF_inline(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnUnityAdsShowClick_m0BB22E800FF192295F06A221D3B94A888D4BD142 (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnUnityAdsShowComplete_mD2FB9D13595EE88D91441E702D433D7F4E53DD22 (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, String_t* ___placementId0, int32_t ___completionState1, const RuntimeMethod* method)
{
	{
		// IsShowing = false;
		Platform_set_IsShowing_mD23ADD665AA1A55BA6EE3BF160979A19E2CE6DEF_inline(__this, (bool)0, /*hidden argument*/NULL);
		// }
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
// System.String UnityEngine.Advertisements.ShowOptions::get_gamerSid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShowOptions_get_gamerSid_m290022B7CE78E6B3568DFD9547EBA953BF15F1AA (ShowOptions_t99ED612696DAD41A1A88FE552D9CE1C94BDCF020 * __this, const RuntimeMethod* method)
{
	{
		// public string gamerSid { get; set; }
		String_t* L_0 = __this->get_U3CgamerSidU3Ek__BackingField_0();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch::.ctor(UnityEngine.Advertisements.IUnityAdsInitializationListener,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsInitializationListenerMainDispatch__ctor_m0BBF024CDFC16F246180AB67369F8F4C5BDAD555 (UnityAdsInitializationListenerMainDispatch_t76A004DF9FF6E896C44173A1E98331315B5664D5 * __this, RuntimeObject* ___initializationListener0, RuntimeObject* ___lifecycleManager1, const RuntimeMethod* method)
{
	{
		// public UnityAdsInitializationListenerMainDispatch(IUnityAdsInitializationListener initializationListener, IUnityLifecycleManager lifecycleManager)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_InitializationListener = initializationListener;
		RuntimeObject* L_0 = ___initializationListener0;
		__this->set_m_InitializationListener_0(L_0);
		// m_LifecycleManager = lifecycleManager;
		RuntimeObject* L_1 = ___lifecycleManager1;
		__this->set_m_LifecycleManager_1(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch::OnInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsInitializationListenerMainDispatch_OnInitializationComplete_m99830FE12560FACD4CB0BC8D98808A9AEFCB5961 (UnityAdsInitializationListenerMainDispatch_t76A004DF9FF6E896C44173A1E98331315B5664D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsInitializationListenerMainDispatch_U3COnInitializationCompleteU3Eb__3_0_m051E35696A8A7FBAC626D874F166AAABEEDFA57B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_LifecycleManager.Post(() => { m_InitializationListener?.OnInitializationComplete(); });
		RuntimeObject* L_0 = __this->get_m_LifecycleManager_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_1, __this, (intptr_t)((intptr_t)UnityAdsInitializationListenerMainDispatch_U3COnInitializationCompleteU3Eb__3_0_m051E35696A8A7FBAC626D874F166AAABEEDFA57B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsInitializationListenerMainDispatch_OnInitializationFailed_m1114654BDD6A009BBE30D784B6687F1E42BCCD76 (UnityAdsInitializationListenerMainDispatch_t76A004DF9FF6E896C44173A1E98331315B5664D5 * __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3COnInitializationFailedU3Eb__0_mD04100C934BA18541523CD9B9AD50249CC4635C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tCAF2299D2F9FD299B0CBE1A09CB39A25BE979704_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tCAF2299D2F9FD299B0CBE1A09CB39A25BE979704 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tCAF2299D2F9FD299B0CBE1A09CB39A25BE979704 * L_0 = (U3CU3Ec__DisplayClass4_0_tCAF2299D2F9FD299B0CBE1A09CB39A25BE979704 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tCAF2299D2F9FD299B0CBE1A09CB39A25BE979704_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_mD6DE45E52853A14EF448AD6AC412EF352B43110B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tCAF2299D2F9FD299B0CBE1A09CB39A25BE979704 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass4_0_tCAF2299D2F9FD299B0CBE1A09CB39A25BE979704 * L_2 = V_0;
		int32_t L_3 = ___error0;
		NullCheck(L_2);
		L_2->set_error_1(L_3);
		U3CU3Ec__DisplayClass4_0_tCAF2299D2F9FD299B0CBE1A09CB39A25BE979704 * L_4 = V_0;
		String_t* L_5 = ___message1;
		NullCheck(L_4);
		L_4->set_message_2(L_5);
		// m_LifecycleManager.Post(() => { m_InitializationListener?.OnInitializationFailed(error, message); });
		RuntimeObject* L_6 = __this->get_m_LifecycleManager_1();
		U3CU3Ec__DisplayClass4_0_tCAF2299D2F9FD299B0CBE1A09CB39A25BE979704 * L_7 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3COnInitializationFailedU3Eb__0_mD04100C934BA18541523CD9B9AD50249CC4635C0_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var, L_6, L_8);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch::<OnInitializationComplete>b__3_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsInitializationListenerMainDispatch_U3COnInitializationCompleteU3Eb__3_0_m051E35696A8A7FBAC626D874F166AAABEEDFA57B (UnityAdsInitializationListenerMainDispatch_t76A004DF9FF6E896C44173A1E98331315B5664D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsInitializationListener_tB5A65E66AB4768647B0CD180A7F8E7A220B6D813_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_LifecycleManager.Post(() => { m_InitializationListener?.OnInitializationComplete(); });
		RuntimeObject* L_0 = __this->get_m_InitializationListener_0();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsInitializationListener::OnInitializationComplete() */, IUnityAdsInitializationListener_tB5A65E66AB4768647B0CD180A7F8E7A220B6D813_il2cpp_TypeInfo_var, G_B2_0);
		// m_LifecycleManager.Post(() => { m_InitializationListener?.OnInitializationComplete(); });
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
// System.Void UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch::.ctor(UnityEngine.Advertisements.IUnityAdsLoadListener,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsLoadListenerMainDispatch__ctor_m099FC74DA9763DE86BED8202D943F58B5FE18C8D (UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1 * __this, RuntimeObject* ___loadListener0, RuntimeObject* ___lifecycleManager1, const RuntimeMethod* method)
{
	{
		// public UnityAdsLoadListenerMainDispatch(IUnityAdsLoadListener loadListener, IUnityLifecycleManager lifecycleManager)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_LoadListener = loadListener;
		RuntimeObject* L_0 = ___loadListener0;
		__this->set_m_LoadListener_0(L_0);
		// m_LifecycleManager = lifecycleManager;
		RuntimeObject* L_1 = ___lifecycleManager1;
		__this->set_m_LifecycleManager_1(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch::OnUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsLoadListenerMainDispatch_OnUnityAdsAdLoaded_m3E44BC36B1822D690F471D8D6E3862735F31BA81 (UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3COnUnityAdsAdLoadedU3Eb__0_m780C11C0852C5B481A9F0A06911F43444B8163F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tE1AE55BCCE6224A508A6F88F3123EEA082367F4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_tE1AE55BCCE6224A508A6F88F3123EEA082367F4C * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_tE1AE55BCCE6224A508A6F88F3123EEA082367F4C * L_0 = (U3CU3Ec__DisplayClass3_0_tE1AE55BCCE6224A508A6F88F3123EEA082367F4C *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tE1AE55BCCE6224A508A6F88F3123EEA082367F4C_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_0__ctor_mE56CA0753C5B787DF671D744AE2911A1C591064A(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_tE1AE55BCCE6224A508A6F88F3123EEA082367F4C * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass3_0_tE1AE55BCCE6224A508A6F88F3123EEA082367F4C * L_2 = V_0;
		String_t* L_3 = ___placementId0;
		NullCheck(L_2);
		L_2->set_placementId_1(L_3);
		// m_LifecycleManager.Post(() => { m_LoadListener?.OnUnityAdsAdLoaded(placementId); });
		RuntimeObject* L_4 = __this->get_m_LifecycleManager_1();
		U3CU3Ec__DisplayClass3_0_tE1AE55BCCE6224A508A6F88F3123EEA082367F4C * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass3_0_U3COnUnityAdsAdLoadedU3Eb__0_m780C11C0852C5B481A9F0A06911F43444B8163F8_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var, L_4, L_6);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsLoadListenerMainDispatch_OnUnityAdsFailedToLoad_mE7CB23D606470BFBD65FD36F62EEAC58FF95947C (UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1 * __this, String_t* ___placementId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3COnUnityAdsFailedToLoadU3Eb__0_mE1EED92A8BB50BA4D477617035805CD7BEEAE6D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t491D260B7FE1FACC2CB6EBA57BEA49CADE475943_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t491D260B7FE1FACC2CB6EBA57BEA49CADE475943 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t491D260B7FE1FACC2CB6EBA57BEA49CADE475943 * L_0 = (U3CU3Ec__DisplayClass4_0_t491D260B7FE1FACC2CB6EBA57BEA49CADE475943 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t491D260B7FE1FACC2CB6EBA57BEA49CADE475943_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_m450192F9B77A2ABBD1381BDA9458C355593CF9CC(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t491D260B7FE1FACC2CB6EBA57BEA49CADE475943 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass4_0_t491D260B7FE1FACC2CB6EBA57BEA49CADE475943 * L_2 = V_0;
		String_t* L_3 = ___placementId0;
		NullCheck(L_2);
		L_2->set_placementId_1(L_3);
		U3CU3Ec__DisplayClass4_0_t491D260B7FE1FACC2CB6EBA57BEA49CADE475943 * L_4 = V_0;
		int32_t L_5 = ___error1;
		NullCheck(L_4);
		L_4->set_error_2(L_5);
		U3CU3Ec__DisplayClass4_0_t491D260B7FE1FACC2CB6EBA57BEA49CADE475943 * L_6 = V_0;
		String_t* L_7 = ___message2;
		NullCheck(L_6);
		L_6->set_message_3(L_7);
		// m_LifecycleManager.Post(() => { m_LoadListener?.OnUnityAdsFailedToLoad(placementId, error, message); });
		RuntimeObject* L_8 = __this->get_m_LifecycleManager_1();
		U3CU3Ec__DisplayClass4_0_t491D260B7FE1FACC2CB6EBA57BEA49CADE475943 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3COnUnityAdsFailedToLoadU3Eb__0_mE1EED92A8BB50BA4D477617035805CD7BEEAE6D6_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var, L_8, L_10);
		// }
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
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch::.ctor(UnityEngine.Advertisements.IUnityAdsShowListener,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsShowListenerMainDispatch__ctor_m3711E6A7C005519454E69EA6661C96EE3E2DECFA (UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * __this, RuntimeObject* ___showListener0, RuntimeObject* ___lifecycleManager1, const RuntimeMethod* method)
{
	{
		// public UnityAdsShowListenerMainDispatch(IUnityAdsShowListener showListener, IUnityLifecycleManager lifecycleManager)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_ShowListener = showListener;
		RuntimeObject* L_0 = ___showListener0;
		__this->set_m_ShowListener_0(L_0);
		// m_LifecycleManager = lifecycleManager;
		RuntimeObject* L_1 = ___lifecycleManager1;
		__this->set_m_LifecycleManager_1(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsShowListenerMainDispatch_OnUnityAdsShowFailure_m1EEBF35F21A760DFBC3E6AAE7006BA77F5FE3B05 (UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * __this, String_t* ___placementId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3COnUnityAdsShowFailureU3Eb__0_mCD60D9106DF44B89222234DFC2ED5908BB9E96D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tD88AA8605E676865E294999340DEC825F600576B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_tD88AA8605E676865E294999340DEC825F600576B * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_tD88AA8605E676865E294999340DEC825F600576B * L_0 = (U3CU3Ec__DisplayClass3_0_tD88AA8605E676865E294999340DEC825F600576B *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tD88AA8605E676865E294999340DEC825F600576B_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_0__ctor_m870E765CB2BBD78D4CB39A1180D9E963AFAB278E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_tD88AA8605E676865E294999340DEC825F600576B * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass3_0_tD88AA8605E676865E294999340DEC825F600576B * L_2 = V_0;
		String_t* L_3 = ___placementId0;
		NullCheck(L_2);
		L_2->set_placementId_1(L_3);
		U3CU3Ec__DisplayClass3_0_tD88AA8605E676865E294999340DEC825F600576B * L_4 = V_0;
		int32_t L_5 = ___error1;
		NullCheck(L_4);
		L_4->set_error_2(L_5);
		U3CU3Ec__DisplayClass3_0_tD88AA8605E676865E294999340DEC825F600576B * L_6 = V_0;
		String_t* L_7 = ___message2;
		NullCheck(L_6);
		L_6->set_message_3(L_7);
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowFailure(placementId, error, message); });
		RuntimeObject* L_8 = __this->get_m_LifecycleManager_1();
		U3CU3Ec__DisplayClass3_0_tD88AA8605E676865E294999340DEC825F600576B * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass3_0_U3COnUnityAdsShowFailureU3Eb__0_mCD60D9106DF44B89222234DFC2ED5908BB9E96D8_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var, L_8, L_10);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsShowListenerMainDispatch_OnUnityAdsShowStart_mCE7D6914C59077E4B456448CE54D84B624C0B029 (UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3COnUnityAdsShowStartU3Eb__0_m12980CA7B968A2291756C876715657A69207F9AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t8336A18BEB5666AF440FA677DBF16ADFF5BCC350_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t8336A18BEB5666AF440FA677DBF16ADFF5BCC350 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t8336A18BEB5666AF440FA677DBF16ADFF5BCC350 * L_0 = (U3CU3Ec__DisplayClass4_0_t8336A18BEB5666AF440FA677DBF16ADFF5BCC350 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t8336A18BEB5666AF440FA677DBF16ADFF5BCC350_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_mA59F545F803A818A0E783ED8551272F30CC1D04D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t8336A18BEB5666AF440FA677DBF16ADFF5BCC350 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass4_0_t8336A18BEB5666AF440FA677DBF16ADFF5BCC350 * L_2 = V_0;
		String_t* L_3 = ___placementId0;
		NullCheck(L_2);
		L_2->set_placementId_1(L_3);
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowStart(placementId); });
		RuntimeObject* L_4 = __this->get_m_LifecycleManager_1();
		U3CU3Ec__DisplayClass4_0_t8336A18BEB5666AF440FA677DBF16ADFF5BCC350 * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3COnUnityAdsShowStartU3Eb__0_m12980CA7B968A2291756C876715657A69207F9AE_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var, L_4, L_6);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsShowListenerMainDispatch_OnUnityAdsShowClick_m1BC3FBF346B2DEBAAA6380B1ECEBA30C7B1063CF (UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3COnUnityAdsShowClickU3Eb__0_m33BF88ACFC04D921D2C3DAE0BD3C5BF50E5C7AA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t86A277E25E487EF72252C654D23AE0BABC59D1F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t86A277E25E487EF72252C654D23AE0BABC59D1F8 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t86A277E25E487EF72252C654D23AE0BABC59D1F8 * L_0 = (U3CU3Ec__DisplayClass5_0_t86A277E25E487EF72252C654D23AE0BABC59D1F8 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t86A277E25E487EF72252C654D23AE0BABC59D1F8_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_m9C0ED7AF4A57F527CCC9B72F5C4CFDDDE908CE25(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t86A277E25E487EF72252C654D23AE0BABC59D1F8 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass5_0_t86A277E25E487EF72252C654D23AE0BABC59D1F8 * L_2 = V_0;
		String_t* L_3 = ___placementId0;
		NullCheck(L_2);
		L_2->set_placementId_1(L_3);
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowClick(placementId); });
		RuntimeObject* L_4 = __this->get_m_LifecycleManager_1();
		U3CU3Ec__DisplayClass5_0_t86A277E25E487EF72252C654D23AE0BABC59D1F8 * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3COnUnityAdsShowClickU3Eb__0_m33BF88ACFC04D921D2C3DAE0BD3C5BF50E5C7AA2_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var, L_4, L_6);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsShowListenerMainDispatch_OnUnityAdsShowComplete_m3BE59C4388133394FD894C82B2A7C5E1971BE4F5 (UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * __this, String_t* ___placementId0, int32_t ___showCompletionState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3COnUnityAdsShowCompleteU3Eb__0_mB981FBF0E2A450C9820222CB1D4DE50F2016A6C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_tEF1B0EA625A51111CE26BD8256642CD24A75E64F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_tEF1B0EA625A51111CE26BD8256642CD24A75E64F * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_tEF1B0EA625A51111CE26BD8256642CD24A75E64F * L_0 = (U3CU3Ec__DisplayClass6_0_tEF1B0EA625A51111CE26BD8256642CD24A75E64F *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_tEF1B0EA625A51111CE26BD8256642CD24A75E64F_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass6_0__ctor_mD6C61D8A81BDE48185E76216A2A66CBD3D64C85B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_tEF1B0EA625A51111CE26BD8256642CD24A75E64F * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass6_0_tEF1B0EA625A51111CE26BD8256642CD24A75E64F * L_2 = V_0;
		String_t* L_3 = ___placementId0;
		NullCheck(L_2);
		L_2->set_placementId_1(L_3);
		U3CU3Ec__DisplayClass6_0_tEF1B0EA625A51111CE26BD8256642CD24A75E64F * L_4 = V_0;
		int32_t L_5 = ___showCompletionState1;
		NullCheck(L_4);
		L_4->set_showCompletionState_2(L_5);
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowComplete(placementId, showCompletionState); });
		RuntimeObject* L_6 = __this->get_m_LifecycleManager_1();
		U3CU3Ec__DisplayClass6_0_tEF1B0EA625A51111CE26BD8256642CD24A75E64F * L_7 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass6_0_U3COnUnityAdsShowCompleteU3Eb__0_mB981FBF0E2A450C9820222CB1D4DE50F2016A6C9_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t7EAE300415E63D9741DEBEB85269FC0DBAD3BF69_il2cpp_TypeInfo_var, L_6, L_8);
		// }
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
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager__ctor_mD5B7C6A270E63A5CD2454E3A19F723888C154382 (UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F * __this, const RuntimeMethod* method)
{
	{
		// public UnityLifecycleManager() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Initialize();
		UnityLifecycleManager_Initialize_mE8EB947E5AD6775988DA2020577DEE236CDF1E5C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Initialize_mE8EB947E5AD6775988DA2020577DEE236CDF1E5C (UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisApplicationQuit_t657F2DAE714A71F21A98C0C0E84E52B25FA7E545_mDAE6D5EDBB1095429DCD8DA9D908DCE432B18A25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C_mAC324675A097D376C6713A9B429DC4226C5D3687_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C_m91083AE9CC6A962A5C4F95CF2273E4DDD0F4D0AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// var existingCoroutineExecutorGameObject = GameObject.Find(gameObjectName);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (existingCoroutineExecutorGameObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0060;
		}
	}
	{
		// m_GameObject = existingCoroutineExecutorGameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		__this->set_m_GameObject_0(L_3);
		// m_CoroutineExecutor = m_GameObject.GetComponent<CoroutineExecutor>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_m_GameObject_0();
		NullCheck(L_4);
		CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * L_5;
		L_5 = GameObject_GetComponent_TisCoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C_m91083AE9CC6A962A5C4F95CF2273E4DDD0F4D0AB(L_4, /*hidden argument*/GameObject_GetComponent_TisCoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C_m91083AE9CC6A962A5C4F95CF2273E4DDD0F4D0AB_RuntimeMethod_var);
		__this->set_m_CoroutineExecutor_1(L_5);
		// if (m_CoroutineExecutor != null)
		CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * L_6 = __this->get_m_CoroutineExecutor_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// m_CoroutineExecutor.referenceCount++;
		CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * L_8 = __this->get_m_CoroutineExecutor_1();
		CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_referenceCount_4();
		NullCheck(L_9);
		L_9->set_referenceCount_4(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		// return;
		return;
	}

IL_004e:
	{
		// GameObject.DestroyImmediate(m_GameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_m_GameObject_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_11, /*hidden argument*/NULL);
		// m_GameObject = null;
		__this->set_m_GameObject_0((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
	}

IL_0060:
	{
		// m_GameObject = new GameObject(gameObjectName) { hideFlags = HideFlags.HideInHierarchy | HideFlags.HideInInspector};
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_12, _stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12;
		NullCheck(L_13);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_13, 3, /*hidden argument*/NULL);
		__this->set_m_GameObject_0(L_13);
		// m_CoroutineExecutor = m_GameObject.AddComponent<CoroutineExecutor>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_m_GameObject_0();
		NullCheck(L_14);
		CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * L_15;
		L_15 = GameObject_AddComponent_TisCoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C_mAC324675A097D376C6713A9B429DC4226C5D3687(L_14, /*hidden argument*/GameObject_AddComponent_TisCoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C_mAC324675A097D376C6713A9B429DC4226C5D3687_RuntimeMethod_var);
		__this->set_m_CoroutineExecutor_1(L_15);
		// m_ApplicationQuit = m_GameObject.AddComponent<ApplicationQuit>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_m_GameObject_0();
		NullCheck(L_16);
		ApplicationQuit_t657F2DAE714A71F21A98C0C0E84E52B25FA7E545 * L_17;
		L_17 = GameObject_AddComponent_TisApplicationQuit_t657F2DAE714A71F21A98C0C0E84E52B25FA7E545_mDAE6D5EDBB1095429DCD8DA9D908DCE432B18A25(L_16, /*hidden argument*/GameObject_AddComponent_TisApplicationQuit_t657F2DAE714A71F21A98C0C0E84E52B25FA7E545_mDAE6D5EDBB1095429DCD8DA9D908DCE432B18A25_RuntimeMethod_var);
		__this->set_m_ApplicationQuit_2(L_17);
		// m_CoroutineExecutor.referenceCount++;
		CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * L_18 = __this->get_m_CoroutineExecutor_1();
		CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * L_19 = L_18;
		NullCheck(L_19);
		int32_t L_20 = L_19->get_referenceCount_4();
		NullCheck(L_19);
		L_19->set_referenceCount_4(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
		// GameObject.DontDestroyOnLoad(m_GameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_m_GameObject_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Post(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Post_m222529873F772C351E04E0CC62CAC440D67293E7 (UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * G_B5_0 = NULL;
	CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * G_B4_0 = NULL;
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * G_B7_0 = NULL;
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * G_B6_0 = NULL;
	{
		// if (!m_CoroutineExecutor) {
		CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * L_0 = __this->get_m_CoroutineExecutor_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Initialize();
		UnityLifecycleManager_Initialize_mE8EB947E5AD6775988DA2020577DEE236CDF1E5C(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// lock (m_CoroutineExecutor.queue)
		CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * L_2 = __this->get_m_CoroutineExecutor_1();
		NullCheck(L_2);
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_3 = L_2->get_queue_5();
		V_0 = L_3;
		V_1 = (bool)0;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_4 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_4, (bool*)(&V_1), /*hidden argument*/NULL);
			// m_CoroutineExecutor?.queue?.Enqueue(action);
			CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * L_5 = __this->get_m_CoroutineExecutor_1();
			CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * L_6 = L_5;
			G_B4_0 = L_6;
			if (L_6)
			{
				G_B5_0 = L_6;
				goto IL_0035;
			}
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0048);
		}

IL_0035:
		{
			NullCheck(G_B5_0);
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_7 = G_B5_0->get_queue_5();
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_8 = L_7;
			G_B6_0 = L_8;
			if (L_8)
			{
				G_B7_0 = L_8;
				goto IL_0040;
			}
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0048);
		}

IL_0040:
		{
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = ___action0;
			NullCheck(G_B7_0);
			Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09(G_B7_0, L_9, /*hidden argument*/Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09_RuntimeMethod_var);
			// }
			IL2CPP_LEAVE(0x52, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		{
			bool L_10 = V_1;
			if (!L_10)
			{
				goto IL_0051;
			}
		}

IL_004b:
		{
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_11 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		}

IL_0051:
		{
			IL2CPP_END_FINALLY(72)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Dispose_m8D2B96380DC86895262D8702098E6BBDE3C225E1 (UnityLifecycleManager_t714FFB563A7B7A6379EAEBD3CCD82B2B8672A46F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_Disposed)
		bool L_0 = __this->get_m_Disposed_3();
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		// m_Disposed = true;
		__this->set_m_Disposed_3((bool)1);
		// m_CoroutineExecutor.referenceCount--;
		CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * L_1 = __this->get_m_CoroutineExecutor_1();
		CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_referenceCount_4();
		NullCheck(L_2);
		L_2->set_referenceCount_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)));
		// if (m_CoroutineExecutor.referenceCount == 0) {
		CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C * L_4 = __this->get_m_CoroutineExecutor_1();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_referenceCount_4();
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		// Object.DestroyImmediate(m_GameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_m_GameObject_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_6, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// m_GameObject = null;
		__this->set_m_GameObject_0((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// m_CoroutineExecutor = null;
		__this->set_m_CoroutineExecutor_1((CoroutineExecutor_t28807C5CA571FE18BF4345E87B4B6AD61CAF213C *)NULL);
		// m_ApplicationQuit = null;
		__this->set_m_ApplicationQuit_2((ApplicationQuit_t657F2DAE714A71F21A98C0C0E84E52B25FA7E545 *)NULL);
	}

IL_004f:
	{
		// }
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
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::SetupBanner(UnityEngine.Advertisements.IBanner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner_SetupBanner_m2234CDBE54A7769F14EB9024731FE1512BCC056A (UnsupportedBanner_t1DA7D47F668F1BB7022E73E73FD20E9AF6430B8A * __this, RuntimeObject* ___banner0, const RuntimeMethod* method)
{
	{
		// public void SetupBanner(IBanner banner) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::Load(System.String,UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner_Load_m11652FB461E9D247A8B20828F779B43700528B1B (UnsupportedBanner_t1DA7D47F668F1BB7022E73E73FD20E9AF6430B8A * __this, String_t* ___placementId0, BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * ___loadOptions1, const RuntimeMethod* method)
{
	{
		// public void Load(string placementId, BannerLoadOptions loadOptions) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::Show(System.String,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner_Show_m98FFC0502844D81F49B1F045C68CC626FD59BCB7 (UnsupportedBanner_t1DA7D47F668F1BB7022E73E73FD20E9AF6430B8A * __this, String_t* ___placementId0, BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * ___showOptions1, const RuntimeMethod* method)
{
	{
		// public void Show(string placementId, BannerOptions showOptions) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::Hide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner_Hide_m69EBEAA6DEFC1C8E6755257CB36FCFD535CE95B1 (UnsupportedBanner_t1DA7D47F668F1BB7022E73E73FD20E9AF6430B8A * __this, bool ___destroy0, const RuntimeMethod* method)
{
	{
		// public void Hide(bool destroy = false) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::SetPosition(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner_SetPosition_m2217B9F6537179319D0BD230E67BC7E75DEBE083 (UnsupportedBanner_t1DA7D47F668F1BB7022E73E73FD20E9AF6430B8A * __this, int32_t ___position0, const RuntimeMethod* method)
{
	{
		// public void SetPosition(BannerPosition position) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner__ctor_m72A13F1DD5C9E3254B372EFA3AB4EE10F939A0F5 (UnsupportedBanner_t1DA7D47F668F1BB7022E73E73FD20E9AF6430B8A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::SetupPlatform(UnityEngine.Advertisements.Platform.IPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_SetupPlatform_m0620A96F03BFD0D8AEE4AEB5806F10A27C703C41 (UnsupportedPlatform_tD53C59393F9D738905A86DCBC05B11379818156B * __this, RuntimeObject* ___platform0, const RuntimeMethod* method)
{
	{
		// public void SetupPlatform(IPlatform platform) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_Initialize_m10CFF5FC46626F69A815D0163760ED743E4ED0D3 (UnsupportedPlatform_tD53C59393F9D738905A86DCBC05B11379818156B * __this, String_t* ___gameId0, bool ___testMode1, RuntimeObject* ___initializationListener2, const RuntimeMethod* method)
{
	{
		// public void Initialize(string gameId, bool testMode, IUnityAdsInitializationListener initializationListener) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_Load_mBFA5B1FCE4258F227A4FAA8E06F1C78354C65C14 (UnsupportedPlatform_tD53C59393F9D738905A86DCBC05B11379818156B * __this, String_t* ___placementId0, RuntimeObject* ___loadListener1, const RuntimeMethod* method)
{
	{
		// public void Load(string placementId, IUnityAdsLoadListener loadListener) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_Show_mFD97758154A6A7D130FA8C114F6D7D2D136C2CB1 (UnsupportedPlatform_tD53C59393F9D738905A86DCBC05B11379818156B * __this, String_t* ___placementId0, RuntimeObject* ___showListener1, const RuntimeMethod* method)
{
	{
		// public void Show(string placementId, IUnityAdsShowListener showListener) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_SetMetaData_mBAE96E1B1505A2F43A39D206B11EA2EB8D5637E8 (UnsupportedPlatform_tD53C59393F9D738905A86DCBC05B11379818156B * __this, MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * ___metaData0, const RuntimeMethod* method)
{
	{
		// public void SetMetaData(MetaData metaData) {}
		return;
	}
}
// System.String UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsupportedPlatform_GetVersion_mAEA1B3560CEC8B31472D00364D969CCACD7CB106 (UnsupportedPlatform_tD53C59393F9D738905A86DCBC05B11379818156B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral998C6D819F4FEB5C09C82BCC9B537AD6F2280964);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "UnsupportedPlatformVersion";
		return _stringLiteral998C6D819F4FEB5C09C82BCC9B537AD6F2280964;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsupportedPlatform_IsInitialized_mC7BAAE3F02E96D41BC2FE5DB4F984DC394C04D25 (UnsupportedPlatform_tD53C59393F9D738905A86DCBC05B11379818156B * __this, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform__ctor_mF38876EA54B85DD18B4AECD76280324F9211F7AE (UnsupportedPlatform_tD53C59393F9D738905A86DCBC05B11379818156B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Load(System.String,UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Load_mB5ED30D18D4BED4700AED083A2C45EB20E796FDB (String_t* ___placementId0, BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Platform.Banner.Load(placementId, options);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var))->get_s_Platform_0();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.IPlatform::get_Banner() */, IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var, L_0);
		String_t* L_2 = ___placementId0;
		BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * L_3 = ___options1;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * >::Invoke(3 /* System.Void UnityEngine.Advertisements.IBanner::Load(System.String,UnityEngine.Advertisements.BannerLoadOptions) */, IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Show(System.String,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Show_mA5810670FDDBAB979EBDCB8E9007404EC454BB7A (String_t* ___placementId0, BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral029DDB27A67D116CA80AAFAE9000FC797056C197);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	{
		// if (string.IsNullOrEmpty((placementId)))
		String_t* L_0 = ___placementId0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// Debug.LogWarning("placementId is empty");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral029DDB27A67D116CA80AAFAE9000FC797056C197, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// s_Platform.Banner.Show(string.IsNullOrEmpty(placementId) ? null : placementId, options);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var))->get_s_Platform_0();
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.IPlatform::get_Banner() */, IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var, L_2);
		String_t* L_4 = ___placementId0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		if (L_5)
		{
			G_B4_0 = L_3;
			goto IL_0027;
		}
	}
	{
		String_t* L_6 = ___placementId0;
		G_B5_0 = L_6;
		G_B5_1 = G_B3_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B4_0;
	}

IL_0028:
	{
		BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * L_7 = ___options1;
		NullCheck(G_B5_1);
		InterfaceActionInvoker2< String_t*, BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * >::Invoke(4 /* System.Void UnityEngine.Advertisements.IBanner::Show(System.String,UnityEngine.Advertisements.BannerOptions) */, IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var, G_B5_1, G_B5_0, L_7);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Hide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Hide_mAD6DF0ED1B0AF8758D4E912879CC602439BA7BE6 (bool ___destroy0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Platform.Banner.Hide(destroy);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var))->get_s_Platform_0();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.IPlatform::get_Banner() */, IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var, L_0);
		bool L_2 = ___destroy0;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Advertisements.IBanner::Hide(System.Boolean) */, IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement/Banner::SetPosition(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_SetPosition_mC98032618A8242E974780AD37A7977D0F1B6ED28 (int32_t ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Platform.Banner.SetPosition(position);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tFBD80CED98F84C5E92D603BC893B455321DDF57C_il2cpp_TypeInfo_var))->get_s_Platform_0();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.IPlatform::get_Banner() */, IPlatform_t7725EF0D4067B88F1DB2F5E2207D122E7BA8AEEB_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = ___position0;
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Advertisements.IBanner::SetPosition(UnityEngine.Advertisements.BannerPosition) */, IBanner_t2C2CF7C4C16ABB0E9011EBB6E0516DCB133A460C_il2cpp_TypeInfo_var, L_1, L_2);
		// }
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
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m72D89BD8BEFBB501CC028D6757E881CD503465AE (U3CU3Ec__DisplayClass11_0_tB47B13384B9A3F1944891B8C9FA9E3BE01202575 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass11_0::<Load>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CLoadU3Eb__0_mD3834E44B9DF03C3BB7A3928CA4C5EE5FE2DF28C (U3CU3Ec__DisplayClass11_0_tB47B13384B9A3F1944891B8C9FA9E3BE01202575 * __this, const RuntimeMethod* method)
{
	BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * G_B2_0 = NULL;
	BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * G_B1_0 = NULL;
	{
		// loadOptions?.loadCallback();
		BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * L_0 = __this->get_loadOptions_0();
		BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4 * L_2;
		L_2 = BannerLoadOptions_get_loadCallback_m1E53B8D279969186E9C26F708D740CE341021E1D_inline(G_B2_0, /*hidden argument*/NULL);
		NullCheck(L_2);
		LoadCallback_Invoke_mDABBB7DD68958B1E5291A13DF1989CCAAF379763(L_2, /*hidden argument*/NULL);
		// });
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
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mB18FD3844677EEF1B43EDC618D02E6FAAB99DD58 (U3CU3Ec__DisplayClass12_0_t1259023F657AC381A5246AAAE924EA37D321C1AF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0::<Show>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__0_mC3E0CFA7F86A0124DC47E7E97CCF5B45C8EBD391 (U3CU3Ec__DisplayClass12_0_t1259023F657AC381A5246AAAE924EA37D321C1AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D4E110BD86EB84CCC35696802475A8556299334);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E6D79FB7A672657560825D4EBF2050737CCAF6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8776C6B9757743C85B42D4041703FD2BFBA9F722);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	{
		// var parent = m_BannerBundle.bannerView.Call<AndroidJavaObject>("getParent");
		AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * L_1 = L_0->get_m_BannerBundle_7();
		NullCheck(L_1);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
		L_2 = BannerBundle_get_bannerView_m20FD8F37C6B4CBCAC0A242DDCCCCC0CFC410A6DB_inline(L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
		L_3 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4;
		L_4 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_2, _stringLiteral1D4E110BD86EB84CCC35696802475A8556299334, L_3, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// if (parent == null)
		if (L_4)
		{
			goto IL_0073;
		}
	}
	{
		// var layoutParams = m_BannerBundle.bannerView.Call<AndroidJavaObject>("getLayoutParams");
		AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * L_5 = __this->get_U3CU3E4__this_0();
		NullCheck(L_5);
		BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * L_6 = L_5->get_m_BannerBundle_7();
		NullCheck(L_6);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_7;
		L_7 = BannerBundle_get_bannerView_m20FD8F37C6B4CBCAC0A242DDCCCCC0CFC410A6DB_inline(L_6, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8;
		L_8 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_7);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_9;
		L_9 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_7, _stringLiteral8776C6B9757743C85B42D4041703FD2BFBA9F722, L_8, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_0 = L_9;
		// m_CurrentActivity.Call("addContentView", m_BannerBundle.bannerView, layoutParams);
		AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * L_10 = __this->get_U3CU3E4__this_0();
		NullCheck(L_10);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_11 = L_10->get_m_CurrentActivity_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_12;
		AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * L_14 = __this->get_U3CU3E4__this_0();
		NullCheck(L_14);
		BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * L_15 = L_14->get_m_BannerBundle_7();
		NullCheck(L_15);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_16;
		L_16 = BannerBundle_get_bannerView_m20FD8F37C6B4CBCAC0A242DDCCCCC0CFC410A6DB_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_13;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_18 = V_0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_18);
		NullCheck(L_11);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_11, _stringLiteral3E6D79FB7A672657560825D4EBF2050737CCAF6E, L_17, /*hidden argument*/NULL);
	}

IL_0073:
	{
		// }));
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0::<Show>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__1_m01600ECD46838323F617DAD679607E63C58BAE0B (U3CU3Ec__DisplayClass12_0_t1259023F657AC381A5246AAAE924EA37D321C1AF * __this, const RuntimeMethod* method)
{
	BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * G_B2_0 = NULL;
	BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * G_B1_0 = NULL;
	{
		// showOptions?.showCallback();
		BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * L_0 = __this->get_showOptions_1();
		BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * L_2;
		L_2 = BannerOptions_get_showCallback_m7F006DF1E195FA0DB4018B578A1501C16A3C8ABD_inline(G_B2_0, /*hidden argument*/NULL);
		NullCheck(L_2);
		BannerCallback_Invoke_m7EF16702D77941C484593A5269ED82D50C2BF211(L_2, /*hidden argument*/NULL);
		// });
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
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m4EF050CFDE00E3C2DEE7FECD70906AFA8C8089A9 (U3CU3Ec__DisplayClass20_0_tD1845FF1E152A3B416CD8CBB099FDAA323AA48A0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0::<onUnityBannerError>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0_U3ConUnityBannerErrorU3Eb__0_m69839D6F5C290AFDFDEA13DA5D9D116B8527B97F (U3CU3Ec__DisplayClass20_0_tD1845FF1E152A3B416CD8CBB099FDAA323AA48A0 * __this, const RuntimeMethod* method)
{
	BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * G_B2_0 = NULL;
	BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * G_B1_0 = NULL;
	{
		// m_BannerLoadOptions?.errorCallback(message);
		AndroidBanner_t92A6787090A8D3CA215D538E1504C8753D1D33A5 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * L_1 = L_0->get_m_BannerLoadOptions_8();
		BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA * L_3;
		L_3 = BannerLoadOptions_get_errorCallback_m742E504A13CEDCADA2E1F55803D7792173785141_inline(G_B2_0, /*hidden argument*/NULL);
		String_t* L_4 = __this->get_message_1();
		NullCheck(L_3);
		ErrorCallback_Invoke_m7230C27B3662E110A0C85BDE8135C853A91EE99C(L_3, L_4, /*hidden argument*/NULL);
		// });
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA (ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback__ctor_m46F0F1A6A93AFDD429347E2AC56E44348FA3663F (ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback_Invoke_m7230C27B3662E110A0C85BDE8135C853A91EE99C (ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ErrorCallback_BeginInvoke_mF6A08CD521FBB48C7543433E28C2DEB24CE5A156 (ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback_EndInvoke_m9E538A6D97F05B3C26FE0ABB8EDAF2400E418093 (ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4 (LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCallback__ctor_m5F47D605ACB6A6A006C1EA036BB91A0BBA0FC91F (LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCallback_Invoke_mDABBB7DD68958B1E5291A13DF1989CCAAF379763 (LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadCallback_BeginInvoke_mF7BA44886C3D5FF2EF389BEE03D23AB3E13B73C5 (LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCallback_EndInvoke_m4F7E447AA5CCA88C8AFA632F591417C12E3451F1 (LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 (BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback__ctor_m51CB28F5ECD79CD7EFFB1398459F682669FC0F49 (BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback_Invoke_m7EF16702D77941C484593A5269ED82D50C2BF211 (BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.BannerOptions/BannerCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BannerCallback_BeginInvoke_mAB60AB8B28672722E8893267C1434F0D5573BC68 (BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback_EndInvoke_m0AA76E54459A080E26DCB2BE1DEF69DE955CF2C4 (BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mD6DE45E52853A14EF448AD6AC412EF352B43110B (U3CU3Ec__DisplayClass4_0_tCAF2299D2F9FD299B0CBE1A09CB39A25BE979704 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsInitializationListenerMainDispatch/<>c__DisplayClass4_0::<OnInitializationFailed>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnInitializationFailedU3Eb__0_mD04100C934BA18541523CD9B9AD50249CC4635C0 (U3CU3Ec__DisplayClass4_0_tCAF2299D2F9FD299B0CBE1A09CB39A25BE979704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsInitializationListener_tB5A65E66AB4768647B0CD180A7F8E7A220B6D813_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_LifecycleManager.Post(() => { m_InitializationListener?.OnInitializationFailed(error, message); });
		UnityAdsInitializationListenerMainDispatch_t76A004DF9FF6E896C44173A1E98331315B5664D5 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_m_InitializationListener_0();
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		int32_t L_3 = __this->get_error_1();
		String_t* L_4 = __this->get_message_2();
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsInitializationListener::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String) */, IUnityAdsInitializationListener_tB5A65E66AB4768647B0CD180A7F8E7A220B6D813_il2cpp_TypeInfo_var, G_B2_0, L_3, L_4);
		// m_LifecycleManager.Post(() => { m_InitializationListener?.OnInitializationFailed(error, message); });
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
// System.Void UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mE56CA0753C5B787DF671D744AE2911A1C591064A (U3CU3Ec__DisplayClass3_0_tE1AE55BCCE6224A508A6F88F3123EEA082367F4C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass3_0::<OnUnityAdsAdLoaded>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnUnityAdsAdLoadedU3Eb__0_m780C11C0852C5B481A9F0A06911F43444B8163F8 (U3CU3Ec__DisplayClass3_0_tE1AE55BCCE6224A508A6F88F3123EEA082367F4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsLoadListener_t0F5E5882B3CFA2DF54E323857F9A0DE8D7EA7A69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_LifecycleManager.Post(() => { m_LoadListener?.OnUnityAdsAdLoaded(placementId); });
		UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_m_LoadListener_0();
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = __this->get_placementId_1();
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsLoadListener::OnUnityAdsAdLoaded(System.String) */, IUnityAdsLoadListener_t0F5E5882B3CFA2DF54E323857F9A0DE8D7EA7A69_il2cpp_TypeInfo_var, G_B2_0, L_3);
		// m_LifecycleManager.Post(() => { m_LoadListener?.OnUnityAdsAdLoaded(placementId); });
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
// System.Void UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m450192F9B77A2ABBD1381BDA9458C355593CF9CC (U3CU3Ec__DisplayClass4_0_t491D260B7FE1FACC2CB6EBA57BEA49CADE475943 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsLoadListenerMainDispatch/<>c__DisplayClass4_0::<OnUnityAdsFailedToLoad>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnUnityAdsFailedToLoadU3Eb__0_mE1EED92A8BB50BA4D477617035805CD7BEEAE6D6 (U3CU3Ec__DisplayClass4_0_t491D260B7FE1FACC2CB6EBA57BEA49CADE475943 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsLoadListener_t0F5E5882B3CFA2DF54E323857F9A0DE8D7EA7A69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_LifecycleManager.Post(() => { m_LoadListener?.OnUnityAdsFailedToLoad(placementId, error, message); });
		UnityAdsLoadListenerMainDispatch_t7A2AF14A9BB612CD6D88981F4F5B5A39341949F1 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_m_LoadListener_0();
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = __this->get_placementId_1();
		int32_t L_4 = __this->get_error_2();
		String_t* L_5 = __this->get_message_3();
		NullCheck(G_B2_0);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsLoadListener::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String) */, IUnityAdsLoadListener_t0F5E5882B3CFA2DF54E323857F9A0DE8D7EA7A69_il2cpp_TypeInfo_var, G_B2_0, L_3, L_4, L_5);
		// m_LifecycleManager.Post(() => { m_LoadListener?.OnUnityAdsFailedToLoad(placementId, error, message); });
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
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m870E765CB2BBD78D4CB39A1180D9E963AFAB278E (U3CU3Ec__DisplayClass3_0_tD88AA8605E676865E294999340DEC825F600576B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass3_0::<OnUnityAdsShowFailure>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnUnityAdsShowFailureU3Eb__0_mCD60D9106DF44B89222234DFC2ED5908BB9E96D8 (U3CU3Ec__DisplayClass3_0_tD88AA8605E676865E294999340DEC825F600576B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t7732F4D848E7DE736C3DC87AEA1E4227F12149D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowFailure(placementId, error, message); });
		UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_m_ShowListener_0();
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = __this->get_placementId_1();
		int32_t L_4 = __this->get_error_2();
		String_t* L_5 = __this->get_message_3();
		NullCheck(G_B2_0);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String) */, IUnityAdsShowListener_t7732F4D848E7DE736C3DC87AEA1E4227F12149D1_il2cpp_TypeInfo_var, G_B2_0, L_3, L_4, L_5);
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowFailure(placementId, error, message); });
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
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mA59F545F803A818A0E783ED8551272F30CC1D04D (U3CU3Ec__DisplayClass4_0_t8336A18BEB5666AF440FA677DBF16ADFF5BCC350 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass4_0::<OnUnityAdsShowStart>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnUnityAdsShowStartU3Eb__0_m12980CA7B968A2291756C876715657A69207F9AE (U3CU3Ec__DisplayClass4_0_t8336A18BEB5666AF440FA677DBF16ADFF5BCC350 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t7732F4D848E7DE736C3DC87AEA1E4227F12149D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowStart(placementId); });
		UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_m_ShowListener_0();
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = __this->get_placementId_1();
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowStart(System.String) */, IUnityAdsShowListener_t7732F4D848E7DE736C3DC87AEA1E4227F12149D1_il2cpp_TypeInfo_var, G_B2_0, L_3);
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowStart(placementId); });
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
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m9C0ED7AF4A57F527CCC9B72F5C4CFDDDE908CE25 (U3CU3Ec__DisplayClass5_0_t86A277E25E487EF72252C654D23AE0BABC59D1F8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass5_0::<OnUnityAdsShowClick>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnUnityAdsShowClickU3Eb__0_m33BF88ACFC04D921D2C3DAE0BD3C5BF50E5C7AA2 (U3CU3Ec__DisplayClass5_0_t86A277E25E487EF72252C654D23AE0BABC59D1F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t7732F4D848E7DE736C3DC87AEA1E4227F12149D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowClick(placementId); });
		UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_m_ShowListener_0();
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = __this->get_placementId_1();
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowClick(System.String) */, IUnityAdsShowListener_t7732F4D848E7DE736C3DC87AEA1E4227F12149D1_il2cpp_TypeInfo_var, G_B2_0, L_3);
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowClick(placementId); });
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
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mD6C61D8A81BDE48185E76216A2A66CBD3D64C85B (U3CU3Ec__DisplayClass6_0_tEF1B0EA625A51111CE26BD8256642CD24A75E64F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsShowListenerMainDispatch/<>c__DisplayClass6_0::<OnUnityAdsShowComplete>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3COnUnityAdsShowCompleteU3Eb__0_mB981FBF0E2A450C9820222CB1D4DE50F2016A6C9 (U3CU3Ec__DisplayClass6_0_tEF1B0EA625A51111CE26BD8256642CD24A75E64F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t7732F4D848E7DE736C3DC87AEA1E4227F12149D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowComplete(placementId, showCompletionState); });
		UnityAdsShowListenerMainDispatch_t3F5250826A0658F9F7667E0F78A789B93A932965 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_m_ShowListener_0();
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = __this->get_placementId_1();
		int32_t L_4 = __this->get_showCompletionState_2();
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState) */, IUnityAdsShowListener_t7732F4D848E7DE736C3DC87AEA1E4227F12149D1_il2cpp_TypeInfo_var, G_B2_0, L_3, L_4);
		// m_LifecycleManager.Post(() => { m_ShowListener?.OnUnityAdsShowComplete(placementId, showCompletionState); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BannerBundle_get_bannerPlacementId_mAED7E362ED7353743DBE095CDA321AA1BA9CA509_inline (BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * __this, const RuntimeMethod* method)
{
	{
		// public string bannerPlacementId { get; }
		String_t* L_0 = __this->get_U3CbannerPlacementIdU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * BannerOptions_get_hideCallback_m4917D20A8FC89C11E8F0DA848352136A643EFD6E_inline (BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * __this, const RuntimeMethod* method)
{
	{
		// public BannerCallback hideCallback { get; set; }
		BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * L_0 = __this->get_U3ChideCallbackU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * BannerBundle_get_bannerView_m20FD8F37C6B4CBCAC0A242DDCCCCC0CFC410A6DB_inline (BannerBundle_tBEA9952068BBE6F75E6AADF2DE5DF767220CC754 * __this, const RuntimeMethod* method)
{
	{
		// public AndroidJavaObject bannerView { get; }
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_U3CbannerViewU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * BannerOptions_get_showCallback_m7F006DF1E195FA0DB4018B578A1501C16A3C8ABD_inline (BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * __this, const RuntimeMethod* method)
{
	{
		// public BannerCallback showCallback { get; set; }
		BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * L_0 = __this->get_U3CshowCallbackU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4 * BannerLoadOptions_get_loadCallback_m1E53B8D279969186E9C26F708D740CE341021E1D_inline (BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * __this, const RuntimeMethod* method)
{
	{
		// public LoadCallback loadCallback { get; set; }
		LoadCallback_t4058705F261CBCF3F040D1EED197490CA8DFE6F4 * L_0 = __this->get_U3CloadCallbackU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * BannerOptions_get_clickCallback_m3FF6E63F23ADB2E8BD2690AFE55AE1A90DF8B3C9_inline (BannerOptions_t4E47FEA3C429A510154A428E4466832C1E48BC6C * __this, const RuntimeMethod* method)
{
	{
		// public BannerCallback clickCallback { get; set; }
		BannerCallback_t3AC9BAECF082DD496BA7DE4925ADEBBE745D0800 * L_0 = __this->get_U3CclickCallbackU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetaData_get_category_m01634B0655A8E8398DBD251759D6CE7F960AEF7C_inline (MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * __this, const RuntimeMethod* method)
{
	{
		// public string category { get; private set; }
		String_t* L_0 = __this->get_U3CcategoryU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MetaData_Values_m9A702FADC03CC4AEA44AE1FF1072142D6CBA2092_inline (MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * __this, const RuntimeMethod* method)
{
	{
		// return m_MetaData;
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaData_set_category_m7C17C04FA71B620E17CBF855817317DA4BB55835_inline (MetaData_tB402C574D04C098BDFA28BB4AFA41485FE7E580A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string category { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CcategoryU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_NativePlatform_m242BB5680767D51993B32B8A1032A51F43B3ECD2_inline (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, const RuntimeMethod* method)
{
	{
		// public INativePlatform NativePlatform { get; }
		RuntimeObject* L_0 = __this->get_U3CNativePlatformU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Platform_get_IsShowing_m9BD156248CBA7EDCC0501F197D289646D8649911_inline (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = __this->get_U3CIsShowingU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ShowOptions_get_gamerSid_m290022B7CE78E6B3568DFD9547EBA953BF15F1AA_inline (ShowOptions_t99ED612696DAD41A1A88FE552D9CE1C94BDCF020 * __this, const RuntimeMethod* method)
{
	{
		// public string gamerSid { get; set; }
		String_t* L_0 = __this->get_U3CgamerSidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Platform_set_IsShowing_mD23ADD665AA1A55BA6EE3BF160979A19E2CE6DEF_inline (Platform_tDEAFBCE9589F99C03BB06E9581CEA262780CF032 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsShowingU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA * BannerLoadOptions_get_errorCallback_m742E504A13CEDCADA2E1F55803D7792173785141_inline (BannerLoadOptions_t076B1E2A55CD4368CB131191542A35A1AE9DDD04 * __this, const RuntimeMethod* method)
{
	{
		// public ErrorCallback errorCallback { get; set; }
		ErrorCallback_t2FF78FAF5ED0CF8EE82E6B7128D7F858948BD7DA * L_0 = __this->get_U3CerrorCallbackU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
