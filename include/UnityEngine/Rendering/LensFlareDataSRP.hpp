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
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: LensFlareDataElementSRP
  class LensFlareDataElementSRP;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: LensFlareDataSRP
  class LensFlareDataSRP;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::LensFlareDataSRP);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LensFlareDataSRP*, "UnityEngine.Rendering", "LensFlareDataSRP");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.LensFlareDataSRP
  // [TokenAttribute] Offset: FFFFFFFF
  class LensFlareDataSRP : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // public UnityEngine.Rendering.LensFlareDataElementSRP[] elements
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*> elements;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Rendering.LensFlareDataElementSRP[] elements
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*>& dyn_elements();
    // public System.Void .ctor()
    // Offset: 0x5252258
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LensFlareDataSRP* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::LensFlareDataSRP::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LensFlareDataSRP*, creationType>()));
    }
  }; // UnityEngine.Rendering.LensFlareDataSRP
  #pragma pack(pop)
  static check_size<sizeof(LensFlareDataSRP), 24 + sizeof(::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*>)> __UnityEngine_Rendering_LensFlareDataSRPSizeCheck;
  static_assert(sizeof(LensFlareDataSRP) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::LensFlareDataSRP::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!