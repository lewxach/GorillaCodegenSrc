// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Unity.UnityTls/unitytls_interface_struct
#include "Mono/Unity/UnityTls_unitytls_interface_struct.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_free_t);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_free_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t");
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: FFFFFFFF
  class UnityTls::unitytls_interface_struct::unitytls_tlsctx_free_t : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4BF2AF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTls::unitytls_interface_struct::unitytls_tlsctx_free_t* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_free_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTls::unitytls_interface_struct::unitytls_tlsctx_free_t*, creationType>(object, method)));
    }
    // public System.Void Invoke(Mono.Unity.UnityTls/unitytls_tlsctx* ctx)
    // Offset: 0x4BF2BA8
    void Invoke(::Mono::Unity::UnityTls::unitytls_tlsctx* ctx);
  }; // Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_free_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_free_t::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_free_t::*)(::Mono::Unity::UnityTls::unitytls_tlsctx*)>(&Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_free_t::Invoke)> {
  static const MethodInfo* get() {
    static auto* ctx = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_tlsctx"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_free_t*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
