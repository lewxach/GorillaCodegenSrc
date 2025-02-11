// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: GorillaLocomotion.Player/MaterialData
#include "GorillaLocomotion/Player.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: GorillaTag
namespace GorillaTag {
  // Forward declaring type: MaterialDatasSO
  class MaterialDatasSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::MaterialDatasSO);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::MaterialDatasSO*, "GorillaTag", "MaterialDatasSO");
// Type namespace: GorillaTag
namespace GorillaTag {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTag.MaterialDatasSO
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: FFFFFFFF
  class MaterialDatasSO : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // public System.Collections.Generic.List`1<GorillaLocomotion.Player/MaterialData> datas
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::GorillaLocomotion::Player::MaterialData>* datas;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GorillaLocomotion::Player::MaterialData>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Collections.Generic.List`1<GorillaLocomotion.Player/MaterialData> datas
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GorillaLocomotion::Player::MaterialData>*& dyn_datas();
    // public System.Void .ctor()
    // Offset: 0x2879714
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialDatasSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTag::MaterialDatasSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialDatasSO*, creationType>()));
    }
  }; // GorillaTag.MaterialDatasSO
  #pragma pack(pop)
  static check_size<sizeof(MaterialDatasSO), 24 + sizeof(::System::Collections::Generic::List_1<::GorillaLocomotion::Player::MaterialData>*)> __GorillaTag_MaterialDatasSOSizeCheck;
  static_assert(sizeof(MaterialDatasSO) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::MaterialDatasSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
