// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Numerics.Vector`1
#include "System/Numerics/Vector_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
}
// Completed forward declares
// Type namespace: System.Numerics
namespace System::Numerics {
  // Forward declaring type: Vector
  class Vector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Numerics::Vector);
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::Vector*, "System.Numerics", "Vector");
// Type namespace: System.Numerics
namespace System::Numerics {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Numerics.Vector
  // [TokenAttribute] Offset: FFFFFFFF
  // [IntrinsicAttribute] Offset: FFFFFFFF
  class Vector : public ::Il2CppObject {
    public:
    // static public System.Numerics.Vector`1<T> Equals(System.Numerics.Vector`1<T> left, System.Numerics.Vector`1<T> right)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Numerics::Vector_1<T> Equals(::System::Numerics::Vector_1<T> left, ::System::Numerics::Vector_1<T> right) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Numerics::Vector::Equals");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Numerics", "Vector", "Equals", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(left), ::il2cpp_utils::ExtractType(right)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Numerics::Vector_1<T>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, left, right);
    }
    // static public System.Boolean get_IsHardwareAccelerated()
    // Offset: 0x459C6B4
    static bool get_IsHardwareAccelerated();
    // static public System.Numerics.Vector`1<System.UInt64> AsVectorUInt64(System.Numerics.Vector`1<T> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Numerics::Vector_1<uint64_t> AsVectorUInt64(::System::Numerics::Vector_1<T> value) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Numerics::Vector::AsVectorUInt64");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Numerics", "Vector", "AsVectorUInt64", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Numerics::Vector_1<uint64_t>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, value);
    }
  }; // System.Numerics.Vector
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Numerics::Vector::Equals
// Il2CppName: Equals
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Numerics::Vector::get_IsHardwareAccelerated
// Il2CppName: get_IsHardwareAccelerated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Numerics::Vector::get_IsHardwareAccelerated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::Vector*), "get_IsHardwareAccelerated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Numerics::Vector::AsVectorUInt64
// Il2CppName: AsVectorUInt64
// Cannot write MetadataGetter for generic methods!