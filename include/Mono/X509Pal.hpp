// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono
namespace Mono {
  // Forward declaring type: X509PalImpl
  class X509PalImpl;
}
// Completed forward declares
// Type namespace: Mono
namespace Mono {
  // Forward declaring type: X509Pal
  class X509Pal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::X509Pal);
DEFINE_IL2CPP_ARG_TYPE(::Mono::X509Pal*, "Mono", "X509Pal");
// Type namespace: Mono
namespace Mono {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.X509Pal
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Pal : public ::Il2CppObject {
    public:
    // static public Mono.X509PalImpl get_Instance()
    // Offset: 0x4BF0300
    static ::Mono::X509PalImpl* get_Instance();
  }; // Mono.X509Pal
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::X509Pal::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::X509PalImpl* (*)()>(&Mono::X509Pal::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::X509Pal*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};