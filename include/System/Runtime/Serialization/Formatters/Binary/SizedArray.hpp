// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: SizedArray
  class SizedArray;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::SizedArray);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::SizedArray*, "System.Runtime.Serialization.Formatters.Binary", "SizedArray");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.SizedArray
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  class SizedArray : public ::Il2CppObject/*, public ::System::ICloneable*/ {
    public:
    public:
    // System.Object[] objects
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Il2CppObject*> objects;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // System.Object[] negObjects
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Il2CppObject*> negObjects;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Get instance field reference: System.Object[] objects
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn_objects();
    // Get instance field reference: System.Object[] negObjects
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn_negObjects();
    // System.Void .ctor(System.Int32 length)
    // Offset: 0x456E194
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SizedArray* New_ctor(int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::SizedArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SizedArray*, creationType>(length)));
    }
    // private System.Void .ctor(System.Runtime.Serialization.Formatters.Binary.SizedArray sizedArray)
    // Offset: 0x4571C14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SizedArray* New_ctor(::System::Runtime::Serialization::Formatters::Binary::SizedArray* sizedArray) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::SizedArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SizedArray*, creationType>(sizedArray)));
    }
    // public System.Object Clone()
    // Offset: 0x4571CEC
    ::Il2CppObject* Clone();
    // System.Object get_Item(System.Int32 index)
    // Offset: 0x45709B8
    ::Il2CppObject* get_Item(int index);
    // System.Void set_Item(System.Int32 index, System.Object value)
    // Offset: 0x45708B0
    void set_Item(int index, ::Il2CppObject* value);
    // System.Void IncreaseCapacity(System.Int32 index)
    // Offset: 0x4571D44
    void IncreaseCapacity(int index);
    // System.Void .ctor()
    // Offset: 0x456E0A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SizedArray* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::SizedArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SizedArray*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.SizedArray
  #pragma pack(pop)
  static check_size<sizeof(SizedArray), 24 + sizeof(::ArrayW<::Il2CppObject*>)> __System_Runtime_Serialization_Formatters_Binary_SizedArraySizeCheck;
  static_assert(sizeof(SizedArray) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SizedArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SizedArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SizedArray::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::Formatters::Binary::SizedArray::*)()>(&System::Runtime::Serialization::Formatters::Binary::SizedArray::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::SizedArray*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SizedArray::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::Formatters::Binary::SizedArray::*)(int)>(&System::Runtime::Serialization::Formatters::Binary::SizedArray::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::SizedArray*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SizedArray::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::SizedArray::*)(int, ::Il2CppObject*)>(&System::Runtime::Serialization::Formatters::Binary::SizedArray::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::SizedArray*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SizedArray::IncreaseCapacity
// Il2CppName: IncreaseCapacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::SizedArray::*)(int)>(&System::Runtime::Serialization::Formatters::Binary::SizedArray::IncreaseCapacity)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::SizedArray*), "IncreaseCapacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SizedArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
