// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Utilities.ReflectionUtils
#include "Newtonsoft/Json/Utilities/ReflectionUtils.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ReflectionUtils::$$c__DisplayClass45_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ReflectionUtils::$$c__DisplayClass45_0*, "Newtonsoft.Json.Utilities", "ReflectionUtils/<>c__DisplayClass45_0");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass45_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ReflectionUtils::$$c__DisplayClass45_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String method
    // Size: 0x8
    // Offset: 0x10
    ::StringW method;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Type methodDeclaringType
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* methodDeclaringType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: public System.String method
    [[deprecated("Use field access instead!")]] ::StringW& dyn_method();
    // Get instance field reference: public System.Type methodDeclaringType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_methodDeclaringType();
    // public System.Void .ctor()
    // Offset: 0x47144F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionUtils::$$c__DisplayClass45_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::ReflectionUtils::$$c__DisplayClass45_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionUtils::$$c__DisplayClass45_0*, creationType>()));
    }
    // System.Boolean <IsMethodOverridden>b__0(System.Reflection.MethodInfo info)
    // Offset: 0x4714B64
    bool $IsMethodOverridden$b__0(::System::Reflection::MethodInfo* info);
  }; // Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass45_0
  #pragma pack(pop)
  static check_size<sizeof(ReflectionUtils::$$c__DisplayClass45_0), 24 + sizeof(::System::Type*)> __Newtonsoft_Json_Utilities_ReflectionUtils_$$c__DisplayClass45_0SizeCheck;
  static_assert(sizeof(ReflectionUtils::$$c__DisplayClass45_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionUtils::$$c__DisplayClass45_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionUtils::$$c__DisplayClass45_0::$IsMethodOverridden$b__0
// Il2CppName: <IsMethodOverridden>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Utilities::ReflectionUtils::$$c__DisplayClass45_0::*)(::System::Reflection::MethodInfo*)>(&Newtonsoft::Json::Utilities::ReflectionUtils::$$c__DisplayClass45_0::$IsMethodOverridden$b__0)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionUtils::$$c__DisplayClass45_0*), "<IsMethodOverridden>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info});
  }
};
