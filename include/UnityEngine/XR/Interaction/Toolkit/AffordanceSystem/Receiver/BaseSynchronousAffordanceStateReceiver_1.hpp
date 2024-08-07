// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/BaseAffordanceStateReceiver_1.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.ISynchronousAffordanceStateReceiver
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/ISynchronousAffordanceStateReceiver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IEquatable`1 because it is already included!
  // Skipping declaration: ValueType because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
  // Forward declaring type: BaseSynchronousAffordanceStateReceiver`1<T>
  template<typename T>
  class BaseSynchronousAffordanceStateReceiver_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver", "BaseSynchronousAffordanceStateReceiver`1");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseSynchronousAffordanceStateReceiver`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class BaseSynchronousAffordanceStateReceiver_1 : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAffordanceStateReceiver_1<T>/*, public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver
    operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver() noexcept {
      return *reinterpret_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*>(this);
    }
    // public System.Void HandleTween(System.Single tweenTarget)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HandleTween(float tweenTarget) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1::HandleTween");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, tweenTarget);
    }
    // protected T Interpolate(T startValue, T targetValue, System.Single interpolationAmount)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Interpolate(T startValue, T targetValue, float interpolationAmount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1::Interpolate");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, startValue, targetValue, interpolationAmount);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1
    // Base method: System.Void BaseAffordanceStateReceiver_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseSynchronousAffordanceStateReceiver_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseSynchronousAffordanceStateReceiver_1<T>*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseSynchronousAffordanceStateReceiver`1
  // Could not write size check! Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseSynchronousAffordanceStateReceiver`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
