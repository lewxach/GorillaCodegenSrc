// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IRelativeToRef
  class IRelativeToRef;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::IRelativeToRef);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::IRelativeToRef*, "Oculus.Interaction", "IRelativeToRef");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.IRelativeToRef
  // [TokenAttribute] Offset: FFFFFFFF
  class IRelativeToRef {
    public:
    // public UnityEngine.Transform get_RelativeTo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* get_RelativeTo();
  }; // Oculus.Interaction.IRelativeToRef
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::IRelativeToRef::get_RelativeTo
// Il2CppName: get_RelativeTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (Oculus::Interaction::IRelativeToRef::*)()>(&Oculus::Interaction::IRelativeToRef::get_RelativeTo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::IRelativeToRef*), "get_RelativeTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
