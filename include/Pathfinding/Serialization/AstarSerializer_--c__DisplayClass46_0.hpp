// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.Serialization.AstarSerializer
#include "Pathfinding/Serialization/AstarSerializer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Serialization
namespace Pathfinding::Serialization {
  // Forward declaring type: GraphSerializationContext
  class GraphSerializationContext;
}
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNode
  class GraphNode;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Serialization::AstarSerializer::$$c__DisplayClass46_0);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Serialization::AstarSerializer::$$c__DisplayClass46_0*, "Pathfinding.Serialization", "AstarSerializer/<>c__DisplayClass46_0");
// Type namespace: Pathfinding.Serialization
namespace Pathfinding::Serialization {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Serialization.AstarSerializer/<>c__DisplayClass46_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AstarSerializer::$$c__DisplayClass46_0 : public ::Il2CppObject {
    public:
    public:
    // public Pathfinding.Serialization.GraphSerializationContext ctx
    // Size: 0x8
    // Offset: 0x10
    ::Pathfinding::Serialization::GraphSerializationContext* ctx;
    // Field size check
    static_assert(sizeof(::Pathfinding::Serialization::GraphSerializationContext*) == 0x8);
    public:
    // Creating conversion operator: operator ::Pathfinding::Serialization::GraphSerializationContext*
    constexpr operator ::Pathfinding::Serialization::GraphSerializationContext*() const noexcept {
      return ctx;
    }
    // Get instance field reference: public Pathfinding.Serialization.GraphSerializationContext ctx
    [[deprecated("Use field access instead!")]] ::Pathfinding::Serialization::GraphSerializationContext*& dyn_ctx();
    // public System.Void .ctor()
    // Offset: 0x2A22ECC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AstarSerializer::$$c__DisplayClass46_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Serialization::AstarSerializer::$$c__DisplayClass46_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AstarSerializer::$$c__DisplayClass46_0*, creationType>()));
    }
    // System.Void <DeserializeNodeReferences>b__0(Pathfinding.GraphNode node)
    // Offset: 0x2A23BB0
    void $DeserializeNodeReferences$b__0(::Pathfinding::GraphNode* node);
  }; // Pathfinding.Serialization.AstarSerializer/<>c__DisplayClass46_0
  #pragma pack(pop)
  static check_size<sizeof(AstarSerializer::$$c__DisplayClass46_0), 16 + sizeof(::Pathfinding::Serialization::GraphSerializationContext*)> __Pathfinding_Serialization_AstarSerializer_$$c__DisplayClass46_0SizeCheck;
  static_assert(sizeof(AstarSerializer::$$c__DisplayClass46_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Serialization::AstarSerializer::$$c__DisplayClass46_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Serialization::AstarSerializer::$$c__DisplayClass46_0::$DeserializeNodeReferences$b__0
// Il2CppName: <DeserializeNodeReferences>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Serialization::AstarSerializer::$$c__DisplayClass46_0::*)(::Pathfinding::GraphNode*)>(&Pathfinding::Serialization::AstarSerializer::$$c__DisplayClass46_0::$DeserializeNodeReferences$b__0)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Serialization::AstarSerializer::$$c__DisplayClass46_0*), "<DeserializeNodeReferences>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
