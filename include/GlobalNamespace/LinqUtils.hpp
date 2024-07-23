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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LinqUtils
  class LinqUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LinqUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LinqUtils*, "", "LinqUtils");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LinqUtils
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class LinqUtils : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::LinqUtils::$DistinctBy$d__0_2<TSource, TResult>
    template<typename TSource, typename TResult>
    class $DistinctBy$d__0_2;
    // Nested type: ::GlobalNamespace::LinqUtils::$Self$d__5_1<T>
    template<typename T>
    class $Self$d__5_1;
    // static public System.Collections.Generic.IEnumerable`1<TSource> DistinctBy(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,TResult> selector)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TSource, class TResult>
    static ::System::Collections::Generic::IEnumerable_1<TSource>* DistinctBy(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TResult>* selector) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LinqUtils::DistinctBy");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "LinqUtils", "DistinctBy", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source), ::il2cpp_utils::ExtractType(selector)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, source, selector);
    }
    // static public System.Collections.Generic.IEnumerable`1<T> ForEach(System.Collections.Generic.IEnumerable`1<T> source, System.Action`1<T> action)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Collections::Generic::IEnumerable_1<T>* ForEach(::System::Collections::Generic::IEnumerable_1<T>* source, ::System::Action_1<T>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LinqUtils::ForEach");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "LinqUtils", "ForEach", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source), ::il2cpp_utils::ExtractType(action)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, source, action);
    }
    // static public T[] AsArray(System.Collections.Generic.IEnumerable`1<T> source)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::ArrayW<T> AsArray(::System::Collections::Generic::IEnumerable_1<T>* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LinqUtils::AsArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "LinqUtils", "AsArray", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, source);
    }
    // static public System.Collections.Generic.List`1<T> AsList(System.Collections.Generic.IEnumerable`1<T> source)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Collections::Generic::List_1<T>* AsList(::System::Collections::Generic::IEnumerable_1<T>* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LinqUtils::AsList");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "LinqUtils", "AsList", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, source);
    }
    // static public System.Collections.Generic.IList`1<T> Transform(System.Collections.Generic.IList`1<T> list, System.Func`2<T,T> action)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Collections::Generic::IList_1<T>* Transform(::System::Collections::Generic::IList_1<T>* list, ::System::Func_2<T, T>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LinqUtils::Transform");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "LinqUtils", "Transform", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list), ::il2cpp_utils::ExtractType(action)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IList_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, list, action);
    }
    // static public System.Collections.Generic.IEnumerable`1<T> Self(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Collections::Generic::IEnumerable_1<T>* Self(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LinqUtils::Self");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "LinqUtils", "Self", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, value);
    }
  }; // LinqUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LinqUtils::DistinctBy
// Il2CppName: DistinctBy
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::LinqUtils::ForEach
// Il2CppName: ForEach
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::LinqUtils::AsArray
// Il2CppName: AsArray
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::LinqUtils::AsList
// Il2CppName: AsList
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::LinqUtils::Transform
// Il2CppName: Transform
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::LinqUtils::Self
// Il2CppName: Self
// Cannot write MetadataGetter for generic methods!