// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.VersionedMonoBehaviour
#include "Pathfinding/VersionedMonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNode
  class GraphNode;
  // Forward declaring type: BlockManager
  class BlockManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: SingleNodeBlocker
  class SingleNodeBlocker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::SingleNodeBlocker);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::SingleNodeBlocker*, "Pathfinding", "SingleNodeBlocker");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.SingleNodeBlocker
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class SingleNodeBlocker : public ::Pathfinding::VersionedMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x24 to desired offset: 0x28
    char ___base_padding[0x4] = {};
    public:
    // private Pathfinding.GraphNode <lastBlocked>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::Pathfinding::GraphNode* lastBlocked;
    // Field size check
    static_assert(sizeof(::Pathfinding::GraphNode*) == 0x8);
    // public Pathfinding.BlockManager manager
    // Size: 0x8
    // Offset: 0x30
    ::Pathfinding::BlockManager* manager;
    // Field size check
    static_assert(sizeof(::Pathfinding::BlockManager*) == 0x8);
    public:
    // Get instance field reference: private Pathfinding.GraphNode <lastBlocked>k__BackingField
    [[deprecated("Use field access instead!")]] ::Pathfinding::GraphNode*& dyn_$lastBlocked$k__BackingField();
    // Get instance field reference: public Pathfinding.BlockManager manager
    [[deprecated("Use field access instead!")]] ::Pathfinding::BlockManager*& dyn_manager();
    // public Pathfinding.GraphNode get_lastBlocked()
    // Offset: 0x2A048A0
    ::Pathfinding::GraphNode* get_lastBlocked();
    // private System.Void set_lastBlocked(Pathfinding.GraphNode value)
    // Offset: 0x2A048A8
    void set_lastBlocked(::Pathfinding::GraphNode* value);
    // public System.Void BlockAtCurrentPosition()
    // Offset: 0x2A048B0
    void BlockAtCurrentPosition();
    // public System.Void BlockAt(UnityEngine.Vector3 position)
    // Offset: 0x2A048DC
    void BlockAt(::UnityEngine::Vector3 position);
    // public System.Void Block(Pathfinding.GraphNode node)
    // Offset: 0x2A049F8
    void Block(::Pathfinding::GraphNode* node);
    // public System.Void Unblock()
    // Offset: 0x2A049A4
    void Unblock();
    // public System.Void .ctor()
    // Offset: 0x2A04A80
    // Implemented from: Pathfinding.VersionedMonoBehaviour
    // Base method: System.Void VersionedMonoBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SingleNodeBlocker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::SingleNodeBlocker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SingleNodeBlocker*, creationType>()));
    }
  }; // Pathfinding.SingleNodeBlocker
  #pragma pack(pop)
  static check_size<sizeof(SingleNodeBlocker), 48 + sizeof(::Pathfinding::BlockManager*)> __Pathfinding_SingleNodeBlockerSizeCheck;
  static_assert(sizeof(SingleNodeBlocker) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::SingleNodeBlocker::get_lastBlocked
// Il2CppName: get_lastBlocked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::GraphNode* (Pathfinding::SingleNodeBlocker::*)()>(&Pathfinding::SingleNodeBlocker::get_lastBlocked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::SingleNodeBlocker*), "get_lastBlocked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::SingleNodeBlocker::set_lastBlocked
// Il2CppName: set_lastBlocked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::SingleNodeBlocker::*)(::Pathfinding::GraphNode*)>(&Pathfinding::SingleNodeBlocker::set_lastBlocked)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::SingleNodeBlocker*), "set_lastBlocked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::SingleNodeBlocker::BlockAtCurrentPosition
// Il2CppName: BlockAtCurrentPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::SingleNodeBlocker::*)()>(&Pathfinding::SingleNodeBlocker::BlockAtCurrentPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::SingleNodeBlocker*), "BlockAtCurrentPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::SingleNodeBlocker::BlockAt
// Il2CppName: BlockAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::SingleNodeBlocker::*)(::UnityEngine::Vector3)>(&Pathfinding::SingleNodeBlocker::BlockAt)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::SingleNodeBlocker*), "BlockAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: Pathfinding::SingleNodeBlocker::Block
// Il2CppName: Block
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::SingleNodeBlocker::*)(::Pathfinding::GraphNode*)>(&Pathfinding::SingleNodeBlocker::Block)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::SingleNodeBlocker*), "Block", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Pathfinding::SingleNodeBlocker::Unblock
// Il2CppName: Unblock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::SingleNodeBlocker::*)()>(&Pathfinding::SingleNodeBlocker::Unblock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::SingleNodeBlocker*), "Unblock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::SingleNodeBlocker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!