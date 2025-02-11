// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: IWeightProvider
  class IWeightProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::Rigging::IWeightProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::IWeightProvider*, "UnityEngine.Animations.Rigging", "IWeightProvider");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.Rigging.IWeightProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class IWeightProvider {
    public:
    // public System.Single get_weight()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_weight();
    // public System.Void set_weight(System.Single value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_weight(float value);
  }; // UnityEngine.Animations.Rigging.IWeightProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IWeightProvider::get_weight
// Il2CppName: get_weight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Animations::Rigging::IWeightProvider::*)()>(&UnityEngine::Animations::Rigging::IWeightProvider::get_weight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IWeightProvider*), "get_weight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IWeightProvider::set_weight
// Il2CppName: set_weight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::IWeightProvider::*)(float)>(&UnityEngine::Animations::Rigging::IWeightProvider::set_weight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IWeightProvider*), "set_weight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
