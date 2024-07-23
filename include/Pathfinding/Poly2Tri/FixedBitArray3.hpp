// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Poly2Tri
namespace Pathfinding::Poly2Tri {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Completed forward declares
// Type namespace: Pathfinding.Poly2Tri
namespace Pathfinding::Poly2Tri {
  // Forward declaring type: FixedBitArray3
  struct FixedBitArray3;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Poly2Tri::FixedBitArray3, "Pathfinding.Poly2Tri", "FixedBitArray3");
// Type namespace: Pathfinding.Poly2Tri
namespace Pathfinding::Poly2Tri {
  // Size: 0x3
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Pathfinding.Poly2Tri.FixedBitArray3
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  struct FixedBitArray3/*, public ::System::ValueType, public ::System::Collections::Generic::IEnumerable_1<bool>*/ {
    public:
    // Nested type: ::Pathfinding::Poly2Tri::FixedBitArray3::$Enumerate$c__Iterator1
    class $Enumerate$c__Iterator1;
    public:
    // public System.Boolean _0
    // Size: 0x1
    // Offset: 0x0
    bool _0;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _1
    // Size: 0x1
    // Offset: 0x1
    bool _1;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _2
    // Size: 0x1
    // Offset: 0x2
    bool _2;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: FixedBitArray3
    constexpr FixedBitArray3(bool _0_ = {}, bool _1_ = {}, bool _2_ = {}) noexcept : _0{_0_}, _1{_1_}, _2{_2_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<bool>
    operator ::System::Collections::Generic::IEnumerable_1<bool>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<bool>*>(this);
    }
    // Get instance field reference: public System.Boolean _0
    [[deprecated("Use field access instead!")]] bool& dyn__0();
    // Get instance field reference: public System.Boolean _1
    [[deprecated("Use field access instead!")]] bool& dyn__1();
    // Get instance field reference: public System.Boolean _2
    [[deprecated("Use field access instead!")]] bool& dyn__2();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x49C829C
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Boolean get_Item(System.Int32 index)
    // Offset: 0x49C3A30
    bool get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Boolean value)
    // Offset: 0x49C395C
    void set_Item(int index, bool value);
    // public System.Void Clear()
    // Offset: 0x49C6FD4
    void Clear();
    // private System.Collections.Generic.IEnumerable`1<System.Boolean> Enumerate()
    // Offset: 0x49C8348
    ::System::Collections::Generic::IEnumerable_1<bool>* Enumerate();
    // public System.Collections.Generic.IEnumerator`1<System.Boolean> GetEnumerator()
    // Offset: 0x49C82A0
    ::System::Collections::Generic::IEnumerator_1<bool>* GetEnumerator();
  }; // Pathfinding.Poly2Tri.FixedBitArray3
  #pragma pack(pop)
  static check_size<sizeof(FixedBitArray3), 2 + sizeof(bool)> __Pathfinding_Poly2Tri_FixedBitArray3SizeCheck;
  static_assert(sizeof(FixedBitArray3) == 0x3);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::FixedBitArray3::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Pathfinding::Poly2Tri::FixedBitArray3::*)()>(&Pathfinding::Poly2Tri::FixedBitArray3::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::FixedBitArray3), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::FixedBitArray3::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Poly2Tri::FixedBitArray3::*)(int)>(&Pathfinding::Poly2Tri::FixedBitArray3::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::FixedBitArray3), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::FixedBitArray3::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::FixedBitArray3::*)(int, bool)>(&Pathfinding::Poly2Tri::FixedBitArray3::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::FixedBitArray3), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::FixedBitArray3::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Poly2Tri::FixedBitArray3::*)()>(&Pathfinding::Poly2Tri::FixedBitArray3::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::FixedBitArray3), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::FixedBitArray3::Enumerate
// Il2CppName: Enumerate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<bool>* (Pathfinding::Poly2Tri::FixedBitArray3::*)()>(&Pathfinding::Poly2Tri::FixedBitArray3::Enumerate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::FixedBitArray3), "Enumerate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Poly2Tri::FixedBitArray3::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<bool>* (Pathfinding::Poly2Tri::FixedBitArray3::*)()>(&Pathfinding::Poly2Tri::FixedBitArray3::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Poly2Tri::FixedBitArray3), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};