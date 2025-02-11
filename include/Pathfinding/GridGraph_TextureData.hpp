// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.GridGraph
#include "Pathfinding/GridGraph.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GridNodeBase
  class GridNodeBase;
  // Skipping declaration: ChannelUse because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::GridGraph::TextureData);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::GridGraph::TextureData*, "Pathfinding", "GridGraph/TextureData");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.GridGraph/TextureData
  // [TokenAttribute] Offset: FFFFFFFF
  class GridGraph::TextureData : public ::Il2CppObject {
    public:
    // Nested type: ::Pathfinding::GridGraph::TextureData::ChannelUse
    struct ChannelUse;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Pathfinding.GridGraph/TextureData/ChannelUse
    // [TokenAttribute] Offset: FFFFFFFF
    struct ChannelUse/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ChannelUse
      constexpr ChannelUse(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Pathfinding.GridGraph/TextureData/ChannelUse None
      static constexpr const int None = 0;
      // Get static field: static public Pathfinding.GridGraph/TextureData/ChannelUse None
      static ::Pathfinding::GridGraph::TextureData::ChannelUse _get_None();
      // Set static field: static public Pathfinding.GridGraph/TextureData/ChannelUse None
      static void _set_None(::Pathfinding::GridGraph::TextureData::ChannelUse value);
      // static field const value: static public Pathfinding.GridGraph/TextureData/ChannelUse Penalty
      static constexpr const int Penalty = 1;
      // Get static field: static public Pathfinding.GridGraph/TextureData/ChannelUse Penalty
      static ::Pathfinding::GridGraph::TextureData::ChannelUse _get_Penalty();
      // Set static field: static public Pathfinding.GridGraph/TextureData/ChannelUse Penalty
      static void _set_Penalty(::Pathfinding::GridGraph::TextureData::ChannelUse value);
      // static field const value: static public Pathfinding.GridGraph/TextureData/ChannelUse Position
      static constexpr const int Position = 2;
      // Get static field: static public Pathfinding.GridGraph/TextureData/ChannelUse Position
      static ::Pathfinding::GridGraph::TextureData::ChannelUse _get_Position();
      // Set static field: static public Pathfinding.GridGraph/TextureData/ChannelUse Position
      static void _set_Position(::Pathfinding::GridGraph::TextureData::ChannelUse value);
      // static field const value: static public Pathfinding.GridGraph/TextureData/ChannelUse WalkablePenalty
      static constexpr const int WalkablePenalty = 3;
      // Get static field: static public Pathfinding.GridGraph/TextureData/ChannelUse WalkablePenalty
      static ::Pathfinding::GridGraph::TextureData::ChannelUse _get_WalkablePenalty();
      // Set static field: static public Pathfinding.GridGraph/TextureData/ChannelUse WalkablePenalty
      static void _set_WalkablePenalty(::Pathfinding::GridGraph::TextureData::ChannelUse value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Pathfinding.GridGraph/TextureData/ChannelUse
    #pragma pack(pop)
    static check_size<sizeof(GridGraph::TextureData::ChannelUse), 0 + sizeof(int)> __Pathfinding_GridGraph_TextureData_ChannelUseSizeCheck;
    static_assert(sizeof(GridGraph::TextureData::ChannelUse) == 0x4);
    public:
    // public System.Boolean enabled
    // Size: 0x1
    // Offset: 0x10
    bool enabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enabled and: source
    char __padding0[0x7] = {};
    // public UnityEngine.Texture2D source
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Texture2D* source;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // public System.Single[] factors
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<float> factors;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public Pathfinding.GridGraph/TextureData/ChannelUse[] channels
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::Pathfinding::GridGraph::TextureData::ChannelUse> channels;
    // Field size check
    static_assert(sizeof(::ArrayW<::Pathfinding::GridGraph::TextureData::ChannelUse>) == 0x8);
    // private UnityEngine.Color32[] data
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Color32> data;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color32>) == 0x8);
    public:
    // Get instance field reference: public System.Boolean enabled
    [[deprecated("Use field access instead!")]] bool& dyn_enabled();
    // Get instance field reference: public UnityEngine.Texture2D source
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_source();
    // Get instance field reference: public System.Single[] factors
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_factors();
    // Get instance field reference: public Pathfinding.GridGraph/TextureData/ChannelUse[] channels
    [[deprecated("Use field access instead!")]] ::ArrayW<::Pathfinding::GridGraph::TextureData::ChannelUse>& dyn_channels();
    // Get instance field reference: private UnityEngine.Color32[] data
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Color32>& dyn_data();
    // public System.Void Initialize()
    // Offset: 0x29C839C
    void Initialize();
    // public System.Void Apply(Pathfinding.GridNodeBase node, System.Int32 x, System.Int32 z)
    // Offset: 0x29C853C
    void Apply(::Pathfinding::GridNodeBase* node, int x, int z);
    // private System.Void ApplyChannel(Pathfinding.GridNodeBase node, System.Int32 x, System.Int32 z, System.Int32 value, Pathfinding.GridGraph/TextureData/ChannelUse channelUse, System.Single factor)
    // Offset: 0x29C86E8
    void ApplyChannel(::Pathfinding::GridNodeBase* node, int x, int z, int value, ::Pathfinding::GridGraph::TextureData::ChannelUse channelUse, float factor);
    // public System.Void .ctor()
    // Offset: 0x29BFA64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GridGraph::TextureData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::GridGraph::TextureData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GridGraph::TextureData*, creationType>()));
    }
  }; // Pathfinding.GridGraph/TextureData
  #pragma pack(pop)
  static check_size<sizeof(GridGraph::TextureData), 48 + sizeof(::ArrayW<::UnityEngine::Color32>)> __Pathfinding_GridGraph_TextureDataSizeCheck;
  static_assert(sizeof(GridGraph::TextureData) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::GridGraph::TextureData::ChannelUse, "Pathfinding", "GridGraph/TextureData/ChannelUse");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::GridGraph::TextureData::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridGraph::TextureData::*)()>(&Pathfinding::GridGraph::TextureData::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridGraph::TextureData*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridGraph::TextureData::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridGraph::TextureData::*)(::Pathfinding::GridNodeBase*, int, int)>(&Pathfinding::GridGraph::TextureData::Apply)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GridNodeBase")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridGraph::TextureData*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, x, z});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridGraph::TextureData::ApplyChannel
// Il2CppName: ApplyChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::GridGraph::TextureData::*)(::Pathfinding::GridNodeBase*, int, int, int, ::Pathfinding::GridGraph::TextureData::ChannelUse, float)>(&Pathfinding::GridGraph::TextureData::ApplyChannel)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GridNodeBase")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channelUse = &::il2cpp_utils::GetClassFromName("Pathfinding", "GridGraph/TextureData/ChannelUse")->byval_arg;
    static auto* factor = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::GridGraph::TextureData*), "ApplyChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, x, z, value, channelUse, factor});
  }
};
// Writing MetadataGetter for method: Pathfinding::GridGraph::TextureData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
