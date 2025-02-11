// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: AutoIncrementValue
  class AutoIncrementValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::AutoIncrementValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::AutoIncrementValue*, "System.Data", "AutoIncrementValue");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.AutoIncrementValue
  // [TokenAttribute] Offset: FFFFFFFF
  class AutoIncrementValue : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean <Auto>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool Auto;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return Auto;
    }
    // Get instance field reference: private System.Boolean <Auto>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Auto$k__BackingField();
    // System.Boolean get_Auto()
    // Offset: 0x4C11708
    bool get_Auto();
    // System.Void set_Auto(System.Boolean value)
    // Offset: 0x4C11710
    void set_Auto(bool value);
    // System.Object get_Current()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* get_Current();
    // System.Void set_Current(System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Current(::Il2CppObject* value);
    // System.Int64 get_Seed()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int64_t get_Seed();
    // System.Void set_Seed(System.Int64 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Seed(int64_t value);
    // System.Int64 get_Step()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int64_t get_Step();
    // System.Void set_Step(System.Int64 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Step(int64_t value);
    // System.Type get_DataType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Type* get_DataType();
    // System.Void SetCurrent(System.Object value, System.IFormatProvider formatProvider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetCurrent(::Il2CppObject* value, ::System::IFormatProvider* formatProvider);
    // System.Void SetCurrentAndIncrement(System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetCurrentAndIncrement(::Il2CppObject* value);
    // System.Void MoveAfter()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void MoveAfter();
    // System.Data.AutoIncrementValue Clone()
    // Offset: 0x4C10728
    ::System::Data::AutoIncrementValue* Clone();
    // protected System.Void .ctor()
    // Offset: 0x4C1171C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AutoIncrementValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::AutoIncrementValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AutoIncrementValue*, creationType>()));
    }
  }; // System.Data.AutoIncrementValue
  #pragma pack(pop)
  static check_size<sizeof(AutoIncrementValue), 16 + sizeof(bool)> __System_Data_AutoIncrementValueSizeCheck;
  static_assert(sizeof(AutoIncrementValue) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::AutoIncrementValue::get_Auto
// Il2CppName: get_Auto
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::AutoIncrementValue::*)()>(&System::Data::AutoIncrementValue::get_Auto)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementValue*), "get_Auto", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementValue::set_Auto
// Il2CppName: set_Auto
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::AutoIncrementValue::*)(bool)>(&System::Data::AutoIncrementValue::set_Auto)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementValue*), "set_Auto", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementValue::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::AutoIncrementValue::*)()>(&System::Data::AutoIncrementValue::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementValue*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementValue::set_Current
// Il2CppName: set_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::AutoIncrementValue::*)(::Il2CppObject*)>(&System::Data::AutoIncrementValue::set_Current)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementValue*), "set_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementValue::get_Seed
// Il2CppName: get_Seed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Data::AutoIncrementValue::*)()>(&System::Data::AutoIncrementValue::get_Seed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementValue*), "get_Seed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementValue::set_Seed
// Il2CppName: set_Seed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::AutoIncrementValue::*)(int64_t)>(&System::Data::AutoIncrementValue::set_Seed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementValue*), "set_Seed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementValue::get_Step
// Il2CppName: get_Step
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Data::AutoIncrementValue::*)()>(&System::Data::AutoIncrementValue::get_Step)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementValue*), "get_Step", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementValue::set_Step
// Il2CppName: set_Step
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::AutoIncrementValue::*)(int64_t)>(&System::Data::AutoIncrementValue::set_Step)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementValue*), "set_Step", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementValue::get_DataType
// Il2CppName: get_DataType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Data::AutoIncrementValue::*)()>(&System::Data::AutoIncrementValue::get_DataType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementValue*), "get_DataType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementValue::SetCurrent
// Il2CppName: SetCurrent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::AutoIncrementValue::*)(::Il2CppObject*, ::System::IFormatProvider*)>(&System::Data::AutoIncrementValue::SetCurrent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementValue*), "SetCurrent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, formatProvider});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementValue::SetCurrentAndIncrement
// Il2CppName: SetCurrentAndIncrement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::AutoIncrementValue::*)(::Il2CppObject*)>(&System::Data::AutoIncrementValue::SetCurrentAndIncrement)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementValue*), "SetCurrentAndIncrement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementValue::MoveAfter
// Il2CppName: MoveAfter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::AutoIncrementValue::*)()>(&System::Data::AutoIncrementValue::MoveAfter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementValue*), "MoveAfter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementValue::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::AutoIncrementValue* (System::Data::AutoIncrementValue::*)()>(&System::Data::AutoIncrementValue::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementValue*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
