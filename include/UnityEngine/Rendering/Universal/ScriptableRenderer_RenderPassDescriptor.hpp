// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.ScriptableRenderer
#include "UnityEngine/Rendering/Universal/ScriptableRenderer.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderer::RenderPassDescriptor, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderPassDescriptor");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.Universal.ScriptableRenderer/RenderPassDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  struct ScriptableRenderer::RenderPassDescriptor/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Int32 w
    // Size: 0x4
    // Offset: 0x0
    int w;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 h
    // Size: 0x4
    // Offset: 0x4
    int h;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 samples
    // Size: 0x4
    // Offset: 0x8
    int samples;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 depthID
    // Size: 0x4
    // Offset: 0xC
    int depthID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RenderPassDescriptor
    constexpr RenderPassDescriptor(int w_ = {}, int h_ = {}, int samples_ = {}, int depthID_ = {}) noexcept : w{w_}, h{h_}, samples{samples_}, depthID{depthID_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.Int32 w
    [[deprecated("Use field access instead!")]] int& dyn_w();
    // Get instance field reference: System.Int32 h
    [[deprecated("Use field access instead!")]] int& dyn_h();
    // Get instance field reference: System.Int32 samples
    [[deprecated("Use field access instead!")]] int& dyn_samples();
    // Get instance field reference: System.Int32 depthID
    [[deprecated("Use field access instead!")]] int& dyn_depthID();
    // System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 sampleCount, System.Int32 rtID)
    // Offset: 0x52BB3E4
    // ABORTED: conflicts with another method.  RenderPassDescriptor(int width, int height, int sampleCount, int rtID);
  }; // UnityEngine.Rendering.Universal.ScriptableRenderer/RenderPassDescriptor
  #pragma pack(pop)
  static check_size<sizeof(ScriptableRenderer::RenderPassDescriptor), 12 + sizeof(int)> __UnityEngine_Rendering_Universal_ScriptableRenderer_RenderPassDescriptorSizeCheck;
  static_assert(sizeof(ScriptableRenderer::RenderPassDescriptor) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRenderer::RenderPassDescriptor::RenderPassDescriptor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!