// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Utilities.DynamicUtils
#include "Newtonsoft/Json/Utilities/DynamicUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: MethodCall`2<T, TResult>
  template<typename T, typename TResult>
  class MethodCall_2;
}
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: CallSiteBinder
  class CallSiteBinder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::DynamicUtils::BinderWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::DynamicUtils::BinderWrapper*, "Newtonsoft.Json.Utilities", "DynamicUtils/BinderWrapper");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.DynamicUtils/BinderWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  class DynamicUtils::BinderWrapper : public ::Il2CppObject {
    public:
    // Get static field: static private System.Object _getCSharpArgumentInfoArray
    static ::Il2CppObject* _get__getCSharpArgumentInfoArray();
    // Set static field: static private System.Object _getCSharpArgumentInfoArray
    static void _set__getCSharpArgumentInfoArray(::Il2CppObject* value);
    // Get static field: static private System.Object _setCSharpArgumentInfoArray
    static ::Il2CppObject* _get__setCSharpArgumentInfoArray();
    // Set static field: static private System.Object _setCSharpArgumentInfoArray
    static void _set__setCSharpArgumentInfoArray(::Il2CppObject* value);
    // Get static field: static private Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> _getMemberCall
    static ::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* _get__getMemberCall();
    // Set static field: static private Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> _getMemberCall
    static void _set__getMemberCall(::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* value);
    // Get static field: static private Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> _setMemberCall
    static ::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* _get__setMemberCall();
    // Set static field: static private Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> _setMemberCall
    static void _set__setMemberCall(::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* value);
    // Get static field: static private System.Boolean _init
    static bool _get__init();
    // Set static field: static private System.Boolean _init
    static void _set__init(bool value);
    // static private System.Void Init()
    // Offset: 0x4707848
    static void Init();
    // static private System.Object CreateSharpArgumentInfoArray(params System.Int32[] values)
    // Offset: 0x4707A38
    static ::Il2CppObject* CreateSharpArgumentInfoArray(::ArrayW<int> values);
    // static private System.Void CreateMemberCalls()
    // Offset: 0x4707D2C
    static void CreateMemberCalls();
    // static public System.Runtime.CompilerServices.CallSiteBinder GetMember(System.String name, System.Type context)
    // Offset: 0x4708280
    static ::System::Runtime::CompilerServices::CallSiteBinder* GetMember(::StringW name, ::System::Type* context);
    // static public System.Runtime.CompilerServices.CallSiteBinder SetMember(System.String name, System.Type context)
    // Offset: 0x4708484
    static ::System::Runtime::CompilerServices::CallSiteBinder* SetMember(::StringW name, ::System::Type* context);
  }; // Newtonsoft.Json.Utilities.DynamicUtils/BinderWrapper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::DynamicUtils::BinderWrapper::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Utilities::DynamicUtils::BinderWrapper::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::DynamicUtils::BinderWrapper*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::DynamicUtils::BinderWrapper::CreateSharpArgumentInfoArray
// Il2CppName: CreateSharpArgumentInfoArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<int>)>(&Newtonsoft::Json::Utilities::DynamicUtils::BinderWrapper::CreateSharpArgumentInfoArray)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::DynamicUtils::BinderWrapper*), "CreateSharpArgumentInfoArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::DynamicUtils::BinderWrapper::CreateMemberCalls
// Il2CppName: CreateMemberCalls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Utilities::DynamicUtils::BinderWrapper::CreateMemberCalls)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::DynamicUtils::BinderWrapper*), "CreateMemberCalls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::DynamicUtils::BinderWrapper::GetMember
// Il2CppName: GetMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::CallSiteBinder* (*)(::StringW, ::System::Type*)>(&Newtonsoft::Json::Utilities::DynamicUtils::BinderWrapper::GetMember)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::DynamicUtils::BinderWrapper*), "GetMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, context});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::DynamicUtils::BinderWrapper::SetMember
// Il2CppName: SetMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::CallSiteBinder* (*)(::StringW, ::System::Type*)>(&Newtonsoft::Json::Utilities::DynamicUtils::BinderWrapper::SetMember)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::DynamicUtils::BinderWrapper*), "SetMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, context});
  }
};
