// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.IFingerUseAPI
#include "Oculus/Interaction/IFingerUseAPI.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: IHand
  class IHand;
  // Forward declaring type: IAxis1D
  class IAxis1D;
  // Forward declaring type: HandFinger
  struct HandFinger;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: Axis1DFingerUseAPI
  class Axis1DFingerUseAPI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Axis1DFingerUseAPI);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Axis1DFingerUseAPI*, "Oculus.Interaction", "Axis1DFingerUseAPI");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Axis1DFingerUseAPI
  // [TokenAttribute] Offset: FFFFFFFF
  class Axis1DFingerUseAPI : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::IFingerUseAPI*/ {
    public:
    public:
    // private UnityEngine.Object _hand
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* hand;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private UnityEngine.Object _axis
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Object* axis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // protected Oculus.Interaction.Input.IHand Hand
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Interaction::Input::IHand* Hand;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IHand*) == 0x8);
    // protected Oculus.Interaction.Input.IAxis1D Axis
    // Size: 0x8
    // Offset: 0x38
    ::Oculus::Interaction::Input::IAxis1D* Axis;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IAxis1D*) == 0x8);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x40
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::IFingerUseAPI
    operator ::Oculus::Interaction::IFingerUseAPI() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::IFingerUseAPI*>(this);
    }
    // Get instance field reference: private UnityEngine.Object _hand
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__hand();
    // Get instance field reference: private UnityEngine.Object _axis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__axis();
    // Get instance field reference: protected Oculus.Interaction.Input.IHand Hand
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IHand*& dyn_Hand();
    // Get instance field reference: protected Oculus.Interaction.Input.IAxis1D Axis
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IAxis1D*& dyn_Axis();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // protected System.Void Awake()
    // Offset: 0x47C1B3C
    void Awake();
    // protected System.Void Start()
    // Offset: 0x47C1BF0
    void Start();
    // public System.Single GetFingerUseStrength(Oculus.Interaction.Input.HandFinger finger)
    // Offset: 0x47C1C28
    float GetFingerUseStrength(::Oculus::Interaction::Input::HandFinger finger);
    // public System.Void InjectAllUseFingerPinchPressureApi(Oculus.Interaction.Input.IHand hand, Oculus.Interaction.Input.IAxis1D axis)
    // Offset: 0x47C1D5C
    void InjectAllUseFingerPinchPressureApi(::Oculus::Interaction::Input::IHand* hand, ::Oculus::Interaction::Input::IAxis1D* axis);
    // public System.Void InjectHand(Oculus.Interaction.Input.IHand hand)
    // Offset: 0x47C1D84
    void InjectHand(::Oculus::Interaction::Input::IHand* hand);
    // public System.Void InjectAxis(Oculus.Interaction.Input.IAxis1D pinchPressure)
    // Offset: 0x47C1E54
    void InjectAxis(::Oculus::Interaction::Input::IAxis1D* pinchPressure);
    // public System.Void .ctor()
    // Offset: 0x47C1F20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Axis1DFingerUseAPI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Axis1DFingerUseAPI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Axis1DFingerUseAPI*, creationType>()));
    }
  }; // Oculus.Interaction.Axis1DFingerUseAPI
  #pragma pack(pop)
  static check_size<sizeof(Axis1DFingerUseAPI), 64 + sizeof(bool)> __Oculus_Interaction_Axis1DFingerUseAPISizeCheck;
  static_assert(sizeof(Axis1DFingerUseAPI) == 0x41);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Axis1DFingerUseAPI::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Axis1DFingerUseAPI::*)()>(&Oculus::Interaction::Axis1DFingerUseAPI::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Axis1DFingerUseAPI*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Axis1DFingerUseAPI::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Axis1DFingerUseAPI::*)()>(&Oculus::Interaction::Axis1DFingerUseAPI::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Axis1DFingerUseAPI*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Axis1DFingerUseAPI::GetFingerUseStrength
// Il2CppName: GetFingerUseStrength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Axis1DFingerUseAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&Oculus::Interaction::Axis1DFingerUseAPI::GetFingerUseStrength)> {
  static const MethodInfo* get() {
    static auto* finger = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandFinger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Axis1DFingerUseAPI*), "GetFingerUseStrength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finger});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Axis1DFingerUseAPI::InjectAllUseFingerPinchPressureApi
// Il2CppName: InjectAllUseFingerPinchPressureApi
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Axis1DFingerUseAPI::*)(::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::Input::IAxis1D*)>(&Oculus::Interaction::Axis1DFingerUseAPI::InjectAllUseFingerPinchPressureApi)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    static auto* axis = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IAxis1D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Axis1DFingerUseAPI*), "InjectAllUseFingerPinchPressureApi", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand, axis});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Axis1DFingerUseAPI::InjectHand
// Il2CppName: InjectHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Axis1DFingerUseAPI::*)(::Oculus::Interaction::Input::IHand*)>(&Oculus::Interaction::Axis1DFingerUseAPI::InjectHand)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Axis1DFingerUseAPI*), "InjectHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Axis1DFingerUseAPI::InjectAxis
// Il2CppName: InjectAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Axis1DFingerUseAPI::*)(::Oculus::Interaction::Input::IAxis1D*)>(&Oculus::Interaction::Axis1DFingerUseAPI::InjectAxis)> {
  static const MethodInfo* get() {
    static auto* pinchPressure = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IAxis1D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Axis1DFingerUseAPI*), "InjectAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pinchPressure});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Axis1DFingerUseAPI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
