// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MothershipApiPINVOKE
#include "GlobalNamespace/MothershipApiPINVOKE.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MothershipApiPINVOKE::SWIGStringHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MothershipApiPINVOKE::SWIGStringHelper*, "", "MothershipApiPINVOKE/SWIGStringHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MothershipApiPINVOKE/SWIGStringHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class MothershipApiPINVOKE::SWIGStringHelper : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::MothershipApiPINVOKE::SWIGStringHelper::SWIGStringDelegate
    class SWIGStringDelegate;
    // Get static field: static private MothershipApiPINVOKE/SWIGStringHelper/SWIGStringDelegate stringDelegate
    static ::GlobalNamespace::MothershipApiPINVOKE::SWIGStringHelper::SWIGStringDelegate* _get_stringDelegate();
    // Set static field: static private MothershipApiPINVOKE/SWIGStringHelper/SWIGStringDelegate stringDelegate
    static void _set_stringDelegate(::GlobalNamespace::MothershipApiPINVOKE::SWIGStringHelper::SWIGStringDelegate* value);
    // static public System.Void SWIGRegisterStringCallback_MothershipApi(MothershipApiPINVOKE/SWIGStringHelper/SWIGStringDelegate stringDelegate)
    // Offset: 0x267A8A4
    static void SWIGRegisterStringCallback_MothershipApi(::GlobalNamespace::MothershipApiPINVOKE::SWIGStringHelper::SWIGStringDelegate* stringDelegate);
    // static private System.String CreateString(System.String cString)
    // Offset: 0x267A8A0
    static ::StringW CreateString(::StringW cString);
    // static private System.Void .cctor()
    // Offset: 0x267A924
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2678504
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MothershipApiPINVOKE::SWIGStringHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MothershipApiPINVOKE::SWIGStringHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MothershipApiPINVOKE::SWIGStringHelper*, creationType>()));
    }
  }; // MothershipApiPINVOKE/SWIGStringHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MothershipApiPINVOKE::SWIGStringHelper::SWIGRegisterStringCallback_MothershipApi
// Il2CppName: SWIGRegisterStringCallback_MothershipApi
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::MothershipApiPINVOKE::SWIGStringHelper::SWIGStringDelegate*)>(&GlobalNamespace::MothershipApiPINVOKE::SWIGStringHelper::SWIGRegisterStringCallback_MothershipApi)> {
  static const MethodInfo* get() {
    static auto* stringDelegate = &::il2cpp_utils::GetClassFromName("", "MothershipApiPINVOKE/SWIGStringHelper/SWIGStringDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipApiPINVOKE::SWIGStringHelper*), "SWIGRegisterStringCallback_MothershipApi", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringDelegate});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipApiPINVOKE::SWIGStringHelper::CreateString
// Il2CppName: CreateString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&GlobalNamespace::MothershipApiPINVOKE::SWIGStringHelper::CreateString)> {
  static const MethodInfo* get() {
    static auto* cString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipApiPINVOKE::SWIGStringHelper*), "CreateString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cString});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipApiPINVOKE::SWIGStringHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MothershipApiPINVOKE::SWIGStringHelper::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipApiPINVOKE::SWIGStringHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipApiPINVOKE::SWIGStringHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
