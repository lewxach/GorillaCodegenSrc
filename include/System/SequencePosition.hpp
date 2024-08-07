// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: SequencePosition
  struct SequencePosition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::SequencePosition, "System", "SequencePosition");
// Type namespace: System
namespace System {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.SequencePosition
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct SequencePosition/*, public ::System::ValueType, public ::System::IEquatable_1<::System::SequencePosition>*/ {
    public:
    public:
    // private readonly System.Object _object
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* object;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Int32 _integer
    // Size: 0x4
    // Offset: 0x8
    int integer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SequencePosition
    constexpr SequencePosition(::Il2CppObject* object_ = {}, int integer_ = {}) noexcept : object{object_}, integer{integer_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::System::SequencePosition>
    operator ::System::IEquatable_1<::System::SequencePosition>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::System::SequencePosition>*>(this);
    }
    // Get instance field reference: private readonly System.Object _object
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__object();
    // Get instance field reference: private readonly System.Int32 _integer
    [[deprecated("Use field access instead!")]] int& dyn__integer();
    // public System.Void .ctor(System.Object object, System.Int32 integer)
    // Offset: 0x467CD3C
    // ABORTED: conflicts with another method.  SequencePosition(::Il2CppObject* object, int integer);
    // public System.Object GetObject()
    // Offset: 0x467CD64
    ::Il2CppObject* GetObject();
    // public System.Int32 GetInteger()
    // Offset: 0x467CD6C
    int GetInteger();
    // public System.Boolean Equals(System.SequencePosition other)
    // Offset: 0x467CD74
    bool Equals(::System::SequencePosition other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x467CD94
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x467CE20
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.SequencePosition
  #pragma pack(pop)
  static check_size<sizeof(SequencePosition), 8 + sizeof(int)> __System_SequencePositionSizeCheck;
  static_assert(sizeof(SequencePosition) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::SequencePosition::SequencePosition
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::SequencePosition::GetObject
// Il2CppName: GetObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::SequencePosition::*)()>(&System::SequencePosition::GetObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::SequencePosition), "GetObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::SequencePosition::GetInteger
// Il2CppName: GetInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::SequencePosition::*)()>(&System::SequencePosition::GetInteger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::SequencePosition), "GetInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::SequencePosition::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::SequencePosition::*)(::System::SequencePosition)>(&System::SequencePosition::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "SequencePosition")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::SequencePosition), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::SequencePosition::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::SequencePosition::*)(::Il2CppObject*)>(&System::SequencePosition::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::SequencePosition), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::SequencePosition::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::SequencePosition::*)()>(&System::SequencePosition::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::SequencePosition), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
