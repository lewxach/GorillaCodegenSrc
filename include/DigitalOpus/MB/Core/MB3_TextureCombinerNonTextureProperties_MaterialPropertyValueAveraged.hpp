// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties
#include "DigitalOpus/MB/Core/MB3_TextureCombinerNonTextureProperties.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged*, "DigitalOpus.MB.Core", "MB3_TextureCombinerNonTextureProperties/MaterialPropertyValueAveraged");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialPropertyValueAveraged
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged {
    public:
    // public System.Void TryGetPropValueFromMaterialAndBlendIntoAverage(UnityEngine.Material mat, DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialProperty property)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void TryGetPropValueFromMaterialAndBlendIntoAverage(::UnityEngine::Material* mat, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialProperty* property);
    // public System.Object GetAverage()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* GetAverage();
    // public System.Int32 NumValues()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int NumValues();
    // public System.Void SetAverageValueOrDefaultOnMaterial(UnityEngine.Material mat, DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialProperty property)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetAverageValueOrDefaultOnMaterial(::UnityEngine::Material* mat, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialProperty* property);
  }; // DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialPropertyValueAveraged
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged::TryGetPropValueFromMaterialAndBlendIntoAverage
// Il2CppName: TryGetPropValueFromMaterialAndBlendIntoAverage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialProperty*)>(&DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged::TryGetPropValueFromMaterialAndBlendIntoAverage)> {
  static const MethodInfo* get() {
    static auto* mat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* property = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombinerNonTextureProperties/MaterialProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged*), "TryGetPropValueFromMaterialAndBlendIntoAverage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mat, property});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged::GetAverage
// Il2CppName: GetAverage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged::GetAverage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged*), "GetAverage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged::NumValues
// Il2CppName: NumValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged::NumValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged*), "NumValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged::SetAverageValueOrDefaultOnMaterial
// Il2CppName: SetAverageValueOrDefaultOnMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialProperty*)>(&DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged::SetAverageValueOrDefaultOnMaterial)> {
  static const MethodInfo* get() {
    static auto* mat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* property = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombinerNonTextureProperties/MaterialProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialPropertyValueAveraged*), "SetAverageValueOrDefaultOnMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mat, property});
  }
};
