// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.SubsystemsImplementation
namespace UnityEngine::SubsystemsImplementation {
  // Forward declaring type: SubsystemProvider
  class SubsystemProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::SubsystemsImplementation::SubsystemProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemsImplementation::SubsystemProvider*, "UnityEngine.SubsystemsImplementation", "SubsystemProvider");
// Type namespace: UnityEngine.SubsystemsImplementation
namespace UnityEngine::SubsystemsImplementation {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SubsystemsImplementation.SubsystemProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class SubsystemProvider : public ::Il2CppObject {
    public:
    public:
    // System.Boolean m_Running
    // Size: 0x1
    // Offset: 0x10
    bool m_Running;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return m_Running;
    }
    // Get instance field reference: System.Boolean m_Running
    [[deprecated("Use field access instead!")]] bool& dyn_m_Running();
  }; // UnityEngine.SubsystemsImplementation.SubsystemProvider
  #pragma pack(pop)
  static check_size<sizeof(SubsystemProvider), 16 + sizeof(bool)> __UnityEngine_SubsystemsImplementation_SubsystemProviderSizeCheck;
  static_assert(sizeof(SubsystemProvider) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"