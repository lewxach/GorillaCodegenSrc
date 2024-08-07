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
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: BinaryWriter
  class BinaryWriter;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNode
  class GraphNode;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Serialization::AstarSerializer::$$c__DisplayClass31_0);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Serialization::AstarSerializer::$$c__DisplayClass31_0*, "Pathfinding.Serialization", "AstarSerializer/<>c__DisplayClass31_0");
// Type namespace: Pathfinding.Serialization
namespace Pathfinding::Serialization {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Serialization.AstarSerializer/<>c__DisplayClass31_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AstarSerializer::$$c__DisplayClass31_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 maxNodeIndex2
    // Size: 0x4
    // Offset: 0x10
    int maxNodeIndex2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: maxNodeIndex2 and: writer
    char __padding0[0x4] = {};
    // public System.IO.BinaryWriter writer
    // Size: 0x8
    // Offset: 0x18
    ::System::IO::BinaryWriter* writer;
    // Field size check
    static_assert(sizeof(::System::IO::BinaryWriter*) == 0x8);
    // public System.Action`1<Pathfinding.GraphNode> <>9__0
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::Pathfinding::GraphNode*>* $$9__0;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Pathfinding::GraphNode*>*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 maxNodeIndex2
    [[deprecated("Use field access instead!")]] int& dyn_maxNodeIndex2();
    // Get instance field reference: public System.IO.BinaryWriter writer
    [[deprecated("Use field access instead!")]] ::System::IO::BinaryWriter*& dyn_writer();
    // Get instance field reference: public System.Action`1<Pathfinding.GraphNode> <>9__0
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Pathfinding::GraphNode*>*& dyn_$$9__0();
    // public System.Void .ctor()
    // Offset: 0x2A20728
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AstarSerializer::$$c__DisplayClass31_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Serialization::AstarSerializer::$$c__DisplayClass31_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AstarSerializer::$$c__DisplayClass31_0*, creationType>()));
    }
    // System.Void <SerializeNodeIndices>b__0(Pathfinding.GraphNode node)
    // Offset: 0x2A23A18
    void $SerializeNodeIndices$b__0(::Pathfinding::GraphNode* node);
  }; // Pathfinding.Serialization.AstarSerializer/<>c__DisplayClass31_0
  #pragma pack(pop)
  static check_size<sizeof(AstarSerializer::$$c__DisplayClass31_0), 32 + sizeof(::System::Action_1<::Pathfinding::GraphNode*>*)> __Pathfinding_Serialization_AstarSerializer_$$c__DisplayClass31_0SizeCheck;
  static_assert(sizeof(AstarSerializer::$$c__DisplayClass31_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Serialization::AstarSerializer::$$c__DisplayClass31_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Serialization::AstarSerializer::$$c__DisplayClass31_0::$SerializeNodeIndices$b__0
// Il2CppName: <SerializeNodeIndices>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Serialization::AstarSerializer::$$c__DisplayClass31_0::*)(::Pathfinding::GraphNode*)>(&Pathfinding::Serialization::AstarSerializer::$$c__DisplayClass31_0::$SerializeNodeIndices$b__0)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Serialization::AstarSerializer::$$c__DisplayClass31_0*), "<SerializeNodeIndices>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
