// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.IInputInteraction
#include "UnityEngine/InputSystem/IInputInteraction.hpp"
// Including type: UnityEngine.InputSystem.Interactions.PressBehavior
#include "UnityEngine/InputSystem/Interactions/PressBehavior.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputInteractionContext
  struct InputInteractionContext;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.Interactions
namespace UnityEngine::InputSystem::Interactions {
  // Forward declaring type: PressInteraction
  class PressInteraction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Interactions::PressInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::PressInteraction*, "UnityEngine.InputSystem.Interactions", "PressInteraction");
// Type namespace: UnityEngine.InputSystem.Interactions
namespace UnityEngine::InputSystem::Interactions {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Interactions.PressInteraction
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisplayNameAttribute] Offset: FFFFFFFF
  class PressInteraction : public ::Il2CppObject/*, public ::UnityEngine::InputSystem::IInputInteraction*/ {
    public:
    public:
    // public System.Single pressPoint
    // Size: 0x4
    // Offset: 0x10
    float pressPoint;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.InputSystem.Interactions.PressBehavior behavior
    // Size: 0x4
    // Offset: 0x14
    ::UnityEngine::InputSystem::Interactions::PressBehavior behavior;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Interactions::PressBehavior) == 0x4);
    // private System.Boolean m_WaitingForRelease
    // Size: 0x1
    // Offset: 0x18
    bool m_WaitingForRelease;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::InputSystem::IInputInteraction
    operator ::UnityEngine::InputSystem::IInputInteraction() noexcept {
      return *reinterpret_cast<::UnityEngine::InputSystem::IInputInteraction*>(this);
    }
    // Get instance field reference: public System.Single pressPoint
    [[deprecated("Use field access instead!")]] float& dyn_pressPoint();
    // Get instance field reference: public UnityEngine.InputSystem.Interactions.PressBehavior behavior
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Interactions::PressBehavior& dyn_behavior();
    // Get instance field reference: private System.Boolean m_WaitingForRelease
    [[deprecated("Use field access instead!")]] bool& dyn_m_WaitingForRelease();
    // private System.Single get_pressPointOrDefault()
    // Offset: 0x516F718
    float get_pressPointOrDefault();
    // private System.Single get_releasePointOrDefault()
    // Offset: 0x516F770
    float get_releasePointOrDefault();
    // public System.Void Process(ref UnityEngine.InputSystem.InputInteractionContext context)
    // Offset: 0x516F7F8
    void Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context);
    // public System.Void Reset()
    // Offset: 0x516FBBC
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x516FBC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PressInteraction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Interactions::PressInteraction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PressInteraction*, creationType>()));
    }
  }; // UnityEngine.InputSystem.Interactions.PressInteraction
  #pragma pack(pop)
  static check_size<sizeof(PressInteraction), 24 + sizeof(bool)> __UnityEngine_InputSystem_Interactions_PressInteractionSizeCheck;
  static_assert(sizeof(PressInteraction) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Interactions::PressInteraction::get_pressPointOrDefault
// Il2CppName: get_pressPointOrDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::InputSystem::Interactions::PressInteraction::*)()>(&UnityEngine::InputSystem::Interactions::PressInteraction::get_pressPointOrDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Interactions::PressInteraction*), "get_pressPointOrDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Interactions::PressInteraction::get_releasePointOrDefault
// Il2CppName: get_releasePointOrDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::InputSystem::Interactions::PressInteraction::*)()>(&UnityEngine::InputSystem::Interactions::PressInteraction::get_releasePointOrDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Interactions::PressInteraction*), "get_releasePointOrDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Interactions::PressInteraction::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Interactions::PressInteraction::*)(ByRef<::UnityEngine::InputSystem::InputInteractionContext>)>(&UnityEngine::InputSystem::Interactions::PressInteraction::Process)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputInteractionContext")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Interactions::PressInteraction*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Interactions::PressInteraction::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Interactions::PressInteraction::*)()>(&UnityEngine::InputSystem::Interactions::PressInteraction::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Interactions::PressInteraction*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Interactions::PressInteraction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
