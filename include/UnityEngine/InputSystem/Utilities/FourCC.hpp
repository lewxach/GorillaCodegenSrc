// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Forward declaring type: FourCC
  struct FourCC;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::FourCC, "UnityEngine.InputSystem.Utilities", "FourCC");
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.Utilities.FourCC
  // [TokenAttribute] Offset: FFFFFFFF
  struct FourCC/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::FourCC>*/ {
    public:
    public:
    // private System.Int32 m_Code
    // Size: 0x4
    // Offset: 0x0
    int m_Code;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FourCC
    constexpr FourCC(int m_Code_ = {}) noexcept : m_Code{m_Code_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::FourCC>
    operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::FourCC>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::FourCC>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Code;
    }
    // Get instance field reference: private System.Int32 m_Code
    [[deprecated("Use field access instead!")]] int& dyn_m_Code();
    // public System.Void .ctor(System.Int32 code)
    // Offset: 0x5172764
    // ABORTED: conflicts with another method.  FourCC(int code);
    // public System.Void .ctor(System.Char a, System.Char b, System.Char c, System.Char d)
    // Offset: 0x516DF38
    FourCC(::Il2CppChar a, ::Il2CppChar b, ::Il2CppChar c, ::Il2CppChar d);
    // public System.Void .ctor(System.String str)
    // Offset: 0x517276C
    FourCC(::StringW str);
    // public System.Boolean Equals(UnityEngine.InputSystem.Utilities.FourCC other)
    // Offset: 0x5172AC0
    bool Equals(::UnityEngine::InputSystem::Utilities::FourCC other);
    // static public UnityEngine.InputSystem.Utilities.FourCC FromInt32(System.Int32 i)
    // Offset: 0x5172B68
    static ::UnityEngine::InputSystem::Utilities::FourCC FromInt32(int i);
    // static public System.Int32 ToInt32(UnityEngine.InputSystem.Utilities.FourCC fourCC)
    // Offset: 0x5172B70
    static int ToInt32(::UnityEngine::InputSystem::Utilities::FourCC fourCC);
    // public override System.String ToString()
    // Offset: 0x51728E0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x5172AD0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x5172B48
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.InputSystem.Utilities.FourCC
  #pragma pack(pop)
  static check_size<sizeof(FourCC), 0 + sizeof(int)> __UnityEngine_InputSystem_Utilities_FourCCSizeCheck;
  static_assert(sizeof(FourCC) == 0x4);
  // static public System.Boolean op_Equality(UnityEngine.InputSystem.Utilities.FourCC left, UnityEngine.InputSystem.Utilities.FourCC right)
  // Offset: 0x5172B50
  bool operator ==(const ::UnityEngine::InputSystem::Utilities::FourCC& left, const ::UnityEngine::InputSystem::Utilities::FourCC& right);
  // static public System.Boolean op_Inequality(UnityEngine.InputSystem.Utilities.FourCC left, UnityEngine.InputSystem.Utilities.FourCC right)
  // Offset: 0x5172B5C
  bool operator !=(const ::UnityEngine::InputSystem::Utilities::FourCC& left, const ::UnityEngine::InputSystem::Utilities::FourCC& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::FourCC::FourCC
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::FourCC::FourCC
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::FourCC::FourCC
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::FourCC::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::FourCC::*)(::UnityEngine::InputSystem::Utilities::FourCC)>(&UnityEngine::InputSystem::Utilities::FourCC::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Utilities", "FourCC")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Utilities::FourCC), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::FourCC::FromInt32
// Il2CppName: FromInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)(int)>(&UnityEngine::InputSystem::Utilities::FourCC::FromInt32)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Utilities::FourCC), "FromInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::FourCC::ToInt32
// Il2CppName: ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::InputSystem::Utilities::FourCC)>(&UnityEngine::InputSystem::Utilities::FourCC::ToInt32)> {
  static const MethodInfo* get() {
    static auto* fourCC = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Utilities", "FourCC")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Utilities::FourCC), "ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fourCC});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::FourCC::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Utilities::FourCC::*)()>(&UnityEngine::InputSystem::Utilities::FourCC::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Utilities::FourCC), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::FourCC::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::FourCC::*)(::Il2CppObject*)>(&UnityEngine::InputSystem::Utilities::FourCC::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Utilities::FourCC), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::FourCC::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::Utilities::FourCC::*)()>(&UnityEngine::InputSystem::Utilities::FourCC::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Utilities::FourCC), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::FourCC::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::FourCC::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
