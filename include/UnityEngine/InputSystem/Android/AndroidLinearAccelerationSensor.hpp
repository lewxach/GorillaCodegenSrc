// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.LinearAccelerationSensor
#include "UnityEngine/InputSystem/LinearAccelerationSensor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.InputSystem.Android
namespace UnityEngine::InputSystem::Android {
  // Forward declaring type: AndroidLinearAccelerationSensor
  class AndroidLinearAccelerationSensor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor*, "UnityEngine.InputSystem.Android", "AndroidLinearAccelerationSensor");
// Type namespace: UnityEngine.InputSystem.Android
namespace UnityEngine::InputSystem::Android {
  // Size: 0x178
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Android.AndroidLinearAccelerationSensor
  // [TokenAttribute] Offset: FFFFFFFF
  // [InputControlLayoutAttribute] Offset: FFFFFFFF
  class AndroidLinearAccelerationSensor : public ::UnityEngine::InputSystem::LinearAccelerationSensor {
    public:
    // public System.Void .ctor()
    // Offset: 0x5148304
    // Implemented from: UnityEngine.InputSystem.LinearAccelerationSensor
    // Base method: System.Void LinearAccelerationSensor::.ctor()
    // Base method: System.Void Sensor::.ctor()
    // Base method: System.Void InputDevice::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidLinearAccelerationSensor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidLinearAccelerationSensor*, creationType>()));
    }
  }; // UnityEngine.InputSystem.Android.AndroidLinearAccelerationSensor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!