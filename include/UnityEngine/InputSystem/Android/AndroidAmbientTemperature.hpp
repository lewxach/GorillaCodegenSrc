// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.AmbientTemperatureSensor
#include "UnityEngine/InputSystem/AmbientTemperatureSensor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.InputSystem.Android
namespace UnityEngine::InputSystem::Android {
  // Forward declaring type: AndroidAmbientTemperature
  class AndroidAmbientTemperature;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidAmbientTemperature);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidAmbientTemperature*, "UnityEngine.InputSystem.Android", "AndroidAmbientTemperature");
// Type namespace: UnityEngine.InputSystem.Android
namespace UnityEngine::InputSystem::Android {
  // Size: 0x178
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Android.AndroidAmbientTemperature
  // [TokenAttribute] Offset: FFFFFFFF
  // [InputControlLayoutAttribute] Offset: FFFFFFFF
  class AndroidAmbientTemperature : public ::UnityEngine::InputSystem::AmbientTemperatureSensor {
    public:
    // public System.Void .ctor()
    // Offset: 0x514831C
    // Implemented from: UnityEngine.InputSystem.AmbientTemperatureSensor
    // Base method: System.Void AmbientTemperatureSensor::.ctor()
    // Base method: System.Void Sensor::.ctor()
    // Base method: System.Void InputDevice::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidAmbientTemperature* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Android::AndroidAmbientTemperature::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidAmbientTemperature*, creationType>()));
    }
  }; // UnityEngine.InputSystem.Android.AndroidAmbientTemperature
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Android::AndroidAmbientTemperature::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!