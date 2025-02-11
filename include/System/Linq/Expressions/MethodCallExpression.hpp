// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Expression
#include "System/Linq/Expressions/Expression.hpp"
// Including type: System.Linq.Expressions.IArgumentProvider
#include "System/Linq/Expressions/IArgumentProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: ExpressionType
  struct ExpressionType;
  // Forward declaring type: ExpressionVisitor
  class ExpressionVisitor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: MethodCallExpression
  class MethodCallExpression;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::MethodCallExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::MethodCallExpression*, "System.Linq.Expressions", "MethodCallExpression");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.MethodCallExpression
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: FFFFFFFF
  class MethodCallExpression : public ::System::Linq::Expressions::Expression/*, public ::System::Linq::Expressions::IArgumentProvider*/ {
    public:
    public:
    // private readonly System.Reflection.MethodInfo <Method>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::MethodInfo* Method;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Linq::Expressions::IArgumentProvider
    operator ::System::Linq::Expressions::IArgumentProvider() noexcept {
      return *reinterpret_cast<::System::Linq::Expressions::IArgumentProvider*>(this);
    }
    // Creating conversion operator: operator ::System::Reflection::MethodInfo*
    constexpr operator ::System::Reflection::MethodInfo*() const noexcept {
      return Method;
    }
    // Get instance field reference: private readonly System.Reflection.MethodInfo <Method>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_$Method$k__BackingField();
    // System.Void .ctor(System.Reflection.MethodInfo method)
    // Offset: 0x4B9E2C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodCallExpression* New_ctor(::System::Reflection::MethodInfo* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::MethodCallExpression::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodCallExpression*, creationType>(method)));
    }
    // System.Linq.Expressions.Expression GetInstance()
    // Offset: 0x4B9E33C
    ::System::Linq::Expressions::Expression* GetInstance();
    // public System.Reflection.MethodInfo get_Method()
    // Offset: 0x4B9E370
    ::System::Reflection::MethodInfo* get_Method();
    // public System.Linq.Expressions.Expression get_Object()
    // Offset: 0x4B9A2C4
    ::System::Linq::Expressions::Expression* get_Object();
    // System.Linq.Expressions.MethodCallExpression Rewrite(System.Linq.Expressions.Expression instance, System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> args)
    // Offset: 0x4B9E3A4
    ::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* instance, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args);
    // public System.Linq.Expressions.Expression GetArgument(System.Int32 index)
    // Offset: 0x4B9E3CC
    ::System::Linq::Expressions::Expression* GetArgument(int index);
    // public System.Int32 get_ArgumentCount()
    // Offset: 0x4B9E3F4
    int get_ArgumentCount();
    // public override System.Linq.Expressions.ExpressionType get_NodeType()
    // Offset: 0x4B9E344
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Linq.Expressions.ExpressionType Expression::get_NodeType()
    ::System::Linq::Expressions::ExpressionType get_NodeType();
    // public override System.Type get_Type()
    // Offset: 0x4B9E34C
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Type Expression::get_Type()
    ::System::Type* get_Type();
    // protected internal override System.Linq.Expressions.Expression Accept(System.Linq.Expressions.ExpressionVisitor visitor)
    // Offset: 0x4B9E378
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Linq.Expressions.Expression Expression::Accept(System.Linq.Expressions.ExpressionVisitor visitor)
    ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);
  }; // System.Linq.Expressions.MethodCallExpression
  #pragma pack(pop)
  static check_size<sizeof(MethodCallExpression), 16 + sizeof(::System::Reflection::MethodInfo*)> __System_Linq_Expressions_MethodCallExpressionSizeCheck;
  static_assert(sizeof(MethodCallExpression) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::MethodCallExpression::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::MethodCallExpression::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::MethodCallExpression::*)()>(&System::Linq::Expressions::MethodCallExpression::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::MethodCallExpression*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::MethodCallExpression::get_Method
// Il2CppName: get_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Linq::Expressions::MethodCallExpression::*)()>(&System::Linq::Expressions::MethodCallExpression::get_Method)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::MethodCallExpression*), "get_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::MethodCallExpression::get_Object
// Il2CppName: get_Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::MethodCallExpression::*)()>(&System::Linq::Expressions::MethodCallExpression::get_Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::MethodCallExpression*), "get_Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::MethodCallExpression::Rewrite
// Il2CppName: Rewrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::MethodCallExpression* (System::Linq::Expressions::MethodCallExpression::*)(::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*)>(&System::Linq::Expressions::MethodCallExpression::Rewrite)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::MethodCallExpression*), "Rewrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance, args});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::MethodCallExpression::GetArgument
// Il2CppName: GetArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::MethodCallExpression::*)(int)>(&System::Linq::Expressions::MethodCallExpression::GetArgument)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::MethodCallExpression*), "GetArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::MethodCallExpression::get_ArgumentCount
// Il2CppName: get_ArgumentCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::MethodCallExpression::*)()>(&System::Linq::Expressions::MethodCallExpression::get_ArgumentCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::MethodCallExpression*), "get_ArgumentCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::MethodCallExpression::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::ExpressionType (System::Linq::Expressions::MethodCallExpression::*)()>(&System::Linq::Expressions::MethodCallExpression::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::MethodCallExpression*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::MethodCallExpression::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Linq::Expressions::MethodCallExpression::*)()>(&System::Linq::Expressions::MethodCallExpression::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::MethodCallExpression*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::MethodCallExpression::Accept
// Il2CppName: Accept
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::MethodCallExpression::*)(::System::Linq::Expressions::ExpressionVisitor*)>(&System::Linq::Expressions::MethodCallExpression::Accept)> {
  static const MethodInfo* get() {
    static auto* visitor = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ExpressionVisitor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::MethodCallExpression*), "Accept", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{visitor});
  }
};
