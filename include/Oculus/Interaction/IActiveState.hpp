// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IActiveState
  class IActiveState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::IActiveState);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::IActiveState*, "Oculus.Interaction", "IActiveState");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.IActiveState
  // [TokenAttribute] Offset: FFFFFFFF
  class IActiveState {
    public:
    // public System.Boolean get_Active()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_Active();
  }; // Oculus.Interaction.IActiveState
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::IActiveState::get_Active
// Il2CppName: get_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::IActiveState::*)()>(&Oculus::Interaction::IActiveState::get_Active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::IActiveState*), "get_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
