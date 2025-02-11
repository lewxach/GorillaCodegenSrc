// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Type namespace: BoingKit
namespace BoingKit {
  // Forward declaring type: Vector2Spring
  struct Vector2Spring;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::BoingKit::Vector2Spring, "BoingKit", "Vector2Spring");
// Type namespace: BoingKit
namespace BoingKit {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: BoingKit.Vector2Spring
  // [TokenAttribute] Offset: FFFFFFFF
  struct Vector2Spring/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector2 Value
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Vector2 Value;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 Velocity
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Vector2 Velocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Creating value type constructor for type: Vector2Spring
    constexpr Vector2Spring(::UnityEngine::Vector2 Value_ = {}, ::UnityEngine::Vector2 Velocity_ = {}) noexcept : Value{Value_}, Velocity{Velocity_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static public readonly System.Int32 Stride
    static int _get_Stride();
    // Set static field: static public readonly System.Int32 Stride
    static void _set_Stride(int value);
    // Get instance field reference: public UnityEngine.Vector2 Value
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_Value();
    // Get instance field reference: public UnityEngine.Vector2 Velocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_Velocity();
    // public System.Void Reset()
    // Offset: 0x2903644
    void Reset();
    // public System.Void Reset(UnityEngine.Vector2 initValue)
    // Offset: 0x29036A4
    void Reset(::UnityEngine::Vector2 initValue);
    // public System.Void Reset(UnityEngine.Vector2 initValue, UnityEngine.Vector2 initVelocity)
    // Offset: 0x29036F8
    void Reset(::UnityEngine::Vector2 initValue, ::UnityEngine::Vector2 initVelocity);
    // public UnityEngine.Vector2 TrackDampingRatio(UnityEngine.Vector2 targetValue, System.Single angularFrequency, System.Single dampingRatio, System.Single deltaTime)
    // Offset: 0x2903704
    ::UnityEngine::Vector2 TrackDampingRatio(::UnityEngine::Vector2 targetValue, float angularFrequency, float dampingRatio, float deltaTime);
    // public UnityEngine.Vector2 TrackHalfLife(UnityEngine.Vector2 targetValue, System.Single frequencyHz, System.Single halfLife, System.Single deltaTime)
    // Offset: 0x2903964
    ::UnityEngine::Vector2 TrackHalfLife(::UnityEngine::Vector2 targetValue, float frequencyHz, float halfLife, float deltaTime);
    // public UnityEngine.Vector2 TrackExponential(UnityEngine.Vector2 targetValue, System.Single halfLife, System.Single deltaTime)
    // Offset: 0x2903A84
    ::UnityEngine::Vector2 TrackExponential(::UnityEngine::Vector2 targetValue, float halfLife, float deltaTime);
    // static private System.Void .cctor()
    // Offset: 0x2903B7C
    static void _cctor();
  }; // BoingKit.Vector2Spring
  #pragma pack(pop)
  static check_size<sizeof(Vector2Spring), 8 + sizeof(::UnityEngine::Vector2)> __BoingKit_Vector2SpringSizeCheck;
  static_assert(sizeof(Vector2Spring) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BoingKit::Vector2Spring::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::Vector2Spring::*)()>(&BoingKit::Vector2Spring::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::Vector2Spring), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::Vector2Spring::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::Vector2Spring::*)(::UnityEngine::Vector2)>(&BoingKit::Vector2Spring::Reset)> {
  static const MethodInfo* get() {
    static auto* initValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::Vector2Spring), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initValue});
  }
};
// Writing MetadataGetter for method: BoingKit::Vector2Spring::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::Vector2Spring::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&BoingKit::Vector2Spring::Reset)> {
  static const MethodInfo* get() {
    static auto* initValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* initVelocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::Vector2Spring), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initValue, initVelocity});
  }
};
// Writing MetadataGetter for method: BoingKit::Vector2Spring::TrackDampingRatio
// Il2CppName: TrackDampingRatio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (BoingKit::Vector2Spring::*)(::UnityEngine::Vector2, float, float, float)>(&BoingKit::Vector2Spring::TrackDampingRatio)> {
  static const MethodInfo* get() {
    static auto* targetValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* angularFrequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* dampingRatio = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::Vector2Spring), "TrackDampingRatio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetValue, angularFrequency, dampingRatio, deltaTime});
  }
};
// Writing MetadataGetter for method: BoingKit::Vector2Spring::TrackHalfLife
// Il2CppName: TrackHalfLife
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (BoingKit::Vector2Spring::*)(::UnityEngine::Vector2, float, float, float)>(&BoingKit::Vector2Spring::TrackHalfLife)> {
  static const MethodInfo* get() {
    static auto* targetValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* frequencyHz = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* halfLife = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::Vector2Spring), "TrackHalfLife", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetValue, frequencyHz, halfLife, deltaTime});
  }
};
// Writing MetadataGetter for method: BoingKit::Vector2Spring::TrackExponential
// Il2CppName: TrackExponential
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (BoingKit::Vector2Spring::*)(::UnityEngine::Vector2, float, float)>(&BoingKit::Vector2Spring::TrackExponential)> {
  static const MethodInfo* get() {
    static auto* targetValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* halfLife = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::Vector2Spring), "TrackExponential", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetValue, halfLife, deltaTime});
  }
};
// Writing MetadataGetter for method: BoingKit::Vector2Spring::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&BoingKit::Vector2Spring::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::Vector2Spring), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
