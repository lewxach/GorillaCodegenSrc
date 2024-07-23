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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: Assert
  class _Assert;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::_Assert);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::_Assert*, "Fusion", "Assert");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Assert
  // [TokenAttribute] Offset: FFFFFFFF
  class _Assert : public ::Il2CppObject {
    public:
    // static public System.Void AlwaysFail(System.String error)
    // Offset: 0x2AD31F4
    static void AlwaysFail(::StringW error);
    // static public System.Void AlwaysFail(T error)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void AlwaysFail(T error) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::_Assert::AlwaysFail");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Fusion", "Assert", "AlwaysFail", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(error)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, error);
    }
    // static public System.Void Always(System.Boolean condition, System.String error)
    // Offset: 0x2AD3234
    static void Always(bool condition, ::StringW error);
    // static public System.Void Always(System.Boolean condition, T0 arg0, T1 arg1)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T0, class T1>
    static void Always(bool condition, T0 arg0, T1 arg1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::_Assert::Always");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Fusion", "Assert", "Always", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(condition), ::il2cpp_utils::ExtractType(arg0), ::il2cpp_utils::ExtractType(arg1)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, condition, arg0, arg1);
    }
    // static public System.Void Always(System.Boolean condition, T0 arg0, T1 arg1, T2 arg2)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T0, class T1, class T2>
    static void Always(bool condition, T0 arg0, T1 arg1, T2 arg2) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::_Assert::Always");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Fusion", "Assert", "Always", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(condition), ::il2cpp_utils::ExtractType(arg0), ::il2cpp_utils::ExtractType(arg1), ::il2cpp_utils::ExtractType(arg2)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, condition, arg0, arg1, arg2);
    }
    // static public System.Void Always(System.Boolean condition, T0 arg0, T1 arg1, T2 arg2, T3 arg3)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T0, class T1, class T2, class T3>
    static void Always(bool condition, T0 arg0, T1 arg1, T2 arg2, T3 arg3) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::_Assert::Always");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Fusion", "Assert", "Always", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(condition), ::il2cpp_utils::ExtractType(arg0), ::il2cpp_utils::ExtractType(arg1), ::il2cpp_utils::ExtractType(arg2), ::il2cpp_utils::ExtractType(arg3)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, condition, arg0, arg1, arg2, arg3);
    }
  }; // Fusion.Assert
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::_Assert::AlwaysFail
// Il2CppName: AlwaysFail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&Fusion::_Assert::AlwaysFail)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::_Assert*), "AlwaysFail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: Fusion::_Assert::AlwaysFail
// Il2CppName: AlwaysFail
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Fusion::_Assert::Always
// Il2CppName: Always
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::StringW)>(&Fusion::_Assert::Always)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::_Assert*), "Always", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition, error});
  }
};
// Writing MetadataGetter for method: Fusion::_Assert::Always
// Il2CppName: Always
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Fusion::_Assert::Always
// Il2CppName: Always
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Fusion::_Assert::Always
// Il2CppName: Always
// Cannot write MetadataGetter for generic methods!