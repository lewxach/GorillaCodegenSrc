// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DayCycleTextureMoment
  class DayCycleTextureMoment;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DayCycleTexturesSO
  class DayCycleTexturesSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DayCycleTexturesSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DayCycleTexturesSO*, "", "DayCycleTexturesSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DayCycleTexturesSO
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: FFFFFFFF
  class DayCycleTexturesSO : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // public DayCycleTextureMoment[] moments
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::DayCycleTextureMoment*> moments;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::DayCycleTextureMoment*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public DayCycleTextureMoment[] moments
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::DayCycleTextureMoment*>& dyn_moments();
    // public System.Void .ctor()
    // Offset: 0x27994C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DayCycleTexturesSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DayCycleTexturesSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DayCycleTexturesSO*, creationType>()));
    }
  }; // DayCycleTexturesSO
  #pragma pack(pop)
  static check_size<sizeof(DayCycleTexturesSO), 24 + sizeof(::ArrayW<::GlobalNamespace::DayCycleTextureMoment*>)> __GlobalNamespace_DayCycleTexturesSOSizeCheck;
  static_assert(sizeof(DayCycleTexturesSO) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DayCycleTexturesSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!