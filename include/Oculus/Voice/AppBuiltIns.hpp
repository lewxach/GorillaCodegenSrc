// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Oculus.Voice
namespace Oculus::Voice {
  // Forward declaring type: AppBuiltIns
  class AppBuiltIns;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Voice::AppBuiltIns);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Voice::AppBuiltIns*, "Oculus.Voice", "AppBuiltIns");
// Type namespace: Oculus.Voice
namespace Oculus::Voice {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Voice.AppBuiltIns
  // [TokenAttribute] Offset: FFFFFFFF
  class AppBuiltIns : public ::Il2CppObject {
    public:
    // Get static field: static public System.String builtInPrefix
    static ::StringW _get_builtInPrefix();
    // Set static field: static public System.String builtInPrefix
    static void _set_builtInPrefix(::StringW value);
    // Get static field: static private System.String modelName
    static ::StringW _get_modelName();
    // Set static field: static private System.String modelName
    static void _set_modelName(::StringW value);
    // Get static field: static public readonly System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>> apps
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* _get_apps();
    // Set static field: static public readonly System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>> apps
    static void _set_apps(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* value);
    // static public System.String[] get_appNames()
    // Offset: 0x571BE84
    static ::ArrayW<::StringW> get_appNames();
    // static private System.Void .cctor()
    // Offset: 0x571BF90
    static void _cctor();
  }; // Oculus.Voice.AppBuiltIns
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Voice::AppBuiltIns::get_appNames
// Il2CppName: get_appNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)()>(&Oculus::Voice::AppBuiltIns::get_appNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::AppBuiltIns*), "get_appNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::AppBuiltIns::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Voice::AppBuiltIns::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::AppBuiltIns*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
