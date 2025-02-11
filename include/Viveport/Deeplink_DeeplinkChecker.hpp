// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Viveport.Deeplink
#include "Viveport/Deeplink.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Viveport::Deeplink::DeeplinkChecker);
DEFINE_IL2CPP_ARG_TYPE(::Viveport::Deeplink::DeeplinkChecker*, "Viveport", "Deeplink/DeeplinkChecker");
// Type namespace: Viveport
namespace Viveport {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.Deeplink/DeeplinkChecker
  // [TokenAttribute] Offset: FFFFFFFF
  class Deeplink::DeeplinkChecker : public ::Il2CppObject {
    public:
    // public System.Void OnSuccess()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnSuccess();
    // public System.Void OnFailure(System.Int32 errorCode, System.String errorMessage)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnFailure(int errorCode, ::StringW errorMessage);
    // protected System.Void .ctor()
    // Offset: 0x27B5BBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Deeplink::DeeplinkChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::Deeplink::DeeplinkChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Deeplink::DeeplinkChecker*, creationType>()));
    }
  }; // Viveport.Deeplink/DeeplinkChecker
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Viveport::Deeplink::DeeplinkChecker::OnSuccess
// Il2CppName: OnSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::Deeplink::DeeplinkChecker::*)()>(&Viveport::Deeplink::DeeplinkChecker::OnSuccess)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::Deeplink::DeeplinkChecker*), "OnSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::Deeplink::DeeplinkChecker::OnFailure
// Il2CppName: OnFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::Deeplink::DeeplinkChecker::*)(int, ::StringW)>(&Viveport::Deeplink::DeeplinkChecker::OnFailure)> {
  static const MethodInfo* get() {
    static auto* errorCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* errorMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::Deeplink::DeeplinkChecker*), "OnFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorCode, errorMessage});
  }
};
// Writing MetadataGetter for method: Viveport::Deeplink::DeeplinkChecker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
