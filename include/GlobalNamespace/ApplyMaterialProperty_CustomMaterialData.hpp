// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ApplyMaterialProperty
#include "GlobalNamespace/ApplyMaterialProperty.hpp"
// Including type: ApplyMaterialProperty/SuportedTypes
#include "GlobalNamespace/ApplyMaterialProperty_SuportedTypes.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ApplyMaterialProperty::CustomMaterialData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ApplyMaterialProperty::CustomMaterialData*, "", "ApplyMaterialProperty/CustomMaterialData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: ApplyMaterialProperty/CustomMaterialData
  // [TokenAttribute] Offset: FFFFFFFF
  class ApplyMaterialProperty::CustomMaterialData : public ::Il2CppObject {
    public:
    public:
    // public System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public ApplyMaterialProperty/SuportedTypes dataType
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::ApplyMaterialProperty::SuportedTypes dataType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ApplyMaterialProperty::SuportedTypes) == 0x4);
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x1C
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public System.Single float
    // Size: 0x4
    // Offset: 0x2C
    float _float;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector2 vector2
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Vector2 vector2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector3 vector3
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 vector3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector4 vector4
    // Size: 0x10
    // Offset: 0x44
    ::UnityEngine::Vector4 vector4;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // Padding between fields: vector4 and: texture2D
    char __padding6[0x4] = {};
    // public UnityEngine.Texture2D texture2D
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Texture2D* texture2D;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    public:
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public ApplyMaterialProperty/SuportedTypes dataType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ApplyMaterialProperty::SuportedTypes& dyn_dataType();
    // Get instance field reference: public UnityEngine.Color color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_color();
    // Get instance field reference: public System.Single float
    [[deprecated("Use field access instead!")]] float& dyn_float();
    // Get instance field reference: public UnityEngine.Vector2 vector2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_vector2();
    // Get instance field reference: public UnityEngine.Vector3 vector3
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_vector3();
    // Get instance field reference: public UnityEngine.Vector4 vector4
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_vector4();
    // Get instance field reference: public UnityEngine.Texture2D texture2D
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_texture2D();
    // public System.Void .ctor()
    // Offset: 0x278A278
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ApplyMaterialProperty::CustomMaterialData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ApplyMaterialProperty::CustomMaterialData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ApplyMaterialProperty::CustomMaterialData*, creationType>()));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x278A288
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // ApplyMaterialProperty/CustomMaterialData
  #pragma pack(pop)
  static check_size<sizeof(ApplyMaterialProperty::CustomMaterialData), 88 + sizeof(::UnityEngine::Texture2D*)> __GlobalNamespace_ApplyMaterialProperty_CustomMaterialDataSizeCheck;
  static_assert(sizeof(ApplyMaterialProperty::CustomMaterialData) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ApplyMaterialProperty::CustomMaterialData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ApplyMaterialProperty::CustomMaterialData::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ApplyMaterialProperty::CustomMaterialData::*)()>(&GlobalNamespace::ApplyMaterialProperty::CustomMaterialData::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ApplyMaterialProperty::CustomMaterialData*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};