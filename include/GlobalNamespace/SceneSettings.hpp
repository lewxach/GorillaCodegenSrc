// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SceneSettings
  class SceneSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SceneSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneSettings*, "", "SceneSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: SceneSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class SceneSettings : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single m_fixedTimeStep
    // Size: 0x4
    // Offset: 0x20
    float m_fixedTimeStep;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_gravityScalar
    // Size: 0x4
    // Offset: 0x24
    float m_gravityScalar;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_defaultContactOffset
    // Size: 0x4
    // Offset: 0x28
    float m_defaultContactOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Single m_fixedTimeStep
    [[deprecated("Use field access instead!")]] float& dyn_m_fixedTimeStep();
    // Get instance field reference: private System.Single m_gravityScalar
    [[deprecated("Use field access instead!")]] float& dyn_m_gravityScalar();
    // Get instance field reference: private System.Single m_defaultContactOffset
    [[deprecated("Use field access instead!")]] float& dyn_m_defaultContactOffset();
    // private System.Void Awake()
    // Offset: 0x294CD2C
    void Awake();
    // private System.Void Start()
    // Offset: 0x294CE14
    void Start();
    // static private System.Void CollidersSetContactOffset(System.Single contactOffset)
    // Offset: 0x294CE1C
    static void CollidersSetContactOffset(float contactOffset);
    // public System.Void .ctor()
    // Offset: 0x294CEE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SceneSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSettings*, creationType>()));
    }
  }; // SceneSettings
  #pragma pack(pop)
  static check_size<sizeof(SceneSettings), 40 + sizeof(float)> __GlobalNamespace_SceneSettingsSizeCheck;
  static_assert(sizeof(SceneSettings) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SceneSettings::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneSettings::*)()>(&GlobalNamespace::SceneSettings::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneSettings*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneSettings::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneSettings::*)()>(&GlobalNamespace::SceneSettings::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneSettings*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneSettings::CollidersSetContactOffset
// Il2CppName: CollidersSetContactOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&GlobalNamespace::SceneSettings::CollidersSetContactOffset)> {
  static const MethodInfo* get() {
    static auto* contactOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneSettings*), "CollidersSetContactOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{contactOffset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!