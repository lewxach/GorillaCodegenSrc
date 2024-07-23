// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.InputSystem.Haptics
namespace UnityEngine::InputSystem::Haptics {
  // Forward declaring type: IHaptics
  class IHaptics;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Haptics::IHaptics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Haptics::IHaptics*, "UnityEngine.InputSystem.Haptics", "IHaptics");
// Type namespace: UnityEngine.InputSystem.Haptics
namespace UnityEngine::InputSystem::Haptics {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Haptics.IHaptics
  // [TokenAttribute] Offset: FFFFFFFF
  class IHaptics {
    public:
    // public System.Void PauseHaptics()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void PauseHaptics();
    // public System.Void ResumeHaptics()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ResumeHaptics();
    // public System.Void ResetHaptics()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ResetHaptics();
  }; // UnityEngine.InputSystem.Haptics.IHaptics
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Haptics::IHaptics::PauseHaptics
// Il2CppName: PauseHaptics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Haptics::IHaptics::*)()>(&UnityEngine::InputSystem::Haptics::IHaptics::PauseHaptics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Haptics::IHaptics*), "PauseHaptics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Haptics::IHaptics::ResumeHaptics
// Il2CppName: ResumeHaptics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Haptics::IHaptics::*)()>(&UnityEngine::InputSystem::Haptics::IHaptics::ResumeHaptics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Haptics::IHaptics*), "ResumeHaptics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Haptics::IHaptics::ResetHaptics
// Il2CppName: ResetHaptics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Haptics::IHaptics::*)()>(&UnityEngine::InputSystem::Haptics::IHaptics::ResetHaptics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Haptics::IHaptics*), "ResetHaptics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};