// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: IResettable
  class IResettable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::IResettable);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::IResettable*, "Photon.Voice", "IResettable");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.IResettable
  // [TokenAttribute] Offset: FFFFFFFF
  class IResettable {
    public:
    // public System.Void Reset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Reset();
  }; // Photon.Voice.IResettable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::IResettable::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::IResettable::*)()>(&Photon::Voice::IResettable::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::IResettable*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
