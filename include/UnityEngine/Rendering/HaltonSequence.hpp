// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: HaltonSequence
  class HaltonSequence;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::HaltonSequence);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::HaltonSequence*, "UnityEngine.Rendering", "HaltonSequence");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.HaltonSequence
  // [TokenAttribute] Offset: FFFFFFFF
  class HaltonSequence : public ::Il2CppObject {
    public:
    // static public System.Single Get(System.Int32 index, System.Int32 radix)
    // Offset: 0x525E5C0
    static float Get(int index, int radix);
  }; // UnityEngine.Rendering.HaltonSequence
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::HaltonSequence::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(int, int)>(&UnityEngine::Rendering::HaltonSequence::Get)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* radix = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::HaltonSequence*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, radix});
  }
};
