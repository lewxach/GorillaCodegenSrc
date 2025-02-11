// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.ClearTargetsPass
#include "UnityEngine/Rendering/Universal/ClearTargetsPass.hpp"
// Including type: UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/TextureHandle.hpp"
// Including type: UnityEngine.Rendering.RTClearFlags
#include "UnityEngine/Rendering/RTClearFlags.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ClearTargetsPass::PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ClearTargetsPass::PassData*, "UnityEngine.Rendering.Universal", "ClearTargetsPass/PassData");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.ClearTargetsPass/PassData
  // [TokenAttribute] Offset: FFFFFFFF
  class ClearTargetsPass::PassData : public ::Il2CppObject {
    public:
    public:
    // UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle color
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle) == 0x8);
    // UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle depth
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle depth;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle) == 0x8);
    // UnityEngine.Rendering.RTClearFlags clearFlags
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::Rendering::RTClearFlags clearFlags;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RTClearFlags) == 0x4);
    // UnityEngine.Color clearColor
    // Size: 0x10
    // Offset: 0x24
    ::UnityEngine::Color clearColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle& dyn_color();
    // Get instance field reference: UnityEngine.Experimental.Rendering.RenderGraphModule.TextureHandle depth
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle& dyn_depth();
    // Get instance field reference: UnityEngine.Rendering.RTClearFlags clearFlags
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RTClearFlags& dyn_clearFlags();
    // Get instance field reference: UnityEngine.Color clearColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_clearColor();
    // public System.Void .ctor()
    // Offset: 0x52EEDC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClearTargetsPass::PassData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::ClearTargetsPass::PassData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClearTargetsPass::PassData*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.ClearTargetsPass/PassData
  #pragma pack(pop)
  static check_size<sizeof(ClearTargetsPass::PassData), 36 + sizeof(::UnityEngine::Color)> __UnityEngine_Rendering_Universal_ClearTargetsPass_PassDataSizeCheck;
  static_assert(sizeof(ClearTargetsPass::PassData) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ClearTargetsPass::PassData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
