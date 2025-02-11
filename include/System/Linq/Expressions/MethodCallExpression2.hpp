// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.MethodCallExpression
#include "System/Linq/Expressions/MethodCallExpression.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Skipping declaration: Expression because it is already included!
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: MethodCallExpression2
  class MethodCallExpression2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::MethodCallExpression2);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::MethodCallExpression2*, "System.Linq.Expressions", "MethodCallExpression2");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.MethodCallExpression2
  // [TokenAttribute] Offset: FFFFFFFF
  class MethodCallExpression2 : public ::System::Linq::Expressions::MethodCallExpression {
    public:
    public:
    // private System.Object _arg0
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* arg0;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Linq.Expressions.Expression _arg1
    // Size: 0x8
    // Offset: 0x20
    ::System::Linq::Expressions::Expression* arg1;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Reflection::MethodInfo*
    constexpr operator ::System::Reflection::MethodInfo*() const noexcept = delete;
    // Get instance field reference: private System.Object _arg0
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__arg0();
    // Get instance field reference: private readonly System.Linq.Expressions.Expression _arg1
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Expression*& dyn__arg1();
    // public System.Void .ctor(System.Reflection.MethodInfo method, System.Linq.Expressions.Expression arg0, System.Linq.Expressions.Expression arg1)
    // Offset: 0x4B9EAC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodCallExpression2* New_ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::MethodCallExpression2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodCallExpression2*, creationType>(method, arg0, arg1)));
    }
    // public override System.Linq.Expressions.Expression GetArgument(System.Int32 index)
    // Offset: 0x4B9EB00
    // Implemented from: System.Linq.Expressions.MethodCallExpression
    // Base method: System.Linq.Expressions.Expression MethodCallExpression::GetArgument(System.Int32 index)
    ::System::Linq::Expressions::Expression* GetArgument(int index);
    // public override System.Int32 get_ArgumentCount()
    // Offset: 0x4B9EBB0
    // Implemented from: System.Linq.Expressions.MethodCallExpression
    // Base method: System.Int32 MethodCallExpression::get_ArgumentCount()
    int get_ArgumentCount();
    // override System.Linq.Expressions.MethodCallExpression Rewrite(System.Linq.Expressions.Expression instance, System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> args)
    // Offset: 0x4B9EBB8
    // Implemented from: System.Linq.Expressions.MethodCallExpression
    // Base method: System.Linq.Expressions.MethodCallExpression MethodCallExpression::Rewrite(System.Linq.Expressions.Expression instance, System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> args)
    ::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* instance, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args);
  }; // System.Linq.Expressions.MethodCallExpression2
  #pragma pack(pop)
  static check_size<sizeof(MethodCallExpression2), 32 + sizeof(::System::Linq::Expressions::Expression*)> __System_Linq_Expressions_MethodCallExpression2SizeCheck;
  static_assert(sizeof(MethodCallExpression2) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::MethodCallExpression2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::MethodCallExpression2::GetArgument
// Il2CppName: GetArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::MethodCallExpression2::*)(int)>(&System::Linq::Expressions::MethodCallExpression2::GetArgument)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::MethodCallExpression2*), "GetArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::MethodCallExpression2::get_ArgumentCount
// Il2CppName: get_ArgumentCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::MethodCallExpression2::*)()>(&System::Linq::Expressions::MethodCallExpression2::get_ArgumentCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::MethodCallExpression2*), "get_ArgumentCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::MethodCallExpression2::Rewrite
// Il2CppName: Rewrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::MethodCallExpression* (System::Linq::Expressions::MethodCallExpression2::*)(::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*)>(&System::Linq::Expressions::MethodCallExpression2::Rewrite)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::MethodCallExpression2*), "Rewrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance, args});
  }
};
