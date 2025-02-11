// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.Haptics.IHaptics
#include "UnityEngine/InputSystem/Haptics/IHaptics.hpp"
// Completed includes
// Type namespace: UnityEngine.InputSystem.Haptics
namespace UnityEngine::InputSystem::Haptics {
  // Forward declaring type: IDualMotorRumble
  class IDualMotorRumble;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Haptics::IDualMotorRumble);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Haptics::IDualMotorRumble*, "UnityEngine.InputSystem.Haptics", "IDualMotorRumble");
// Type namespace: UnityEngine.InputSystem.Haptics
namespace UnityEngine::InputSystem::Haptics {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Haptics.IDualMotorRumble
  // [TokenAttribute] Offset: FFFFFFFF
  class IDualMotorRumble/*, public ::UnityEngine::InputSystem::Haptics::IHaptics*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::InputSystem::Haptics::IHaptics
    operator ::UnityEngine::InputSystem::Haptics::IHaptics() noexcept {
      return *reinterpret_cast<::UnityEngine::InputSystem::Haptics::IHaptics*>(this);
    }
    // public System.Void SetMotorSpeeds(System.Single lowFrequency, System.Single highFrequency)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetMotorSpeeds(float lowFrequency, float highFrequency);
  }; // UnityEngine.InputSystem.Haptics.IDualMotorRumble
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Haptics::IDualMotorRumble::SetMotorSpeeds
// Il2CppName: SetMotorSpeeds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Haptics::IDualMotorRumble::*)(float, float)>(&UnityEngine::InputSystem::Haptics::IDualMotorRumble::SetMotorSpeeds)> {
  static const MethodInfo* get() {
    static auto* lowFrequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* highFrequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Haptics::IDualMotorRumble*), "SetMotorSpeeds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lowFrequency, highFrequency});
  }
};
