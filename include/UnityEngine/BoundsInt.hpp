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
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
// Including type: UnityEngine.Vector3Int
#include "UnityEngine/Vector3Int.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: BoundsInt
  struct BoundsInt;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BoundsInt, "UnityEngine", "BoundsInt");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.BoundsInt
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  struct BoundsInt/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::BoundsInt>, public ::System::IFormattable*/ {
    public:
    public:
    // private UnityEngine.Vector3Int m_Position
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3Int m_Position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3Int) == 0xC);
    // private UnityEngine.Vector3Int m_Size
    // Size: 0xC
    // Offset: 0xC
    ::UnityEngine::Vector3Int m_Size;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3Int) == 0xC);
    public:
    // Creating value type constructor for type: BoundsInt
    constexpr BoundsInt(::UnityEngine::Vector3Int m_Position_ = {}, ::UnityEngine::Vector3Int m_Size_ = {}) noexcept : m_Position{m_Position_}, m_Size{m_Size_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::BoundsInt>
    operator ::System::IEquatable_1<::UnityEngine::BoundsInt>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::BoundsInt>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IFormattable
    operator ::System::IFormattable() noexcept {
      return *reinterpret_cast<::System::IFormattable*>(this);
    }
    // Get instance field reference: private UnityEngine.Vector3Int m_Position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3Int& dyn_m_Position();
    // Get instance field reference: private UnityEngine.Vector3Int m_Size
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3Int& dyn_m_Size();
    // public UnityEngine.Vector3Int get_position()
    // Offset: 0x5485898
    ::UnityEngine::Vector3Int get_position();
    // public System.Void set_position(UnityEngine.Vector3Int value)
    // Offset: 0x54858A8
    void set_position(::UnityEngine::Vector3Int value);
    // public UnityEngine.Vector3Int get_size()
    // Offset: 0x54858B4
    ::UnityEngine::Vector3Int get_size();
    // public System.Void set_size(UnityEngine.Vector3Int value)
    // Offset: 0x54858C4
    void set_size(::UnityEngine::Vector3Int value);
    // public System.Void .ctor(UnityEngine.Vector3Int position, UnityEngine.Vector3Int size)
    // Offset: 0x54858D0
    // ABORTED: conflicts with another method.  BoundsInt(::UnityEngine::Vector3Int position, ::UnityEngine::Vector3Int size);
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0x54858F4
    ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);
    // public System.Boolean Equals(UnityEngine.BoundsInt other)
    // Offset: 0x5485B3C
    bool Equals(::UnityEngine::BoundsInt other);
    // public override System.String ToString()
    // Offset: 0x54858E4
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x5485A68
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x5485BB4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.BoundsInt
  #pragma pack(pop)
  static check_size<sizeof(BoundsInt), 12 + sizeof(::UnityEngine::Vector3Int)> __UnityEngine_BoundsIntSizeCheck;
  static_assert(sizeof(BoundsInt) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::BoundsInt::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (UnityEngine::BoundsInt::*)()>(&UnityEngine::BoundsInt::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::set_position
// Il2CppName: set_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoundsInt::*)(::UnityEngine::Vector3Int)>(&UnityEngine::BoundsInt::set_position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "set_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::get_size
// Il2CppName: get_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (UnityEngine::BoundsInt::*)()>(&UnityEngine::BoundsInt::get_size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "get_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::set_size
// Il2CppName: set_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoundsInt::*)(::UnityEngine::Vector3Int)>(&UnityEngine::BoundsInt::set_size)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "set_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::BoundsInt
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::BoundsInt::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::BoundsInt::*)(::StringW, ::System::IFormatProvider*)>(&UnityEngine::BoundsInt::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, formatProvider});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::BoundsInt::*)(::UnityEngine::BoundsInt)>(&UnityEngine::BoundsInt::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "BoundsInt")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::BoundsInt::*)()>(&UnityEngine::BoundsInt::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::BoundsInt::*)(::Il2CppObject*)>(&UnityEngine::BoundsInt::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoundsInt::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::BoundsInt::*)()>(&UnityEngine::BoundsInt::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoundsInt), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
