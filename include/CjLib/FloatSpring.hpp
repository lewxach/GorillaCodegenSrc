// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: CjLib
namespace CjLib {
  // Forward declaring type: FloatSpring
  struct FloatSpring;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::CjLib::FloatSpring, "CjLib", "FloatSpring");
// Type namespace: CjLib
namespace CjLib {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: CjLib.FloatSpring
  // [TokenAttribute] Offset: FFFFFFFF
  struct FloatSpring/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single Value
    // Size: 0x4
    // Offset: 0x0
    float Value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Velocity
    // Size: 0x4
    // Offset: 0x4
    float Velocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: FloatSpring
    constexpr FloatSpring(float Value_ = {}, float Velocity_ = {}) noexcept : Value{Value_}, Velocity{Velocity_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static public readonly System.Int32 Stride
    static int _get_Stride();
    // Set static field: static public readonly System.Int32 Stride
    static void _set_Stride(int value);
    // Get instance field reference: public System.Single Value
    [[deprecated("Use field access instead!")]] float& dyn_Value();
    // Get instance field reference: public System.Single Velocity
    [[deprecated("Use field access instead!")]] float& dyn_Velocity();
    // public System.Void Reset()
    // Offset: 0x28E3D2C
    void Reset();
    // public System.Void Reset(System.Single initValue)
    // Offset: 0x28E3D34
    void Reset(float initValue);
    // public System.Void Reset(System.Single initValue, System.Single initVelocity)
    // Offset: 0x28E3D40
    void Reset(float initValue, float initVelocity);
    // public System.Single TrackDampingRatio(System.Single targetValue, System.Single angularFrequency, System.Single dampingRatio, System.Single deltaTime)
    // Offset: 0x28E3D48
    float TrackDampingRatio(float targetValue, float angularFrequency, float dampingRatio, float deltaTime);
    // public System.Single TrackHalfLife(System.Single targetValue, System.Single frequencyHz, System.Single halfLife, System.Single deltaTime)
    // Offset: 0x28E3E80
    float TrackHalfLife(float targetValue, float frequencyHz, float halfLife, float deltaTime);
    // public System.Single TrackExponential(System.Single targetValue, System.Single halfLife, System.Single deltaTime)
    // Offset: 0x28E3F5C
    float TrackExponential(float targetValue, float halfLife, float deltaTime);
    // static private System.Void .cctor()
    // Offset: 0x28E4018
    static void _cctor();
  }; // CjLib.FloatSpring
  #pragma pack(pop)
  static check_size<sizeof(FloatSpring), 4 + sizeof(float)> __CjLib_FloatSpringSizeCheck;
  static_assert(sizeof(FloatSpring) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: CjLib::FloatSpring::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CjLib::FloatSpring::*)()>(&CjLib::FloatSpring::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CjLib::FloatSpring), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: CjLib::FloatSpring::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CjLib::FloatSpring::*)(float)>(&CjLib::FloatSpring::Reset)> {
  static const MethodInfo* get() {
    static auto* initValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::FloatSpring), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initValue});
  }
};
// Writing MetadataGetter for method: CjLib::FloatSpring::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CjLib::FloatSpring::*)(float, float)>(&CjLib::FloatSpring::Reset)> {
  static const MethodInfo* get() {
    static auto* initValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* initVelocity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::FloatSpring), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initValue, initVelocity});
  }
};
// Writing MetadataGetter for method: CjLib::FloatSpring::TrackDampingRatio
// Il2CppName: TrackDampingRatio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (CjLib::FloatSpring::*)(float, float, float, float)>(&CjLib::FloatSpring::TrackDampingRatio)> {
  static const MethodInfo* get() {
    static auto* targetValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* angularFrequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* dampingRatio = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::FloatSpring), "TrackDampingRatio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetValue, angularFrequency, dampingRatio, deltaTime});
  }
};
// Writing MetadataGetter for method: CjLib::FloatSpring::TrackHalfLife
// Il2CppName: TrackHalfLife
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (CjLib::FloatSpring::*)(float, float, float, float)>(&CjLib::FloatSpring::TrackHalfLife)> {
  static const MethodInfo* get() {
    static auto* targetValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* frequencyHz = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* halfLife = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::FloatSpring), "TrackHalfLife", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetValue, frequencyHz, halfLife, deltaTime});
  }
};
// Writing MetadataGetter for method: CjLib::FloatSpring::TrackExponential
// Il2CppName: TrackExponential
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (CjLib::FloatSpring::*)(float, float, float)>(&CjLib::FloatSpring::TrackExponential)> {
  static const MethodInfo* get() {
    static auto* targetValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* halfLife = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CjLib::FloatSpring), "TrackExponential", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetValue, halfLife, deltaTime});
  }
};
// Writing MetadataGetter for method: CjLib::FloatSpring::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&CjLib::FloatSpring::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(CjLib::FloatSpring), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};