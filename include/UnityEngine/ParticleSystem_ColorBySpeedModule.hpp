// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem::ColorBySpeedModule, "UnityEngine", "ParticleSystem/ColorBySpeedModule");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ParticleSystem/ColorBySpeedModule
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParticleSystem::ColorBySpeedModule/*, public ::System::ValueType*/ {
    public:
    public:
    // UnityEngine.ParticleSystem m_ParticleSystem
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::ParticleSystem* m_ParticleSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    public:
    // Creating value type constructor for type: ColorBySpeedModule
    constexpr ColorBySpeedModule(::UnityEngine::ParticleSystem* m_ParticleSystem_ = {}) noexcept : m_ParticleSystem{m_ParticleSystem_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::ParticleSystem*
    constexpr operator ::UnityEngine::ParticleSystem*() const noexcept {
      return m_ParticleSystem;
    }
    // Get instance field reference: UnityEngine.ParticleSystem m_ParticleSystem
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn_m_ParticleSystem();
    // System.Void .ctor(UnityEngine.ParticleSystem particleSystem)
    // Offset: 0x551F284
    // ABORTED: conflicts with another method.  ColorBySpeedModule(::UnityEngine::ParticleSystem* particleSystem);
    // public System.Void set_color(UnityEngine.ParticleSystem/MinMaxGradient value)
    // Offset: 0x5520FFC
    void set_color(::UnityEngine::ParticleSystem::MinMaxGradient value);
    // static private System.Void set_color_Injected(ref UnityEngine.ParticleSystem/ColorBySpeedModule _unity_self, ref UnityEngine.ParticleSystem/MinMaxGradient value)
    // Offset: 0x5521040
    static void set_color_Injected(ByRef<::UnityEngine::ParticleSystem::ColorBySpeedModule> _unity_self, ByRef<::UnityEngine::ParticleSystem::MinMaxGradient> value);
  }; // UnityEngine.ParticleSystem/ColorBySpeedModule
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystem::ColorBySpeedModule), 0 + sizeof(::UnityEngine::ParticleSystem*)> __UnityEngine_ParticleSystem_ColorBySpeedModuleSizeCheck;
  static_assert(sizeof(ParticleSystem::ColorBySpeedModule) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::ColorBySpeedModule::ColorBySpeedModule
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::ColorBySpeedModule::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::ColorBySpeedModule::*)(::UnityEngine::ParticleSystem::MinMaxGradient)>(&UnityEngine::ParticleSystem::ColorBySpeedModule::set_color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxGradient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::ColorBySpeedModule), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::ColorBySpeedModule::set_color_Injected
// Il2CppName: set_color_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::ParticleSystem::ColorBySpeedModule>, ByRef<::UnityEngine::ParticleSystem::MinMaxGradient>)>(&UnityEngine::ParticleSystem::ColorBySpeedModule::set_color_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/ColorBySpeedModule")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxGradient")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::ColorBySpeedModule), "set_color_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, value});
  }
};
