// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.HDRDebugViewPass
#include "UnityEngine/Rendering/Universal/HDRDebugViewPass.hpp"
// Including type: UnityEngine.Rendering.Universal.HDRDebugMode
#include "UnityEngine/Rendering/Universal/HDRDebugMode.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Rendering.Universal.CameraData
#include "UnityEngine/Rendering/Universal/CameraData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::HDRDebugViewPass::PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::HDRDebugViewPass::PassData*, "UnityEngine.Rendering.Universal", "HDRDebugViewPass/PassData");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x248
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.HDRDebugViewPass/PassData
  // [TokenAttribute] Offset: FFFFFFFF
  class HDRDebugViewPass::PassData : public ::Il2CppObject {
    public:
    public:
    // UnityEngine.Rendering.CommandBuffer cmd
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Rendering::CommandBuffer* cmd;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::CommandBuffer*) == 0x8);
    // UnityEngine.Material material
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // UnityEngine.Rendering.Universal.HDRDebugMode hdrDebugMode
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::Rendering::Universal::HDRDebugMode hdrDebugMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::HDRDebugMode) == 0x4);
    // UnityEngine.Vector4 luminanceParameters
    // Size: 0x10
    // Offset: 0x24
    ::UnityEngine::Vector4 luminanceParameters;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // Padding between fields: luminanceParameters and: cameraData
    char __padding3[0x4] = {};
    // UnityEngine.Rendering.Universal.CameraData cameraData
    // Size: 0x210
    // Offset: 0x38
    ::UnityEngine::Rendering::Universal::CameraData cameraData;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::CameraData) == 0x210);
    public:
    // Get instance field reference: UnityEngine.Rendering.CommandBuffer cmd
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::CommandBuffer*& dyn_cmd();
    // Get instance field reference: UnityEngine.Material material
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_material();
    // Get instance field reference: UnityEngine.Rendering.Universal.HDRDebugMode hdrDebugMode
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::HDRDebugMode& dyn_hdrDebugMode();
    // Get instance field reference: UnityEngine.Vector4 luminanceParameters
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_luminanceParameters();
    // Get instance field reference: UnityEngine.Rendering.Universal.CameraData cameraData
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::CameraData& dyn_cameraData();
    // public System.Void .ctor()
    // Offset: 0x52C4E34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HDRDebugViewPass::PassData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::HDRDebugViewPass::PassData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HDRDebugViewPass::PassData*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.HDRDebugViewPass/PassData
  #pragma pack(pop)
  static check_size<sizeof(HDRDebugViewPass::PassData), 56 + sizeof(::UnityEngine::Rendering::Universal::CameraData)> __UnityEngine_Rendering_Universal_HDRDebugViewPass_PassDataSizeCheck;
  static_assert(sizeof(HDRDebugViewPass::PassData) == 0x248);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::HDRDebugViewPass::PassData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
