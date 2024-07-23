// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Rendering.SortingLayerRange
#include "UnityEngine/Rendering/SortingLayerRange.hpp"
// Including type: UnityEngine.Rendering.Universal.LightStats
#include "UnityEngine/Rendering/Universal/LightStats.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RenderTargetIdentifier
  struct RenderTargetIdentifier;
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTextureDescriptor
  struct RenderTextureDescriptor;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: LayerBatch
  struct LayerBatch;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LayerBatch, "UnityEngine.Rendering.Universal", "LayerBatch");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x31
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.Universal.LayerBatch
  // [TokenAttribute] Offset: FFFFFFFF
  struct LayerBatch/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::UnityEngine::Rendering::Universal::LayerBatch::$renderTargetIds$e__FixedBuffer
    struct $renderTargetIds$e__FixedBuffer;
    // Nested type: ::UnityEngine::Rendering::Universal::LayerBatch::$renderTargetUsed$e__FixedBuffer
    struct $renderTargetUsed$e__FixedBuffer;
    // Size: 0x4
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.Rendering.Universal.LayerBatch/<renderTargetIds>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    struct $renderTargetIds$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Int32 FixedElementField
      // Size: 0x4
      // Offset: 0x0
      int FixedElementField;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: $renderTargetIds$e__FixedBuffer
      constexpr $renderTargetIds$e__FixedBuffer(int FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return FixedElementField;
      }
      // Get instance field reference: public System.Int32 FixedElementField
      [[deprecated("Use field access instead!")]] int& dyn_FixedElementField();
    }; // UnityEngine.Rendering.Universal.LayerBatch/<renderTargetIds>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(LayerBatch::$renderTargetIds$e__FixedBuffer), 0 + sizeof(int)> __UnityEngine_Rendering_Universal_LayerBatch_$renderTargetIds$e__FixedBufferSizeCheck;
    static_assert(sizeof(LayerBatch::$renderTargetIds$e__FixedBuffer) == 0x4);
    // Size: 0x1
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.Rendering.Universal.LayerBatch/<renderTargetUsed>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    struct $renderTargetUsed$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Boolean FixedElementField
      // Size: 0x1
      // Offset: 0x0
      bool FixedElementField;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      public:
      // Creating value type constructor for type: $renderTargetUsed$e__FixedBuffer
      constexpr $renderTargetUsed$e__FixedBuffer(bool FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating conversion operator: operator bool
      constexpr operator bool() const noexcept {
        return FixedElementField;
      }
      // Get instance field reference: public System.Boolean FixedElementField
      [[deprecated("Use field access instead!")]] bool& dyn_FixedElementField();
    }; // UnityEngine.Rendering.Universal.LayerBatch/<renderTargetUsed>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(LayerBatch::$renderTargetUsed$e__FixedBuffer), 0 + sizeof(bool)> __UnityEngine_Rendering_Universal_LayerBatch_$renderTargetUsed$e__FixedBufferSizeCheck;
    static_assert(sizeof(LayerBatch::$renderTargetUsed$e__FixedBuffer) == 0x1);
    public:
    // public System.Int32 startLayerID
    // Size: 0x4
    // Offset: 0x0
    int startLayerID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 endLayerValue
    // Size: 0x4
    // Offset: 0x4
    int endLayerValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Rendering.SortingLayerRange layerRange
    // Size: 0x4
    // Offset: 0x8
    ::UnityEngine::Rendering::SortingLayerRange layerRange;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::SortingLayerRange) == 0x4);
    // public UnityEngine.Rendering.Universal.LightStats lightStats
    // Size: 0x14
    // Offset: 0xC
    ::UnityEngine::Rendering::Universal::LightStats lightStats;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::LightStats) == 0x14);
    // private UnityEngine.Rendering.Universal.LayerBatch/<renderTargetIds>e__FixedBuffer renderTargetIds
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::Rendering::Universal::LayerBatch::$renderTargetIds$e__FixedBuffer renderTargetIds;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::LayerBatch::$renderTargetIds$e__FixedBuffer) == 0x4);
    // Padding between fields: renderTargetIds and: renderTargetUsed
    char __padding4[0xC] = {};
    // private UnityEngine.Rendering.Universal.LayerBatch/<renderTargetUsed>e__FixedBuffer renderTargetUsed
    // Size: 0x1
    // Offset: 0x30
    ::UnityEngine::Rendering::Universal::LayerBatch::$renderTargetUsed$e__FixedBuffer renderTargetUsed;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::LayerBatch::$renderTargetUsed$e__FixedBuffer) == 0x1);
    public:
    // Creating value type constructor for type: LayerBatch
    constexpr LayerBatch(int startLayerID_ = {}, int endLayerValue_ = {}, ::UnityEngine::Rendering::SortingLayerRange layerRange_ = {}, ::UnityEngine::Rendering::Universal::LightStats lightStats_ = {}, ::UnityEngine::Rendering::Universal::LayerBatch::$renderTargetIds$e__FixedBuffer renderTargetIds_ = {}, ::UnityEngine::Rendering::Universal::LayerBatch::$renderTargetUsed$e__FixedBuffer renderTargetUsed_ = {}) noexcept : startLayerID{startLayerID_}, endLayerValue{endLayerValue_}, layerRange{layerRange_}, lightStats{lightStats_}, renderTargetIds{renderTargetIds_}, renderTargetUsed{renderTargetUsed_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 startLayerID
    [[deprecated("Use field access instead!")]] int& dyn_startLayerID();
    // Get instance field reference: public System.Int32 endLayerValue
    [[deprecated("Use field access instead!")]] int& dyn_endLayerValue();
    // Get instance field reference: public UnityEngine.Rendering.SortingLayerRange layerRange
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::SortingLayerRange& dyn_layerRange();
    // Get instance field reference: public UnityEngine.Rendering.Universal.LightStats lightStats
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::LightStats& dyn_lightStats();
    // Get instance field reference: private UnityEngine.Rendering.Universal.LayerBatch/<renderTargetIds>e__FixedBuffer renderTargetIds
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::LayerBatch::$renderTargetIds$e__FixedBuffer& dyn_renderTargetIds();
    // Get instance field reference: private UnityEngine.Rendering.Universal.LayerBatch/<renderTargetUsed>e__FixedBuffer renderTargetUsed
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::LayerBatch::$renderTargetUsed$e__FixedBuffer& dyn_renderTargetUsed();
    // public System.Void InitRTIds(System.Int32 index)
    // Offset: 0x5286AD8
    void InitRTIds(int index);
    // public UnityEngine.Rendering.RenderTargetIdentifier GetRTId(UnityEngine.Rendering.CommandBuffer cmd, UnityEngine.RenderTextureDescriptor desc, System.Int32 index)
    // Offset: 0x5284278
    ::UnityEngine::Rendering::RenderTargetIdentifier GetRTId(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor desc, int index);
    // public System.Void ReleaseRT(UnityEngine.Rendering.CommandBuffer cmd)
    // Offset: 0x5284C04
    void ReleaseRT(::UnityEngine::Rendering::CommandBuffer* cmd);
  }; // UnityEngine.Rendering.Universal.LayerBatch
  #pragma pack(pop)
  static check_size<sizeof(LayerBatch), 48 + sizeof(::UnityEngine::Rendering::Universal::LayerBatch::$renderTargetUsed$e__FixedBuffer)> __UnityEngine_Rendering_Universal_LayerBatchSizeCheck;
  static_assert(sizeof(LayerBatch) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LayerBatch::$renderTargetUsed$e__FixedBuffer, "UnityEngine.Rendering.Universal", "LayerBatch/<renderTargetUsed>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LayerBatch::$renderTargetIds$e__FixedBuffer, "UnityEngine.Rendering.Universal", "LayerBatch/<renderTargetIds>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LayerBatch::InitRTIds
// Il2CppName: InitRTIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::LayerBatch::*)(int)>(&UnityEngine::Rendering::Universal::LayerBatch::InitRTIds)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LayerBatch), "InitRTIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LayerBatch::GetRTId
// Il2CppName: GetRTId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (UnityEngine::Rendering::Universal::LayerBatch::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor, int)>(&UnityEngine::Rendering::Universal::LayerBatch::GetRTId)> {
  static const MethodInfo* get() {
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* desc = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LayerBatch), "GetRTId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmd, desc, index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LayerBatch::ReleaseRT
// Il2CppName: ReleaseRT
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::LayerBatch::*)(::UnityEngine::Rendering::CommandBuffer*)>(&UnityEngine::Rendering::Universal::LayerBatch::ReleaseRT)> {
  static const MethodInfo* get() {
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LayerBatch), "ReleaseRT", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmd});
  }
};