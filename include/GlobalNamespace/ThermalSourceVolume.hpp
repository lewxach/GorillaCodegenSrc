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
  // Forward declaring type: ThermalSourceVolume
  class ThermalSourceVolume;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ThermalSourceVolume);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ThermalSourceVolume*, "", "ThermalSourceVolume");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: ThermalSourceVolume
  // [TokenAttribute] Offset: FFFFFFFF
  class ThermalSourceVolume : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Single celsius
    // Size: 0x4
    // Offset: 0x20
    float celsius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single innerRadius
    // Size: 0x4
    // Offset: 0x24
    float innerRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single outerRadius
    // Size: 0x4
    // Offset: 0x28
    float outerRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single celsius
    [[deprecated("Use field access instead!")]] float& dyn_celsius();
    // Get instance field reference: public System.Single innerRadius
    [[deprecated("Use field access instead!")]] float& dyn_innerRadius();
    // Get instance field reference: public System.Single outerRadius
    [[deprecated("Use field access instead!")]] float& dyn_outerRadius();
    // protected System.Void OnEnable()
    // Offset: 0x289733C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x2897390
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x28973E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThermalSourceVolume* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ThermalSourceVolume::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThermalSourceVolume*, creationType>()));
    }
  }; // ThermalSourceVolume
  #pragma pack(pop)
  static check_size<sizeof(ThermalSourceVolume), 40 + sizeof(float)> __GlobalNamespace_ThermalSourceVolumeSizeCheck;
  static_assert(sizeof(ThermalSourceVolume) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ThermalSourceVolume::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ThermalSourceVolume::*)()>(&GlobalNamespace::ThermalSourceVolume::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ThermalSourceVolume*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ThermalSourceVolume::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ThermalSourceVolume::*)()>(&GlobalNamespace::ThermalSourceVolume::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ThermalSourceVolume*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ThermalSourceVolume::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!