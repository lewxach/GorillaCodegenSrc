// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SR
  class SR____;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SR____);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SR____*, "", "SR");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SR
  // [TokenAttribute] Offset: FFFFFFFF
  class SR____ : public ::Il2CppObject {
    public:
    // static System.String GetString(System.String name, params System.Object[] args)
    // Offset: 0x4D0693C
    static ::StringW GetString(::StringW name, ::ArrayW<::Il2CppObject*> args);
    // static System.String GetString(System.Globalization.CultureInfo culture, System.String name, params System.Object[] args)
    // Offset: 0x4D069AC
    static ::StringW GetString(::System::Globalization::CultureInfo* culture, ::StringW name, ::ArrayW<::Il2CppObject*> args);
  }; // SR
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SR____::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&GlobalNamespace::SR____::GetString)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SR____*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, args});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SR____::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Globalization::CultureInfo*, ::StringW, ::ArrayW<::Il2CppObject*>)>(&GlobalNamespace::SR____::GetString)> {
  static const MethodInfo* get() {
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SR____*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{culture, name, args});
  }
};
