// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.ScopeExpression
#include "System/Linq/Expressions/ScopeExpression.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: ParameterExpression
  class ParameterExpression;
  // Skipping declaration: Expression because it is already included!
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: Scope1
  class Scope1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Scope1);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Scope1*, "System.Linq.Expressions", "Scope1");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Scope1
  // [TokenAttribute] Offset: FFFFFFFF
  class Scope1 : public ::System::Linq::Expressions::ScopeExpression {
    public:
    public:
    // private System.Object _body
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* body;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*
    constexpr operator ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*() const noexcept = delete;
    // Get instance field reference: private System.Object _body
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__body();
    // System.Void .ctor(System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.ParameterExpression> variables, System.Linq.Expressions.Expression body)
    // Offset: 0x4B916AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Scope1* New_ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* variables, ::System::Linq::Expressions::Expression* body) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Scope1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Scope1*, creationType>(variables, body)));
    }
    // private System.Void .ctor(System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.ParameterExpression> variables, System.Object body)
    // Offset: 0x4B916B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Scope1* New_ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* variables, ::Il2CppObject* body) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Scope1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Scope1*, creationType>(variables, body)));
    }
    // override System.Linq.Expressions.Expression GetExpression(System.Int32 index)
    // Offset: 0x4B916F0
    // Implemented from: System.Linq.Expressions.BlockExpression
    // Base method: System.Linq.Expressions.Expression BlockExpression::GetExpression(System.Int32 index)
    ::System::Linq::Expressions::Expression* GetExpression(int index);
    // override System.Int32 get_ExpressionCount()
    // Offset: 0x4B9176C
    // Implemented from: System.Linq.Expressions.BlockExpression
    // Base method: System.Int32 BlockExpression::get_ExpressionCount()
    int get_ExpressionCount();
    // override System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> GetOrMakeExpressions()
    // Offset: 0x4B91774
    // Implemented from: System.Linq.Expressions.BlockExpression
    // Base method: System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> BlockExpression::GetOrMakeExpressions()
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeExpressions();
    // override System.Linq.Expressions.BlockExpression Rewrite(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> variables, System.Linq.Expressions.Expression[] args)
    // Offset: 0x4B9177C
    // Implemented from: System.Linq.Expressions.BlockExpression
    // Base method: System.Linq.Expressions.BlockExpression BlockExpression::Rewrite(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> variables, System.Linq.Expressions.Expression[] args)
    ::System::Linq::Expressions::BlockExpression* Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables, ::ArrayW<::System::Linq::Expressions::Expression*> args);
  }; // System.Linq.Expressions.Scope1
  #pragma pack(pop)
  static check_size<sizeof(Scope1), 24 + sizeof(::Il2CppObject*)> __System_Linq_Expressions_Scope1SizeCheck;
  static_assert(sizeof(Scope1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Scope1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Scope1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Scope1::GetExpression
// Il2CppName: GetExpression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::Scope1::*)(int)>(&System::Linq::Expressions::Scope1::GetExpression)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Scope1*), "GetExpression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Scope1::get_ExpressionCount
// Il2CppName: get_ExpressionCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Scope1::*)()>(&System::Linq::Expressions::Scope1::get_ExpressionCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Scope1*), "get_ExpressionCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Scope1::GetOrMakeExpressions
// Il2CppName: GetOrMakeExpressions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* (System::Linq::Expressions::Scope1::*)()>(&System::Linq::Expressions::Scope1::GetOrMakeExpressions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Scope1*), "GetOrMakeExpressions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Scope1::Rewrite
// Il2CppName: Rewrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::BlockExpression* (System::Linq::Expressions::Scope1::*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::ArrayW<::System::Linq::Expressions::Expression*>)>(&System::Linq::Expressions::Scope1::Rewrite)> {
  static const MethodInfo* get() {
    static auto* variables = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.ObjectModel", "ReadOnlyCollection`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ParameterExpression")})->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Scope1*), "Rewrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{variables, args});
  }
};
