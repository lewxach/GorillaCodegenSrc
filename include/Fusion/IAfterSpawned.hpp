// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: IAfterSpawned
  class IAfterSpawned;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::IAfterSpawned);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::IAfterSpawned*, "Fusion", "IAfterSpawned");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.IAfterSpawned
  // [TokenAttribute] Offset: FFFFFFFF
  class IAfterSpawned {
    public:
    // public System.Void AfterSpawned()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AfterSpawned();
  }; // Fusion.IAfterSpawned
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::IAfterSpawned::AfterSpawned
// Il2CppName: AfterSpawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::IAfterSpawned::*)()>(&Fusion::IAfterSpawned::AfterSpawned)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::IAfterSpawned*), "AfterSpawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};