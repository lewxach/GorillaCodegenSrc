// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.LensFlareCommonSRP
#include "UnityEngine/Rendering/LensFlareCommonSRP.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: LensFlareComponentSRP
  class LensFlareComponentSRP;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::LensFlareCommonSRP::LensFlareCompInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LensFlareCommonSRP::LensFlareCompInfo*, "UnityEngine.Rendering", "LensFlareCommonSRP/LensFlareCompInfo");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.LensFlareCommonSRP/LensFlareCompInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class LensFlareCommonSRP::LensFlareCompInfo : public ::Il2CppObject {
    public:
    public:
    // System.Int32 index
    // Size: 0x4
    // Offset: 0x10
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: index and: comp
    char __padding0[0x4] = {};
    // UnityEngine.Rendering.LensFlareComponentSRP comp
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Rendering::LensFlareComponentSRP* comp;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::LensFlareComponentSRP*) == 0x8);
    public:
    // Get instance field reference: System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // Get instance field reference: UnityEngine.Rendering.LensFlareComponentSRP comp
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::LensFlareComponentSRP*& dyn_comp();
    // System.Void .ctor(System.Int32 idx, UnityEngine.Rendering.LensFlareComponentSRP cmp)
    // Offset: 0x524D01C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LensFlareCommonSRP::LensFlareCompInfo* New_ctor(int idx, ::UnityEngine::Rendering::LensFlareComponentSRP* cmp) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::LensFlareCommonSRP::LensFlareCompInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LensFlareCommonSRP::LensFlareCompInfo*, creationType>(idx, cmp)));
    }
  }; // UnityEngine.Rendering.LensFlareCommonSRP/LensFlareCompInfo
  #pragma pack(pop)
  static check_size<sizeof(LensFlareCommonSRP::LensFlareCompInfo), 24 + sizeof(::UnityEngine::Rendering::LensFlareComponentSRP*)> __UnityEngine_Rendering_LensFlareCommonSRP_LensFlareCompInfoSizeCheck;
  static_assert(sizeof(LensFlareCommonSRP::LensFlareCompInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::LensFlareCommonSRP::LensFlareCompInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
