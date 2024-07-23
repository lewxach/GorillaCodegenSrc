// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.RegularExpressions.RegexOptions
#include "System/Text/RegularExpressions/RegexOptions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexNode
  class RegexNode;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexTree
  class RegexTree;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::RegularExpressions::RegexTree);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexTree*, "System.Text.RegularExpressions", "RegexTree");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexTree
  // [TokenAttribute] Offset: FFFFFFFF
  class RegexTree : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Text.RegularExpressions.RegexNode Root
    // Size: 0x8
    // Offset: 0x10
    ::System::Text::RegularExpressions::RegexNode* Root;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::RegexNode*) == 0x8);
    // public readonly System.Collections.Hashtable Caps
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Hashtable* Caps;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // public readonly System.Int32[] CapNumList
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<int> CapNumList;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public readonly System.Int32 CapTop
    // Size: 0x4
    // Offset: 0x28
    int CapTop;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: CapTop and: CapNames
    char __padding3[0x4] = {};
    // public readonly System.Collections.Hashtable CapNames
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Hashtable* CapNames;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // public readonly System.String[] CapsList
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::StringW> CapsList;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public readonly System.Text.RegularExpressions.RegexOptions Options
    // Size: 0x4
    // Offset: 0x40
    ::System::Text::RegularExpressions::RegexOptions Options;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::RegexOptions) == 0x4);
    public:
    // Get instance field reference: public readonly System.Text.RegularExpressions.RegexNode Root
    [[deprecated("Use field access instead!")]] ::System::Text::RegularExpressions::RegexNode*& dyn_Root();
    // Get instance field reference: public readonly System.Collections.Hashtable Caps
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_Caps();
    // Get instance field reference: public readonly System.Int32[] CapNumList
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_CapNumList();
    // Get instance field reference: public readonly System.Int32 CapTop
    [[deprecated("Use field access instead!")]] int& dyn_CapTop();
    // Get instance field reference: public readonly System.Collections.Hashtable CapNames
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_CapNames();
    // Get instance field reference: public readonly System.String[] CapsList
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_CapsList();
    // Get instance field reference: public readonly System.Text.RegularExpressions.RegexOptions Options
    [[deprecated("Use field access instead!")]] ::System::Text::RegularExpressions::RegexOptions& dyn_Options();
    // System.Void .ctor(System.Text.RegularExpressions.RegexNode root, System.Collections.Hashtable caps, System.Int32[] capNumList, System.Int32 capTop, System.Collections.Hashtable capNames, System.String[] capsList, System.Text.RegularExpressions.RegexOptions options)
    // Offset: 0x4F7DB90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexTree* New_ctor(::System::Text::RegularExpressions::RegexNode* root, ::System::Collections::Hashtable* caps, ::ArrayW<int> capNumList, int capTop, ::System::Collections::Hashtable* capNames, ::ArrayW<::StringW> capsList, ::System::Text::RegularExpressions::RegexOptions options) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::RegexTree::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexTree*, creationType>(root, caps, capNumList, capTop, capNames, capsList, options)));
    }
  }; // System.Text.RegularExpressions.RegexTree
  #pragma pack(pop)
  static check_size<sizeof(RegexTree), 64 + sizeof(::System::Text::RegularExpressions::RegexOptions)> __System_Text_RegularExpressions_RegexTreeSizeCheck;
  static_assert(sizeof(RegexTree) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexTree::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!