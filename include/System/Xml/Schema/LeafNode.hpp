// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.SyntaxTreeNode
#include "System/Xml/Schema/SyntaxTreeNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: InteriorNode
  class InteriorNode;
  // Forward declaring type: SymbolsDictionary
  class SymbolsDictionary;
  // Forward declaring type: Positions
  class Positions;
  // Forward declaring type: BitSet
  class BitSet;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: LeafNode
  class LeafNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::LeafNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::LeafNode*, "System.Xml.Schema", "LeafNode");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.LeafNode
  // [TokenAttribute] Offset: FFFFFFFF
  class LeafNode : public ::System::Xml::Schema::SyntaxTreeNode {
    public:
    public:
    // private System.Int32 pos
    // Size: 0x4
    // Offset: 0x10
    int pos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return pos;
    }
    // Get instance field reference: private System.Int32 pos
    [[deprecated("Use field access instead!")]] int& dyn_pos();
    // public System.Void .ctor(System.Int32 pos)
    // Offset: 0x4E77D64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeafNode* New_ctor(int pos) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::LeafNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeafNode*, creationType>(pos)));
    }
    // public System.Int32 get_Pos()
    // Offset: 0x4E77D8C
    int get_Pos();
    // public System.Void set_Pos(System.Int32 value)
    // Offset: 0x4E77D94
    void set_Pos(int value);
    // public override System.Void ExpandTree(System.Xml.Schema.InteriorNode parent, System.Xml.Schema.SymbolsDictionary symbols, System.Xml.Schema.Positions positions)
    // Offset: 0x4E77D9C
    // Implemented from: System.Xml.Schema.SyntaxTreeNode
    // Base method: System.Void SyntaxTreeNode::ExpandTree(System.Xml.Schema.InteriorNode parent, System.Xml.Schema.SymbolsDictionary symbols, System.Xml.Schema.Positions positions)
    void ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions);
    // public override System.Void ConstructPos(System.Xml.Schema.BitSet firstpos, System.Xml.Schema.BitSet lastpos, System.Xml.Schema.BitSet[] followpos)
    // Offset: 0x4E77DA0
    // Implemented from: System.Xml.Schema.SyntaxTreeNode
    // Base method: System.Void SyntaxTreeNode::ConstructPos(System.Xml.Schema.BitSet firstpos, System.Xml.Schema.BitSet lastpos, System.Xml.Schema.BitSet[] followpos)
    void ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos, ::ArrayW<::System::Xml::Schema::BitSet*> followpos);
    // public override System.Boolean get_IsNullable()
    // Offset: 0x4E77DE0
    // Implemented from: System.Xml.Schema.SyntaxTreeNode
    // Base method: System.Boolean SyntaxTreeNode::get_IsNullable()
    bool get_IsNullable();
  }; // System.Xml.Schema.LeafNode
  #pragma pack(pop)
  static check_size<sizeof(LeafNode), 16 + sizeof(int)> __System_Xml_Schema_LeafNodeSizeCheck;
  static_assert(sizeof(LeafNode) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::LeafNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::LeafNode::get_Pos
// Il2CppName: get_Pos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::LeafNode::*)()>(&System::Xml::Schema::LeafNode::get_Pos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::LeafNode*), "get_Pos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::LeafNode::set_Pos
// Il2CppName: set_Pos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::LeafNode::*)(int)>(&System::Xml::Schema::LeafNode::set_Pos)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::LeafNode*), "set_Pos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::LeafNode::ExpandTree
// Il2CppName: ExpandTree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::LeafNode::*)(::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*)>(&System::Xml::Schema::LeafNode::ExpandTree)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "InteriorNode")->byval_arg;
    static auto* symbols = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SymbolsDictionary")->byval_arg;
    static auto* positions = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "Positions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::LeafNode*), "ExpandTree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent, symbols, positions});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::LeafNode::ConstructPos
// Il2CppName: ConstructPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::LeafNode::*)(::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*>)>(&System::Xml::Schema::LeafNode::ConstructPos)> {
  static const MethodInfo* get() {
    static auto* firstpos = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet")->byval_arg;
    static auto* lastpos = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet")->byval_arg;
    static auto* followpos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::LeafNode*), "ConstructPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstpos, lastpos, followpos});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::LeafNode::get_IsNullable
// Il2CppName: get_IsNullable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::LeafNode::*)()>(&System::Xml::Schema::LeafNode::get_IsNullable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::LeafNode*), "get_IsNullable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
