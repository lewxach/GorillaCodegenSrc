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
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SkyboxSettings
  class SkyboxSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SkyboxSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SkyboxSettings*, "", "SkyboxSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: SkyboxSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class SkyboxSettings : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Material _skyMaterial
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Material* skyMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Material _skyMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__skyMaterial();
    // private System.Void OnEnable()
    // Offset: 0x2895DB8
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x2895E30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SkyboxSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SkyboxSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SkyboxSettings*, creationType>()));
    }
  }; // SkyboxSettings
  #pragma pack(pop)
  static check_size<sizeof(SkyboxSettings), 32 + sizeof(::UnityEngine::Material*)> __GlobalNamespace_SkyboxSettingsSizeCheck;
  static_assert(sizeof(SkyboxSettings) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SkyboxSettings::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SkyboxSettings::*)()>(&GlobalNamespace::SkyboxSettings::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SkyboxSettings*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SkyboxSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!