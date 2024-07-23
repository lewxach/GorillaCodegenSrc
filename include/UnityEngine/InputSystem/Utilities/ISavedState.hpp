// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Forward declaring type: ISavedState
  class ISavedState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::ISavedState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::ISavedState*, "UnityEngine.InputSystem.Utilities", "ISavedState");
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Utilities.ISavedState
  // [TokenAttribute] Offset: FFFFFFFF
  class ISavedState {
    public:
    // public System.Void StaticDisposeCurrentState()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void StaticDisposeCurrentState();
    // public System.Void RestoreSavedState()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RestoreSavedState();
  }; // UnityEngine.InputSystem.Utilities.ISavedState
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::ISavedState::StaticDisposeCurrentState
// Il2CppName: StaticDisposeCurrentState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::ISavedState::*)()>(&UnityEngine::InputSystem::Utilities::ISavedState::StaticDisposeCurrentState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Utilities::ISavedState*), "StaticDisposeCurrentState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::ISavedState::RestoreSavedState
// Il2CppName: RestoreSavedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::ISavedState::*)()>(&UnityEngine::InputSystem::Utilities::ISavedState::RestoreSavedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Utilities::ISavedState*), "RestoreSavedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};