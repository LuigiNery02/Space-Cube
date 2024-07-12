#include "pch-cpp.hpp"

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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>
struct List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF;
// Unity.Notifications.Android.AndroidNotificationIntentData
struct AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521;
// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher
struct AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t224FE8401E710BDB619384B6F52CDEA08A47DCA1;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t70EAF1B027E7CDF184E53D9A69C1FDE492ED90BE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Unity.Notifications.Android.NotificationCallback
struct NotificationCallback_t81DD74C1A774090ECE4A8E2C1F572E307D6E0D31;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.Notifications.Android.AndroidNotificationCenter/<>c
struct U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4;
// Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback
struct NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationCallback_t81DD74C1A774090ECE4A8E2C1F572E307D6E0D31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral003F1A0D4698F0D0994034CB42BE57F01E7071EE;
IL2CPP_EXTERN_C String_t* _stringLiteral057C2C56F74B179155BC7BA52E8E5A8F720085C9;
IL2CPP_EXTERN_C String_t* _stringLiteral0B031EA46C89ACA33496219C86113C5971D96A6F;
IL2CPP_EXTERN_C String_t* _stringLiteral0C338FABC52E44288BFE3902ECFD459E179A00B4;
IL2CPP_EXTERN_C String_t* _stringLiteral1E07AAC0DB599074DF5A532EE047B226AF85B461;
IL2CPP_EXTERN_C String_t* _stringLiteral21F2AC306B45CC6D319AE7C9577C42830701471F;
IL2CPP_EXTERN_C String_t* _stringLiteral2371502F77FC4E06CEA26C3019181A650BF2FE0A;
IL2CPP_EXTERN_C String_t* _stringLiteral28E45B65F67DFEF09A216B89076AB46384ECAEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral2DE10CB9863FBD79A26BDD1E6581EC58F503024E;
IL2CPP_EXTERN_C String_t* _stringLiteral309475E2FD5CCC4B93075E4B2F688139336E3976;
IL2CPP_EXTERN_C String_t* _stringLiteral3507F14C18339414ED66D51C2A54704F4F66BF29;
IL2CPP_EXTERN_C String_t* _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9;
IL2CPP_EXTERN_C String_t* _stringLiteral3B4ABC6800E38922B95A7741A7C31E78837967AB;
IL2CPP_EXTERN_C String_t* _stringLiteral3DFC2D8E2B0854967C8EA0AC932952BDB07081DD;
IL2CPP_EXTERN_C String_t* _stringLiteral417033260ED9866C8F3942C4B186232283F80EBC;
IL2CPP_EXTERN_C String_t* _stringLiteral41F6952B2006C0E82025C36C339675E51FB14C5E;
IL2CPP_EXTERN_C String_t* _stringLiteral4274AF175407D69253B9923A96C5257AA75AD49A;
IL2CPP_EXTERN_C String_t* _stringLiteral49E8F9D21CA9B5185CDC5F6ED185D72BA8DCC0CB;
IL2CPP_EXTERN_C String_t* _stringLiteral4A885A89832F4E62C8E259AA47DF0907BB0C1ED3;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4F7D86CDAA0C8A81C945C1F706675D9922754FF1;
IL2CPP_EXTERN_C String_t* _stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A;
IL2CPP_EXTERN_C String_t* _stringLiteral5049D16B7CF18631FE8A78C554EE95423ABE2103;
IL2CPP_EXTERN_C String_t* _stringLiteral578464DF4BFC276A4118AE25678706EA9C75B4BF;
IL2CPP_EXTERN_C String_t* _stringLiteral5A63AE410D81A77766BF6FE65A404882F7D7E6D2;
IL2CPP_EXTERN_C String_t* _stringLiteral65270D282A6EB620B640BB3DE24D30E7DC225F75;
IL2CPP_EXTERN_C String_t* _stringLiteral6C129EA550A36247CE9509C041D9D2BF744EA5A6;
IL2CPP_EXTERN_C String_t* _stringLiteral6DF31DD4FD46D4C3A00C604A8AEE6D8534322805;
IL2CPP_EXTERN_C String_t* _stringLiteral732B68B6E4A4DB829E0CB811204F86B0C8BBFE0A;
IL2CPP_EXTERN_C String_t* _stringLiteral759248FA866422EA1C6CEAB03289DC132A7B89A6;
IL2CPP_EXTERN_C String_t* _stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A;
IL2CPP_EXTERN_C String_t* _stringLiteral773844F4EAB0720F10FB37E0065041ACDB243E16;
IL2CPP_EXTERN_C String_t* _stringLiteral77739BBFD23D47C94ED718EBC308956A5D4AB21D;
IL2CPP_EXTERN_C String_t* _stringLiteral78A2E5F909763C2798506373D9793DA98ACAFD83;
IL2CPP_EXTERN_C String_t* _stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741;
IL2CPP_EXTERN_C String_t* _stringLiteral7C800E39CF656105FB08CCBDF7383FACFDB73DF7;
IL2CPP_EXTERN_C String_t* _stringLiteral812C47466403E44034C69DFF8C0737F3F368B65A;
IL2CPP_EXTERN_C String_t* _stringLiteral8287EADB7084004EF45B96CC3CE0643C79A55CD4;
IL2CPP_EXTERN_C String_t* _stringLiteral8F9D1AC8003CE64AD22B0DA00079089562028B6C;
IL2CPP_EXTERN_C String_t* _stringLiteral8FC7E3B9590667C5068E9E851357567AEEA3578B;
IL2CPP_EXTERN_C String_t* _stringLiteralA39D8B3C25D62F9AC74346490A808A083149BC3C;
IL2CPP_EXTERN_C String_t* _stringLiteralA59539643944A464E30D7011A21734B72919F5BF;
IL2CPP_EXTERN_C String_t* _stringLiteralA69581B713E8DF5FDC303A301CB6B19917AD174B;
IL2CPP_EXTERN_C String_t* _stringLiteralA79A01886CDD255DBAF604C7A51EF7370973E814;
IL2CPP_EXTERN_C String_t* _stringLiteralB57FF4DA3CECFFF19270CA8823E13D52D4D8BC0A;
IL2CPP_EXTERN_C String_t* _stringLiteralB95030A25CC7A13566AE8FA422E467D13AB6FFDB;
IL2CPP_EXTERN_C String_t* _stringLiteralB9C27A6050F45A10AC1FD4E65204F2DFFECAFA72;
IL2CPP_EXTERN_C String_t* _stringLiteralB9ED63726B3792A912D1DF4A5E4AEFDA0C6D02C9;
IL2CPP_EXTERN_C String_t* _stringLiteralBB51D9582FEA7F91BD3913A156D5F6C60CDF3C99;
IL2CPP_EXTERN_C String_t* _stringLiteralC033F5E36FD3E211DA34178256F8F6BB2359A4AB;
IL2CPP_EXTERN_C String_t* _stringLiteralC9B81E6CB678EF7D657F87AD3E4F30A67E57938C;
IL2CPP_EXTERN_C String_t* _stringLiteralCAA743314C99A7A945A299B6748725F14C02714B;
IL2CPP_EXTERN_C String_t* _stringLiteralCCD7A6F8806A71C95F4E8692E1F9FC209B82C5A2;
IL2CPP_EXTERN_C String_t* _stringLiteralD76D61D6CB247074CC233E90926FDF3F2E3684E5;
IL2CPP_EXTERN_C String_t* _stringLiteralDE9C9A97063C73F56F60488D14A05C3E7A4630EC;
IL2CPP_EXTERN_C String_t* _stringLiteralE6AF69C91C20A2D4C4D5FA56F7600A7BB5D305BF;
IL2CPP_EXTERN_C String_t* _stringLiteralEADCD3C3021F28CA07F50C4363B7FA9428265172;
IL2CPP_EXTERN_C String_t* _stringLiteralED4D3D8AFE804D2C2A2E71BE07B28F1C1FEFA1F8;
IL2CPP_EXTERN_C String_t* _stringLiteralF0531D8CE590C96ADED66DEADF41A647EC9B4879;
IL2CPP_EXTERN_C String_t* _stringLiteralF202BD9C29F9FE8967D2598978C59BC250D49ECC;
IL2CPP_EXTERN_C String_t* _stringLiteralF840720856A0CCF610CAA8A9B7B760DA4E85F748;
IL2CPP_EXTERN_C String_t* _stringLiteralF91A960CB813ACBB09046C8766F780B73B27BC7C;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFCAD6572759BA264A7B9B9106CCB401DB355CAD7;
IL2CPP_EXTERN_C String_t* _stringLiteralFD462CB4D212EBE5A672517EB06D3FBD862F866C;
IL2CPP_EXTERN_C String_t* _stringLiteralFFF2E3CA72364727F71AA5E2A535E3DD8A40037F;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mFBBE4027C3B10CC9A3F370241DFC7A997C567B12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mAA20D556A954E5DB5CE7F883CA865350D567F7F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_mEED01FE01556CEBC892BFF795C919EFB26662D9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidNotificationCenter_RegisterNotificationChannel_mA563D65A93EFC5BCD25F3181C21035E6E62D1B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m22C2979B02507C0C33B02383587FB3D60E9C7D8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB15CB0B4CA5AA42DD4FF2CB445C8AE96ED8FF2B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1579633F9660B899A35B3DE93473AA792BD85A2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_mA80D655632DF9341FD7ABFC8569B4DC2C280D1A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEB451D299E31BF4F80B6DB96776F04C5F7A565C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m74A870D3B22C8AA0A6F45AA4CB0EFBBB8D344581_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m88B8BAD9E34605DD37DB23EF437F9B1FF869DFF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5F9D82170C2774D7F4048F3C0D571BA570C40648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD5AC32CEBB7EF3BCC983D00D93DB93DE0EC70E8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__45_0_m6D11B16862187BF87B3B9D74C42A4048CC07267D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GroupAlertBehaviours_tBC5175985945B0E631AD81184B12A38D4EA43880_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4FD26667E80C828CE56E5E1BC2CE454D255678D1 
{
public:

public:
};


// System.Object


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


// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>
struct List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B, ____items_1)); }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* get__items_1() const { return ____items_1; }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B_StaticFields, ____emptyArray_5)); }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// Unity.Notifications.Android.AndroidNotificationCenter
struct AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C  : public RuntimeObject
{
public:

public:
};

struct AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields
{
public:
	// Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback Unity.Notifications.Android.AndroidNotificationCenter::OnNotificationReceived
	NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * ___OnNotificationReceived_0;
	// UnityEngine.AndroidJavaClass Unity.Notifications.Android.AndroidNotificationCenter::s_NotificationManagerClass
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___s_NotificationManagerClass_1;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::s_NotificationManager
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___s_NotificationManager_2;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::s_CurrentActivity
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___s_CurrentActivity_3;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationCenter::s_Initialized
	bool ___s_Initialized_4;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::Notification_EXTRA_TITLE
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___Notification_EXTRA_TITLE_5;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::Notification_EXTRA_TEXT
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___Notification_EXTRA_TEXT_6;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::Notification_EXTRA_SHOW_CHRONOMETER
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___Notification_EXTRA_SHOW_CHRONOMETER_7;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::Notification_EXTRA_BIG_TEXT
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___Notification_EXTRA_BIG_TEXT_8;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::Notification_EXTRA_SHOW_WHEN
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___Notification_EXTRA_SHOW_WHEN_9;
	// System.Int32 Unity.Notifications.Android.AndroidNotificationCenter::Notification_FLAG_AUTO_CANCEL
	int32_t ___Notification_FLAG_AUTO_CANCEL_10;
	// System.Int32 Unity.Notifications.Android.AndroidNotificationCenter::Notification_FLAG_GROUP_SUMMARY
	int32_t ___Notification_FLAG_GROUP_SUMMARY_11;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::KEY_FIRE_TIME
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___KEY_FIRE_TIME_12;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::KEY_ID
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___KEY_ID_13;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::KEY_INTENT_DATA
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___KEY_INTENT_DATA_14;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::KEY_LARGE_ICON
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___KEY_LARGE_ICON_15;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::KEY_REPEAT_INTERVAL
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___KEY_REPEAT_INTERVAL_16;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::KEY_NOTIFICATION
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___KEY_NOTIFICATION_17;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::KEY_SMALL_ICON
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___KEY_SMALL_ICON_18;

public:
	inline static int32_t get_offset_of_OnNotificationReceived_0() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___OnNotificationReceived_0)); }
	inline NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * get_OnNotificationReceived_0() const { return ___OnNotificationReceived_0; }
	inline NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 ** get_address_of_OnNotificationReceived_0() { return &___OnNotificationReceived_0; }
	inline void set_OnNotificationReceived_0(NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * value)
	{
		___OnNotificationReceived_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnNotificationReceived_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_NotificationManagerClass_1() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___s_NotificationManagerClass_1)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_s_NotificationManagerClass_1() const { return ___s_NotificationManagerClass_1; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_s_NotificationManagerClass_1() { return &___s_NotificationManagerClass_1; }
	inline void set_s_NotificationManagerClass_1(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___s_NotificationManagerClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NotificationManagerClass_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_NotificationManager_2() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___s_NotificationManager_2)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_s_NotificationManager_2() const { return ___s_NotificationManager_2; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_s_NotificationManager_2() { return &___s_NotificationManager_2; }
	inline void set_s_NotificationManager_2(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___s_NotificationManager_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NotificationManager_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_CurrentActivity_3() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___s_CurrentActivity_3)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_s_CurrentActivity_3() const { return ___s_CurrentActivity_3; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_s_CurrentActivity_3() { return &___s_CurrentActivity_3; }
	inline void set_s_CurrentActivity_3(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___s_CurrentActivity_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CurrentActivity_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_Notification_EXTRA_TITLE_5() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___Notification_EXTRA_TITLE_5)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_Notification_EXTRA_TITLE_5() const { return ___Notification_EXTRA_TITLE_5; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_Notification_EXTRA_TITLE_5() { return &___Notification_EXTRA_TITLE_5; }
	inline void set_Notification_EXTRA_TITLE_5(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___Notification_EXTRA_TITLE_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Notification_EXTRA_TITLE_5), (void*)value);
	}

	inline static int32_t get_offset_of_Notification_EXTRA_TEXT_6() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___Notification_EXTRA_TEXT_6)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_Notification_EXTRA_TEXT_6() const { return ___Notification_EXTRA_TEXT_6; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_Notification_EXTRA_TEXT_6() { return &___Notification_EXTRA_TEXT_6; }
	inline void set_Notification_EXTRA_TEXT_6(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___Notification_EXTRA_TEXT_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Notification_EXTRA_TEXT_6), (void*)value);
	}

	inline static int32_t get_offset_of_Notification_EXTRA_SHOW_CHRONOMETER_7() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___Notification_EXTRA_SHOW_CHRONOMETER_7)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_Notification_EXTRA_SHOW_CHRONOMETER_7() const { return ___Notification_EXTRA_SHOW_CHRONOMETER_7; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_Notification_EXTRA_SHOW_CHRONOMETER_7() { return &___Notification_EXTRA_SHOW_CHRONOMETER_7; }
	inline void set_Notification_EXTRA_SHOW_CHRONOMETER_7(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___Notification_EXTRA_SHOW_CHRONOMETER_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Notification_EXTRA_SHOW_CHRONOMETER_7), (void*)value);
	}

	inline static int32_t get_offset_of_Notification_EXTRA_BIG_TEXT_8() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___Notification_EXTRA_BIG_TEXT_8)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_Notification_EXTRA_BIG_TEXT_8() const { return ___Notification_EXTRA_BIG_TEXT_8; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_Notification_EXTRA_BIG_TEXT_8() { return &___Notification_EXTRA_BIG_TEXT_8; }
	inline void set_Notification_EXTRA_BIG_TEXT_8(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___Notification_EXTRA_BIG_TEXT_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Notification_EXTRA_BIG_TEXT_8), (void*)value);
	}

	inline static int32_t get_offset_of_Notification_EXTRA_SHOW_WHEN_9() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___Notification_EXTRA_SHOW_WHEN_9)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_Notification_EXTRA_SHOW_WHEN_9() const { return ___Notification_EXTRA_SHOW_WHEN_9; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_Notification_EXTRA_SHOW_WHEN_9() { return &___Notification_EXTRA_SHOW_WHEN_9; }
	inline void set_Notification_EXTRA_SHOW_WHEN_9(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___Notification_EXTRA_SHOW_WHEN_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Notification_EXTRA_SHOW_WHEN_9), (void*)value);
	}

	inline static int32_t get_offset_of_Notification_FLAG_AUTO_CANCEL_10() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___Notification_FLAG_AUTO_CANCEL_10)); }
	inline int32_t get_Notification_FLAG_AUTO_CANCEL_10() const { return ___Notification_FLAG_AUTO_CANCEL_10; }
	inline int32_t* get_address_of_Notification_FLAG_AUTO_CANCEL_10() { return &___Notification_FLAG_AUTO_CANCEL_10; }
	inline void set_Notification_FLAG_AUTO_CANCEL_10(int32_t value)
	{
		___Notification_FLAG_AUTO_CANCEL_10 = value;
	}

	inline static int32_t get_offset_of_Notification_FLAG_GROUP_SUMMARY_11() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___Notification_FLAG_GROUP_SUMMARY_11)); }
	inline int32_t get_Notification_FLAG_GROUP_SUMMARY_11() const { return ___Notification_FLAG_GROUP_SUMMARY_11; }
	inline int32_t* get_address_of_Notification_FLAG_GROUP_SUMMARY_11() { return &___Notification_FLAG_GROUP_SUMMARY_11; }
	inline void set_Notification_FLAG_GROUP_SUMMARY_11(int32_t value)
	{
		___Notification_FLAG_GROUP_SUMMARY_11 = value;
	}

	inline static int32_t get_offset_of_KEY_FIRE_TIME_12() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___KEY_FIRE_TIME_12)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_KEY_FIRE_TIME_12() const { return ___KEY_FIRE_TIME_12; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_KEY_FIRE_TIME_12() { return &___KEY_FIRE_TIME_12; }
	inline void set_KEY_FIRE_TIME_12(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___KEY_FIRE_TIME_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KEY_FIRE_TIME_12), (void*)value);
	}

	inline static int32_t get_offset_of_KEY_ID_13() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___KEY_ID_13)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_KEY_ID_13() const { return ___KEY_ID_13; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_KEY_ID_13() { return &___KEY_ID_13; }
	inline void set_KEY_ID_13(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___KEY_ID_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KEY_ID_13), (void*)value);
	}

	inline static int32_t get_offset_of_KEY_INTENT_DATA_14() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___KEY_INTENT_DATA_14)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_KEY_INTENT_DATA_14() const { return ___KEY_INTENT_DATA_14; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_KEY_INTENT_DATA_14() { return &___KEY_INTENT_DATA_14; }
	inline void set_KEY_INTENT_DATA_14(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___KEY_INTENT_DATA_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KEY_INTENT_DATA_14), (void*)value);
	}

	inline static int32_t get_offset_of_KEY_LARGE_ICON_15() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___KEY_LARGE_ICON_15)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_KEY_LARGE_ICON_15() const { return ___KEY_LARGE_ICON_15; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_KEY_LARGE_ICON_15() { return &___KEY_LARGE_ICON_15; }
	inline void set_KEY_LARGE_ICON_15(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___KEY_LARGE_ICON_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KEY_LARGE_ICON_15), (void*)value);
	}

	inline static int32_t get_offset_of_KEY_REPEAT_INTERVAL_16() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___KEY_REPEAT_INTERVAL_16)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_KEY_REPEAT_INTERVAL_16() const { return ___KEY_REPEAT_INTERVAL_16; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_KEY_REPEAT_INTERVAL_16() { return &___KEY_REPEAT_INTERVAL_16; }
	inline void set_KEY_REPEAT_INTERVAL_16(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___KEY_REPEAT_INTERVAL_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KEY_REPEAT_INTERVAL_16), (void*)value);
	}

	inline static int32_t get_offset_of_KEY_NOTIFICATION_17() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___KEY_NOTIFICATION_17)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_KEY_NOTIFICATION_17() const { return ___KEY_NOTIFICATION_17; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_KEY_NOTIFICATION_17() { return &___KEY_NOTIFICATION_17; }
	inline void set_KEY_NOTIFICATION_17(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___KEY_NOTIFICATION_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KEY_NOTIFICATION_17), (void*)value);
	}

	inline static int32_t get_offset_of_KEY_SMALL_ICON_18() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___KEY_SMALL_ICON_18)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_KEY_SMALL_ICON_18() const { return ___KEY_SMALL_ICON_18; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_KEY_SMALL_ICON_18() { return &___KEY_SMALL_ICON_18; }
	inline void set_KEY_SMALL_ICON_18(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___KEY_SMALL_ICON_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KEY_SMALL_ICON_18), (void*)value);
	}
};


// Unity.Notifications.Android.AndroidNotificationExtensions
struct AndroidNotificationExtensions_t6570E4D6DD7D5BC6E67AD5C51A2FBFD36370F300  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_2), (void*)value);
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

// Unity.Notifications.Android.AndroidNotificationCenter/<>c
struct U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4_StaticFields
{
public:
	// Unity.Notifications.Android.AndroidNotificationCenter/<>c Unity.Notifications.Android.AndroidNotificationCenter/<>c::<>9
	U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>
struct Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD, ___list_0)); }
	inline List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * get_list_0() const { return ___list_0; }
	inline List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD, ___current_3)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_current_3() const { return ___current_3; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
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
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t224FE8401E710BDB619384B6F52CDEA08A47DCA1  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t70EAF1B027E7CDF184E53D9A69C1FDE492ED90BE  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 
{
public:
	// T System.Nullable`1::value
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498, ___value_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_value_0() const { return ___value_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
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


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeKind
struct DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0, ___value___2)); }
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

// Unity.Notifications.Android.GroupAlertBehaviours
struct GroupAlertBehaviours_tBC5175985945B0E631AD81184B12A38D4EA43880 
{
public:
	// System.Int32 Unity.Notifications.Android.GroupAlertBehaviours::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GroupAlertBehaviours_tBC5175985945B0E631AD81184B12A38D4EA43880, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Notifications.Android.Importance
struct Importance_t2E944C849409B739BFC5062780EC9595276B2FA4 
{
public:
	// System.Int32 Unity.Notifications.Android.Importance::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Importance_t2E944C849409B739BFC5062780EC9595276B2FA4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Notifications.Android.LockScreenVisibility
struct LockScreenVisibility_t3B2EB9A0896DA46641A2A0D57A0FDE1957557C42 
{
public:
	// System.Int32 Unity.Notifications.Android.LockScreenVisibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LockScreenVisibility_t3B2EB9A0896DA46641A2A0D57A0FDE1957557C42, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Notifications.Android.NotificationStyle
struct NotificationStyle_t069969DC8CECAD16AF8C5609692F93B6252F6DED 
{
public:
	// System.Int32 Unity.Notifications.Android.NotificationStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotificationStyle_t069969DC8CECAD16AF8C5609692F93B6252F6DED, ___value___2)); }
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F 
{
public:
	// T System.Nullable`1::value
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___value_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_value_0() const { return ___value_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Unity.Notifications.Android.AndroidNotification
struct AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 
{
public:
	// System.String Unity.Notifications.Android.AndroidNotification::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_0;
	// System.String Unity.Notifications.Android.AndroidNotification::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_1;
	// System.String Unity.Notifications.Android.AndroidNotification::<SmallIcon>k__BackingField
	String_t* ___U3CSmallIconU3Ek__BackingField_2;
	// System.DateTime Unity.Notifications.Android.AndroidNotification::<FireTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CFireTimeU3Ek__BackingField_3;
	// System.String Unity.Notifications.Android.AndroidNotification::<LargeIcon>k__BackingField
	String_t* ___U3CLargeIconU3Ek__BackingField_4;
	// Unity.Notifications.Android.NotificationStyle Unity.Notifications.Android.AndroidNotification::<Style>k__BackingField
	int32_t ___U3CStyleU3Ek__BackingField_5;
	// System.Int32 Unity.Notifications.Android.AndroidNotification::<Number>k__BackingField
	int32_t ___U3CNumberU3Ek__BackingField_6;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<ShouldAutoCancel>k__BackingField
	bool ___U3CShouldAutoCancelU3Ek__BackingField_7;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<UsesStopwatch>k__BackingField
	bool ___U3CUsesStopwatchU3Ek__BackingField_8;
	// System.String Unity.Notifications.Android.AndroidNotification::<Group>k__BackingField
	String_t* ___U3CGroupU3Ek__BackingField_9;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<GroupSummary>k__BackingField
	bool ___U3CGroupSummaryU3Ek__BackingField_10;
	// Unity.Notifications.Android.GroupAlertBehaviours Unity.Notifications.Android.AndroidNotification::<GroupAlertBehaviour>k__BackingField
	int32_t ___U3CGroupAlertBehaviourU3Ek__BackingField_11;
	// System.String Unity.Notifications.Android.AndroidNotification::<SortKey>k__BackingField
	String_t* ___U3CSortKeyU3Ek__BackingField_12;
	// System.String Unity.Notifications.Android.AndroidNotification::<IntentData>k__BackingField
	String_t* ___U3CIntentDataU3Ek__BackingField_13;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<ShowTimestamp>k__BackingField
	bool ___U3CShowTimestampU3Ek__BackingField_14;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<ShowCustomTimestamp>k__BackingField
	bool ___U3CShowCustomTimestampU3Ek__BackingField_15;
	// UnityEngine.Color Unity.Notifications.Android.AndroidNotification::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_16;
	// System.TimeSpan Unity.Notifications.Android.AndroidNotification::m_RepeatInterval
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___m_RepeatInterval_17;
	// System.DateTime Unity.Notifications.Android.AndroidNotification::m_CustomTimestamp
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_CustomTimestamp_18;

public:
	inline static int32_t get_offset_of_U3CTitleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CTitleU3Ek__BackingField_0)); }
	inline String_t* get_U3CTitleU3Ek__BackingField_0() const { return ___U3CTitleU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTitleU3Ek__BackingField_0() { return &___U3CTitleU3Ek__BackingField_0; }
	inline void set_U3CTitleU3Ek__BackingField_0(String_t* value)
	{
		___U3CTitleU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTitleU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CTextU3Ek__BackingField_1)); }
	inline String_t* get_U3CTextU3Ek__BackingField_1() const { return ___U3CTextU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_1() { return &___U3CTextU3Ek__BackingField_1; }
	inline void set_U3CTextU3Ek__BackingField_1(String_t* value)
	{
		___U3CTextU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTextU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSmallIconU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CSmallIconU3Ek__BackingField_2)); }
	inline String_t* get_U3CSmallIconU3Ek__BackingField_2() const { return ___U3CSmallIconU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CSmallIconU3Ek__BackingField_2() { return &___U3CSmallIconU3Ek__BackingField_2; }
	inline void set_U3CSmallIconU3Ek__BackingField_2(String_t* value)
	{
		___U3CSmallIconU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSmallIconU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFireTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CFireTimeU3Ek__BackingField_3)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CFireTimeU3Ek__BackingField_3() const { return ___U3CFireTimeU3Ek__BackingField_3; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CFireTimeU3Ek__BackingField_3() { return &___U3CFireTimeU3Ek__BackingField_3; }
	inline void set_U3CFireTimeU3Ek__BackingField_3(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CFireTimeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CLargeIconU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CLargeIconU3Ek__BackingField_4)); }
	inline String_t* get_U3CLargeIconU3Ek__BackingField_4() const { return ___U3CLargeIconU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CLargeIconU3Ek__BackingField_4() { return &___U3CLargeIconU3Ek__BackingField_4; }
	inline void set_U3CLargeIconU3Ek__BackingField_4(String_t* value)
	{
		___U3CLargeIconU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLargeIconU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStyleU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CStyleU3Ek__BackingField_5)); }
	inline int32_t get_U3CStyleU3Ek__BackingField_5() const { return ___U3CStyleU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CStyleU3Ek__BackingField_5() { return &___U3CStyleU3Ek__BackingField_5; }
	inline void set_U3CStyleU3Ek__BackingField_5(int32_t value)
	{
		___U3CStyleU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CNumberU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CNumberU3Ek__BackingField_6)); }
	inline int32_t get_U3CNumberU3Ek__BackingField_6() const { return ___U3CNumberU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CNumberU3Ek__BackingField_6() { return &___U3CNumberU3Ek__BackingField_6; }
	inline void set_U3CNumberU3Ek__BackingField_6(int32_t value)
	{
		___U3CNumberU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CShouldAutoCancelU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CShouldAutoCancelU3Ek__BackingField_7)); }
	inline bool get_U3CShouldAutoCancelU3Ek__BackingField_7() const { return ___U3CShouldAutoCancelU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CShouldAutoCancelU3Ek__BackingField_7() { return &___U3CShouldAutoCancelU3Ek__BackingField_7; }
	inline void set_U3CShouldAutoCancelU3Ek__BackingField_7(bool value)
	{
		___U3CShouldAutoCancelU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CUsesStopwatchU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CUsesStopwatchU3Ek__BackingField_8)); }
	inline bool get_U3CUsesStopwatchU3Ek__BackingField_8() const { return ___U3CUsesStopwatchU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CUsesStopwatchU3Ek__BackingField_8() { return &___U3CUsesStopwatchU3Ek__BackingField_8; }
	inline void set_U3CUsesStopwatchU3Ek__BackingField_8(bool value)
	{
		___U3CUsesStopwatchU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CGroupU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CGroupU3Ek__BackingField_9)); }
	inline String_t* get_U3CGroupU3Ek__BackingField_9() const { return ___U3CGroupU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CGroupU3Ek__BackingField_9() { return &___U3CGroupU3Ek__BackingField_9; }
	inline void set_U3CGroupU3Ek__BackingField_9(String_t* value)
	{
		___U3CGroupU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGroupU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGroupSummaryU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CGroupSummaryU3Ek__BackingField_10)); }
	inline bool get_U3CGroupSummaryU3Ek__BackingField_10() const { return ___U3CGroupSummaryU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CGroupSummaryU3Ek__BackingField_10() { return &___U3CGroupSummaryU3Ek__BackingField_10; }
	inline void set_U3CGroupSummaryU3Ek__BackingField_10(bool value)
	{
		___U3CGroupSummaryU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CGroupAlertBehaviourU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CGroupAlertBehaviourU3Ek__BackingField_11)); }
	inline int32_t get_U3CGroupAlertBehaviourU3Ek__BackingField_11() const { return ___U3CGroupAlertBehaviourU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CGroupAlertBehaviourU3Ek__BackingField_11() { return &___U3CGroupAlertBehaviourU3Ek__BackingField_11; }
	inline void set_U3CGroupAlertBehaviourU3Ek__BackingField_11(int32_t value)
	{
		___U3CGroupAlertBehaviourU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CSortKeyU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CSortKeyU3Ek__BackingField_12)); }
	inline String_t* get_U3CSortKeyU3Ek__BackingField_12() const { return ___U3CSortKeyU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CSortKeyU3Ek__BackingField_12() { return &___U3CSortKeyU3Ek__BackingField_12; }
	inline void set_U3CSortKeyU3Ek__BackingField_12(String_t* value)
	{
		___U3CSortKeyU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSortKeyU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIntentDataU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CIntentDataU3Ek__BackingField_13)); }
	inline String_t* get_U3CIntentDataU3Ek__BackingField_13() const { return ___U3CIntentDataU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CIntentDataU3Ek__BackingField_13() { return &___U3CIntentDataU3Ek__BackingField_13; }
	inline void set_U3CIntentDataU3Ek__BackingField_13(String_t* value)
	{
		___U3CIntentDataU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIntentDataU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShowTimestampU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CShowTimestampU3Ek__BackingField_14)); }
	inline bool get_U3CShowTimestampU3Ek__BackingField_14() const { return ___U3CShowTimestampU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CShowTimestampU3Ek__BackingField_14() { return &___U3CShowTimestampU3Ek__BackingField_14; }
	inline void set_U3CShowTimestampU3Ek__BackingField_14(bool value)
	{
		___U3CShowTimestampU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CShowCustomTimestampU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CShowCustomTimestampU3Ek__BackingField_15)); }
	inline bool get_U3CShowCustomTimestampU3Ek__BackingField_15() const { return ___U3CShowCustomTimestampU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CShowCustomTimestampU3Ek__BackingField_15() { return &___U3CShowCustomTimestampU3Ek__BackingField_15; }
	inline void set_U3CShowCustomTimestampU3Ek__BackingField_15(bool value)
	{
		___U3CShowCustomTimestampU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_m_Color_16() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___m_Color_16)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_16() const { return ___m_Color_16; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_16() { return &___m_Color_16; }
	inline void set_m_Color_16(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_16 = value;
	}

	inline static int32_t get_offset_of_m_RepeatInterval_17() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___m_RepeatInterval_17)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_m_RepeatInterval_17() const { return ___m_RepeatInterval_17; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_m_RepeatInterval_17() { return &___m_RepeatInterval_17; }
	inline void set_m_RepeatInterval_17(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___m_RepeatInterval_17 = value;
	}

	inline static int32_t get_offset_of_m_CustomTimestamp_18() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___m_CustomTimestamp_18)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_CustomTimestamp_18() const { return ___m_CustomTimestamp_18; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_CustomTimestamp_18() { return &___m_CustomTimestamp_18; }
	inline void set_m_CustomTimestamp_18(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_CustomTimestamp_18 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.Android.AndroidNotification
struct AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshaled_pinvoke
{
	char* ___U3CTitleU3Ek__BackingField_0;
	char* ___U3CTextU3Ek__BackingField_1;
	char* ___U3CSmallIconU3Ek__BackingField_2;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CFireTimeU3Ek__BackingField_3;
	char* ___U3CLargeIconU3Ek__BackingField_4;
	int32_t ___U3CStyleU3Ek__BackingField_5;
	int32_t ___U3CNumberU3Ek__BackingField_6;
	int32_t ___U3CShouldAutoCancelU3Ek__BackingField_7;
	int32_t ___U3CUsesStopwatchU3Ek__BackingField_8;
	char* ___U3CGroupU3Ek__BackingField_9;
	int32_t ___U3CGroupSummaryU3Ek__BackingField_10;
	int32_t ___U3CGroupAlertBehaviourU3Ek__BackingField_11;
	char* ___U3CSortKeyU3Ek__BackingField_12;
	char* ___U3CIntentDataU3Ek__BackingField_13;
	int32_t ___U3CShowTimestampU3Ek__BackingField_14;
	int32_t ___U3CShowCustomTimestampU3Ek__BackingField_15;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_16;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___m_RepeatInterval_17;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_CustomTimestamp_18;
};
// Native definition for COM marshalling of Unity.Notifications.Android.AndroidNotification
struct AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshaled_com
{
	Il2CppChar* ___U3CTitleU3Ek__BackingField_0;
	Il2CppChar* ___U3CTextU3Ek__BackingField_1;
	Il2CppChar* ___U3CSmallIconU3Ek__BackingField_2;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CFireTimeU3Ek__BackingField_3;
	Il2CppChar* ___U3CLargeIconU3Ek__BackingField_4;
	int32_t ___U3CStyleU3Ek__BackingField_5;
	int32_t ___U3CNumberU3Ek__BackingField_6;
	int32_t ___U3CShouldAutoCancelU3Ek__BackingField_7;
	int32_t ___U3CUsesStopwatchU3Ek__BackingField_8;
	Il2CppChar* ___U3CGroupU3Ek__BackingField_9;
	int32_t ___U3CGroupSummaryU3Ek__BackingField_10;
	int32_t ___U3CGroupAlertBehaviourU3Ek__BackingField_11;
	Il2CppChar* ___U3CSortKeyU3Ek__BackingField_12;
	Il2CppChar* ___U3CIntentDataU3Ek__BackingField_13;
	int32_t ___U3CShowTimestampU3Ek__BackingField_14;
	int32_t ___U3CShowCustomTimestampU3Ek__BackingField_15;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_16;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___m_RepeatInterval_17;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_CustomTimestamp_18;
};

// Unity.Notifications.Android.AndroidNotificationChannel
struct AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 
{
public:
	// System.String Unity.Notifications.Android.AndroidNotificationChannel::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String Unity.Notifications.Android.AndroidNotificationChannel::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.String Unity.Notifications.Android.AndroidNotificationChannel::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_2;
	// Unity.Notifications.Android.Importance Unity.Notifications.Android.AndroidNotificationChannel::<Importance>k__BackingField
	int32_t ___U3CImportanceU3Ek__BackingField_3;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<CanBypassDnd>k__BackingField
	bool ___U3CCanBypassDndU3Ek__BackingField_4;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<CanShowBadge>k__BackingField
	bool ___U3CCanShowBadgeU3Ek__BackingField_5;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<EnableLights>k__BackingField
	bool ___U3CEnableLightsU3Ek__BackingField_6;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<EnableVibration>k__BackingField
	bool ___U3CEnableVibrationU3Ek__BackingField_7;
	// System.Int64[] Unity.Notifications.Android.AndroidNotificationChannel::<VibrationPattern>k__BackingField
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___U3CVibrationPatternU3Ek__BackingField_8;
	// Unity.Notifications.Android.LockScreenVisibility Unity.Notifications.Android.AndroidNotificationChannel::<LockScreenVisibility>k__BackingField
	int32_t ___U3CLockScreenVisibilityU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1, ___U3CIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1, ___U3CDescriptionU3Ek__BackingField_2)); }
	inline String_t* get_U3CDescriptionU3Ek__BackingField_2() const { return ___U3CDescriptionU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CDescriptionU3Ek__BackingField_2() { return &___U3CDescriptionU3Ek__BackingField_2; }
	inline void set_U3CDescriptionU3Ek__BackingField_2(String_t* value)
	{
		___U3CDescriptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDescriptionU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CImportanceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1, ___U3CImportanceU3Ek__BackingField_3)); }
	inline int32_t get_U3CImportanceU3Ek__BackingField_3() const { return ___U3CImportanceU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CImportanceU3Ek__BackingField_3() { return &___U3CImportanceU3Ek__BackingField_3; }
	inline void set_U3CImportanceU3Ek__BackingField_3(int32_t value)
	{
		___U3CImportanceU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CCanBypassDndU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1, ___U3CCanBypassDndU3Ek__BackingField_4)); }
	inline bool get_U3CCanBypassDndU3Ek__BackingField_4() const { return ___U3CCanBypassDndU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CCanBypassDndU3Ek__BackingField_4() { return &___U3CCanBypassDndU3Ek__BackingField_4; }
	inline void set_U3CCanBypassDndU3Ek__BackingField_4(bool value)
	{
		___U3CCanBypassDndU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CCanShowBadgeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1, ___U3CCanShowBadgeU3Ek__BackingField_5)); }
	inline bool get_U3CCanShowBadgeU3Ek__BackingField_5() const { return ___U3CCanShowBadgeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CCanShowBadgeU3Ek__BackingField_5() { return &___U3CCanShowBadgeU3Ek__BackingField_5; }
	inline void set_U3CCanShowBadgeU3Ek__BackingField_5(bool value)
	{
		___U3CCanShowBadgeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CEnableLightsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1, ___U3CEnableLightsU3Ek__BackingField_6)); }
	inline bool get_U3CEnableLightsU3Ek__BackingField_6() const { return ___U3CEnableLightsU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CEnableLightsU3Ek__BackingField_6() { return &___U3CEnableLightsU3Ek__BackingField_6; }
	inline void set_U3CEnableLightsU3Ek__BackingField_6(bool value)
	{
		___U3CEnableLightsU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CEnableVibrationU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1, ___U3CEnableVibrationU3Ek__BackingField_7)); }
	inline bool get_U3CEnableVibrationU3Ek__BackingField_7() const { return ___U3CEnableVibrationU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CEnableVibrationU3Ek__BackingField_7() { return &___U3CEnableVibrationU3Ek__BackingField_7; }
	inline void set_U3CEnableVibrationU3Ek__BackingField_7(bool value)
	{
		___U3CEnableVibrationU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CVibrationPatternU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1, ___U3CVibrationPatternU3Ek__BackingField_8)); }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* get_U3CVibrationPatternU3Ek__BackingField_8() const { return ___U3CVibrationPatternU3Ek__BackingField_8; }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6** get_address_of_U3CVibrationPatternU3Ek__BackingField_8() { return &___U3CVibrationPatternU3Ek__BackingField_8; }
	inline void set_U3CVibrationPatternU3Ek__BackingField_8(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* value)
	{
		___U3CVibrationPatternU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVibrationPatternU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLockScreenVisibilityU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1, ___U3CLockScreenVisibilityU3Ek__BackingField_9)); }
	inline int32_t get_U3CLockScreenVisibilityU3Ek__BackingField_9() const { return ___U3CLockScreenVisibilityU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CLockScreenVisibilityU3Ek__BackingField_9() { return &___U3CLockScreenVisibilityU3Ek__BackingField_9; }
	inline void set_U3CLockScreenVisibilityU3Ek__BackingField_9(int32_t value)
	{
		___U3CLockScreenVisibilityU3Ek__BackingField_9 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.Android.AndroidNotificationChannel
struct AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshaled_pinvoke
{
	char* ___U3CIdU3Ek__BackingField_0;
	char* ___U3CNameU3Ek__BackingField_1;
	char* ___U3CDescriptionU3Ek__BackingField_2;
	int32_t ___U3CImportanceU3Ek__BackingField_3;
	int32_t ___U3CCanBypassDndU3Ek__BackingField_4;
	int32_t ___U3CCanShowBadgeU3Ek__BackingField_5;
	int32_t ___U3CEnableLightsU3Ek__BackingField_6;
	int32_t ___U3CEnableVibrationU3Ek__BackingField_7;
	Il2CppSafeArray/*NONE*/* ___U3CVibrationPatternU3Ek__BackingField_8;
	int32_t ___U3CLockScreenVisibilityU3Ek__BackingField_9;
};
// Native definition for COM marshalling of Unity.Notifications.Android.AndroidNotificationChannel
struct AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshaled_com
{
	Il2CppChar* ___U3CIdU3Ek__BackingField_0;
	Il2CppChar* ___U3CNameU3Ek__BackingField_1;
	Il2CppChar* ___U3CDescriptionU3Ek__BackingField_2;
	int32_t ___U3CImportanceU3Ek__BackingField_3;
	int32_t ___U3CCanBypassDndU3Ek__BackingField_4;
	int32_t ___U3CCanShowBadgeU3Ek__BackingField_5;
	int32_t ___U3CEnableLightsU3Ek__BackingField_6;
	int32_t ___U3CEnableVibrationU3Ek__BackingField_7;
	Il2CppSafeArray/*NONE*/* ___U3CVibrationPatternU3Ek__BackingField_8;
	int32_t ___U3CLockScreenVisibilityU3Ek__BackingField_9;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// Unity.Notifications.Android.NotificationCallback
struct NotificationCallback_t81DD74C1A774090ECE4A8E2C1F572E307D6E0D31  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Notifications.Android.AndroidNotificationIntentData
struct AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521  : public RuntimeObject
{
public:
	// System.Int32 Unity.Notifications.Android.AndroidNotificationIntentData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.String Unity.Notifications.Android.AndroidNotificationIntentData::<Channel>k__BackingField
	String_t* ___U3CChannelU3Ek__BackingField_1;
	// Unity.Notifications.Android.AndroidNotification Unity.Notifications.Android.AndroidNotificationIntentData::<Notification>k__BackingField
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  ___U3CNotificationU3Ek__BackingField_2;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationIntentData::<NativeNotification>k__BackingField
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___U3CNativeNotificationU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CChannelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521, ___U3CChannelU3Ek__BackingField_1)); }
	inline String_t* get_U3CChannelU3Ek__BackingField_1() const { return ___U3CChannelU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CChannelU3Ek__BackingField_1() { return &___U3CChannelU3Ek__BackingField_1; }
	inline void set_U3CChannelU3Ek__BackingField_1(String_t* value)
	{
		___U3CChannelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CChannelU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNotificationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521, ___U3CNotificationU3Ek__BackingField_2)); }
	inline AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  get_U3CNotificationU3Ek__BackingField_2() const { return ___U3CNotificationU3Ek__BackingField_2; }
	inline AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * get_address_of_U3CNotificationU3Ek__BackingField_2() { return &___U3CNotificationU3Ek__BackingField_2; }
	inline void set_U3CNotificationU3Ek__BackingField_2(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  value)
	{
		___U3CNotificationU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNotificationU3Ek__BackingField_2))->___U3CTitleU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNotificationU3Ek__BackingField_2))->___U3CTextU3Ek__BackingField_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNotificationU3Ek__BackingField_2))->___U3CSmallIconU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNotificationU3Ek__BackingField_2))->___U3CLargeIconU3Ek__BackingField_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNotificationU3Ek__BackingField_2))->___U3CGroupU3Ek__BackingField_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNotificationU3Ek__BackingField_2))->___U3CSortKeyU3Ek__BackingField_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNotificationU3Ek__BackingField_2))->___U3CIntentDataU3Ek__BackingField_13), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CNativeNotificationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521, ___U3CNativeNotificationU3Ek__BackingField_3)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_U3CNativeNotificationU3Ek__BackingField_3() const { return ___U3CNativeNotificationU3Ek__BackingField_3; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_U3CNativeNotificationU3Ek__BackingField_3() { return &___U3CNativeNotificationU3Ek__BackingField_3; }
	inline void set_U3CNativeNotificationU3Ek__BackingField_3(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___U3CNativeNotificationU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNativeNotificationU3Ek__BackingField_3), (void*)value);
	}
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


// Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback
struct NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher
struct AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject> Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::m_ReceivedNotificationQueue
	List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * ___m_ReceivedNotificationQueue_5;
	// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject> Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::m_ReceivedNotificationList
	List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * ___m_ReceivedNotificationList_6;

public:
	inline static int32_t get_offset_of_m_ReceivedNotificationQueue_5() { return static_cast<int32_t>(offsetof(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8, ___m_ReceivedNotificationQueue_5)); }
	inline List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * get_m_ReceivedNotificationQueue_5() const { return ___m_ReceivedNotificationQueue_5; }
	inline List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B ** get_address_of_m_ReceivedNotificationQueue_5() { return &___m_ReceivedNotificationQueue_5; }
	inline void set_m_ReceivedNotificationQueue_5(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * value)
	{
		___m_ReceivedNotificationQueue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReceivedNotificationQueue_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReceivedNotificationList_6() { return static_cast<int32_t>(offsetof(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8, ___m_ReceivedNotificationList_6)); }
	inline List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * get_m_ReceivedNotificationList_6() const { return ___m_ReceivedNotificationList_6; }
	inline List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B ** get_address_of_m_ReceivedNotificationList_6() { return &___m_ReceivedNotificationList_6; }
	inline void set_m_ReceivedNotificationList_6(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * value)
	{
		___m_ReceivedNotificationList_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReceivedNotificationList_6), (void*)value);
	}
};

struct AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields
{
public:
	// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::instance
	AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields, ___instance_4)); }
	inline AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * get_instance_4() const { return ___instance_4; }
	inline AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
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
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
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


// System.Void System.Nullable`1<System.TimeSpan>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_gshared (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_gshared_inline (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.TimeSpan>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE_gshared (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Color>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_gshared (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_gshared_inline (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Color>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_gshared (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Int32>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Get<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Get_TisRuntimeObject_mF909DF1A8B4C9F8749FC7619CE27DB4BA1CFA586_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Get<System.Int32>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Get_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mAA20D556A954E5DB5CE7F883CA865350D567F7F6_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Get<System.Int64>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Get_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_mEED01FE01556CEBC892BFF795C919EFB26662D9B_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.String Unity.Notifications.Android.AndroidNotification::get_Title()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Title_mB3DABEE0F0991F9EEBDE33BF7972FD2FE8A1F4F9_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_Title(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Title_m8F3CD2493CE4E1146CCF0FB5A22693A83189B2BF_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Unity.Notifications.Android.AndroidNotification::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Text_m77E9CFB1D553D57D0FEF220DE7B28088DD356D6C_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_Text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Text_mBFBF1951A5506A2442A519F044F5D6657B04F04B_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Unity.Notifications.Android.AndroidNotification::get_SmallIcon()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_SmallIcon_m92B697D0D89530167902FC5897DD168266B81DD0_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_SmallIcon(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_SmallIcon_m8994CFB6F9F7CD57B11F0C9B85032538CC1F7CA9_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.DateTime Unity.Notifications.Android.AndroidNotification::get_FireTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AndroidNotification_get_FireTime_mF810AF8344094C697EFD40194CD1739CD02A662A_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_FireTime(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_FireTime_mB28FFB7F25BA44F896EB8C6289DCCF6603224C78_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(!0)
inline void Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , const RuntimeMethod*))Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_gshared)(__this, ___value0, method);
}
// System.Nullable`1<System.TimeSpan> Unity.Notifications.Android.AndroidNotification::get_RepeatInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  AndroidNotification_get_RepeatInterval_m09D70F0C0E53A601CEFCB774039B32E5578EA59E (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
inline bool Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_inline (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *, const RuntimeMethod*))Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_gshared_inline)(__this, method);
}
// System.TimeSpan Unity.Notifications.Android.AndroidNotificationExtensions::ToTimeSpan(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  AndroidNotificationExtensions_ToTimeSpan_m82F05A65D739796F7E94F26566170DBCC56D1DD6 (int64_t ___timeSpan0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.TimeSpan>::get_Value()
inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, const RuntimeMethod* method)
{
	return ((  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  (*) (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *, const RuntimeMethod*))Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE_gshared)(__this, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_RepeatInterval(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_RepeatInterval_m0FDA4870F0D148570B6D24034475E19965BD9E1F (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___value0, const RuntimeMethod* method);
// System.String Unity.Notifications.Android.AndroidNotification::get_LargeIcon()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_LargeIcon_mC26FD32D630C8467C043CC4A2B4E841892A1E6C0_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_LargeIcon(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_LargeIcon_m451EF5AA763036228687978F544A988DD5B521C5_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method);
// Unity.Notifications.Android.NotificationStyle Unity.Notifications.Android.AndroidNotification::get_Style()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Style_m97C174CB75421EFDD1C2E75C3FCDE4CCAEAD2F54_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_Style(Unity.Notifications.Android.NotificationStyle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Style_m98FB64EF2F07E24EB0B7328F685E2597AA8E8202_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Color>::.ctor(!0)
inline void Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9 (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*))Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_gshared)(__this, ___value0, method);
}
// System.Nullable`1<UnityEngine.Color> Unity.Notifications.Android.AndroidNotification::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  AndroidNotification_get_Color_mBBCAAD5E8A561583A30899B79071DC0E510931FA (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_inline (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *, const RuntimeMethod*))Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Color>::get_Value()
inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98 (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method)
{
	return ((  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  (*) (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *, const RuntimeMethod*))Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_gshared)(__this, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Color(System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Color_mACFEDF1A3E4EEDFBD972DAFFF28B323807431561 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___value0, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.Android.AndroidNotification::get_Number()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Number_mA5DEDC608DC439A4A491EEB7FA4BBECCD34CA2A4_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_Number(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Number_m8C6ADBFE6516F90F69096FBD9862480969128142_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_ShouldAutoCancel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShouldAutoCancel_m0F7E321BA510637F3C9D8F553C0A77565E952C36_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShouldAutoCancel(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShouldAutoCancel_mC5CDEF3BD3D064831BE0B70C65EDD17B3157111A_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_UsesStopwatch()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_UsesStopwatch_m2DC6B59CB2E8A12A104C5A5E9EB91B1AA2F62080_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_UsesStopwatch(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_UsesStopwatch_m55FC26AC094CC99D22432104A6C7AC3C629A1CA1_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method);
// System.String Unity.Notifications.Android.AndroidNotification::get_Group()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Group_m77A3E8F0A809D435B7FC889C6B9C163DD80E7BB1_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_Group(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Group_m76EC700DCF7554BE82F92EC7A7E2513B1FF9E959_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_GroupSummary()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_GroupSummary_m1BC2AC6F3DE40B306602D5DABFEA1CAFBED76EA2_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_GroupSummary(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupSummary_m906CAB0D3329BC8F6DF1582E66A55F98372B9B56_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method);
// Unity.Notifications.Android.GroupAlertBehaviours Unity.Notifications.Android.AndroidNotification::get_GroupAlertBehaviour()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_GroupAlertBehaviour_m0DE3415FFE52E7DED47D2AAB021A772ED72633D5_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_GroupAlertBehaviour(Unity.Notifications.Android.GroupAlertBehaviours)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupAlertBehaviour_m0F6F30DF3CC18235A42B05ADE3293368FDA9265C_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String Unity.Notifications.Android.AndroidNotification::get_SortKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_SortKey_m2F51A80A8D61A86E05DBA8BC55F941B4DAAE25C8_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_SortKey(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_SortKey_m20919DC31CFF55EB4CC3C4FE2C7CC5DA24EC8EBB_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Unity.Notifications.Android.AndroidNotification::get_IntentData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_IntentData_mF6A7FC46547F023CA9DE369AE45958D1563E6206_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_IntentData(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_IntentData_m5F25F77921D71A8CE4177FEC32784518A7DA251A_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_ShowTimestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShowTimestamp_m4974F4442200DC1311A95ED3173B8EFEB07E10C6_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShowTimestamp(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowTimestamp_m223E5FACC5678ECE1CC21B76F961170A0C6DC49B_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method);
// System.DateTime Unity.Notifications.Android.AndroidNotification::get_CustomTimestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AndroidNotification_get_CustomTimestamp_m36E2E3570D2197AFB00C40E46B0E3665900CD42E_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShowCustomTimestamp(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowCustomTimestamp_m5D5931188024A7834F9B0D72F207594BF1F6A66D_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_CustomTimestamp(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_CustomTimestamp_m6A8B9111B4110EE13EA1041B39FA213783C43313 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_ShowCustomTimestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShowCustomTimestamp_m4D6097B1975D351245D2E0F929E4A4B11379FADE_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::GetInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m0ECBDF3489F97FA7771BBA299D2CB3A8E233CD02_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher>()
inline AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * GameObject_AddComponent_TisAndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_mA80D655632DF9341FD7ABFC8569B4DC2C280D1A3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void Unity.Notifications.Android.NotificationCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationCallback__ctor_m0079EEFEA69221760EBC29775A5DF78533B01183 (NotificationCallback_t81DD74C1A774090ECE4A8E2C1F572E307D6E0D31 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Int32>(System.String)
inline int32_t AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_gshared)(__this, ___fieldName0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationCenter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationCenter_Initialize_m032C4F7B042514FA1E9227073A7FADBCD628E960 (const RuntimeMethod* method);
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Id_m8414CCF73AAE88237B22CEC99C72246ECFB476B7_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Name_m0AA10F1025091D228921E87AADD2047E7411091A_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Description()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Description_m4628FD745E0AB56D1CA3736561A3AE392134F3D8_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method);
// Unity.Notifications.Android.Importance Unity.Notifications.Android.AndroidNotificationChannel::get_Importance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_Importance_m9CCC8F1DAEC8EDA86D4651F5B5E77DADDEBCA124_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_EnableLights()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableLights_m940E7B2298ABA231695828C6ECE983230AE85997_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_EnableVibration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableVibration_mB2D0633D3475651540736DD2685498E159622ECD_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_CanBypassDnd()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanBypassDnd_mF5039966BD760C9431BCEF955301B65037ECAF84_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_CanShowBadge()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanShowBadge_mADC2608F5FA0EE2DA01CE2C48DE746C013629484_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method);
// System.Int64[] Unity.Notifications.Android.AndroidNotificationChannel::get_VibrationPattern()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* AndroidNotificationChannel_get_VibrationPattern_m4E735D10633F66025E9387CC4B811565892148F7_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method);
// Unity.Notifications.Android.LockScreenVisibility Unity.Notifications.Android.AndroidNotificationChannel::get_LockScreenVisibility()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_LockScreenVisibility_mD57C1C54E1E7BDFFDC7B676887730E72A742F09F_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090 (const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Month_m46CC2AED3F24A91104919B1F6B5103DD1F8BBAE8 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Day_m9D698CA2A7D1FBEE7BEC0A982A119239F513CBA8 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Hour_m6AC78B553639A108EA00728498FA037E52CC425E (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Minute_m1BBE1AABAAFE39019ED26585D12E67A1F9D5A4AA (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Second_m6E1FEADC4E62BCC99846934C0761F0AF67DFE17A (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Millisecond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Millisecond_m26F99053967782776E91C154604B99D2E1182B38 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::CreateNotificationBuilder(System.Int32,Unity.Notifications.Android.AndroidNotification,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidNotificationCenter_CreateNotificationBuilder_m50D4579632C31F0FAD42163522CCBECF3383D70F (int32_t ___id0, AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  ___notification1, String_t* ___channelId2, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::SendNotification(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_SendNotification_mAAB109675FBF385B6359BE696131ABE6AFA29114 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___notificationBuilder0, const RuntimeMethod* method);
// System.Int64 Unity.Notifications.Android.AndroidNotificationExtensions::ToLong(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidNotificationExtensions_ToLong_m8B2B0DE759417E42C3FC322EC1BC67EB0E551F70 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateTime0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_mFF9FA58B47A7FC0C083E034B364EAAE2E7282C45 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.Android.AndroidNotificationExtensions::ToInt(System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToInt_m145923D169D265B0EA179BFDB53703FC8901D276 (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___color0, const RuntimeMethod* method);
// System.Int64 Unity.Notifications.Android.AndroidNotificationExtensions::ToLong(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidNotificationExtensions_ToLong_m17C90BDB52FAC47FAA4AA705CA37D13C1C4FD17A (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___timeSpan0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Get<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_Get_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mFBBE4027C3B10CC9A3F370241DFC7A997C567B12 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisRuntimeObject_mF909DF1A8B4C9F8749FC7619CE27DB4BA1CFA586_gshared)(__this, ___fieldName0, method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::Get<System.Int32>(System.String)
inline int32_t AndroidJavaObject_Get_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mAA20D556A954E5DB5CE7F883CA865350D567F7F6 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mAA20D556A954E5DB5CE7F883CA865350D567F7F6_gshared)(__this, ___fieldName0, method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
inline int64_t AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_gshared)(__this, ___methodName0, ___args1, method);
}
// System.DateTime Unity.Notifications.Android.AndroidNotificationExtensions::ToDatetime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AndroidNotificationExtensions_ToDatetime_m800EBFECFB1908CCAEF03513C58468E7845F0F43 (int64_t ___dateTime0, const RuntimeMethod* method);
// UnityEngine.Color Unity.Notifications.Android.AndroidNotificationExtensions::ToColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  AndroidNotificationExtensions_ToColor_m4F0AC1E486292491D63BED6EDD5F27C28D3666E5 (int32_t ___color0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63_gshared)(__this, ___methodName0, ___args1, method);
}
// Unity.Notifications.Android.GroupAlertBehaviours Unity.Notifications.Android.AndroidNotificationExtensions::ToGroupAlertBehaviours(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToGroupAlertBehaviours_m6BE71EE671DDF13C9333E8D84FA1C8F95A773624 (int32_t ___groupAlertBehaviour0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Get<System.Int64>(System.String)
inline int64_t AndroidJavaObject_Get_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_mEED01FE01556CEBC892BFF795C919EFB26662D9B (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_mEED01FE01556CEBC892BFF795C919EFB26662D9B_gshared)(__this, ___fieldName0, method);
}
// System.Void Unity.Notifications.Android.AndroidNotificationIntentData::.ctor(System.Int32,System.String,Unity.Notifications.Android.AndroidNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationIntentData__ctor_mFA0B24EADF0B8CCAC424B598B7C75C99CAF0C80B (AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * __this, int32_t ___id0, String_t* ___channelId1, AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  ___notification2, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotificationIntentData::set_NativeNotification(UnityEngine.AndroidJavaObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationIntentData_set_NativeNotification_mC6E6623C3B3E5ECA199E2287FDD71FA139DB3E6C_inline (AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___value0, const RuntimeMethod* method);
// Unity.Notifications.Android.AndroidNotificationIntentData Unity.Notifications.Android.AndroidNotificationCenter::GetNotificationData(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * AndroidNotificationCenter_GetNotificationData_m3C0D28481E0DF0056046031BFE1DCC885815880D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___notificationObj0, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback::Invoke(Unity.Notifications.Android.AndroidNotificationIntentData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_m3BA17AB01D93A0BD7B529EB155CA9B7930DBA3AB (NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * __this, AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m076EC8CB3D125E921A77A3FCDEC8CBBBA95407AC (NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Id_mBA4BD4BBEDEC34758C2135CA09EB2F229D7799BA_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Name_m9C30D7E82CEC2028A0FA2E21127767027CBC5BC8_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Description(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Description_m895FC16334428373C8D15D893611F32077599CD1_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Importance(Unity.Notifications.Android.Importance)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Importance_mED3F8A45E4DE2B1085753FC57CAF56CF0DD56DEB_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m70E955627155998B426145940DE105ECEF213B96 (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___c0, const RuntimeMethod* method);
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mCB99E35879988A22842FDDA9BBC3ACA74F1BEE38 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, int32_t ___kind7, const RuntimeMethod* method);
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_ToUniversalTime_mB5FB50E0AD0D9A2A917893A1655F51B174C7A6B3 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d10, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d21, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_AddMilliseconds_m74B689CDAFB7ABEEF56827D8777B7C95C89C3154 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, double ___value0, const RuntimeMethod* method);
// System.DateTime System.DateTime::ToLocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_ToLocalTime_mCE92C270822E0C13C7C849BDE5DDC852A4CF0A08 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  TimeSpan_FromMilliseconds_m12D90542B044C450FDFBCEA1CBC32369479483EC (double ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>::Add(!0)
inline void List_1_Add_mEB451D299E31BF4F80B6DB96776F04C5F7A565C5 (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B *, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>::get_Count()
inline int32_t List_1_get_Count_mD5AC32CEBB7EF3BCC983D00D93DB93DE0EC70E8C_inline (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>::GetEnumerator()
inline Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD  List_1_GetEnumerator_m88B8BAD9E34605DD37DB23EF437F9B1FF869DFF7 (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD  (*) (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>::get_Current()
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * Enumerator_get_Current_m1579633F9660B899A35B3DE93473AA792BD85A2A_inline (Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD * __this, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::ReceivedNotificationCallback(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_ReceivedNotificationCallback_mF925FF2B7DDD6D1EE601205F3CF14A2B6F5318DF (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___notification0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>::MoveNext()
inline bool Enumerator_MoveNext_mB15CB0B4CA5AA42DD4FF2CB445C8AE96ED8FF2B2 (Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>::Dispose()
inline void Enumerator_Dispose_m22C2979B02507C0C33B02383587FB3D60E9C7D8D (Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>::Clear()
inline void List_1_Clear_m74A870D3B22C8AA0A6F45AA4CB0EFBBB8D344581 (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>::.ctor()
inline void List_1__ctor_m5F9D82170C2774D7F4048F3C0D571BA570C40648 (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::EnqueueReceivedNotification(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher_EnqueueReceivedNotification_m91497715038968784C48633AAF410897DA041001 (AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___notification0, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5AB26E888AB42C1D212AEE08649D29C56099BE53 (U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4 * __this, const RuntimeMethod* method);
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
// Conversion methods for marshalling of: Unity.Notifications.Android.AndroidNotification
IL2CPP_EXTERN_C void AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshal_pinvoke(const AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89& unmarshaled, AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CFireTimeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<FireTime>k__BackingField' of type 'AndroidNotification'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CFireTimeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshal_pinvoke_back(const AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshaled_pinvoke& marshaled, AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89& unmarshaled)
{
	Exception_t* ___U3CFireTimeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<FireTime>k__BackingField' of type 'AndroidNotification'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CFireTimeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.AndroidNotification
IL2CPP_EXTERN_C void AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshal_pinvoke_cleanup(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.Android.AndroidNotification
IL2CPP_EXTERN_C void AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshal_com(const AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89& unmarshaled, AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshaled_com& marshaled)
{
	Exception_t* ___U3CFireTimeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<FireTime>k__BackingField' of type 'AndroidNotification'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CFireTimeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshal_com_back(const AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshaled_com& marshaled, AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89& unmarshaled)
{
	Exception_t* ___U3CFireTimeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<FireTime>k__BackingField' of type 'AndroidNotification'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CFireTimeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.AndroidNotification
IL2CPP_EXTERN_C void AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshal_com_cleanup(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshaled_com& marshaled)
{
}
// System.String Unity.Notifications.Android.AndroidNotification::get_Title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Title_mB3DABEE0F0991F9EEBDE33BF7972FD2FE8A1F4F9 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string Title { get; set; }
		String_t* L_0 = __this->get_U3CTitleU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_Title_mB3DABEE0F0991F9EEBDE33BF7972FD2FE8A1F4F9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotification_get_Title_mB3DABEE0F0991F9EEBDE33BF7972FD2FE8A1F4F9_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Title(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Title_m8F3CD2493CE4E1146CCF0FB5A22693A83189B2BF (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Title { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTitleU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Title_m8F3CD2493CE4E1146CCF0FB5A22693A83189B2BF_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_Title_m8F3CD2493CE4E1146CCF0FB5A22693A83189B2BF_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotification::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Text_m77E9CFB1D553D57D0FEF220DE7B28088DD356D6C (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string Text { get; set; }
		String_t* L_0 = __this->get_U3CTextU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_Text_m77E9CFB1D553D57D0FEF220DE7B28088DD356D6C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotification_get_Text_m77E9CFB1D553D57D0FEF220DE7B28088DD356D6C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Text_mBFBF1951A5506A2442A519F044F5D6657B04F04B (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Text { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTextU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Text_mBFBF1951A5506A2442A519F044F5D6657B04F04B_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_Text_mBFBF1951A5506A2442A519F044F5D6657B04F04B_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotification::get_SmallIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_SmallIcon_m92B697D0D89530167902FC5897DD168266B81DD0 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string SmallIcon { get; set; }
		String_t* L_0 = __this->get_U3CSmallIconU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_SmallIcon_m92B697D0D89530167902FC5897DD168266B81DD0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotification_get_SmallIcon_m92B697D0D89530167902FC5897DD168266B81DD0_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_SmallIcon(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_SmallIcon_m8994CFB6F9F7CD57B11F0C9B85032538CC1F7CA9 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string SmallIcon { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CSmallIconU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_SmallIcon_m8994CFB6F9F7CD57B11F0C9B85032538CC1F7CA9_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_SmallIcon_m8994CFB6F9F7CD57B11F0C9B85032538CC1F7CA9_inline(_thisAdjusted, ___value0, method);
}
// System.DateTime Unity.Notifications.Android.AndroidNotification::get_FireTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AndroidNotification_get_FireTime_mF810AF8344094C697EFD40194CD1739CD02A662A (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public DateTime FireTime { get; set; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_U3CFireTimeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AndroidNotification_get_FireTime_mF810AF8344094C697EFD40194CD1739CD02A662A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  _returnValue;
	_returnValue = AndroidNotification_get_FireTime_mF810AF8344094C697EFD40194CD1739CD02A662A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_FireTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_FireTime_mB28FFB7F25BA44F896EB8C6289DCCF6603224C78 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		// public DateTime FireTime { get; set; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CFireTimeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_FireTime_mB28FFB7F25BA44F896EB8C6289DCCF6603224C78_AdjustorThunk (RuntimeObject * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_FireTime_mB28FFB7F25BA44F896EB8C6289DCCF6603224C78_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.TimeSpan> Unity.Notifications.Android.AndroidNotification::get_RepeatInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  AndroidNotification_get_RepeatInterval_m09D70F0C0E53A601CEFCB774039B32E5578EA59E (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_RepeatInterval; }
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_0 = __this->get_m_RepeatInterval_17();
		Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  AndroidNotification_get_RepeatInterval_m09D70F0C0E53A601CEFCB774039B32E5578EA59E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  _returnValue;
	_returnValue = AndroidNotification_get_RepeatInterval_m09D70F0C0E53A601CEFCB774039B32E5578EA59E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_RepeatInterval(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_RepeatInterval_m0FDA4870F0D148570B6D24034475E19965BD9E1F (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * G_B2_0 = NULL;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * G_B1_0 = NULL;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * G_B3_1 = NULL;
	{
		// set { m_RepeatInterval = value.HasValue ? value.Value : (-1L).ToTimeSpan(); }
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_inline((Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *)(&___value0), /*hidden argument*/Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_RuntimeMethod_var);
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0013;
		}
	}
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1;
		L_1 = AndroidNotificationExtensions_ToTimeSpan_m82F05A65D739796F7E94F26566170DBCC56D1DD6(((int64_t)((int64_t)(-1))), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0013:
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2;
		L_2 = Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE((Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *)(&___value0), /*hidden argument*/Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE_RuntimeMethod_var);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		G_B3_1->set_m_RepeatInterval_17(G_B3_0);
		// set { m_RepeatInterval = value.HasValue ? value.Value : (-1L).ToTimeSpan(); }
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_RepeatInterval_m0FDA4870F0D148570B6D24034475E19965BD9E1F_AdjustorThunk (RuntimeObject * __this, Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_RepeatInterval_m0FDA4870F0D148570B6D24034475E19965BD9E1F(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotification::get_LargeIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_LargeIcon_mC26FD32D630C8467C043CC4A2B4E841892A1E6C0 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string LargeIcon { get; set; }
		String_t* L_0 = __this->get_U3CLargeIconU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_LargeIcon_mC26FD32D630C8467C043CC4A2B4E841892A1E6C0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotification_get_LargeIcon_mC26FD32D630C8467C043CC4A2B4E841892A1E6C0_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_LargeIcon(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_LargeIcon_m451EF5AA763036228687978F544A988DD5B521C5 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string LargeIcon { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CLargeIconU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_LargeIcon_m451EF5AA763036228687978F544A988DD5B521C5_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_LargeIcon_m451EF5AA763036228687978F544A988DD5B521C5_inline(_thisAdjusted, ___value0, method);
}
// Unity.Notifications.Android.NotificationStyle Unity.Notifications.Android.AndroidNotification::get_Style()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Style_m97C174CB75421EFDD1C2E75C3FCDE4CCAEAD2F54 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public NotificationStyle Style { get; set; }
		int32_t L_0 = __this->get_U3CStyleU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AndroidNotification_get_Style_m97C174CB75421EFDD1C2E75C3FCDE4CCAEAD2F54_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AndroidNotification_get_Style_m97C174CB75421EFDD1C2E75C3FCDE4CCAEAD2F54_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Style(Unity.Notifications.Android.NotificationStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Style_m98FB64EF2F07E24EB0B7328F685E2597AA8E8202 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public NotificationStyle Style { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStyleU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Style_m98FB64EF2F07E24EB0B7328F685E2597AA8E8202_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_Style_m98FB64EF2F07E24EB0B7328F685E2597AA8E8202_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<UnityEngine.Color> Unity.Notifications.Android.AndroidNotification::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  AndroidNotification_get_Color_mBBCAAD5E8A561583A30899B79071DC0E510931FA (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_Color; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_m_Color_16();
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  AndroidNotification_get_Color_mBBCAAD5E8A561583A30899B79071DC0E510931FA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  _returnValue;
	_returnValue = AndroidNotification_get_Color_mBBCAAD5E8A561583A30899B79071DC0E510931FA(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Color(System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Color_mACFEDF1A3E4EEDFBD972DAFFF28B323807431561 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * G_B2_0 = NULL;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * G_B1_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * G_B3_1 = NULL;
	{
		// set { m_Color = value.HasValue ? value.Value : new Color(0, 0, 0, 0); }
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_inline((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)(&___value0), /*hidden argument*/Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_RuntimeMethod_var);
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0025;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_1), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_002c;
	}

IL_0025:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)(&___value0), /*hidden argument*/Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_002c:
	{
		G_B3_1->set_m_Color_16(G_B3_0);
		// set { m_Color = value.HasValue ? value.Value : new Color(0, 0, 0, 0); }
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Color_mACFEDF1A3E4EEDFBD972DAFFF28B323807431561_AdjustorThunk (RuntimeObject * __this, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_Color_mACFEDF1A3E4EEDFBD972DAFFF28B323807431561(_thisAdjusted, ___value0, method);
}
// System.Int32 Unity.Notifications.Android.AndroidNotification::get_Number()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Number_mA5DEDC608DC439A4A491EEB7FA4BBECCD34CA2A4 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public int Number { get; set; }
		int32_t L_0 = __this->get_U3CNumberU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AndroidNotification_get_Number_mA5DEDC608DC439A4A491EEB7FA4BBECCD34CA2A4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AndroidNotification_get_Number_mA5DEDC608DC439A4A491EEB7FA4BBECCD34CA2A4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Number(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Number_m8C6ADBFE6516F90F69096FBD9862480969128142 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Number { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CNumberU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Number_m8C6ADBFE6516F90F69096FBD9862480969128142_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_Number_m8C6ADBFE6516F90F69096FBD9862480969128142_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_ShouldAutoCancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShouldAutoCancel_m0F7E321BA510637F3C9D8F553C0A77565E952C36 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShouldAutoCancel { get; set; }
		bool L_0 = __this->get_U3CShouldAutoCancelU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotification_get_ShouldAutoCancel_m0F7E321BA510637F3C9D8F553C0A77565E952C36_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotification_get_ShouldAutoCancel_m0F7E321BA510637F3C9D8F553C0A77565E952C36_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShouldAutoCancel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_ShouldAutoCancel_mC5CDEF3BD3D064831BE0B70C65EDD17B3157111A (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ShouldAutoCancel { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CShouldAutoCancelU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_ShouldAutoCancel_mC5CDEF3BD3D064831BE0B70C65EDD17B3157111A_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_ShouldAutoCancel_mC5CDEF3BD3D064831BE0B70C65EDD17B3157111A_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_UsesStopwatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotification_get_UsesStopwatch_m2DC6B59CB2E8A12A104C5A5E9EB91B1AA2F62080 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public bool UsesStopwatch { get; set; }
		bool L_0 = __this->get_U3CUsesStopwatchU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotification_get_UsesStopwatch_m2DC6B59CB2E8A12A104C5A5E9EB91B1AA2F62080_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotification_get_UsesStopwatch_m2DC6B59CB2E8A12A104C5A5E9EB91B1AA2F62080_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_UsesStopwatch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_UsesStopwatch_m55FC26AC094CC99D22432104A6C7AC3C629A1CA1 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UsesStopwatch { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUsesStopwatchU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_UsesStopwatch_m55FC26AC094CC99D22432104A6C7AC3C629A1CA1_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_UsesStopwatch_m55FC26AC094CC99D22432104A6C7AC3C629A1CA1_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotification::get_Group()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Group_m77A3E8F0A809D435B7FC889C6B9C163DD80E7BB1 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string Group { get; set; }
		String_t* L_0 = __this->get_U3CGroupU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_Group_m77A3E8F0A809D435B7FC889C6B9C163DD80E7BB1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotification_get_Group_m77A3E8F0A809D435B7FC889C6B9C163DD80E7BB1_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Group(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Group_m76EC700DCF7554BE82F92EC7A7E2513B1FF9E959 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Group { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CGroupU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Group_m76EC700DCF7554BE82F92EC7A7E2513B1FF9E959_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_Group_m76EC700DCF7554BE82F92EC7A7E2513B1FF9E959_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_GroupSummary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotification_get_GroupSummary_m1BC2AC6F3DE40B306602D5DABFEA1CAFBED76EA2 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public bool GroupSummary { get; set; }
		bool L_0 = __this->get_U3CGroupSummaryU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotification_get_GroupSummary_m1BC2AC6F3DE40B306602D5DABFEA1CAFBED76EA2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotification_get_GroupSummary_m1BC2AC6F3DE40B306602D5DABFEA1CAFBED76EA2_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_GroupSummary(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupSummary_m906CAB0D3329BC8F6DF1582E66A55F98372B9B56 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool GroupSummary { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CGroupSummaryU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_GroupSummary_m906CAB0D3329BC8F6DF1582E66A55F98372B9B56_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_GroupSummary_m906CAB0D3329BC8F6DF1582E66A55F98372B9B56_inline(_thisAdjusted, ___value0, method);
}
// Unity.Notifications.Android.GroupAlertBehaviours Unity.Notifications.Android.AndroidNotification::get_GroupAlertBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_GroupAlertBehaviour_m0DE3415FFE52E7DED47D2AAB021A772ED72633D5 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public GroupAlertBehaviours GroupAlertBehaviour { get; set; }
		int32_t L_0 = __this->get_U3CGroupAlertBehaviourU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AndroidNotification_get_GroupAlertBehaviour_m0DE3415FFE52E7DED47D2AAB021A772ED72633D5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AndroidNotification_get_GroupAlertBehaviour_m0DE3415FFE52E7DED47D2AAB021A772ED72633D5_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_GroupAlertBehaviour(Unity.Notifications.Android.GroupAlertBehaviours)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupAlertBehaviour_m0F6F30DF3CC18235A42B05ADE3293368FDA9265C (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public GroupAlertBehaviours GroupAlertBehaviour { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CGroupAlertBehaviourU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_GroupAlertBehaviour_m0F6F30DF3CC18235A42B05ADE3293368FDA9265C_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_GroupAlertBehaviour_m0F6F30DF3CC18235A42B05ADE3293368FDA9265C_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotification::get_SortKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_SortKey_m2F51A80A8D61A86E05DBA8BC55F941B4DAAE25C8 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string SortKey { get; set; }
		String_t* L_0 = __this->get_U3CSortKeyU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_SortKey_m2F51A80A8D61A86E05DBA8BC55F941B4DAAE25C8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotification_get_SortKey_m2F51A80A8D61A86E05DBA8BC55F941B4DAAE25C8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_SortKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_SortKey_m20919DC31CFF55EB4CC3C4FE2C7CC5DA24EC8EBB (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string SortKey { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CSortKeyU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_SortKey_m20919DC31CFF55EB4CC3C4FE2C7CC5DA24EC8EBB_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_SortKey_m20919DC31CFF55EB4CC3C4FE2C7CC5DA24EC8EBB_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotification::get_IntentData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_IntentData_mF6A7FC46547F023CA9DE369AE45958D1563E6206 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string IntentData { get; set; }
		String_t* L_0 = __this->get_U3CIntentDataU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_IntentData_mF6A7FC46547F023CA9DE369AE45958D1563E6206_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotification_get_IntentData_mF6A7FC46547F023CA9DE369AE45958D1563E6206_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_IntentData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_IntentData_m5F25F77921D71A8CE4177FEC32784518A7DA251A (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string IntentData { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIntentDataU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_IntentData_m5F25F77921D71A8CE4177FEC32784518A7DA251A_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_IntentData_m5F25F77921D71A8CE4177FEC32784518A7DA251A_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_ShowTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShowTimestamp_m4974F4442200DC1311A95ED3173B8EFEB07E10C6 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowTimestamp { get; set; }
		bool L_0 = __this->get_U3CShowTimestampU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotification_get_ShowTimestamp_m4974F4442200DC1311A95ED3173B8EFEB07E10C6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotification_get_ShowTimestamp_m4974F4442200DC1311A95ED3173B8EFEB07E10C6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShowTimestamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowTimestamp_m223E5FACC5678ECE1CC21B76F961170A0C6DC49B (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ShowTimestamp { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CShowTimestampU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_ShowTimestamp_m223E5FACC5678ECE1CC21B76F961170A0C6DC49B_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_ShowTimestamp_m223E5FACC5678ECE1CC21B76F961170A0C6DC49B_inline(_thisAdjusted, ___value0, method);
}
// System.DateTime Unity.Notifications.Android.AndroidNotification::get_CustomTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AndroidNotification_get_CustomTimestamp_m36E2E3570D2197AFB00C40E46B0E3665900CD42E (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_CustomTimestamp; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_m_CustomTimestamp_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AndroidNotification_get_CustomTimestamp_m36E2E3570D2197AFB00C40E46B0E3665900CD42E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  _returnValue;
	_returnValue = AndroidNotification_get_CustomTimestamp_m36E2E3570D2197AFB00C40E46B0E3665900CD42E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_CustomTimestamp(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_CustomTimestamp_m6A8B9111B4110EE13EA1041B39FA213783C43313 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		// ShowCustomTimestamp = true;
		AndroidNotification_set_ShowCustomTimestamp_m5D5931188024A7834F9B0D72F207594BF1F6A66D_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)__this, (bool)1, /*hidden argument*/NULL);
		// m_CustomTimestamp = value;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_m_CustomTimestamp_18(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_CustomTimestamp_m6A8B9111B4110EE13EA1041B39FA213783C43313_AdjustorThunk (RuntimeObject * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_CustomTimestamp_m6A8B9111B4110EE13EA1041B39FA213783C43313(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_ShowCustomTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShowCustomTimestamp_m4D6097B1975D351245D2E0F929E4A4B11379FADE (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// internal bool ShowCustomTimestamp { get; set; }
		bool L_0 = __this->get_U3CShowCustomTimestampU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotification_get_ShowCustomTimestamp_m4D6097B1975D351245D2E0F929E4A4B11379FADE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotification_get_ShowCustomTimestamp_m4D6097B1975D351245D2E0F929E4A4B11379FADE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShowCustomTimestamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowCustomTimestamp_m5D5931188024A7834F9B0D72F207594BF1F6A66D (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// internal bool ShowCustomTimestamp { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CShowCustomTimestampU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_ShowCustomTimestamp_m5D5931188024A7834F9B0D72F207594BF1F6A66D_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_ShowCustomTimestamp_m5D5931188024A7834F9B0D72F207594BF1F6A66D_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Notifications.Android.AndroidNotificationCenter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationCenter_Initialize_m032C4F7B042514FA1E9227073A7FADBCD628E960 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_mA80D655632DF9341FD7ABFC8569B4DC2C280D1A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationCallback_t81DD74C1A774090ECE4A8E2C1F572E307D6E0D31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral057C2C56F74B179155BC7BA52E8E5A8F720085C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B031EA46C89ACA33496219C86113C5971D96A6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C338FABC52E44288BFE3902ECFD459E179A00B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B4ABC6800E38922B95A7741A7C31E78837967AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DFC2D8E2B0854967C8EA0AC932952BDB07081DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F7D86CDAA0C8A81C945C1F706675D9922754FF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral578464DF4BFC276A4118AE25678706EA9C75B4BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DF31DD4FD46D4C3A00C604A8AEE6D8534322805);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral732B68B6E4A4DB829E0CB811204F86B0C8BBFE0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral773844F4EAB0720F10FB37E0065041ACDB243E16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral812C47466403E44034C69DFF8C0737F3F368B65A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA59539643944A464E30D7011A21734B72919F5BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB57FF4DA3CECFFF19270CA8823E13D52D4D8BC0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB95030A25CC7A13566AE8FA422E467D13AB6FFDB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9C27A6050F45A10AC1FD4E65204F2DFFECAFA72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAA743314C99A7A945A299B6748725F14C02714B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6AF69C91C20A2D4C4D5FA56F7600A7BB5D305BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF840720856A0CCF610CAA8A9B7B760DA4E85F748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD462CB4D212EBE5A672517EB06D3FBD862F866C);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (s_Initialized)
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		bool L_0 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_Initialized_4();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0009:
	{
		// if (AndroidReceivedNotificationMainThreadDispatcher.GetInstance() == null)
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * L_1;
		L_1 = AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m0ECBDF3489F97FA7771BBA299D2CB3A8E233CD02_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// var receivedNotificationDispatcher = new GameObject("AndroidReceivedNotificationMainThreadDispatcher");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_3, _stringLiteral057C2C56F74B179155BC7BA52E8E5A8F720085C9, /*hidden argument*/NULL);
		// receivedNotificationDispatcher.AddComponent<AndroidReceivedNotificationMainThreadDispatcher>();
		NullCheck(L_3);
		AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * L_4;
		L_4 = GameObject_AddComponent_TisAndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_mA80D655632DF9341FD7ABFC8569B4DC2C280D1A3(L_3, /*hidden argument*/GameObject_AddComponent_TisAndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_mA80D655632DF9341FD7ABFC8569B4DC2C280D1A3_RuntimeMethod_var);
	}

IL_0026:
	{
		// var unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_5 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_5, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		// s_CurrentActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_5);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_6;
		L_6 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_5, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_s_CurrentActivity_3(L_6);
		// var context = s_CurrentActivity.Call<AndroidJavaObject>("getApplicationContext");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_7 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_CurrentActivity_3();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8;
		L_8 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_7);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_9;
		L_9 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_7, _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9, L_8, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_0 = L_9;
		// s_NotificationManagerClass = new AndroidJavaClass("com.unity.androidnotifications.UnityNotificationManager");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_10 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_10, _stringLiteralCAA743314C99A7A945A299B6748725F14C02714B, /*hidden argument*/NULL);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_s_NotificationManagerClass_1(L_10);
		// s_NotificationManager = s_NotificationManagerClass.CallStatic<AndroidJavaObject>("getNotificationManagerImpl", context, s_CurrentActivity);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_11 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManagerClass_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_12;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_14 = V_0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_14);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_13;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_16 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_CurrentActivity_3();
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
		NullCheck(L_11);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_17;
		L_17 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2(L_11, _stringLiteralB57FF4DA3CECFFF19270CA8823E13D52D4D8BC0A, L_15, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_s_NotificationManager_2(L_17);
		// s_NotificationManager.Call("setNotificationCallback", new NotificationCallback());
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_18 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManager_2();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_19;
		NotificationCallback_t81DD74C1A774090ECE4A8E2C1F572E307D6E0D31 * L_21 = (NotificationCallback_t81DD74C1A774090ECE4A8E2C1F572E307D6E0D31 *)il2cpp_codegen_object_new(NotificationCallback_t81DD74C1A774090ECE4A8E2C1F572E307D6E0D31_il2cpp_TypeInfo_var);
		NotificationCallback__ctor_m0079EEFEA69221760EBC29775A5DF78533B01183(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
		NullCheck(L_18);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_18, _stringLiteralF840720856A0CCF610CAA8A9B7B760DA4E85F748, L_20, /*hidden argument*/NULL);
		// using (var notificationClass = new AndroidJavaClass("android.app.Notification"))
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_22 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_22, _stringLiteralB95030A25CC7A13566AE8FA422E467D13AB6FFDB, /*hidden argument*/NULL);
		V_1 = L_22;
	}

IL_00b1:
	try
	{ // begin try (depth: 1)
		// Notification_EXTRA_TITLE = notificationClass.GetStatic<AndroidJavaObject>("EXTRA_TITLE");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_23 = V_1;
		NullCheck(L_23);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_24;
		L_24 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_23, _stringLiteral6DF31DD4FD46D4C3A00C604A8AEE6D8534322805, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_Notification_EXTRA_TITLE_5(L_24);
		// Notification_EXTRA_TEXT = notificationClass.GetStatic<AndroidJavaObject>("EXTRA_TEXT");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_25 = V_1;
		NullCheck(L_25);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_26;
		L_26 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_25, _stringLiteral3DFC2D8E2B0854967C8EA0AC932952BDB07081DD, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_Notification_EXTRA_TEXT_6(L_26);
		// Notification_EXTRA_SHOW_CHRONOMETER = notificationClass.GetStatic<AndroidJavaObject>("EXTRA_SHOW_CHRONOMETER");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_27 = V_1;
		NullCheck(L_27);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_28;
		L_28 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_27, _stringLiteral732B68B6E4A4DB829E0CB811204F86B0C8BBFE0A, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_Notification_EXTRA_SHOW_CHRONOMETER_7(L_28);
		// Notification_EXTRA_BIG_TEXT = notificationClass.GetStatic<AndroidJavaObject>("EXTRA_BIG_TEXT");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_29 = V_1;
		NullCheck(L_29);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_30;
		L_30 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_29, _stringLiteral0B031EA46C89ACA33496219C86113C5971D96A6F, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_Notification_EXTRA_BIG_TEXT_8(L_30);
		// Notification_EXTRA_SHOW_WHEN = notificationClass.GetStatic<AndroidJavaObject>("EXTRA_SHOW_WHEN");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_31 = V_1;
		NullCheck(L_31);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_32;
		L_32 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_31, _stringLiteral0C338FABC52E44288BFE3902ECFD459E179A00B4, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_Notification_EXTRA_SHOW_WHEN_9(L_32);
		// Notification_FLAG_AUTO_CANCEL = notificationClass.GetStatic<int>("FLAG_AUTO_CANCEL");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74(L_33, _stringLiteralE6AF69C91C20A2D4C4D5FA56F7600A7BB5D305BF, /*hidden argument*/AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_RuntimeMethod_var);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_Notification_FLAG_AUTO_CANCEL_10(L_34);
		// Notification_FLAG_GROUP_SUMMARY = notificationClass.GetStatic<int>("FLAG_GROUP_SUMMARY");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74(L_35, _stringLiteralA59539643944A464E30D7011A21734B72919F5BF, /*hidden argument*/AndroidJavaObject_GetStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEFFBCAA115E5129B421F81CBF7FEA72367B0CD74_RuntimeMethod_var);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_Notification_FLAG_GROUP_SUMMARY_11(L_36);
		// }
		IL2CPP_LEAVE(0x12D, FINALLY_0123);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0123;
	}

FINALLY_0123:
	{ // begin finally (depth: 1)
		{
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_37 = V_1;
			if (!L_37)
			{
				goto IL_012c;
			}
		}

IL_0126:
		{
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_38 = V_1;
			NullCheck(L_38);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_38);
		}

IL_012c:
		{
			IL2CPP_END_FINALLY(291)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(291)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12D, IL_012d)
	}

IL_012d:
	{
		// KEY_FIRE_TIME = s_NotificationManagerClass.GetStatic<AndroidJavaObject>("KEY_FIRE_TIME");
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_39 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManagerClass_1();
		NullCheck(L_39);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_40;
		L_40 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_39, _stringLiteral578464DF4BFC276A4118AE25678706EA9C75B4BF, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_KEY_FIRE_TIME_12(L_40);
		// KEY_ID = s_NotificationManagerClass.GetStatic<AndroidJavaObject>("KEY_ID");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_41 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManagerClass_1();
		NullCheck(L_41);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_42;
		L_42 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_41, _stringLiteral4F7D86CDAA0C8A81C945C1F706675D9922754FF1, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_KEY_ID_13(L_42);
		// KEY_INTENT_DATA = s_NotificationManagerClass.GetStatic<AndroidJavaObject>("KEY_INTENT_DATA");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_43 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManagerClass_1();
		NullCheck(L_43);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_44;
		L_44 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_43, _stringLiteralB9C27A6050F45A10AC1FD4E65204F2DFFECAFA72, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_KEY_INTENT_DATA_14(L_44);
		// KEY_LARGE_ICON = s_NotificationManagerClass.GetStatic<AndroidJavaObject>("KEY_LARGE_ICON");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_45 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManagerClass_1();
		NullCheck(L_45);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_46;
		L_46 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_45, _stringLiteralFD462CB4D212EBE5A672517EB06D3FBD862F866C, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_KEY_LARGE_ICON_15(L_46);
		// KEY_REPEAT_INTERVAL = s_NotificationManagerClass.GetStatic<AndroidJavaObject>("KEY_REPEAT_INTERVAL");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_47 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManagerClass_1();
		NullCheck(L_47);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_48;
		L_48 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_47, _stringLiteral773844F4EAB0720F10FB37E0065041ACDB243E16, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_KEY_REPEAT_INTERVAL_16(L_48);
		// KEY_NOTIFICATION = s_NotificationManagerClass.GetStatic<AndroidJavaObject>("KEY_NOTIFICATION");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_49 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManagerClass_1();
		NullCheck(L_49);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_50;
		L_50 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_49, _stringLiteral3B4ABC6800E38922B95A7741A7C31E78837967AB, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_KEY_NOTIFICATION_17(L_50);
		// KEY_SMALL_ICON = s_NotificationManagerClass.GetStatic<AndroidJavaObject>("KEY_SMALL_ICON");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_51 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManagerClass_1();
		NullCheck(L_51);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_52;
		L_52 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_51, _stringLiteral812C47466403E44034C69DFF8C0737F3F368B65A, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_KEY_SMALL_ICON_18(L_52);
		// s_Initialized = true;
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_s_Initialized_4((bool)1);
		// return s_Initialized;
		bool L_53 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_Initialized_4();
		return L_53;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::RegisterNotificationChannel(Unity.Notifications.Android.AndroidNotificationChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_RegisterNotificationChannel_mA563D65A93EFC5BCD25F3181C21035E6E62D1B90 (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1  ___channel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC033F5E36FD3E211DA34178256F8F6BB2359A4AB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidNotificationCenter_Initialize_m032C4F7B042514FA1E9227073A7FADBCD628E960(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if (string.IsNullOrEmpty(channel.Id))
		String_t* L_1;
		L_1 = AndroidNotificationChannel_get_Id_m8414CCF73AAE88237B22CEC99C72246ECFB476B7_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// throw new Exception("Cannot register notification channel, the channel ID is not specified.");
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3507F14C18339414ED66D51C2A54704F4F66BF29)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidNotificationCenter_RegisterNotificationChannel_mA563D65A93EFC5BCD25F3181C21035E6E62D1B90_RuntimeMethod_var)));
	}

IL_0021:
	{
		// if (string.IsNullOrEmpty(channel.Name))
		String_t* L_4;
		L_4 = AndroidNotificationChannel_get_Name_m0AA10F1025091D228921E87AADD2047E7411091A_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		// throw new Exception(string.Format("Cannot register notification channel: {0} , the channel Name is not set.", channel.Id));
		String_t* L_6;
		L_6 = AndroidNotificationChannel_get_Id_m8414CCF73AAE88237B22CEC99C72246ECFB476B7_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA79A01886CDD255DBAF604C7A51EF7370973E814)), L_6, /*hidden argument*/NULL);
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidNotificationCenter_RegisterNotificationChannel_mA563D65A93EFC5BCD25F3181C21035E6E62D1B90_RuntimeMethod_var)));
	}

IL_0046:
	{
		// if (string.IsNullOrEmpty(channel.Description))
		String_t* L_9;
		L_9 = AndroidNotificationChannel_get_Description_m4628FD745E0AB56D1CA3736561A3AE392134F3D8_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		bool L_10;
		L_10 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006b;
		}
	}
	{
		// throw new Exception(string.Format("Cannot register notification channel: {0} , the channel Description is not set.", channel.Id));
		String_t* L_11;
		L_11 = AndroidNotificationChannel_get_Id_m8414CCF73AAE88237B22CEC99C72246ECFB476B7_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A63AE410D81A77766BF6FE65A404882F7D7E6D2)), L_11, /*hidden argument*/NULL);
		Exception_t * L_13 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidNotificationCenter_RegisterNotificationChannel_mA563D65A93EFC5BCD25F3181C21035E6E62D1B90_RuntimeMethod_var)));
	}

IL_006b:
	{
		// s_NotificationManager.Call("registerNotificationChannel",
		//     channel.Id,
		//     channel.Name,
		//     (int)channel.Importance,
		//     channel.Description,
		//     channel.EnableLights,
		//     channel.EnableVibration,
		//     channel.CanBypassDnd,
		//     channel.CanShowBadge,
		//     channel.VibrationPattern,
		//     (int)channel.LockScreenVisibility
		// );
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_14 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManager_2();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_15;
		String_t* L_17;
		L_17 = AndroidNotificationChannel_get_Id_m8414CCF73AAE88237B22CEC99C72246ECFB476B7_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_16;
		String_t* L_19;
		L_19 = AndroidNotificationChannel_get_Name_m0AA10F1025091D228921E87AADD2047E7411091A_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_18;
		int32_t L_21;
		L_21 = AndroidNotificationChannel_get_Importance_m9CCC8F1DAEC8EDA86D4651F5B5E77DADDEBCA124_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		int32_t L_22 = ((int32_t)L_21);
		RuntimeObject * L_23 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_23);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = L_20;
		String_t* L_25;
		L_25 = AndroidNotificationChannel_get_Description_m4628FD745E0AB56D1CA3736561A3AE392134F3D8_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_25);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = L_24;
		bool L_27;
		L_27 = AndroidNotificationChannel_get_EnableLights_m940E7B2298ABA231695828C6ECE983230AE85997_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		bool L_28 = L_27;
		RuntimeObject * L_29 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_29);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = L_26;
		bool L_31;
		L_31 = AndroidNotificationChannel_get_EnableVibration_mB2D0633D3475651540736DD2685498E159622ECD_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		bool L_32 = L_31;
		RuntimeObject * L_33 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_33);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_34 = L_30;
		bool L_35;
		L_35 = AndroidNotificationChannel_get_CanBypassDnd_mF5039966BD760C9431BCEF955301B65037ECAF84_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		bool L_36 = L_35;
		RuntimeObject * L_37 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_37);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = L_34;
		bool L_39;
		L_39 = AndroidNotificationChannel_get_CanShowBadge_mADC2608F5FA0EE2DA01CE2C48DE746C013629484_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		bool L_40 = L_39;
		RuntimeObject * L_41 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_41);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_42 = L_38;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_43;
		L_43 = AndroidNotificationChannel_get_VibrationPattern_m4E735D10633F66025E9387CC4B811565892148F7_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_43);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_43);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_44 = L_42;
		int32_t L_45;
		L_45 = AndroidNotificationChannel_get_LockScreenVisibility_mD57C1C54E1E7BDFFDC7B676887730E72A742F09F_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		int32_t L_46 = ((int32_t)L_45);
		RuntimeObject * L_47 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_47);
		NullCheck(L_14);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_14, _stringLiteralC033F5E36FD3E211DA34178256F8F6BB2359A4AB, L_44, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Unity.Notifications.Android.AndroidNotificationCenter::SendNotification(Unity.Notifications.Android.AndroidNotification,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationCenter_SendNotification_m8AA0ADF07030DDA5E70AB57048A685643AA2286B (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  ___notification0, String_t* ___channelId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E07AAC0DB599074DF5A532EE047B226AF85B461);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (!Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidNotificationCenter_Initialize_m032C4F7B042514FA1E9227073A7FADBCD628E960(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0009:
	{
		// var now = DateTime.UtcNow;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1;
		L_1 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		V_0 = L_1;
		// var nowFormatted = $"{now.Year}{now.Month}{now.Day}{now.Hour}{now.Minute}{now.Second}{now.Millisecond}";
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		int32_t L_4;
		L_4 = DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_3;
		int32_t L_8;
		L_8 = DateTime_get_Month_m46CC2AED3F24A91104919B1F6B5103DD1F8BBAE8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		int32_t L_12;
		L_12 = DateTime_get_Day_m9D698CA2A7D1FBEE7BEC0A982A119239F513CBA8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_14);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_11;
		int32_t L_16;
		L_16 = DateTime_get_Hour_m6AC78B553639A108EA00728498FA037E52CC425E((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_18);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_15;
		int32_t L_20;
		L_20 = DateTime_get_Minute_m1BBE1AABAAFE39019ED26585D12E67A1F9D5A4AA((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_22);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = L_19;
		int32_t L_24;
		L_24 = DateTime_get_Second_m6E1FEADC4E62BCC99846934C0761F0AF67DFE17A((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_25 = L_24;
		RuntimeObject * L_26 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_26);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = L_23;
		int32_t L_28;
		L_28 = DateTime_get_Millisecond_m26F99053967782776E91C154604B99D2E1182B38((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_29 = L_28;
		RuntimeObject * L_30 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_30);
		String_t* L_31;
		L_31 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral1E07AAC0DB599074DF5A532EE047B226AF85B461, L_27, /*hidden argument*/NULL);
		// int id = Math.Abs(nowFormatted.GetHashCode()) + (new System.Random().Next(10000));
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_31);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_33;
		L_33 = il2cpp_codegen_abs(L_32);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_34 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_34, /*hidden argument*/NULL);
		NullCheck(L_34);
		int32_t L_35;
		L_35 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32) */, L_34, ((int32_t)10000));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)L_35));
		// using (var builder = CreateNotificationBuilder(id, notification, channelId))
		int32_t L_36 = V_1;
		AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  L_37 = ___notification0;
		String_t* L_38 = ___channelId1;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_39;
		L_39 = AndroidNotificationCenter_CreateNotificationBuilder_m50D4579632C31F0FAD42163522CCBECF3383D70F(L_36, L_37, L_38, /*hidden argument*/NULL);
		V_2 = L_39;
	}

IL_00ac:
	try
	{ // begin try (depth: 1)
		// SendNotification(builder);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_40 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		AndroidNotificationCenter_SendNotification_mAAB109675FBF385B6359BE696131ABE6AFA29114(L_40, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0xBE, FINALLY_00b4);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b4;
	}

FINALLY_00b4:
	{ // begin finally (depth: 1)
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_41 = V_2;
			if (!L_41)
			{
				goto IL_00bd;
			}
		}

IL_00b7:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_42 = V_2;
			NullCheck(L_42);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_42);
		}

IL_00bd:
		{
			IL2CPP_END_FINALLY(180)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(180)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
	}

IL_00be:
	{
		// return id;
		int32_t L_43 = V_1;
		return L_43;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::SendNotification(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_SendNotification_mAAB109675FBF385B6359BE696131ABE6AFA29114 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___notificationBuilder0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21F2AC306B45CC6D319AE7C9577C42830701471F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidNotificationCenter_Initialize_m032C4F7B042514FA1E9227073A7FADBCD628E960(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// s_NotificationManager.Call("scheduleNotification", notificationBuilder);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManager_2();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = ___notificationBuilder0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_1);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_1, _stringLiteral21F2AC306B45CC6D319AE7C9577C42830701471F, L_3, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::CreateNotificationBuilder(System.Int32,Unity.Notifications.Android.AndroidNotification,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidNotificationCenter_CreateNotificationBuilder_m50D4579632C31F0FAD42163522CCBECF3383D70F (int32_t ___id0, AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  ___notification1, String_t* ___channelId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral003F1A0D4698F0D0994034CB42BE57F01E7071EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2371502F77FC4E06CEA26C3019181A650BF2FE0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28E45B65F67DFEF09A216B89076AB46384ECAEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DE10CB9863FBD79A26BDD1E6581EC58F503024E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral309475E2FD5CCC4B93075E4B2F688139336E3976);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral417033260ED9866C8F3942C4B186232283F80EBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41F6952B2006C0E82025C36C339675E51FB14C5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A885A89832F4E62C8E259AA47DF0907BB0C1ED3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65270D282A6EB620B640BB3DE24D30E7DC225F75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C129EA550A36247CE9509C041D9D2BF744EA5A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral759248FA866422EA1C6CEAB03289DC132A7B89A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77739BBFD23D47C94ED718EBC308956A5D4AB21D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F9D1AC8003CE64AD22B0DA00079089562028B6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FC7E3B9590667C5068E9E851357567AEEA3578B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA39D8B3C25D62F9AC74346490A808A083149BC3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA69581B713E8DF5FDC303A301CB6B19917AD174B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9B81E6CB678EF7D657F87AD3E4F30A67E57938C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD76D61D6CB247074CC233E90926FDF3F2E3684E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE9C9A97063C73F56F60488D14A05C3E7A4630EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0531D8CE590C96ADED66DEADF41A647EC9B4879);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF202BD9C29F9FE8967D2598978C59BC250D49ECC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF91A960CB813ACBB09046C8766F780B73B27BC7C);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_1 = NULL;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_4 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int64_t G_B15_0 = 0;
	{
		// long fireTime = notification.FireTime.ToLong();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		L_0 = AndroidNotification_get_FireTime_mF810AF8344094C697EFD40194CD1739CD02A662A_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		int64_t L_1;
		L_1 = AndroidNotificationExtensions_ToLong_m8B2B0DE759417E42C3FC322EC1BC67EB0E551F70(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (fireTime < 0L)
		int64_t L_2 = V_0;
		if ((((int64_t)L_2) >= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_001c;
		}
	}
	{
		// Debug.LogError("Failed to schedule notification, it did not contain a valid FireTime");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral28E45B65F67DFEF09A216B89076AB46384ECAEFD, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// var notificationBuilder = s_NotificationManager.Call<AndroidJavaObject>("createNotificationBuilder", channelId);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManager_2();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		String_t* L_6 = ___channelId2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		NullCheck(L_3);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_7;
		L_7 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_3, _stringLiteralA39D8B3C25D62F9AC74346490A808A083149BC3C, L_5, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_1 = L_7;
		// s_NotificationManagerClass.CallStatic("setNotificationIcon", notificationBuilder, KEY_SMALL_ICON, notification.SmallIcon);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_8 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManagerClass_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_9;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_11 = V_1;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_10;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_13 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_KEY_SMALL_ICON_18();
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_12;
		String_t* L_15;
		L_15 = AndroidNotification_get_SmallIcon_m92B697D0D89530167902FC5897DD168266B81DD0_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_15);
		NullCheck(L_8);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_8, _stringLiteral003F1A0D4698F0D0994034CB42BE57F01E7071EE, L_14, /*hidden argument*/NULL);
		// if (!string.IsNullOrEmpty(notification.LargeIcon))
		String_t* L_16;
		L_16 = AndroidNotification_get_LargeIcon_mC26FD32D630C8467C043CC4A2B4E841892A1E6C0_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		bool L_17;
		L_17 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_009a;
		}
	}
	{
		// s_NotificationManagerClass.CallStatic("setNotificationIcon", notificationBuilder, KEY_LARGE_ICON, notification.LargeIcon);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_18 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManagerClass_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_19;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_21 = V_1;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_20;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_23 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_KEY_LARGE_ICON_15();
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_23);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = L_22;
		String_t* L_25;
		L_25 = AndroidNotification_get_LargeIcon_mC26FD32D630C8467C043CC4A2B4E841892A1E6C0_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_25);
		NullCheck(L_18);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_18, _stringLiteral003F1A0D4698F0D0994034CB42BE57F01E7071EE, L_24, /*hidden argument*/NULL);
	}

IL_009a:
	{
		// notificationBuilder.Call<AndroidJavaObject>("setContentTitle", notification.Title).Dispose();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_26 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = L_27;
		String_t* L_29;
		L_29 = AndroidNotification_get_Title_mB3DABEE0F0991F9EEBDE33BF7972FD2FE8A1F4F9_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_29);
		NullCheck(L_26);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_30;
		L_30 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_26, _stringLiteralD76D61D6CB247074CC233E90926FDF3F2E3684E5, L_28, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		NullCheck(L_30);
		AndroidJavaObject_Dispose_mFF9FA58B47A7FC0C083E034B364EAAE2E7282C45(L_30, /*hidden argument*/NULL);
		// notificationBuilder.Call<AndroidJavaObject>("setContentText", notification.Text).Dispose();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_31 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_32 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33 = L_32;
		String_t* L_34;
		L_34 = AndroidNotification_get_Text_m77E9CFB1D553D57D0FEF220DE7B28088DD356D6C_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_34);
		NullCheck(L_31);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_35;
		L_35 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_31, _stringLiteral77739BBFD23D47C94ED718EBC308956A5D4AB21D, L_33, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		NullCheck(L_35);
		AndroidJavaObject_Dispose_mFF9FA58B47A7FC0C083E034B364EAAE2E7282C45(L_35, /*hidden argument*/NULL);
		// notificationBuilder.Call<AndroidJavaObject>("setAutoCancel", notification.ShouldAutoCancel).Dispose();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_36 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = L_37;
		bool L_39;
		L_39 = AndroidNotification_get_ShouldAutoCancel_m0F7E321BA510637F3C9D8F553C0A77565E952C36_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		bool L_40 = L_39;
		RuntimeObject * L_41 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_41);
		NullCheck(L_36);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_42;
		L_42 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_36, _stringLiteralA69581B713E8DF5FDC303A301CB6B19917AD174B, L_38, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		NullCheck(L_42);
		AndroidJavaObject_Dispose_mFF9FA58B47A7FC0C083E034B364EAAE2E7282C45(L_42, /*hidden argument*/NULL);
		// if (notification.Number >= 0)
		int32_t L_43;
		L_43 = AndroidNotification_get_Number_mA5DEDC608DC439A4A491EEB7FA4BBECCD34CA2A4_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		if ((((int32_t)L_43) < ((int32_t)0)))
		{
			goto IL_012e;
		}
	}
	{
		// notificationBuilder.Call<AndroidJavaObject>("setNumber", notification.Number).Dispose();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_44 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_45 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_46 = L_45;
		int32_t L_47;
		L_47 = AndroidNotification_get_Number_mA5DEDC608DC439A4A491EEB7FA4BBECCD34CA2A4_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		int32_t L_48 = L_47;
		RuntimeObject * L_49 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_49);
		NullCheck(L_44);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_50;
		L_50 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_44, _stringLiteral759248FA866422EA1C6CEAB03289DC132A7B89A6, L_46, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		NullCheck(L_50);
		AndroidJavaObject_Dispose_mFF9FA58B47A7FC0C083E034B364EAAE2E7282C45(L_50, /*hidden argument*/NULL);
	}

IL_012e:
	{
		// if (notification.Style == NotificationStyle.BigTextStyle)
		int32_t L_51;
		L_51 = AndroidNotification_get_Style_m97C174CB75421EFDD1C2E75C3FCDE4CCAEAD2F54_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_51) == ((uint32_t)2))))
		{
			goto IL_0193;
		}
	}
	{
		// using (var style = new AndroidJavaObject("android.app.Notification$BigTextStyle"))
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_52;
		L_52 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_53 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_53, _stringLiteral65270D282A6EB620B640BB3DE24D30E7DC225F75, L_52, /*hidden argument*/NULL);
		V_4 = L_53;
	}

IL_0149:
	try
	{ // begin try (depth: 1)
		// style.Call<AndroidJavaObject>("bigText", notification.Text).Dispose();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_54 = V_4;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_55 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_56 = L_55;
		String_t* L_57;
		L_57 = AndroidNotification_get_Text_m77E9CFB1D553D57D0FEF220DE7B28088DD356D6C_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_57);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_57);
		NullCheck(L_54);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_58;
		L_58 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_54, _stringLiteralC9B81E6CB678EF7D657F87AD3E4F30A67E57938C, L_56, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		NullCheck(L_58);
		AndroidJavaObject_Dispose_mFF9FA58B47A7FC0C083E034B364EAAE2E7282C45(L_58, /*hidden argument*/NULL);
		// notificationBuilder.Call<AndroidJavaObject>("setStyle", style).Dispose();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_59 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_60 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_61 = L_60;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_62 = V_4;
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_62);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_62);
		NullCheck(L_59);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_63;
		L_63 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_59, _stringLiteral41F6952B2006C0E82025C36C339675E51FB14C5E, L_61, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		NullCheck(L_63);
		AndroidJavaObject_Dispose_mFF9FA58B47A7FC0C083E034B364EAAE2E7282C45(L_63, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x193, FINALLY_0187);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0187;
	}

FINALLY_0187:
	{ // begin finally (depth: 1)
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_64 = V_4;
			if (!L_64)
			{
				goto IL_0192;
			}
		}

IL_018b:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_65 = V_4;
			NullCheck(L_65);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_65);
		}

IL_0192:
		{
			IL2CPP_END_FINALLY(391)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(391)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x193, IL_0193)
	}

IL_0193:
	{
		// long timestampValue = notification.ShowCustomTimestamp ? notification.CustomTimestamp.ToLong() : fireTime;
		bool L_66;
		L_66 = AndroidNotification_get_ShowCustomTimestamp_m4D6097B1975D351245D2E0F929E4A4B11379FADE_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		if (L_66)
		{
			goto IL_019f;
		}
	}
	{
		int64_t L_67 = V_0;
		G_B15_0 = L_67;
		goto IL_01ab;
	}

IL_019f:
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_68;
		L_68 = AndroidNotification_get_CustomTimestamp_m36E2E3570D2197AFB00C40E46B0E3665900CD42E_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		int64_t L_69;
		L_69 = AndroidNotificationExtensions_ToLong_m8B2B0DE759417E42C3FC322EC1BC67EB0E551F70(L_68, /*hidden argument*/NULL);
		G_B15_0 = L_69;
	}

IL_01ab:
	{
		V_2 = G_B15_0;
		// notificationBuilder.Call<AndroidJavaObject>("setWhen", timestampValue).Dispose();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_70 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_71 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_72 = L_71;
		int64_t L_73 = V_2;
		int64_t L_74 = L_73;
		RuntimeObject * L_75 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_74);
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_75);
		NullCheck(L_70);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_76;
		L_76 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_70, _stringLiteral8F9D1AC8003CE64AD22B0DA00079089562028B6C, L_72, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		NullCheck(L_76);
		AndroidJavaObject_Dispose_mFF9FA58B47A7FC0C083E034B364EAAE2E7282C45(L_76, /*hidden argument*/NULL);
		// if (!string.IsNullOrEmpty(notification.Group))
		String_t* L_77;
		L_77 = AndroidNotification_get_Group_m77A3E8F0A809D435B7FC889C6B9C163DD80E7BB1_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		bool L_78;
		L_78 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_77, /*hidden argument*/NULL);
		if (L_78)
		{
			goto IL_01f9;
		}
	}
	{
		// notificationBuilder.Call<AndroidJavaObject>("setGroup", notification.Group).Dispose();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_79 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_80 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_81 = L_80;
		String_t* L_82;
		L_82 = AndroidNotification_get_Group_m77A3E8F0A809D435B7FC889C6B9C163DD80E7BB1_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_82);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_82);
		NullCheck(L_79);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_83;
		L_83 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_79, _stringLiteral417033260ED9866C8F3942C4B186232283F80EBC, L_81, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		NullCheck(L_83);
		AndroidJavaObject_Dispose_mFF9FA58B47A7FC0C083E034B364EAAE2E7282C45(L_83, /*hidden argument*/NULL);
	}

IL_01f9:
	{
		// if (notification.GroupSummary)
		bool L_84;
		L_84 = AndroidNotification_get_GroupSummary_m1BC2AC6F3DE40B306602D5DABFEA1CAFBED76EA2_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		if (!L_84)
		{
			goto IL_0227;
		}
	}
	{
		// notificationBuilder.Call<AndroidJavaObject>("setGroupSummary", notification.GroupSummary).Dispose();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_85 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_86 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_87 = L_86;
		bool L_88;
		L_88 = AndroidNotification_get_GroupSummary_m1BC2AC6F3DE40B306602D5DABFEA1CAFBED76EA2_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		bool L_89 = L_88;
		RuntimeObject * L_90 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_89);
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, L_90);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_90);
		NullCheck(L_85);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_91;
		L_91 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_85, _stringLiteral8FC7E3B9590667C5068E9E851357567AEEA3578B, L_87, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		NullCheck(L_91);
		AndroidJavaObject_Dispose_mFF9FA58B47A7FC0C083E034B364EAAE2E7282C45(L_91, /*hidden argument*/NULL);
	}

IL_0227:
	{
		// if (!string.IsNullOrEmpty(notification.SortKey))
		String_t* L_92;
		L_92 = AndroidNotification_get_SortKey_m2F51A80A8D61A86E05DBA8BC55F941B4DAAE25C8_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		bool L_93;
		L_93 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_92, /*hidden argument*/NULL);
		if (L_93)
		{
			goto IL_0255;
		}
	}
	{
		// notificationBuilder.Call<AndroidJavaObject>("setSortKey", notification.SortKey).Dispose();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_94 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_95 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_96 = L_95;
		String_t* L_97;
		L_97 = AndroidNotification_get_SortKey_m2F51A80A8D61A86E05DBA8BC55F941B4DAAE25C8_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, L_97);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_97);
		NullCheck(L_94);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_98;
		L_98 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_94, _stringLiteralF91A960CB813ACBB09046C8766F780B73B27BC7C, L_96, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		NullCheck(L_98);
		AndroidJavaObject_Dispose_mFF9FA58B47A7FC0C083E034B364EAAE2E7282C45(L_98, /*hidden argument*/NULL);
	}

IL_0255:
	{
		// notificationBuilder.Call<AndroidJavaObject>("setShowWhen", notification.ShowTimestamp).Dispose();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_99 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_100 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_101 = L_100;
		bool L_102;
		L_102 = AndroidNotification_get_ShowTimestamp_m4974F4442200DC1311A95ED3173B8EFEB07E10C6_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		bool L_103 = L_102;
		RuntimeObject * L_104 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_103);
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, L_104);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_104);
		NullCheck(L_99);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_105;
		L_105 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_99, _stringLiteral6C129EA550A36247CE9509C041D9D2BF744EA5A6, L_101, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		NullCheck(L_105);
		AndroidJavaObject_Dispose_mFF9FA58B47A7FC0C083E034B364EAAE2E7282C45(L_105, /*hidden argument*/NULL);
		// int color = notification.Color.ToInt();
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_106;
		L_106 = AndroidNotification_get_Color_mBBCAAD5E8A561583A30899B79071DC0E510931FA((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		int32_t L_107;
		L_107 = AndroidNotificationExtensions_ToInt_m145923D169D265B0EA179BFDB53703FC8901D276(L_106, /*hidden argument*/NULL);
		V_3 = L_107;
		// if (color != 0)
		int32_t L_108 = V_3;
		if (!L_108)
		{
			goto IL_02ac;
		}
	}
	{
		// s_NotificationManagerClass.CallStatic("setNotificationColor", notificationBuilder, color);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_109 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManagerClass_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_110 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_111 = L_110;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_112 = V_1;
		NullCheck(L_111);
		ArrayElementTypeCheck (L_111, L_112);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_112);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_113 = L_111;
		int32_t L_114 = V_3;
		int32_t L_115 = L_114;
		RuntimeObject * L_116 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_115);
		NullCheck(L_113);
		ArrayElementTypeCheck (L_113, L_116);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_116);
		NullCheck(L_109);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_109, _stringLiteral309475E2FD5CCC4B93075E4B2F688139336E3976, L_113, /*hidden argument*/NULL);
	}

IL_02ac:
	{
		// s_NotificationManagerClass.CallStatic("setNotificationUsesChronometer", notificationBuilder, notification.UsesStopwatch);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_117 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManagerClass_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_118 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_119 = L_118;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_120 = V_1;
		NullCheck(L_119);
		ArrayElementTypeCheck (L_119, L_120);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_120);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_121 = L_119;
		bool L_122;
		L_122 = AndroidNotification_get_UsesStopwatch_m2DC6B59CB2E8A12A104C5A5E9EB91B1AA2F62080_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		bool L_123 = L_122;
		RuntimeObject * L_124 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_123);
		NullCheck(L_121);
		ArrayElementTypeCheck (L_121, L_124);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_124);
		NullCheck(L_117);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_117, _stringLiteralF0531D8CE590C96ADED66DEADF41A647EC9B4879, L_121, /*hidden argument*/NULL);
		// s_NotificationManagerClass.CallStatic("setNotificationGroupAlertBehavior", notificationBuilder, (int)notification.GroupAlertBehaviour);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_125 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManagerClass_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_126 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_127 = L_126;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_128 = V_1;
		NullCheck(L_127);
		ArrayElementTypeCheck (L_127, L_128);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_128);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_129 = L_127;
		int32_t L_130;
		L_130 = AndroidNotification_get_GroupAlertBehaviour_m0DE3415FFE52E7DED47D2AAB021A772ED72633D5_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		int32_t L_131 = ((int32_t)L_130);
		RuntimeObject * L_132 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_131);
		NullCheck(L_129);
		ArrayElementTypeCheck (L_129, L_132);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_132);
		NullCheck(L_125);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_125, _stringLiteral2371502F77FC4E06CEA26C3019181A650BF2FE0A, L_129, /*hidden argument*/NULL);
		// using (var extras = notificationBuilder.Call<AndroidJavaObject>("getExtras"))
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_133 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_134;
		L_134 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_133);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_135;
		L_135 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_133, _stringLiteralF202BD9C29F9FE8967D2598978C59BC250D49ECC, L_134, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_5 = L_135;
	}

IL_030e:
	try
	{ // begin try (depth: 1)
		{
			// extras.Call("putInt", KEY_ID, id);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_136 = V_5;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_137 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_138 = L_137;
			IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_139 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_KEY_ID_13();
			NullCheck(L_138);
			ArrayElementTypeCheck (L_138, L_139);
			(L_138)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_139);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_140 = L_138;
			int32_t L_141 = ___id0;
			int32_t L_142 = L_141;
			RuntimeObject * L_143 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_142);
			NullCheck(L_140);
			ArrayElementTypeCheck (L_140, L_143);
			(L_140)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_143);
			NullCheck(L_136);
			AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_136, _stringLiteral2DE10CB9863FBD79A26BDD1E6581EC58F503024E, L_140, /*hidden argument*/NULL);
			// extras.Call("putLong", KEY_REPEAT_INTERVAL, notification.RepeatInterval.ToLong());
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_144 = V_5;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_145 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_146 = L_145;
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_147 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_KEY_REPEAT_INTERVAL_16();
			NullCheck(L_146);
			ArrayElementTypeCheck (L_146, L_147);
			(L_146)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_147);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_148 = L_146;
			Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  L_149;
			L_149 = AndroidNotification_get_RepeatInterval_m09D70F0C0E53A601CEFCB774039B32E5578EA59E((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
			int64_t L_150;
			L_150 = AndroidNotificationExtensions_ToLong_m17C90BDB52FAC47FAA4AA705CA37D13C1C4FD17A(L_149, /*hidden argument*/NULL);
			int64_t L_151 = L_150;
			RuntimeObject * L_152 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_151);
			NullCheck(L_148);
			ArrayElementTypeCheck (L_148, L_152);
			(L_148)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_152);
			NullCheck(L_144);
			AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_144, _stringLiteralDE9C9A97063C73F56F60488D14A05C3E7A4630EC, L_148, /*hidden argument*/NULL);
			// extras.Call("putLong", KEY_FIRE_TIME, fireTime);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_153 = V_5;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_154 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_155 = L_154;
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_156 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_KEY_FIRE_TIME_12();
			NullCheck(L_155);
			ArrayElementTypeCheck (L_155, L_156);
			(L_155)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_156);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_157 = L_155;
			int64_t L_158 = V_0;
			int64_t L_159 = L_158;
			RuntimeObject * L_160 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_159);
			NullCheck(L_157);
			ArrayElementTypeCheck (L_157, L_160);
			(L_157)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_160);
			NullCheck(L_153);
			AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_153, _stringLiteralDE9C9A97063C73F56F60488D14A05C3E7A4630EC, L_157, /*hidden argument*/NULL);
			// if (!string.IsNullOrEmpty(notification.IntentData))
			String_t* L_161;
			L_161 = AndroidNotification_get_IntentData_mF6A7FC46547F023CA9DE369AE45958D1563E6206_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
			bool L_162;
			L_162 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_161, /*hidden argument*/NULL);
			if (L_162)
			{
				goto IL_03b4;
			}
		}

IL_0390:
		{
			// extras.Call("putString", KEY_INTENT_DATA, notification.IntentData);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_163 = V_5;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_164 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_165 = L_164;
			IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_166 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_KEY_INTENT_DATA_14();
			NullCheck(L_165);
			ArrayElementTypeCheck (L_165, L_166);
			(L_165)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_166);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_167 = L_165;
			String_t* L_168;
			L_168 = AndroidNotification_get_IntentData_mF6A7FC46547F023CA9DE369AE45958D1563E6206_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
			NullCheck(L_167);
			ArrayElementTypeCheck (L_167, L_168);
			(L_167)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_168);
			NullCheck(L_163);
			AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_163, _stringLiteral4A885A89832F4E62C8E259AA47DF0907BB0C1ED3, L_167, /*hidden argument*/NULL);
		}

IL_03b4:
		{
			// }
			IL2CPP_LEAVE(0x3C2, FINALLY_03b6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_03b6;
	}

FINALLY_03b6:
	{ // begin finally (depth: 1)
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_169 = V_5;
			if (!L_169)
			{
				goto IL_03c1;
			}
		}

IL_03ba:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_170 = V_5;
			NullCheck(L_170);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_170);
		}

IL_03c1:
		{
			IL2CPP_END_FINALLY(950)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(950)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3C2, IL_03c2)
	}

IL_03c2:
	{
		// return notificationBuilder;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_171 = V_1;
		return L_171;
	}
}
// Unity.Notifications.Android.AndroidNotificationIntentData Unity.Notifications.Android.AndroidNotificationCenter::GetNotificationData(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * AndroidNotificationCenter_GetNotificationData_m3C0D28481E0DF0056046031BFE1DCC885815880D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___notificationObj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mFBBE4027C3B10CC9A3F370241DFC7A997C567B12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mAA20D556A954E5DB5CE7F883CA865350D567F7F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_mEED01FE01556CEBC892BFF795C919EFB26662D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4274AF175407D69253B9923A96C5257AA75AD49A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49E8F9D21CA9B5185CDC5F6ED185D72BA8DCC0CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5049D16B7CF18631FE8A78C554EE95423ABE2103);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C800E39CF656105FB08CCBDF7383FACFDB73DF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8287EADB7084004EF45B96CC3CE0643C79A55CD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9ED63726B3792A912D1DF4A5E4AEFDA0C6D02C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB51D9582FEA7F91BD3913A156D5F6C60CDF3C99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCD7A6F8806A71C95F4E8692E1F9FC209B82C5A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEADCD3C3021F28CA07F50C4363B7FA9428265172);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED4D3D8AFE804D2C2A2E71BE07B28F1C1FEFA1F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCAD6572759BA264A7B9B9106CCB401DB355CAD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFF2E3CA72364727F71AA5E2A535E3DD8A40037F);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * V_6 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_7 = NULL;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		// using (var extras = notificationObj.Get<AndroidJavaObject>("extras"))
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___notificationObj0;
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = AndroidJavaObject_Get_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mFBBE4027C3B10CC9A3F370241DFC7A997C567B12(L_0, _stringLiteral7C800E39CF656105FB08CCBDF7383FACFDB73DF7, /*hidden argument*/AndroidJavaObject_Get_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mFBBE4027C3B10CC9A3F370241DFC7A997C567B12_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			// var id = extras.Call<int>("getInt", KEY_ID, -1);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = V_0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
			IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_KEY_ID_13();
			NullCheck(L_4);
			ArrayElementTypeCheck (L_4, L_5);
			(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
			int32_t L_7 = (-1);
			RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
			NullCheck(L_6);
			ArrayElementTypeCheck (L_6, L_8);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
			NullCheck(L_2);
			int32_t L_9;
			L_9 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A(L_2, _stringLiteralFFF2E3CA72364727F71AA5E2A535E3DD8A40037F, L_6, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
			V_1 = L_9;
			// if (id == -1)
			int32_t L_10 = V_1;
			if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
			{
				goto IL_003b;
			}
		}

IL_0033:
		{
			// return null;
			V_6 = (AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 *)NULL;
			IL2CPP_LEAVE(0x311, FINALLY_0307);
		}

IL_003b:
		{
			// var channelId = s_NotificationManagerClass.CallStatic<string>("getNotificationChannelId", notificationObj);
			IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_11 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManagerClass_1();
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_12;
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_14 = ___notificationObj0;
			NullCheck(L_13);
			ArrayElementTypeCheck (L_13, L_14);
			(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_14);
			NullCheck(L_11);
			String_t* L_15;
			L_15 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_11, _stringLiteralBB51D9582FEA7F91BD3913A156D5F6C60CDF3C99, L_13, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
			V_2 = L_15;
			// int flags = notificationObj.Get<int>("flags");
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_16 = ___notificationObj0;
			NullCheck(L_16);
			int32_t L_17;
			L_17 = AndroidJavaObject_Get_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mAA20D556A954E5DB5CE7F883CA865350D567F7F6(L_16, _stringLiteralFCAD6572759BA264A7B9B9106CCB401DB355CAD7, /*hidden argument*/AndroidJavaObject_Get_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mAA20D556A954E5DB5CE7F883CA865350D567F7F6_RuntimeMethod_var);
			V_3 = L_17;
			// var notification = new AndroidNotification();
			il2cpp_codegen_initobj((&V_4), sizeof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 ));
			// notification.Title = extras.Call<string>("getString", Notification_EXTRA_TITLE);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_18 = V_0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_19;
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_21 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_Notification_EXTRA_TITLE_5();
			NullCheck(L_20);
			ArrayElementTypeCheck (L_20, L_21);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
			NullCheck(L_18);
			String_t* L_22;
			L_22 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_18, _stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A, L_20, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
			AndroidNotification_set_Title_m8F3CD2493CE4E1146CCF0FB5A22693A83189B2BF_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_4), L_22, /*hidden argument*/NULL);
			// notification.Text = extras.Call<string>("getString", Notification_EXTRA_TEXT);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_23 = V_0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = L_24;
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_26 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_Notification_EXTRA_TEXT_6();
			NullCheck(L_25);
			ArrayElementTypeCheck (L_25, L_26);
			(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_26);
			NullCheck(L_23);
			String_t* L_27;
			L_27 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_23, _stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A, L_25, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
			AndroidNotification_set_Text_mBFBF1951A5506A2442A519F044F5D6657B04F04B_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_4), L_27, /*hidden argument*/NULL);
			// notification.SmallIcon = extras.Call<string>("getString", KEY_SMALL_ICON);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_28 = V_0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = L_29;
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_31 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_KEY_SMALL_ICON_18();
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_31);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_31);
			NullCheck(L_28);
			String_t* L_32;
			L_32 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_28, _stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A, L_30, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
			AndroidNotification_set_SmallIcon_m8994CFB6F9F7CD57B11F0C9B85032538CC1F7CA9_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_4), L_32, /*hidden argument*/NULL);
			// notification.LargeIcon = extras.Call<string>("getString", KEY_LARGE_ICON);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_33 = V_0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_34 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_35 = L_34;
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_36 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_KEY_LARGE_ICON_15();
			NullCheck(L_35);
			ArrayElementTypeCheck (L_35, L_36);
			(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_36);
			NullCheck(L_33);
			String_t* L_37;
			L_37 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_33, _stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A, L_35, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
			AndroidNotification_set_LargeIcon_m451EF5AA763036228687978F544A988DD5B521C5_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_4), L_37, /*hidden argument*/NULL);
			// notification.ShouldAutoCancel = 0 != (flags & Notification_FLAG_AUTO_CANCEL);
			int32_t L_38 = V_3;
			int32_t L_39 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_Notification_FLAG_AUTO_CANCEL_10();
			AndroidNotification_set_ShouldAutoCancel_mC5CDEF3BD3D064831BE0B70C65EDD17B3157111A_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_4), (bool)((!(((uint32_t)((int32_t)((int32_t)L_38&(int32_t)L_39))) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
			// notification.UsesStopwatch = extras.Call<bool>("getBoolean", Notification_EXTRA_SHOW_CHRONOMETER, false);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_40 = V_0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_41 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_42 = L_41;
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_43 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_Notification_EXTRA_SHOW_CHRONOMETER_7();
			NullCheck(L_42);
			ArrayElementTypeCheck (L_42, L_43);
			(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_43);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_44 = L_42;
			bool L_45 = ((bool)0);
			RuntimeObject * L_46 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_45);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_46);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_46);
			NullCheck(L_40);
			bool L_47;
			L_47 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_40, _stringLiteral8287EADB7084004EF45B96CC3CE0643C79A55CD4, L_44, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
			AndroidNotification_set_UsesStopwatch_m55FC26AC094CC99D22432104A6C7AC3C629A1CA1_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_4), L_47, /*hidden argument*/NULL);
			// notification.FireTime = extras.Call<long>("getLong", KEY_FIRE_TIME, -1L).ToDatetime();
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_48 = V_0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_49 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_50 = L_49;
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_51 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_KEY_FIRE_TIME_12();
			NullCheck(L_50);
			ArrayElementTypeCheck (L_50, L_51);
			(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_51);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_52 = L_50;
			int64_t L_53 = ((int64_t)((int64_t)(-1)));
			RuntimeObject * L_54 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_53);
			NullCheck(L_52);
			ArrayElementTypeCheck (L_52, L_54);
			(L_52)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_54);
			NullCheck(L_48);
			int64_t L_55;
			L_55 = AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787(L_48, _stringLiteral4274AF175407D69253B9923A96C5257AA75AD49A, L_52, /*hidden argument*/AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_RuntimeMethod_var);
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_56;
			L_56 = AndroidNotificationExtensions_ToDatetime_m800EBFECFB1908CCAEF03513C58468E7845F0F43(L_55, /*hidden argument*/NULL);
			AndroidNotification_set_FireTime_mB28FFB7F25BA44F896EB8C6289DCCF6603224C78_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_4), L_56, /*hidden argument*/NULL);
			// notification.RepeatInterval = extras.Call<long>("getLong", KEY_REPEAT_INTERVAL, -1L).ToTimeSpan();
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_57 = V_0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_58 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_59 = L_58;
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_60 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_KEY_REPEAT_INTERVAL_16();
			NullCheck(L_59);
			ArrayElementTypeCheck (L_59, L_60);
			(L_59)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_60);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_61 = L_59;
			int64_t L_62 = ((int64_t)((int64_t)(-1)));
			RuntimeObject * L_63 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_62);
			NullCheck(L_61);
			ArrayElementTypeCheck (L_61, L_63);
			(L_61)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_63);
			NullCheck(L_57);
			int64_t L_64;
			L_64 = AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787(L_57, _stringLiteral4274AF175407D69253B9923A96C5257AA75AD49A, L_61, /*hidden argument*/AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_RuntimeMethod_var);
			TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_65;
			L_65 = AndroidNotificationExtensions_ToTimeSpan_m82F05A65D739796F7E94F26566170DBCC56D1DD6(L_64, /*hidden argument*/NULL);
			Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  L_66;
			memset((&L_66), 0, sizeof(L_66));
			Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D((&L_66), L_65, /*hidden argument*/Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_RuntimeMethod_var);
			AndroidNotification_set_RepeatInterval_m0FDA4870F0D148570B6D24034475E19965BD9E1F((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_4), L_66, /*hidden argument*/NULL);
			// if (extras.Call<bool>("containsKey", Notification_EXTRA_BIG_TEXT))
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_67 = V_0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_68 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_69 = L_68;
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_70 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_Notification_EXTRA_BIG_TEXT_8();
			NullCheck(L_69);
			ArrayElementTypeCheck (L_69, L_70);
			(L_69)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_70);
			NullCheck(L_67);
			bool L_71;
			L_71 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_67, _stringLiteralCCD7A6F8806A71C95F4E8692E1F9FC209B82C5A2, L_69, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
			if (!L_71)
			{
				goto IL_01ab;
			}
		}

IL_01a1:
		{
			// notification.Style = NotificationStyle.BigTextStyle;
			AndroidNotification_set_Style_m98FB64EF2F07E24EB0B7328F685E2597AA8E8202_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_4), 2, /*hidden argument*/NULL);
			goto IL_01b3;
		}

IL_01ab:
		{
			// notification.Style = NotificationStyle.None;
			AndroidNotification_set_Style_m98FB64EF2F07E24EB0B7328F685E2597AA8E8202_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_4), 0, /*hidden argument*/NULL);
		}

IL_01b3:
		{
			// using (var color = s_NotificationManagerClass.CallStatic<AndroidJavaObject>("getNotificationColor", notificationObj))
			IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_72 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManagerClass_1();
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_73 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_74 = L_73;
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_75 = ___notificationObj0;
			NullCheck(L_74);
			ArrayElementTypeCheck (L_74, L_75);
			(L_74)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_75);
			NullCheck(L_72);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_76;
			L_76 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2(L_72, _stringLiteralED4D3D8AFE804D2C2A2E71BE07B28F1C1FEFA1F8, L_74, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
			V_7 = L_76;
		}

IL_01ce:
		try
		{ // begin try (depth: 2)
			{
				// if (color == null)
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_77 = V_7;
				if (L_77)
				{
					goto IL_01e5;
				}
			}

IL_01d2:
			{
				// notification.Color = null;
				il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 ));
				Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_78 = V_8;
				AndroidNotification_set_Color_mACFEDF1A3E4EEDFBD972DAFFF28B323807431561((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_4), L_78, /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x215, FINALLY_0209);
			}

IL_01e5:
			{
				// notification.Color = color.Call<int>("intValue").ToColor();
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_79 = V_7;
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_80;
				L_80 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
				NullCheck(L_79);
				int32_t L_81;
				L_81 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A(L_79, _stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A, L_80, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_82;
				L_82 = AndroidNotificationExtensions_ToColor_m4F0AC1E486292491D63BED6EDD5F27C28D3666E5(L_81, /*hidden argument*/NULL);
				Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_83;
				memset((&L_83), 0, sizeof(L_83));
				Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9((&L_83), L_82, /*hidden argument*/Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var);
				AndroidNotification_set_Color_mACFEDF1A3E4EEDFBD972DAFFF28B323807431561((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_4), L_83, /*hidden argument*/NULL);
				// }
				IL2CPP_LEAVE(0x215, FINALLY_0209);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0209;
		}

FINALLY_0209:
		{ // begin finally (depth: 2)
			{
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_84 = V_7;
				if (!L_84)
				{
					goto IL_0214;
				}
			}

IL_020d:
			{
				AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_85 = V_7;
				NullCheck(L_85);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_85);
			}

IL_0214:
			{
				IL2CPP_END_FINALLY(521)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(521)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x215, IL_0215)
		}

IL_0215:
		{
			// notification.Number = notificationObj.Get<int>("number");
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_86 = ___notificationObj0;
			NullCheck(L_86);
			int32_t L_87;
			L_87 = AndroidJavaObject_Get_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mAA20D556A954E5DB5CE7F883CA865350D567F7F6(L_86, _stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741, /*hidden argument*/AndroidJavaObject_Get_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mAA20D556A954E5DB5CE7F883CA865350D567F7F6_RuntimeMethod_var);
			AndroidNotification_set_Number_m8C6ADBFE6516F90F69096FBD9862480969128142_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_4), L_87, /*hidden argument*/NULL);
			// notification.IntentData = extras.Call<string>("getString", KEY_INTENT_DATA);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_88 = V_0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_89 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_90 = L_89;
			IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_91 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_KEY_INTENT_DATA_14();
			NullCheck(L_90);
			ArrayElementTypeCheck (L_90, L_91);
			(L_90)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_91);
			NullCheck(L_88);
			String_t* L_92;
			L_92 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_88, _stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A, L_90, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
			AndroidNotification_set_IntentData_m5F25F77921D71A8CE4177FEC32784518A7DA251A_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_4), L_92, /*hidden argument*/NULL);
			// notification.Group = notificationObj.Call<string>("getGroup");
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_93 = ___notificationObj0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_94;
			L_94 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
			NullCheck(L_93);
			String_t* L_95;
			L_95 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_93, _stringLiteral49E8F9D21CA9B5185CDC5F6ED185D72BA8DCC0CB, L_94, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
			AndroidNotification_set_Group_m76EC700DCF7554BE82F92EC7A7E2513B1FF9E959_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_4), L_95, /*hidden argument*/NULL);
			// notification.GroupSummary = 0 != (flags & Notification_FLAG_GROUP_SUMMARY);
			int32_t L_96 = V_3;
			int32_t L_97 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_Notification_FLAG_GROUP_SUMMARY_11();
			AndroidNotification_set_GroupSummary_m906CAB0D3329BC8F6DF1582E66A55F98372B9B56_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_4), (bool)((!(((uint32_t)((int32_t)((int32_t)L_96&(int32_t)L_97))) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
			// notification.SortKey = notificationObj.Call<string>("getSortKey");
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_98 = ___notificationObj0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_99;
			L_99 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
			NullCheck(L_98);
			String_t* L_100;
			L_100 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_98, _stringLiteral5049D16B7CF18631FE8A78C554EE95423ABE2103, L_99, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
			AndroidNotification_set_SortKey_m20919DC31CFF55EB4CC3C4FE2C7CC5DA24EC8EBB_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_4), L_100, /*hidden argument*/NULL);
			// notification.GroupAlertBehaviour = s_NotificationManagerClass.CallStatic<int>("getNotificationGroupAlertBehavior", notificationObj).ToGroupAlertBehaviours();
			AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_101 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManagerClass_1();
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_102 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_103 = L_102;
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_104 = ___notificationObj0;
			NullCheck(L_103);
			ArrayElementTypeCheck (L_103, L_104);
			(L_103)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_104);
			NullCheck(L_101);
			int32_t L_105;
			L_105 = AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63(L_101, _stringLiteralEADCD3C3021F28CA07F50C4363B7FA9428265172, L_103, /*hidden argument*/AndroidJavaObject_CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mE6C2E19D140FDCD9C8736017AAA61A16904ADD63_RuntimeMethod_var);
			int32_t L_106;
			L_106 = AndroidNotificationExtensions_ToGroupAlertBehaviours_m6BE71EE671DDF13C9333E8D84FA1C8F95A773624(L_105, /*hidden argument*/NULL);
			AndroidNotification_set_GroupAlertBehaviour_m0F6F30DF3CC18235A42B05ADE3293368FDA9265C_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_4), L_106, /*hidden argument*/NULL);
			// var showTimestamp = extras.Call<bool>("getBoolean", Notification_EXTRA_SHOW_WHEN, false);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_107 = V_0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_108 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_109 = L_108;
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_110 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_Notification_EXTRA_SHOW_WHEN_9();
			NullCheck(L_109);
			ArrayElementTypeCheck (L_109, L_110);
			(L_109)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_110);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_111 = L_109;
			bool L_112 = ((bool)0);
			RuntimeObject * L_113 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_112);
			NullCheck(L_111);
			ArrayElementTypeCheck (L_111, L_113);
			(L_111)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_113);
			NullCheck(L_107);
			bool L_114;
			L_114 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_107, _stringLiteral8287EADB7084004EF45B96CC3CE0643C79A55CD4, L_111, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
			V_5 = L_114;
			// notification.ShowTimestamp = showTimestamp;
			bool L_115 = V_5;
			AndroidNotification_set_ShowTimestamp_m223E5FACC5678ECE1CC21B76F961170A0C6DC49B_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_4), L_115, /*hidden argument*/NULL);
			// if (showTimestamp)
			bool L_116 = V_5;
			if (!L_116)
			{
				goto IL_02f3;
			}
		}

IL_02dc:
		{
			// notification.CustomTimestamp = notificationObj.Get<long>("when").ToDatetime();
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_117 = ___notificationObj0;
			NullCheck(L_117);
			int64_t L_118;
			L_118 = AndroidJavaObject_Get_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_mEED01FE01556CEBC892BFF795C919EFB26662D9B(L_117, _stringLiteralB9ED63726B3792A912D1DF4A5E4AEFDA0C6D02C9, /*hidden argument*/AndroidJavaObject_Get_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_mEED01FE01556CEBC892BFF795C919EFB26662D9B_RuntimeMethod_var);
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_119;
			L_119 = AndroidNotificationExtensions_ToDatetime_m800EBFECFB1908CCAEF03513C58468E7845F0F43(L_118, /*hidden argument*/NULL);
			AndroidNotification_set_CustomTimestamp_m6A8B9111B4110EE13EA1041B39FA213783C43313((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_4), L_119, /*hidden argument*/NULL);
		}

IL_02f3:
		{
			// var data = new AndroidNotificationIntentData(id, channelId, notification);
			int32_t L_120 = V_1;
			String_t* L_121 = V_2;
			AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  L_122 = V_4;
			AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * L_123 = (AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 *)il2cpp_codegen_object_new(AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521_il2cpp_TypeInfo_var);
			AndroidNotificationIntentData__ctor_mFA0B24EADF0B8CCAC424B598B7C75C99CAF0C80B(L_123, L_120, L_121, L_122, /*hidden argument*/NULL);
			// data.NativeNotification = notificationObj;
			AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * L_124 = L_123;
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_125 = ___notificationObj0;
			NullCheck(L_124);
			AndroidNotificationIntentData_set_NativeNotification_mC6E6623C3B3E5ECA199E2287FDD71FA139DB3E6C_inline(L_124, L_125, /*hidden argument*/NULL);
			// return data;
			V_6 = L_124;
			IL2CPP_LEAVE(0x311, FINALLY_0307);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0307;
	}

FINALLY_0307:
	{ // begin finally (depth: 1)
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_126 = V_0;
			if (!L_126)
			{
				goto IL_0310;
			}
		}

IL_030a:
		{
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_127 = V_0;
			NullCheck(L_127);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_127);
		}

IL_0310:
		{
			IL2CPP_END_FINALLY(775)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(775)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x311, IL_0311)
	}

IL_0311:
	{
		// }
		AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * L_128 = V_6;
		return L_128;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::ReceivedNotificationCallback(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_ReceivedNotificationCallback_mF925FF2B7DDD6D1EE601205F3CF14A2B6F5318DF (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___notification0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * V_0 = NULL;
	{
		// var data = GetNotificationData(notification);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___notification0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * L_1;
		L_1 = AndroidNotificationCenter_GetNotificationData_m3C0D28481E0DF0056046031BFE1DCC885815880D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// OnNotificationReceived(data);
		NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * L_2 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_OnNotificationReceived_0();
		AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * L_3 = V_0;
		NullCheck(L_2);
		NotificationReceivedCallback_Invoke_m3BA17AB01D93A0BD7B529EB155CA9B7930DBA3AB(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter__cctor_m5F22B4F9AA8FCDF901A9EF1D5F1CD7A5F293C537 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__45_0_m6D11B16862187BF87B3B9D74C42A4048CC07267D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static event NotificationReceivedCallback OnNotificationReceived = delegate { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4_il2cpp_TypeInfo_var);
		U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4 * L_0 = ((U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * L_1 = (NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 *)il2cpp_codegen_object_new(NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_m076EC8CB3D125E921A77A3FCDEC8CBBBA95407AC(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__45_0_m6D11B16862187BF87B3B9D74C42A4048CC07267D_RuntimeMethod_var), /*hidden argument*/NULL);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_OnNotificationReceived_0(L_1);
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
// Conversion methods for marshalling of: Unity.Notifications.Android.AndroidNotificationChannel
IL2CPP_EXTERN_C void AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshal_pinvoke(const AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1& unmarshaled, AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CIdU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CIdU3Ek__BackingField_0());
	marshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CNameU3Ek__BackingField_1());
	marshaled.___U3CDescriptionU3Ek__BackingField_2 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CDescriptionU3Ek__BackingField_2());
	marshaled.___U3CImportanceU3Ek__BackingField_3 = unmarshaled.get_U3CImportanceU3Ek__BackingField_3();
	marshaled.___U3CCanBypassDndU3Ek__BackingField_4 = static_cast<int32_t>(unmarshaled.get_U3CCanBypassDndU3Ek__BackingField_4());
	marshaled.___U3CCanShowBadgeU3Ek__BackingField_5 = static_cast<int32_t>(unmarshaled.get_U3CCanShowBadgeU3Ek__BackingField_5());
	marshaled.___U3CEnableLightsU3Ek__BackingField_6 = static_cast<int32_t>(unmarshaled.get_U3CEnableLightsU3Ek__BackingField_6());
	marshaled.___U3CEnableVibrationU3Ek__BackingField_7 = static_cast<int32_t>(unmarshaled.get_U3CEnableVibrationU3Ek__BackingField_7());
	marshaled.___U3CVibrationPatternU3Ek__BackingField_8 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I8, unmarshaled.get_U3CVibrationPatternU3Ek__BackingField_8());
	marshaled.___U3CLockScreenVisibilityU3Ek__BackingField_9 = unmarshaled.get_U3CLockScreenVisibilityU3Ek__BackingField_9();
}
IL2CPP_EXTERN_C void AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshal_pinvoke_back(const AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshaled_pinvoke& marshaled, AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_U3CIdU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CIdU3Ek__BackingField_0));
	unmarshaled.set_U3CNameU3Ek__BackingField_1(il2cpp_codegen_marshal_string_result(marshaled.___U3CNameU3Ek__BackingField_1));
	unmarshaled.set_U3CDescriptionU3Ek__BackingField_2(il2cpp_codegen_marshal_string_result(marshaled.___U3CDescriptionU3Ek__BackingField_2));
	int32_t unmarshaled_U3CImportanceU3Ek__BackingField_temp_3 = 0;
	unmarshaled_U3CImportanceU3Ek__BackingField_temp_3 = marshaled.___U3CImportanceU3Ek__BackingField_3;
	unmarshaled.set_U3CImportanceU3Ek__BackingField_3(unmarshaled_U3CImportanceU3Ek__BackingField_temp_3);
	bool unmarshaled_U3CCanBypassDndU3Ek__BackingField_temp_4 = false;
	unmarshaled_U3CCanBypassDndU3Ek__BackingField_temp_4 = static_cast<bool>(marshaled.___U3CCanBypassDndU3Ek__BackingField_4);
	unmarshaled.set_U3CCanBypassDndU3Ek__BackingField_4(unmarshaled_U3CCanBypassDndU3Ek__BackingField_temp_4);
	bool unmarshaled_U3CCanShowBadgeU3Ek__BackingField_temp_5 = false;
	unmarshaled_U3CCanShowBadgeU3Ek__BackingField_temp_5 = static_cast<bool>(marshaled.___U3CCanShowBadgeU3Ek__BackingField_5);
	unmarshaled.set_U3CCanShowBadgeU3Ek__BackingField_5(unmarshaled_U3CCanShowBadgeU3Ek__BackingField_temp_5);
	bool unmarshaled_U3CEnableLightsU3Ek__BackingField_temp_6 = false;
	unmarshaled_U3CEnableLightsU3Ek__BackingField_temp_6 = static_cast<bool>(marshaled.___U3CEnableLightsU3Ek__BackingField_6);
	unmarshaled.set_U3CEnableLightsU3Ek__BackingField_6(unmarshaled_U3CEnableLightsU3Ek__BackingField_temp_6);
	bool unmarshaled_U3CEnableVibrationU3Ek__BackingField_temp_7 = false;
	unmarshaled_U3CEnableVibrationU3Ek__BackingField_temp_7 = static_cast<bool>(marshaled.___U3CEnableVibrationU3Ek__BackingField_7);
	unmarshaled.set_U3CEnableVibrationU3Ek__BackingField_7(unmarshaled_U3CEnableVibrationU3Ek__BackingField_temp_7);
	unmarshaled.set_U3CVibrationPatternU3Ek__BackingField_8((Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I8, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, marshaled.___U3CVibrationPatternU3Ek__BackingField_8));
	int32_t unmarshaled_U3CLockScreenVisibilityU3Ek__BackingField_temp_9 = 0;
	unmarshaled_U3CLockScreenVisibilityU3Ek__BackingField_temp_9 = marshaled.___U3CLockScreenVisibilityU3Ek__BackingField_9;
	unmarshaled.set_U3CLockScreenVisibilityU3Ek__BackingField_9(unmarshaled_U3CLockScreenVisibilityU3Ek__BackingField_temp_9);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.AndroidNotificationChannel
IL2CPP_EXTERN_C void AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshal_pinvoke_cleanup(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CIdU3Ek__BackingField_0);
	marshaled.___U3CIdU3Ek__BackingField_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___U3CNameU3Ek__BackingField_1);
	marshaled.___U3CNameU3Ek__BackingField_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___U3CDescriptionU3Ek__BackingField_2);
	marshaled.___U3CDescriptionU3Ek__BackingField_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___U3CVibrationPatternU3Ek__BackingField_8);
	marshaled.___U3CVibrationPatternU3Ek__BackingField_8 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.Android.AndroidNotificationChannel
IL2CPP_EXTERN_C void AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshal_com(const AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1& unmarshaled, AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshaled_com& marshaled)
{
	marshaled.___U3CIdU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CIdU3Ek__BackingField_0());
	marshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CNameU3Ek__BackingField_1());
	marshaled.___U3CDescriptionU3Ek__BackingField_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CDescriptionU3Ek__BackingField_2());
	marshaled.___U3CImportanceU3Ek__BackingField_3 = unmarshaled.get_U3CImportanceU3Ek__BackingField_3();
	marshaled.___U3CCanBypassDndU3Ek__BackingField_4 = static_cast<int32_t>(unmarshaled.get_U3CCanBypassDndU3Ek__BackingField_4());
	marshaled.___U3CCanShowBadgeU3Ek__BackingField_5 = static_cast<int32_t>(unmarshaled.get_U3CCanShowBadgeU3Ek__BackingField_5());
	marshaled.___U3CEnableLightsU3Ek__BackingField_6 = static_cast<int32_t>(unmarshaled.get_U3CEnableLightsU3Ek__BackingField_6());
	marshaled.___U3CEnableVibrationU3Ek__BackingField_7 = static_cast<int32_t>(unmarshaled.get_U3CEnableVibrationU3Ek__BackingField_7());
	marshaled.___U3CVibrationPatternU3Ek__BackingField_8 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I8, unmarshaled.get_U3CVibrationPatternU3Ek__BackingField_8());
	marshaled.___U3CLockScreenVisibilityU3Ek__BackingField_9 = unmarshaled.get_U3CLockScreenVisibilityU3Ek__BackingField_9();
}
IL2CPP_EXTERN_C void AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshal_com_back(const AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshaled_com& marshaled, AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_U3CIdU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CIdU3Ek__BackingField_0));
	unmarshaled.set_U3CNameU3Ek__BackingField_1(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CNameU3Ek__BackingField_1));
	unmarshaled.set_U3CDescriptionU3Ek__BackingField_2(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CDescriptionU3Ek__BackingField_2));
	int32_t unmarshaled_U3CImportanceU3Ek__BackingField_temp_3 = 0;
	unmarshaled_U3CImportanceU3Ek__BackingField_temp_3 = marshaled.___U3CImportanceU3Ek__BackingField_3;
	unmarshaled.set_U3CImportanceU3Ek__BackingField_3(unmarshaled_U3CImportanceU3Ek__BackingField_temp_3);
	bool unmarshaled_U3CCanBypassDndU3Ek__BackingField_temp_4 = false;
	unmarshaled_U3CCanBypassDndU3Ek__BackingField_temp_4 = static_cast<bool>(marshaled.___U3CCanBypassDndU3Ek__BackingField_4);
	unmarshaled.set_U3CCanBypassDndU3Ek__BackingField_4(unmarshaled_U3CCanBypassDndU3Ek__BackingField_temp_4);
	bool unmarshaled_U3CCanShowBadgeU3Ek__BackingField_temp_5 = false;
	unmarshaled_U3CCanShowBadgeU3Ek__BackingField_temp_5 = static_cast<bool>(marshaled.___U3CCanShowBadgeU3Ek__BackingField_5);
	unmarshaled.set_U3CCanShowBadgeU3Ek__BackingField_5(unmarshaled_U3CCanShowBadgeU3Ek__BackingField_temp_5);
	bool unmarshaled_U3CEnableLightsU3Ek__BackingField_temp_6 = false;
	unmarshaled_U3CEnableLightsU3Ek__BackingField_temp_6 = static_cast<bool>(marshaled.___U3CEnableLightsU3Ek__BackingField_6);
	unmarshaled.set_U3CEnableLightsU3Ek__BackingField_6(unmarshaled_U3CEnableLightsU3Ek__BackingField_temp_6);
	bool unmarshaled_U3CEnableVibrationU3Ek__BackingField_temp_7 = false;
	unmarshaled_U3CEnableVibrationU3Ek__BackingField_temp_7 = static_cast<bool>(marshaled.___U3CEnableVibrationU3Ek__BackingField_7);
	unmarshaled.set_U3CEnableVibrationU3Ek__BackingField_7(unmarshaled_U3CEnableVibrationU3Ek__BackingField_temp_7);
	unmarshaled.set_U3CVibrationPatternU3Ek__BackingField_8((Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I8, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, marshaled.___U3CVibrationPatternU3Ek__BackingField_8));
	int32_t unmarshaled_U3CLockScreenVisibilityU3Ek__BackingField_temp_9 = 0;
	unmarshaled_U3CLockScreenVisibilityU3Ek__BackingField_temp_9 = marshaled.___U3CLockScreenVisibilityU3Ek__BackingField_9;
	unmarshaled.set_U3CLockScreenVisibilityU3Ek__BackingField_9(unmarshaled_U3CLockScreenVisibilityU3Ek__BackingField_temp_9);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.AndroidNotificationChannel
IL2CPP_EXTERN_C void AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshal_com_cleanup(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CIdU3Ek__BackingField_0);
	marshaled.___U3CIdU3Ek__BackingField_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CNameU3Ek__BackingField_1);
	marshaled.___U3CNameU3Ek__BackingField_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CDescriptionU3Ek__BackingField_2);
	marshaled.___U3CDescriptionU3Ek__BackingField_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___U3CVibrationPatternU3Ek__BackingField_8);
	marshaled.___U3CVibrationPatternU3Ek__BackingField_8 = NULL;
}
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Id_m8414CCF73AAE88237B22CEC99C72246ECFB476B7 (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotificationChannel_get_Id_m8414CCF73AAE88237B22CEC99C72246ECFB476B7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotificationChannel_get_Id_m8414CCF73AAE88237B22CEC99C72246ECFB476B7_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Id_mBA4BD4BBEDEC34758C2135CA09EB2F229D7799BA (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_Id_mBA4BD4BBEDEC34758C2135CA09EB2F229D7799BA_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	AndroidNotificationChannel_set_Id_mBA4BD4BBEDEC34758C2135CA09EB2F229D7799BA_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Name_m0AA10F1025091D228921E87AADD2047E7411091A (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotificationChannel_get_Name_m0AA10F1025091D228921E87AADD2047E7411091A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotificationChannel_get_Name_m0AA10F1025091D228921E87AADD2047E7411091A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Name_m9C30D7E82CEC2028A0FA2E21127767027CBC5BC8 (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_Name_m9C30D7E82CEC2028A0FA2E21127767027CBC5BC8_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	AndroidNotificationChannel_set_Name_m9C30D7E82CEC2028A0FA2E21127767027CBC5BC8_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Description_m4628FD745E0AB56D1CA3736561A3AE392134F3D8 (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public string Description { get; set; }
		String_t* L_0 = __this->get_U3CDescriptionU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotificationChannel_get_Description_m4628FD745E0AB56D1CA3736561A3AE392134F3D8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotificationChannel_get_Description_m4628FD745E0AB56D1CA3736561A3AE392134F3D8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Description_m895FC16334428373C8D15D893611F32077599CD1 (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Description { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CDescriptionU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_Description_m895FC16334428373C8D15D893611F32077599CD1_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	AndroidNotificationChannel_set_Description_m895FC16334428373C8D15D893611F32077599CD1_inline(_thisAdjusted, ___value0, method);
}
// Unity.Notifications.Android.Importance Unity.Notifications.Android.AndroidNotificationChannel::get_Importance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_Importance_m9CCC8F1DAEC8EDA86D4651F5B5E77DADDEBCA124 (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public Importance Importance { get; set; }
		int32_t L_0 = __this->get_U3CImportanceU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AndroidNotificationChannel_get_Importance_m9CCC8F1DAEC8EDA86D4651F5B5E77DADDEBCA124_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AndroidNotificationChannel_get_Importance_m9CCC8F1DAEC8EDA86D4651F5B5E77DADDEBCA124_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Importance(Unity.Notifications.Android.Importance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Importance_mED3F8A45E4DE2B1085753FC57CAF56CF0DD56DEB (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Importance Importance { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CImportanceU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_Importance_mED3F8A45E4DE2B1085753FC57CAF56CF0DD56DEB_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	AndroidNotificationChannel_set_Importance_mED3F8A45E4DE2B1085753FC57CAF56CF0DD56DEB_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_CanBypassDnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanBypassDnd_mF5039966BD760C9431BCEF955301B65037ECAF84 (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public bool CanBypassDnd { get; set; }
		bool L_0 = __this->get_U3CCanBypassDndU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotificationChannel_get_CanBypassDnd_mF5039966BD760C9431BCEF955301B65037ECAF84_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotificationChannel_get_CanBypassDnd_mF5039966BD760C9431BCEF955301B65037ECAF84_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_CanShowBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanShowBadge_mADC2608F5FA0EE2DA01CE2C48DE746C013629484 (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public bool CanShowBadge { get; set; }
		bool L_0 = __this->get_U3CCanShowBadgeU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotificationChannel_get_CanShowBadge_mADC2608F5FA0EE2DA01CE2C48DE746C013629484_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotificationChannel_get_CanShowBadge_mADC2608F5FA0EE2DA01CE2C48DE746C013629484_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_EnableLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableLights_m940E7B2298ABA231695828C6ECE983230AE85997 (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public bool EnableLights { get; set; }
		bool L_0 = __this->get_U3CEnableLightsU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotificationChannel_get_EnableLights_m940E7B2298ABA231695828C6ECE983230AE85997_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotificationChannel_get_EnableLights_m940E7B2298ABA231695828C6ECE983230AE85997_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_EnableVibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableVibration_mB2D0633D3475651540736DD2685498E159622ECD (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public bool EnableVibration { get; set; }
		bool L_0 = __this->get_U3CEnableVibrationU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotificationChannel_get_EnableVibration_mB2D0633D3475651540736DD2685498E159622ECD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotificationChannel_get_EnableVibration_mB2D0633D3475651540736DD2685498E159622ECD_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int64[] Unity.Notifications.Android.AndroidNotificationChannel::get_VibrationPattern()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* AndroidNotificationChannel_get_VibrationPattern_m4E735D10633F66025E9387CC4B811565892148F7 (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public long[] VibrationPattern { get; set; }
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_0 = __this->get_U3CVibrationPatternU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* AndroidNotificationChannel_get_VibrationPattern_m4E735D10633F66025E9387CC4B811565892148F7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* _returnValue;
	_returnValue = AndroidNotificationChannel_get_VibrationPattern_m4E735D10633F66025E9387CC4B811565892148F7_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Notifications.Android.LockScreenVisibility Unity.Notifications.Android.AndroidNotificationChannel::get_LockScreenVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_LockScreenVisibility_mD57C1C54E1E7BDFFDC7B676887730E72A742F09F (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public LockScreenVisibility LockScreenVisibility { get; set; }
		int32_t L_0 = __this->get_U3CLockScreenVisibilityU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AndroidNotificationChannel_get_LockScreenVisibility_mD57C1C54E1E7BDFFDC7B676887730E72A742F09F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AndroidNotificationChannel_get_LockScreenVisibility_mD57C1C54E1E7BDFFDC7B676887730E72A742F09F_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Notifications.Android.GroupAlertBehaviours Unity.Notifications.Android.AndroidNotificationExtensions::ToGroupAlertBehaviours(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToGroupAlertBehaviours_m6BE71EE671DDF13C9333E8D84FA1C8F95A773624 (int32_t ___groupAlertBehaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GroupAlertBehaviours_tBC5175985945B0E631AD81184B12A38D4EA43880_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Enum.IsDefined(typeof(GroupAlertBehaviours), groupAlertBehaviour))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (GroupAlertBehaviours_tBC5175985945B0E631AD81184B12A38D4EA43880_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___groupAlertBehaviour0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Enum_IsDefined_m70E955627155998B426145940DE105ECEF213B96(L_1, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		// return (GroupAlertBehaviours)groupAlertBehaviour;
		int32_t L_6 = ___groupAlertBehaviour0;
		return (int32_t)(L_6);
	}

IL_0019:
	{
		// return GroupAlertBehaviours.GroupAlertAll;
		return (int32_t)(0);
	}
}
// UnityEngine.Color Unity.Notifications.Android.AndroidNotificationExtensions::ToColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  AndroidNotificationExtensions_ToColor_m4F0AC1E486292491D63BED6EDD5F27C28D3666E5 (int32_t ___color0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int a = (color >> 24) & 0xff;
		int32_t L_0 = ___color0;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0>>(int32_t)((int32_t)24)))&(int32_t)((int32_t)255)));
		// int r = (color >> 16) & 0xff;
		int32_t L_1 = ___color0;
		// int g = (color >> 8) & 0xff;
		int32_t L_2 = ___color0;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_2>>(int32_t)8))&(int32_t)((int32_t)255)));
		// int b = (color) & 0xff;
		int32_t L_3 = ___color0;
		V_2 = ((int32_t)((int32_t)L_3&(int32_t)((int32_t)255)));
		// return new Color32((byte)r, (byte)g, (byte)b, (byte)a);
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = V_0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_7), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)255))))), (uint8_t)((int32_t)((uint8_t)L_4)), (uint8_t)((int32_t)((uint8_t)L_5)), (uint8_t)((int32_t)((uint8_t)L_6)), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Int32 Unity.Notifications.Android.AndroidNotificationExtensions::ToInt(System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToInt_m145923D169D265B0EA179BFDB53703FC8901D276 (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!color.HasValue)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_inline((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)(&___color0), /*hidden argument*/Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_000b:
	{
		// var color32 = (Color32)color.Value;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)(&___color0), /*hidden argument*/Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_2;
		L_2 = Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// return (color32.a & 0xff) << 24 | (color32.r & 0xff) << 16 | (color32.g & 0xff) << 8 | (color32.b & 0xff);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_3 = V_0;
		uint8_t L_4 = L_3.get_a_4();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_5 = V_0;
		uint8_t L_6 = L_5.get_r_1();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_7 = V_0;
		uint8_t L_8 = L_7.get_g_2();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_9 = V_0;
		uint8_t L_10 = L_9.get_b_3();
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)255)))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)255)))));
	}
}
// System.Int64 Unity.Notifications.Android.AndroidNotificationExtensions::ToLong(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidNotificationExtensions_ToLong_m8B2B0DE759417E42C3FC322EC1BC67EB0E551F70 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// DateTime origin = new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
		DateTime__ctor_mCB99E35879988A22842FDDA9BBC3ACA74F1BEE38((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, /*hidden argument*/NULL);
		// TimeSpan diff = dateTime.ToUniversalTime() - origin;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		L_0 = DateTime_ToUniversalTime_mB5FB50E0AD0D9A2A917893A1655F51B174C7A6B3((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dateTime0), /*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2;
		L_2 = DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2(L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// return (long)Math.Floor(diff.TotalMilliseconds);
		double L_3;
		L_3 = TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = floor(L_3);
		return il2cpp_codegen_cast_double_to_int<int64_t>(L_4);
	}
}
// System.DateTime Unity.Notifications.Android.AndroidNotificationExtensions::ToDatetime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AndroidNotificationExtensions_ToDatetime_m800EBFECFB1908CCAEF03513C58468E7845F0F43 (int64_t ___dateTime0, const RuntimeMethod* method)
{
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// DateTime origin = new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
		DateTime__ctor_mCB99E35879988A22842FDDA9BBC3ACA74F1BEE38((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, /*hidden argument*/NULL);
		// return origin.AddMilliseconds(dateTime).ToLocalTime();
		int64_t L_0 = ___dateTime0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1;
		L_1 = DateTime_AddMilliseconds_m74B689CDAFB7ABEEF56827D8777B7C95C89C3154((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), ((double)((double)L_0)), /*hidden argument*/NULL);
		V_1 = L_1;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_2;
		L_2 = DateTime_ToLocalTime_mCE92C270822E0C13C7C849BDE5DDC852A4CF0A08((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_1), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int64 Unity.Notifications.Android.AndroidNotificationExtensions::ToLong(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidNotificationExtensions_ToLong_m17C90BDB52FAC47FAA4AA705CA37D13C1C4FD17A (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___timeSpan0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return timeSpan.HasValue ? (long)timeSpan.Value.TotalMilliseconds : -1L;
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_inline((Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *)(&___timeSpan0), /*hidden argument*/Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return ((int64_t)((int64_t)(-1)));
	}

IL_000c:
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1;
		L_1 = Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE((Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *)(&___timeSpan0), /*hidden argument*/Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE_RuntimeMethod_var);
		V_0 = L_1;
		double L_2;
		L_2 = TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		return il2cpp_codegen_cast_double_to_int<int64_t>(L_2);
	}
}
// System.TimeSpan Unity.Notifications.Android.AndroidNotificationExtensions::ToTimeSpan(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  AndroidNotificationExtensions_ToTimeSpan_m82F05A65D739796F7E94F26566170DBCC56D1DD6 (int64_t ___timeSpan0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TimeSpan.FromMilliseconds(timeSpan);
		int64_t L_0 = ___timeSpan0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1;
		L_1 = TimeSpan_FromMilliseconds_m12D90542B044C450FDFBCEA1CBC32369479483EC(((double)((double)L_0)), /*hidden argument*/NULL);
		return L_1;
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
// System.Void Unity.Notifications.Android.AndroidNotificationIntentData::set_NativeNotification(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationIntentData_set_NativeNotification_mC6E6623C3B3E5ECA199E2287FDD71FA139DB3E6C (AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___value0, const RuntimeMethod* method)
{
	{
		// public AndroidJavaObject NativeNotification { get; internal set; }
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___value0;
		__this->set_U3CNativeNotificationU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationIntentData::.ctor(System.Int32,System.String,Unity.Notifications.Android.AndroidNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationIntentData__ctor_mFA0B24EADF0B8CCAC424B598B7C75C99CAF0C80B (AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * __this, int32_t ___id0, String_t* ___channelId1, AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  ___notification2, const RuntimeMethod* method)
{
	{
		// public AndroidNotificationIntentData(int id, string channelId, AndroidNotification notification)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Id = id;
		int32_t L_0 = ___id0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		// Channel = channelId;
		String_t* L_1 = ___channelId1;
		__this->set_U3CChannelU3Ek__BackingField_1(L_1);
		// Notification = notification;
		AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  L_2 = ___notification2;
		__this->set_U3CNotificationU3Ek__BackingField_2(L_2);
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
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::EnqueueReceivedNotification(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher_EnqueueReceivedNotification_m91497715038968784C48633AAF410897DA041001 (AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___notification0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEB451D299E31BF4F80B6DB96776F04C5F7A565C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * L_0 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
		// m_ReceivedNotificationQueue.Add(notification);
		List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * L_1 = __this->get_m_ReceivedNotificationQueue_5();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = ___notification0;
		NullCheck(L_1);
		List_1_Add_mEB451D299E31BF4F80B6DB96776F04C5F7A565C5(L_1, L_2, /*hidden argument*/List_1_Add_mEB451D299E31BF4F80B6DB96776F04C5F7A565C5_RuntimeMethod_var);
		// }
		IL2CPP_LEAVE(0x24, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_0023;
			}
		}

IL_001d:
		{
			AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * L_4 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		}

IL_0023:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x24, IL_0024)
	}

IL_0024:
	{
		// }
		return;
	}
}
// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m0ECBDF3489F97FA7771BBA299D2CB3A8E233CD02 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * L_0 = ((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->get_instance_4();
		return L_0;
	}
}
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher_Update_m73DC78B1913BE91F029C10B5CD39C853424CD09E (AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m22C2979B02507C0C33B02383587FB3D60E9C7D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB15CB0B4CA5AA42DD4FF2CB445C8AE96ED8FF2B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1579633F9660B899A35B3DE93473AA792BD85A2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m74A870D3B22C8AA0A6F45AA4CB0EFBBB8D344581_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m88B8BAD9E34605DD37DB23EF437F9B1FF869DFF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD5AC32CEBB7EF3BCC983D00D93DB93DE0EC70E8C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * V_0 = NULL;
	bool V_1 = false;
	List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * V_2 = NULL;
	Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD  V_3;
	memset((&V_3), 0, sizeof(V_3));
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		{
			AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * L_0 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (m_ReceivedNotificationQueue.Count == 0)
			List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * L_1 = __this->get_m_ReceivedNotificationQueue_5();
			NullCheck(L_1);
			int32_t L_2;
			L_2 = List_1_get_Count_mD5AC32CEBB7EF3BCC983D00D93DB93DE0EC70E8C_inline(L_1, /*hidden argument*/List_1_get_Count_mD5AC32CEBB7EF3BCC983D00D93DB93DE0EC70E8C_RuntimeMethod_var);
			if (L_2)
			{
				goto IL_001b;
			}
		}

IL_0019:
		{
			// return;
			IL2CPP_LEAVE(0x8C, FINALLY_0037);
		}

IL_001b:
		{
			// var temp = m_ReceivedNotificationQueue;
			List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * L_3 = __this->get_m_ReceivedNotificationQueue_5();
			V_2 = L_3;
			// m_ReceivedNotificationQueue = m_ReceivedNotificationList;
			List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * L_4 = __this->get_m_ReceivedNotificationList_6();
			__this->set_m_ReceivedNotificationQueue_5(L_4);
			// m_ReceivedNotificationList = temp;
			List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * L_5 = V_2;
			__this->set_m_ReceivedNotificationList_6(L_5);
			// }
			IL2CPP_LEAVE(0x41, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		{
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_0040;
			}
		}

IL_003a:
		{
			AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * L_7 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		}

IL_0040:
		{
			IL2CPP_END_FINALLY(55)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8C, IL_008c)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
	}

IL_0041:
	{
		// foreach (var notification in m_ReceivedNotificationList)
		List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * L_8 = __this->get_m_ReceivedNotificationList_6();
		NullCheck(L_8);
		Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD  L_9;
		L_9 = List_1_GetEnumerator_m88B8BAD9E34605DD37DB23EF437F9B1FF869DFF7(L_8, /*hidden argument*/List_1_GetEnumerator_m88B8BAD9E34605DD37DB23EF437F9B1FF869DFF7_RuntimeMethod_var);
		V_3 = L_9;
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0068;
		}

IL_004f:
		{
			// foreach (var notification in m_ReceivedNotificationList)
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_10;
			L_10 = Enumerator_get_Current_m1579633F9660B899A35B3DE93473AA792BD85A2A_inline((Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD *)(&V_3), /*hidden argument*/Enumerator_get_Current_m1579633F9660B899A35B3DE93473AA792BD85A2A_RuntimeMethod_var);
			V_4 = L_10;
		}

IL_0058:
		try
		{ // begin try (depth: 2)
			// AndroidNotificationCenter.ReceivedNotificationCallback(notification);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_11 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
			AndroidNotificationCenter_ReceivedNotificationCallback_mF925FF2B7DDD6D1EE601205F3CF14A2B6F5318DF(L_11, /*hidden argument*/NULL);
			// }
			goto IL_0068;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0061;
			}
			throw e;
		}

CATCH_0061:
		{ // begin catch(System.Exception)
			// Debug.LogException(e);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0068;
		} // end catch (depth: 2)

IL_0068:
		{
			// foreach (var notification in m_ReceivedNotificationList)
			bool L_12;
			L_12 = Enumerator_MoveNext_mB15CB0B4CA5AA42DD4FF2CB445C8AE96ED8FF2B2((Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mB15CB0B4CA5AA42DD4FF2CB445C8AE96ED8FF2B2_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_004f;
			}
		}

IL_0071:
		{
			IL2CPP_LEAVE(0x81, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m22C2979B02507C0C33B02383587FB3D60E9C7D8D((Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD *)(&V_3), /*hidden argument*/Enumerator_Dispose_m22C2979B02507C0C33B02383587FB3D60E9C7D8D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(115)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x81, IL_0081)
	}

IL_0081:
	{
		// m_ReceivedNotificationList.Clear();
		List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * L_13 = __this->get_m_ReceivedNotificationList_6();
		NullCheck(L_13);
		List_1_Clear_m74A870D3B22C8AA0A6F45AA4CB0EFBBB8D344581(L_13, /*hidden argument*/List_1_Clear_m74A870D3B22C8AA0A6F45AA4CB0EFBBB8D344581_RuntimeMethod_var);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher_Awake_mE29E5C70BC91344E219FFE45639E03645AA48944 (AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * L_0 = ((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// DontDestroyOnLoad(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher_OnDestroy_mCB8274F4292C713C8D76D5F3A8016E3FD97069FE (AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = null;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->set_instance_4((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 *)NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher__ctor_m03FB58388F00FC3D554A889F7C3D79FFD3F8A1F6 (AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5F9D82170C2774D7F4048F3C0D571BA570C40648_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<AndroidJavaObject> m_ReceivedNotificationQueue = new List<AndroidJavaObject>();
		List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * L_0 = (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B *)il2cpp_codegen_object_new(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B_il2cpp_TypeInfo_var);
		List_1__ctor_m5F9D82170C2774D7F4048F3C0D571BA570C40648(L_0, /*hidden argument*/List_1__ctor_m5F9D82170C2774D7F4048F3C0D571BA570C40648_RuntimeMethod_var);
		__this->set_m_ReceivedNotificationQueue_5(L_0);
		// private List<AndroidJavaObject> m_ReceivedNotificationList = new List<AndroidJavaObject>();
		List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * L_1 = (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B *)il2cpp_codegen_object_new(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B_il2cpp_TypeInfo_var);
		List_1__ctor_m5F9D82170C2774D7F4048F3C0D571BA570C40648(L_1, /*hidden argument*/List_1__ctor_m5F9D82170C2774D7F4048F3C0D571BA570C40648_RuntimeMethod_var);
		__this->set_m_ReceivedNotificationList_6(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher__cctor_mFD6277622F1396F5C83B4DEC3D6C9466DA1D7C26 (const RuntimeMethod* method)
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m3ACEFEDB3D35CB6F366AA503703F8E9CDE0243A8 (EmbeddedAttribute_t224FE8401E710BDB619384B6F52CDEA08A47DCA1 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m75E42DC675E1A990B2A25CEB766487A994D1A156 (IsReadOnlyAttribute_t70EAF1B027E7CDF184E53D9A69C1FDE492ED90BE * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void Unity.Notifications.Android.NotificationCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationCallback__ctor_m0079EEFEA69221760EBC29775A5DF78533B01183 (NotificationCallback_t81DD74C1A774090ECE4A8E2C1F572E307D6E0D31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78A2E5F909763C2798506373D9793DA98ACAFD83);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NotificationCallback() : base("com.unity.androidnotifications.NotificationCallback")
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral78A2E5F909763C2798506373D9793DA98ACAFD83, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.NotificationCallback::onSentNotification(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationCallback_onSentNotification_m312DAAE0557A90CB3BB39F4E55B510F5FEC18E2A (NotificationCallback_t81DD74C1A774090ECE4A8E2C1F572E307D6E0D31 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___notification0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AndroidReceivedNotificationMainThreadDispatcher.GetInstance().EnqueueReceivedNotification(notification);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * L_0;
		L_0 = AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m0ECBDF3489F97FA7771BBA299D2CB3A8E233CD02_inline(/*hidden argument*/NULL);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = ___notification0;
		NullCheck(L_0);
		AndroidReceivedNotificationMainThreadDispatcher_EnqueueReceivedNotification_m91497715038968784C48633AAF410897DA041001(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA8D0AFE8E96C91435A7F7078676C2C62ADE79045 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4 * L_0 = (U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4 *)il2cpp_codegen_object_new(U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5AB26E888AB42C1D212AEE08649D29C56099BE53(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5AB26E888AB42C1D212AEE08649D29C56099BE53 (U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/<>c::<.cctor>b__45_0(Unity.Notifications.Android.AndroidNotificationIntentData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__45_0_m6D11B16862187BF87B3B9D74C42A4048CC07267D (U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4 * __this, AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public static event NotificationReceivedCallback OnNotificationReceived = delegate { };
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
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m076EC8CB3D125E921A77A3FCDEC8CBBBA95407AC (NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback::Invoke(Unity.Notifications.Android.AndroidNotificationIntentData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_m3BA17AB01D93A0BD7B529EB155CA9B7930DBA3AB (NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * __this, AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * ___data0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
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
						GenericInterfaceActionInvoker1< AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * >::Invoke(targetMethod, targetThis, ___data0);
					else
						GenericVirtActionInvoker1< AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * >::Invoke(targetMethod, targetThis, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
					else
						VirtActionInvoker1< AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback::BeginInvoke(Unity.Notifications.Android.AndroidNotificationIntentData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationReceivedCallback_BeginInvoke_mC6B9D77CDAC40141C3E1D096B0C16184A9DA5B29 (NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * __this, AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * ___data0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_EndInvoke_mF9C345485E086AFE95CBEB115BC9DC5318D2C923 (NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Title_mB3DABEE0F0991F9EEBDE33BF7972FD2FE8A1F4F9_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string Title { get; set; }
		String_t* L_0 = __this->get_U3CTitleU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Title_m8F3CD2493CE4E1146CCF0FB5A22693A83189B2BF_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Title { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTitleU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Text_m77E9CFB1D553D57D0FEF220DE7B28088DD356D6C_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string Text { get; set; }
		String_t* L_0 = __this->get_U3CTextU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Text_mBFBF1951A5506A2442A519F044F5D6657B04F04B_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Text { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTextU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_SmallIcon_m92B697D0D89530167902FC5897DD168266B81DD0_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string SmallIcon { get; set; }
		String_t* L_0 = __this->get_U3CSmallIconU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_SmallIcon_m8994CFB6F9F7CD57B11F0C9B85032538CC1F7CA9_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string SmallIcon { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CSmallIconU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AndroidNotification_get_FireTime_mF810AF8344094C697EFD40194CD1739CD02A662A_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public DateTime FireTime { get; set; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_U3CFireTimeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_FireTime_mB28FFB7F25BA44F896EB8C6289DCCF6603224C78_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		// public DateTime FireTime { get; set; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CFireTimeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_LargeIcon_mC26FD32D630C8467C043CC4A2B4E841892A1E6C0_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string LargeIcon { get; set; }
		String_t* L_0 = __this->get_U3CLargeIconU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_LargeIcon_m451EF5AA763036228687978F544A988DD5B521C5_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string LargeIcon { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CLargeIconU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Style_m97C174CB75421EFDD1C2E75C3FCDE4CCAEAD2F54_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public NotificationStyle Style { get; set; }
		int32_t L_0 = __this->get_U3CStyleU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Style_m98FB64EF2F07E24EB0B7328F685E2597AA8E8202_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public NotificationStyle Style { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStyleU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Number_mA5DEDC608DC439A4A491EEB7FA4BBECCD34CA2A4_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public int Number { get; set; }
		int32_t L_0 = __this->get_U3CNumberU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Number_m8C6ADBFE6516F90F69096FBD9862480969128142_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Number { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CNumberU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShouldAutoCancel_m0F7E321BA510637F3C9D8F553C0A77565E952C36_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShouldAutoCancel { get; set; }
		bool L_0 = __this->get_U3CShouldAutoCancelU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShouldAutoCancel_mC5CDEF3BD3D064831BE0B70C65EDD17B3157111A_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ShouldAutoCancel { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CShouldAutoCancelU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_UsesStopwatch_m2DC6B59CB2E8A12A104C5A5E9EB91B1AA2F62080_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public bool UsesStopwatch { get; set; }
		bool L_0 = __this->get_U3CUsesStopwatchU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_UsesStopwatch_m55FC26AC094CC99D22432104A6C7AC3C629A1CA1_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UsesStopwatch { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUsesStopwatchU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Group_m77A3E8F0A809D435B7FC889C6B9C163DD80E7BB1_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string Group { get; set; }
		String_t* L_0 = __this->get_U3CGroupU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Group_m76EC700DCF7554BE82F92EC7A7E2513B1FF9E959_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Group { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CGroupU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_GroupSummary_m1BC2AC6F3DE40B306602D5DABFEA1CAFBED76EA2_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public bool GroupSummary { get; set; }
		bool L_0 = __this->get_U3CGroupSummaryU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupSummary_m906CAB0D3329BC8F6DF1582E66A55F98372B9B56_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool GroupSummary { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CGroupSummaryU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_GroupAlertBehaviour_m0DE3415FFE52E7DED47D2AAB021A772ED72633D5_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public GroupAlertBehaviours GroupAlertBehaviour { get; set; }
		int32_t L_0 = __this->get_U3CGroupAlertBehaviourU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupAlertBehaviour_m0F6F30DF3CC18235A42B05ADE3293368FDA9265C_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public GroupAlertBehaviours GroupAlertBehaviour { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CGroupAlertBehaviourU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_SortKey_m2F51A80A8D61A86E05DBA8BC55F941B4DAAE25C8_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string SortKey { get; set; }
		String_t* L_0 = __this->get_U3CSortKeyU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_SortKey_m20919DC31CFF55EB4CC3C4FE2C7CC5DA24EC8EBB_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string SortKey { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CSortKeyU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_IntentData_mF6A7FC46547F023CA9DE369AE45958D1563E6206_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string IntentData { get; set; }
		String_t* L_0 = __this->get_U3CIntentDataU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_IntentData_m5F25F77921D71A8CE4177FEC32784518A7DA251A_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string IntentData { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIntentDataU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShowTimestamp_m4974F4442200DC1311A95ED3173B8EFEB07E10C6_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowTimestamp { get; set; }
		bool L_0 = __this->get_U3CShowTimestampU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowTimestamp_m223E5FACC5678ECE1CC21B76F961170A0C6DC49B_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ShowTimestamp { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CShowTimestampU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AndroidNotification_get_CustomTimestamp_m36E2E3570D2197AFB00C40E46B0E3665900CD42E_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_CustomTimestamp; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_m_CustomTimestamp_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowCustomTimestamp_m5D5931188024A7834F9B0D72F207594BF1F6A66D_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// internal bool ShowCustomTimestamp { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CShowCustomTimestampU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShowCustomTimestamp_m4D6097B1975D351245D2E0F929E4A4B11379FADE_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// internal bool ShowCustomTimestamp { get; set; }
		bool L_0 = __this->get_U3CShowCustomTimestampU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m0ECBDF3489F97FA7771BBA299D2CB3A8E233CD02_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * L_0 = ((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->get_instance_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Id_m8414CCF73AAE88237B22CEC99C72246ECFB476B7_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Name_m0AA10F1025091D228921E87AADD2047E7411091A_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Description_m4628FD745E0AB56D1CA3736561A3AE392134F3D8_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public string Description { get; set; }
		String_t* L_0 = __this->get_U3CDescriptionU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_Importance_m9CCC8F1DAEC8EDA86D4651F5B5E77DADDEBCA124_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public Importance Importance { get; set; }
		int32_t L_0 = __this->get_U3CImportanceU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableLights_m940E7B2298ABA231695828C6ECE983230AE85997_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public bool EnableLights { get; set; }
		bool L_0 = __this->get_U3CEnableLightsU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableVibration_mB2D0633D3475651540736DD2685498E159622ECD_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public bool EnableVibration { get; set; }
		bool L_0 = __this->get_U3CEnableVibrationU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanBypassDnd_mF5039966BD760C9431BCEF955301B65037ECAF84_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public bool CanBypassDnd { get; set; }
		bool L_0 = __this->get_U3CCanBypassDndU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanShowBadge_mADC2608F5FA0EE2DA01CE2C48DE746C013629484_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public bool CanShowBadge { get; set; }
		bool L_0 = __this->get_U3CCanShowBadgeU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* AndroidNotificationChannel_get_VibrationPattern_m4E735D10633F66025E9387CC4B811565892148F7_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public long[] VibrationPattern { get; set; }
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_0 = __this->get_U3CVibrationPatternU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_LockScreenVisibility_mD57C1C54E1E7BDFFDC7B676887730E72A742F09F_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public LockScreenVisibility LockScreenVisibility { get; set; }
		int32_t L_0 = __this->get_U3CLockScreenVisibilityU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationIntentData_set_NativeNotification_mC6E6623C3B3E5ECA199E2287FDD71FA139DB3E6C_inline (AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___value0, const RuntimeMethod* method)
{
	{
		// public AndroidJavaObject NativeNotification { get; internal set; }
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___value0;
		__this->set_U3CNativeNotificationU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Id_mBA4BD4BBEDEC34758C2135CA09EB2F229D7799BA_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Name_m9C30D7E82CEC2028A0FA2E21127767027CBC5BC8_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Description_m895FC16334428373C8D15D893611F32077599CD1_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Description { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CDescriptionU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Importance_mED3F8A45E4DE2B1085753FC57CAF56CF0DD56DEB_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Importance Importance { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CImportanceU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_gshared_inline (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_gshared_inline (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
