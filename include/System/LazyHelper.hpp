// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.LazyState
#include "System/LazyState.hpp"
// Including type: System.Threading.LazyThreadSafetyMode
#include "System/Threading/LazyThreadSafetyMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::ExceptionServices
namespace System::Runtime::ExceptionServices {
  // Forward declaring type: ExceptionDispatchInfo
  class ExceptionDispatchInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: LazyHelper
  class LazyHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::LazyHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::LazyHelper*, "System", "LazyHelper");
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.LazyHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class LazyHelper : public ::Il2CppObject {
    public:
    public:
    // private readonly System.LazyState <State>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::System::LazyState State;
    // Field size check
    static_assert(sizeof(::System::LazyState) == 0x4);
    // Padding between fields: State and: exceptionDispatch
    char __padding0[0x4] = {};
    // private readonly System.Runtime.ExceptionServices.ExceptionDispatchInfo _exceptionDispatch
    // Size: 0x8
    // Offset: 0x18
    ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exceptionDispatch;
    // Field size check
    static_assert(sizeof(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*) == 0x8);
    public:
    // Get static field: static readonly System.LazyHelper NoneViaConstructor
    static ::System::LazyHelper* _get_NoneViaConstructor();
    // Set static field: static readonly System.LazyHelper NoneViaConstructor
    static void _set_NoneViaConstructor(::System::LazyHelper* value);
    // Get static field: static readonly System.LazyHelper NoneViaFactory
    static ::System::LazyHelper* _get_NoneViaFactory();
    // Set static field: static readonly System.LazyHelper NoneViaFactory
    static void _set_NoneViaFactory(::System::LazyHelper* value);
    // Get static field: static readonly System.LazyHelper PublicationOnlyViaConstructor
    static ::System::LazyHelper* _get_PublicationOnlyViaConstructor();
    // Set static field: static readonly System.LazyHelper PublicationOnlyViaConstructor
    static void _set_PublicationOnlyViaConstructor(::System::LazyHelper* value);
    // Get static field: static readonly System.LazyHelper PublicationOnlyViaFactory
    static ::System::LazyHelper* _get_PublicationOnlyViaFactory();
    // Set static field: static readonly System.LazyHelper PublicationOnlyViaFactory
    static void _set_PublicationOnlyViaFactory(::System::LazyHelper* value);
    // Get static field: static readonly System.LazyHelper PublicationOnlyWaitForOtherThreadToPublish
    static ::System::LazyHelper* _get_PublicationOnlyWaitForOtherThreadToPublish();
    // Set static field: static readonly System.LazyHelper PublicationOnlyWaitForOtherThreadToPublish
    static void _set_PublicationOnlyWaitForOtherThreadToPublish(::System::LazyHelper* value);
    // Get instance field reference: private readonly System.LazyState <State>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::LazyState& dyn_$State$k__BackingField();
    // Get instance field reference: private readonly System.Runtime.ExceptionServices.ExceptionDispatchInfo _exceptionDispatch
    [[deprecated("Use field access instead!")]] ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& dyn__exceptionDispatch();
    // System.LazyState get_State()
    // Offset: 0x465B83C
    ::System::LazyState get_State();
    // System.Void .ctor(System.LazyState state)
    // Offset: 0x465B844
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LazyHelper* New_ctor(::System::LazyState state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::LazyHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LazyHelper*, creationType>(state)));
    }
    // System.Void .ctor(System.Threading.LazyThreadSafetyMode mode, System.Exception exception)
    // Offset: 0x465B86C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LazyHelper* New_ctor(::System::Threading::LazyThreadSafetyMode mode, ::System::Exception* exception) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::LazyHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LazyHelper*, creationType>(mode, exception)));
    }
    // System.Void ThrowException()
    // Offset: 0x465B8C4
    void ThrowException();
    // static System.LazyHelper Create(System.Threading.LazyThreadSafetyMode mode, System.Boolean useDefaultConstructor)
    // Offset: 0x465B8E0
    static ::System::LazyHelper* Create(::System::Threading::LazyThreadSafetyMode mode, bool useDefaultConstructor);
    // static System.Object CreateViaDefaultConstructor(System.Type type)
    // Offset: 0x465BA24
    static ::Il2CppObject* CreateViaDefaultConstructor(::System::Type* type);
    // static System.Threading.LazyThreadSafetyMode GetModeFromIsThreadSafe(System.Boolean isThreadSafe)
    // Offset: 0x465BAEC
    static ::System::Threading::LazyThreadSafetyMode GetModeFromIsThreadSafe(bool isThreadSafe);
    // static private System.Void .cctor()
    // Offset: 0x465BAFC
    static void _cctor();
  }; // System.LazyHelper
  #pragma pack(pop)
  static check_size<sizeof(LazyHelper), 24 + sizeof(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*)> __System_LazyHelperSizeCheck;
  static_assert(sizeof(LazyHelper) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::LazyHelper::get_State
// Il2CppName: get_State
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LazyState (System::LazyHelper::*)()>(&System::LazyHelper::get_State)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::LazyHelper*), "get_State", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::LazyHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::LazyHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::LazyHelper::ThrowException
// Il2CppName: ThrowException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LazyHelper::*)()>(&System::LazyHelper::ThrowException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::LazyHelper*), "ThrowException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::LazyHelper::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LazyHelper* (*)(::System::Threading::LazyThreadSafetyMode, bool)>(&System::LazyHelper::Create)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("System.Threading", "LazyThreadSafetyMode")->byval_arg;
    static auto* useDefaultConstructor = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::LazyHelper*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode, useDefaultConstructor});
  }
};
// Writing MetadataGetter for method: System::LazyHelper::CreateViaDefaultConstructor
// Il2CppName: CreateViaDefaultConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Type*)>(&System::LazyHelper::CreateViaDefaultConstructor)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::LazyHelper*), "CreateViaDefaultConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::LazyHelper::GetModeFromIsThreadSafe
// Il2CppName: GetModeFromIsThreadSafe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::LazyThreadSafetyMode (*)(bool)>(&System::LazyHelper::GetModeFromIsThreadSafe)> {
  static const MethodInfo* get() {
    static auto* isThreadSafe = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::LazyHelper*), "GetModeFromIsThreadSafe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isThreadSafe});
  }
};
// Writing MetadataGetter for method: System::LazyHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::LazyHelper::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::LazyHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};