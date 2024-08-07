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
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System.Dynamic.Utils
namespace System::Dynamic::Utils {
  // Forward declaring type: ContractUtils
  class ContractUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Dynamic::Utils::ContractUtils);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::Utils::ContractUtils*, "System.Dynamic.Utils", "ContractUtils");
// Type namespace: System.Dynamic.Utils
namespace System::Dynamic::Utils {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Dynamic.Utils.ContractUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class ContractUtils : public ::Il2CppObject {
    public:
    // static public System.Exception get_Unreachable()
    // Offset: 0x4BE88BC
    static ::System::Exception* get_Unreachable();
    // static public System.Void Requires(System.Boolean precondition, System.String paramName)
    // Offset: 0x4BE8310
    static void Requires(bool precondition, ::StringW paramName);
    // static public System.Void RequiresNotNull(System.Object value, System.String paramName)
    // Offset: 0x4BE5EE8
    static void RequiresNotNull(::Il2CppObject* value, ::StringW paramName);
    // static public System.Void RequiresNotNull(System.Object value, System.String paramName, System.Int32 index)
    // Offset: 0x4BE8928
    static void RequiresNotNull(::Il2CppObject* value, ::StringW paramName, int index);
    // static public System.Void RequiresNotNullItems(System.Collections.Generic.IList`1<T> array, System.String arrayName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void RequiresNotNullItems(::System::Collections::Generic::IList_1<T>* array, ::StringW arrayName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Dynamic::Utils::ContractUtils::RequiresNotNullItems");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Dynamic.Utils", "ContractUtils", "RequiresNotNullItems", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(arrayName)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, array, arrayName);
    }
    // static private System.String GetParamName(System.String paramName, System.Int32 index)
    // Offset: 0x4BE8980
    static ::StringW GetParamName(::StringW paramName, int index);
    // static public System.Void RequiresArrayRange(System.Collections.Generic.IList`1<T> array, System.Int32 offset, System.Int32 count, System.String offsetName, System.String countName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void RequiresArrayRange(::System::Collections::Generic::IList_1<T>* array, int offset, int count, ::StringW offsetName, ::StringW countName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Dynamic::Utils::ContractUtils::RequiresArrayRange");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Dynamic.Utils", "ContractUtils", "RequiresArrayRange", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(offset), ::il2cpp_utils::ExtractType(count), ::il2cpp_utils::ExtractType(offsetName), ::il2cpp_utils::ExtractType(countName)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, array, offset, count, offsetName, countName);
    }
  }; // System.Dynamic.Utils.ContractUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Dynamic::Utils::ContractUtils::get_Unreachable
// Il2CppName: get_Unreachable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)()>(&System::Dynamic::Utils::ContractUtils::get_Unreachable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::Utils::ContractUtils*), "get_Unreachable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::Utils::ContractUtils::Requires
// Il2CppName: Requires
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::StringW)>(&System::Dynamic::Utils::ContractUtils::Requires)> {
  static const MethodInfo* get() {
    static auto* precondition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::Utils::ContractUtils*), "Requires", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{precondition, paramName});
  }
};
// Writing MetadataGetter for method: System::Dynamic::Utils::ContractUtils::RequiresNotNull
// Il2CppName: RequiresNotNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::StringW)>(&System::Dynamic::Utils::ContractUtils::RequiresNotNull)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::Utils::ContractUtils*), "RequiresNotNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, paramName});
  }
};
// Writing MetadataGetter for method: System::Dynamic::Utils::ContractUtils::RequiresNotNull
// Il2CppName: RequiresNotNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::StringW, int)>(&System::Dynamic::Utils::ContractUtils::RequiresNotNull)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::Utils::ContractUtils*), "RequiresNotNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, paramName, index});
  }
};
// Writing MetadataGetter for method: System::Dynamic::Utils::ContractUtils::RequiresNotNullItems
// Il2CppName: RequiresNotNullItems
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Dynamic::Utils::ContractUtils::GetParamName
// Il2CppName: GetParamName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int)>(&System::Dynamic::Utils::ContractUtils::GetParamName)> {
  static const MethodInfo* get() {
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::Utils::ContractUtils*), "GetParamName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{paramName, index});
  }
};
// Writing MetadataGetter for method: System::Dynamic::Utils::ContractUtils::RequiresArrayRange
// Il2CppName: RequiresArrayRange
// Cannot write MetadataGetter for generic methods!
