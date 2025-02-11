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
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: StackGuard
  class StackGuard;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::StackGuard);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::StackGuard*, "System.Linq.Expressions", "StackGuard");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.StackGuard
  // [TokenAttribute] Offset: FFFFFFFF
  class StackGuard : public ::Il2CppObject {
    public:
    // Nested type: ::System::Linq::Expressions::StackGuard::$$c__3_2<T1, T2>
    template<typename T1, typename T2>
    class $$c__3_2;
    public:
    // private System.Int32 _executionStackCount
    // Size: 0x4
    // Offset: 0x10
    int executionStackCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return executionStackCount;
    }
    // Get instance field reference: private System.Int32 _executionStackCount
    [[deprecated("Use field access instead!")]] int& dyn__executionStackCount();
    // public System.Boolean TryEnterOnCurrentStack()
    // Offset: 0x4BA0B24
    bool TryEnterOnCurrentStack();
    // public System.Void RunOnEmptyStack(System.Action`2<T1,T2> action, T1 arg1, T2 arg2)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T1, class T2>
    void RunOnEmptyStack(::System::Action_2<T1, T2>* action, T1 arg1, T2 arg2) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::StackGuard::RunOnEmptyStack");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RunOnEmptyStack", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(action), ::il2cpp_utils::ExtractType(arg1), ::il2cpp_utils::ExtractType(arg2)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, action, arg1, arg2);
    }
    // private R RunOnEmptyStackCore(System.Func`2<System.Object,R> action, System.Object state)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class R>
    R RunOnEmptyStackCore(::System::Func_2<::Il2CppObject*, R>* action, ::Il2CppObject* state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::StackGuard::RunOnEmptyStackCore");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RunOnEmptyStackCore", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<R>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(action), ::il2cpp_utils::ExtractType(state)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<R>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<R, false>(this, ___generic__method, action, state);
    }
    // public System.Void .ctor()
    // Offset: 0x4BA0B84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StackGuard* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::StackGuard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StackGuard*, creationType>()));
    }
  }; // System.Linq.Expressions.StackGuard
  #pragma pack(pop)
  static check_size<sizeof(StackGuard), 16 + sizeof(int)> __System_Linq_Expressions_StackGuardSizeCheck;
  static_assert(sizeof(StackGuard) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::StackGuard::TryEnterOnCurrentStack
// Il2CppName: TryEnterOnCurrentStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::StackGuard::*)()>(&System::Linq::Expressions::StackGuard::TryEnterOnCurrentStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::StackGuard*), "TryEnterOnCurrentStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::StackGuard::RunOnEmptyStack
// Il2CppName: RunOnEmptyStack
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Linq::Expressions::StackGuard::RunOnEmptyStackCore
// Il2CppName: RunOnEmptyStackCore
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Linq::Expressions::StackGuard::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
