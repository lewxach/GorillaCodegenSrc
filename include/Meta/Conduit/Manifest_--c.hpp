// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.Conduit.Manifest
#include "Meta/Conduit/Manifest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Meta::Conduit
namespace Meta::Conduit {
  // Forward declaring type: InvocationContext
  class InvocationContext;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::Conduit::Manifest::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Meta::Conduit::Manifest::$$c*, "Meta.Conduit", "Manifest/<>c");
// Type namespace: Meta.Conduit
namespace Meta::Conduit {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Meta.Conduit.Manifest/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Manifest::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Meta.Conduit.Manifest/<>c <>9
    static ::Meta::Conduit::Manifest::$$c* _get_$$9();
    // Set static field: static public readonly Meta.Conduit.Manifest/<>c <>9
    static void _set_$$9(::Meta::Conduit::Manifest::$$c* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean> <>9__29_0
    static ::System::Func_2<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*, bool>* _get_$$9__29_0();
    // Set static field: static public System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean> <>9__29_0
    static void _set_$$9__29_0(::System::Func_2<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*, bool>* value);
    // Get static field: static public System.Comparison`1<Meta.Conduit.InvocationContext> <>9__29_1
    static ::System::Comparison_1<::Meta::Conduit::InvocationContext*>* _get_$$9__29_1();
    // Set static field: static public System.Comparison`1<Meta.Conduit.InvocationContext> <>9__29_1
    static void _set_$$9__29_1(::System::Comparison_1<::Meta::Conduit::InvocationContext*>* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean> <>9__30_0
    static ::System::Func_2<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*, bool>* _get_$$9__30_0();
    // Set static field: static public System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean> <>9__30_0
    static void _set_$$9__30_0(::System::Func_2<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*, bool>* value);
    // Get static field: static public System.Comparison`1<Meta.Conduit.InvocationContext> <>9__30_1
    static ::System::Comparison_1<::Meta::Conduit::InvocationContext*>* _get_$$9__30_1();
    // Set static field: static public System.Comparison`1<Meta.Conduit.InvocationContext> <>9__30_1
    static void _set_$$9__30_1(::System::Comparison_1<::Meta::Conduit::InvocationContext*>* value);
    // static private System.Void .cctor()
    // Offset: 0x441EDE8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x441EE50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Manifest::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Conduit::Manifest::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Manifest::$$c*, creationType>()));
    }
    // System.Boolean <ResolveAllActions>b__29_0(System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> invocationContext)
    // Offset: 0x441EE58
    bool $ResolveAllActions$b__29_0(::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>* invocationContext);
    // System.Int32 <ResolveAllActions>b__29_1(Meta.Conduit.InvocationContext one, Meta.Conduit.InvocationContext two)
    // Offset: 0x441EEA4
    int $ResolveAllActions$b__29_1(::Meta::Conduit::InvocationContext* one, ::Meta::Conduit::InvocationContext* two);
    // System.Boolean <ResolveErrorHandlers>b__30_0(System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> invocationContext)
    // Offset: 0x441EF10
    bool $ResolveErrorHandlers$b__30_0(::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>* invocationContext);
    // System.Int32 <ResolveErrorHandlers>b__30_1(Meta.Conduit.InvocationContext one, Meta.Conduit.InvocationContext two)
    // Offset: 0x441EF5C
    int $ResolveErrorHandlers$b__30_1(::Meta::Conduit::InvocationContext* one, ::Meta::Conduit::InvocationContext* two);
  }; // Meta.Conduit.Manifest/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::Conduit::Manifest::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Meta::Conduit::Manifest::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Conduit::Manifest::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Conduit::Manifest::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::Conduit::Manifest::$$c::$ResolveAllActions$b__29_0
// Il2CppName: <ResolveAllActions>b__29_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::Conduit::Manifest::$$c::*)(::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*)>(&Meta::Conduit::Manifest::$$c::$ResolveAllActions$b__29_0)> {
  static const MethodInfo* get() {
    static auto* invocationContext = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Meta.Conduit", "InvocationContext")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Conduit::Manifest::$$c*), "<ResolveAllActions>b__29_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{invocationContext});
  }
};
// Writing MetadataGetter for method: Meta::Conduit::Manifest::$$c::$ResolveAllActions$b__29_1
// Il2CppName: <ResolveAllActions>b__29_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Meta::Conduit::Manifest::$$c::*)(::Meta::Conduit::InvocationContext*, ::Meta::Conduit::InvocationContext*)>(&Meta::Conduit::Manifest::$$c::$ResolveAllActions$b__29_1)> {
  static const MethodInfo* get() {
    static auto* one = &::il2cpp_utils::GetClassFromName("Meta.Conduit", "InvocationContext")->byval_arg;
    static auto* two = &::il2cpp_utils::GetClassFromName("Meta.Conduit", "InvocationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Conduit::Manifest::$$c*), "<ResolveAllActions>b__29_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{one, two});
  }
};
// Writing MetadataGetter for method: Meta::Conduit::Manifest::$$c::$ResolveErrorHandlers$b__30_0
// Il2CppName: <ResolveErrorHandlers>b__30_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::Conduit::Manifest::$$c::*)(::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*)>(&Meta::Conduit::Manifest::$$c::$ResolveErrorHandlers$b__30_0)> {
  static const MethodInfo* get() {
    static auto* invocationContext = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Meta.Conduit", "InvocationContext")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Conduit::Manifest::$$c*), "<ResolveErrorHandlers>b__30_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{invocationContext});
  }
};
// Writing MetadataGetter for method: Meta::Conduit::Manifest::$$c::$ResolveErrorHandlers$b__30_1
// Il2CppName: <ResolveErrorHandlers>b__30_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Meta::Conduit::Manifest::$$c::*)(::Meta::Conduit::InvocationContext*, ::Meta::Conduit::InvocationContext*)>(&Meta::Conduit::Manifest::$$c::$ResolveErrorHandlers$b__30_1)> {
  static const MethodInfo* get() {
    static auto* one = &::il2cpp_utils::GetClassFromName("Meta.Conduit", "InvocationContext")->byval_arg;
    static auto* two = &::il2cpp_utils::GetClassFromName("Meta.Conduit", "InvocationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Conduit::Manifest::$$c*), "<ResolveErrorHandlers>b__30_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{one, two});
  }
};