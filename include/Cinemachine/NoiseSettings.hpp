// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.SignalSourceAsset
#include "Cinemachine/SignalSourceAsset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Cinemachine
namespace Cinemachine {
  // Skipping declaration: NoiseParams because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: NoiseSettings
  class NoiseSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::NoiseSettings);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::NoiseSettings*, "Cinemachine", "NoiseSettings");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.NoiseSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [DocumentationSortingAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class NoiseSettings : public ::Cinemachine::SignalSourceAsset {
    public:
    // Nested type: ::Cinemachine::NoiseSettings::NoiseParams
    struct NoiseParams;
    // Nested type: ::Cinemachine::NoiseSettings::TransformNoiseParams
    struct TransformNoiseParams;
    // Size: 0x9
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Cinemachine.NoiseSettings/NoiseParams
    // [TokenAttribute] Offset: FFFFFFFF
    // [DocumentationSortingAttribute] Offset: FFFFFFFF
    struct NoiseParams/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Single Frequency
      // Size: 0x4
      // Offset: 0x0
      float Frequency;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single Amplitude
      // Size: 0x4
      // Offset: 0x4
      float Amplitude;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Boolean Constant
      // Size: 0x1
      // Offset: 0x8
      bool Constant;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      public:
      // Creating value type constructor for type: NoiseParams
      constexpr NoiseParams(float Frequency_ = {}, float Amplitude_ = {}, bool Constant_ = {}) noexcept : Frequency{Frequency_}, Amplitude{Amplitude_}, Constant{Constant_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Single Frequency
      [[deprecated("Use field access instead!")]] float& dyn_Frequency();
      // Get instance field reference: public System.Single Amplitude
      [[deprecated("Use field access instead!")]] float& dyn_Amplitude();
      // Get instance field reference: public System.Boolean Constant
      [[deprecated("Use field access instead!")]] bool& dyn_Constant();
      // public System.Single GetValueAt(System.Single time, System.Single timeOffset)
      // Offset: 0x2AB3C10
      float GetValueAt(float time, float timeOffset);
    }; // Cinemachine.NoiseSettings/NoiseParams
    #pragma pack(pop)
    static check_size<sizeof(NoiseSettings::NoiseParams), 8 + sizeof(bool)> __Cinemachine_NoiseSettings_NoiseParamsSizeCheck;
    static_assert(sizeof(NoiseSettings::NoiseParams) == 0x9);
    // Size: 0x21
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Cinemachine.NoiseSettings/TransformNoiseParams
    // [TokenAttribute] Offset: FFFFFFFF
    // [DocumentationSortingAttribute] Offset: FFFFFFFF
    struct TransformNoiseParams/*, public ::System::ValueType*/ {
      public:
      public:
      // public Cinemachine.NoiseSettings/NoiseParams X
      // Size: 0x9
      // Offset: 0x0
      ::Cinemachine::NoiseSettings::NoiseParams X;
      // Field size check
      static_assert(sizeof(::Cinemachine::NoiseSettings::NoiseParams) == 0x9);
      // Padding between fields: X and: Y
      char __padding0[0x3] = {};
      // public Cinemachine.NoiseSettings/NoiseParams Y
      // Size: 0x9
      // Offset: 0xC
      ::Cinemachine::NoiseSettings::NoiseParams Y;
      // Field size check
      static_assert(sizeof(::Cinemachine::NoiseSettings::NoiseParams) == 0x9);
      // Padding between fields: Y and: Z
      char __padding1[0x3] = {};
      // public Cinemachine.NoiseSettings/NoiseParams Z
      // Size: 0x9
      // Offset: 0x18
      ::Cinemachine::NoiseSettings::NoiseParams Z;
      // Field size check
      static_assert(sizeof(::Cinemachine::NoiseSettings::NoiseParams) == 0x9);
      public:
      // Creating value type constructor for type: TransformNoiseParams
      constexpr TransformNoiseParams(::Cinemachine::NoiseSettings::NoiseParams X_ = {}, ::Cinemachine::NoiseSettings::NoiseParams Y_ = {}, ::Cinemachine::NoiseSettings::NoiseParams Z_ = {}) noexcept : X{X_}, Y{Y_}, Z{Z_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public Cinemachine.NoiseSettings/NoiseParams X
      [[deprecated("Use field access instead!")]] ::Cinemachine::NoiseSettings::NoiseParams& dyn_X();
      // Get instance field reference: public Cinemachine.NoiseSettings/NoiseParams Y
      [[deprecated("Use field access instead!")]] ::Cinemachine::NoiseSettings::NoiseParams& dyn_Y();
      // Get instance field reference: public Cinemachine.NoiseSettings/NoiseParams Z
      [[deprecated("Use field access instead!")]] ::Cinemachine::NoiseSettings::NoiseParams& dyn_Z();
      // public UnityEngine.Vector3 GetValueAt(System.Single time, UnityEngine.Vector3 timeOffsets)
      // Offset: 0x2AB39B0
      ::UnityEngine::Vector3 GetValueAt(float time, ::UnityEngine::Vector3 timeOffsets);
    }; // Cinemachine.NoiseSettings/TransformNoiseParams
    #pragma pack(pop)
    static check_size<sizeof(NoiseSettings::TransformNoiseParams), 24 + sizeof(::Cinemachine::NoiseSettings::NoiseParams)> __Cinemachine_NoiseSettings_TransformNoiseParamsSizeCheck;
    static_assert(sizeof(NoiseSettings::TransformNoiseParams) == 0x21);
    public:
    // public Cinemachine.NoiseSettings/TransformNoiseParams[] PositionNoise
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Cinemachine::NoiseSettings::TransformNoiseParams> PositionNoise;
    // Field size check
    static_assert(sizeof(::ArrayW<::Cinemachine::NoiseSettings::TransformNoiseParams>) == 0x8);
    // public Cinemachine.NoiseSettings/TransformNoiseParams[] OrientationNoise
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::Cinemachine::NoiseSettings::TransformNoiseParams> OrientationNoise;
    // Field size check
    static_assert(sizeof(::ArrayW<::Cinemachine::NoiseSettings::TransformNoiseParams>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public Cinemachine.NoiseSettings/TransformNoiseParams[] PositionNoise
    [[deprecated("Use field access instead!")]] ::ArrayW<::Cinemachine::NoiseSettings::TransformNoiseParams>& dyn_PositionNoise();
    // Get instance field reference: public Cinemachine.NoiseSettings/TransformNoiseParams[] OrientationNoise
    [[deprecated("Use field access instead!")]] ::ArrayW<::Cinemachine::NoiseSettings::TransformNoiseParams>& dyn_OrientationNoise();
    // static public UnityEngine.Vector3 GetCombinedFilterResults(Cinemachine.NoiseSettings/TransformNoiseParams[] noiseParams, System.Single time, UnityEngine.Vector3 timeOffsets)
    // Offset: 0x2AB38C4
    static ::UnityEngine::Vector3 GetCombinedFilterResults(::ArrayW<::Cinemachine::NoiseSettings::TransformNoiseParams> noiseParams, float time, ::UnityEngine::Vector3 timeOffsets);
    // public override System.Single get_SignalDuration()
    // Offset: 0x2AB3A14
    // Implemented from: Cinemachine.SignalSourceAsset
    // Base method: System.Single SignalSourceAsset::get_SignalDuration()
    float get_SignalDuration();
    // public override System.Void GetSignal(System.Single timeSinceSignalStart, out UnityEngine.Vector3 pos, out UnityEngine.Quaternion rot)
    // Offset: 0x2AB3A1C
    // Implemented from: Cinemachine.SignalSourceAsset
    // Base method: System.Void SignalSourceAsset::GetSignal(System.Single timeSinceSignalStart, out UnityEngine.Vector3 pos, out UnityEngine.Quaternion rot)
    void GetSignal(float timeSinceSignalStart, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);
    // public System.Void .ctor()
    // Offset: 0x2AB3B08
    // Implemented from: Cinemachine.SignalSourceAsset
    // Base method: System.Void SignalSourceAsset::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoiseSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::NoiseSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoiseSettings*, creationType>()));
    }
  }; // Cinemachine.NoiseSettings
  #pragma pack(pop)
  static check_size<sizeof(NoiseSettings), 32 + sizeof(::ArrayW<::Cinemachine::NoiseSettings::TransformNoiseParams>)> __Cinemachine_NoiseSettingsSizeCheck;
  static_assert(sizeof(NoiseSettings) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::NoiseSettings::TransformNoiseParams, "Cinemachine", "NoiseSettings/TransformNoiseParams");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::NoiseSettings::NoiseParams, "Cinemachine", "NoiseSettings/NoiseParams");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::NoiseSettings::GetCombinedFilterResults
// Il2CppName: GetCombinedFilterResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::ArrayW<::Cinemachine::NoiseSettings::TransformNoiseParams>, float, ::UnityEngine::Vector3)>(&Cinemachine::NoiseSettings::GetCombinedFilterResults)> {
  static const MethodInfo* get() {
    static auto* noiseParams = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Cinemachine", "NoiseSettings/TransformNoiseParams"), 1)->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* timeOffsets = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::NoiseSettings*), "GetCombinedFilterResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noiseParams, time, timeOffsets});
  }
};
// Writing MetadataGetter for method: Cinemachine::NoiseSettings::get_SignalDuration
// Il2CppName: get_SignalDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Cinemachine::NoiseSettings::*)()>(&Cinemachine::NoiseSettings::get_SignalDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::NoiseSettings*), "get_SignalDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::NoiseSettings::GetSignal
// Il2CppName: GetSignal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::NoiseSettings::*)(float, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(&Cinemachine::NoiseSettings::GetSignal)> {
  static const MethodInfo* get() {
    static auto* timeSinceSignalStart = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* rot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::NoiseSettings*), "GetSignal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeSinceSignalStart, pos, rot});
  }
};
// Writing MetadataGetter for method: Cinemachine::NoiseSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
