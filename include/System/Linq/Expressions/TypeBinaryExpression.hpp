// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Expression
#include "System/Linq/Expressions/Expression.hpp"
// Including type: System.Linq.Expressions.ExpressionType
#include "System/Linq/Expressions/ExpressionType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: ExpressionVisitor
  class ExpressionVisitor;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: TypeBinaryExpression
  class TypeBinaryExpression;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::TypeBinaryExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::TypeBinaryExpression*, "System.Linq.Expressions", "TypeBinaryExpression");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.TypeBinaryExpression
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: FFFFFFFF
  class TypeBinaryExpression : public ::System::Linq::Expressions::Expression {
    public:
    public:
    // private readonly System.Linq.Expressions.ExpressionType <NodeType>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::System::Linq::Expressions::ExpressionType NodeType;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::ExpressionType) == 0x4);
    // Padding between fields: NodeType and: Expression
    char __padding0[0x4] = {};
    // private readonly System.Linq.Expressions.Expression <Expression>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Linq::Expressions::Expression* Expression;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    // private readonly System.Type <TypeOperand>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::System::Type* TypeOperand;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Linq.Expressions.ExpressionType <NodeType>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::ExpressionType& dyn_$NodeType$k__BackingField();
    // Get instance field reference: private readonly System.Linq.Expressions.Expression <Expression>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Expression*& dyn_$Expression$k__BackingField();
    // Get instance field reference: private readonly System.Type <TypeOperand>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$TypeOperand$k__BackingField();
    // System.Void .ctor(System.Linq.Expressions.Expression expression, System.Type typeOperand, System.Linq.Expressions.ExpressionType nodeType)
    // Offset: 0x4BA0D98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeBinaryExpression* New_ctor(::System::Linq::Expressions::Expression* expression, ::System::Type* typeOperand, ::System::Linq::Expressions::ExpressionType nodeType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::TypeBinaryExpression::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeBinaryExpression*, creationType>(expression, typeOperand, nodeType)));
    }
    // public System.Linq.Expressions.Expression get_Expression()
    // Offset: 0x4BA0EA8
    ::System::Linq::Expressions::Expression* get_Expression();
    // public System.Type get_TypeOperand()
    // Offset: 0x4BA0EB0
    ::System::Type* get_TypeOperand();
    // public System.Linq.Expressions.TypeBinaryExpression Update(System.Linq.Expressions.Expression expression)
    // Offset: 0x4B9C76C
    ::System::Linq::Expressions::TypeBinaryExpression* Update(::System::Linq::Expressions::Expression* expression);
    // public override System.Type get_Type()
    // Offset: 0x4BA0E34
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Type Expression::get_Type()
    ::System::Type* get_Type();
    // public override System.Linq.Expressions.ExpressionType get_NodeType()
    // Offset: 0x4BA0EA0
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Linq.Expressions.ExpressionType Expression::get_NodeType()
    ::System::Linq::Expressions::ExpressionType get_NodeType();
    // protected internal override System.Linq.Expressions.Expression Accept(System.Linq.Expressions.ExpressionVisitor visitor)
    // Offset: 0x4BA0EB8
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Linq.Expressions.Expression Expression::Accept(System.Linq.Expressions.ExpressionVisitor visitor)
    ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);
  }; // System.Linq.Expressions.TypeBinaryExpression
  #pragma pack(pop)
  static check_size<sizeof(TypeBinaryExpression), 32 + sizeof(::System::Type*)> __System_Linq_Expressions_TypeBinaryExpressionSizeCheck;
  static_assert(sizeof(TypeBinaryExpression) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::TypeBinaryExpression::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::TypeBinaryExpression::get_Expression
// Il2CppName: get_Expression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::TypeBinaryExpression::*)()>(&System::Linq::Expressions::TypeBinaryExpression::get_Expression)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::TypeBinaryExpression*), "get_Expression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::TypeBinaryExpression::get_TypeOperand
// Il2CppName: get_TypeOperand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Linq::Expressions::TypeBinaryExpression::*)()>(&System::Linq::Expressions::TypeBinaryExpression::get_TypeOperand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::TypeBinaryExpression*), "get_TypeOperand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::TypeBinaryExpression::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::TypeBinaryExpression* (System::Linq::Expressions::TypeBinaryExpression::*)(::System::Linq::Expressions::Expression*)>(&System::Linq::Expressions::TypeBinaryExpression::Update)> {
  static const MethodInfo* get() {
    static auto* expression = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::TypeBinaryExpression*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expression});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::TypeBinaryExpression::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Linq::Expressions::TypeBinaryExpression::*)()>(&System::Linq::Expressions::TypeBinaryExpression::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::TypeBinaryExpression*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::TypeBinaryExpression::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::ExpressionType (System::Linq::Expressions::TypeBinaryExpression::*)()>(&System::Linq::Expressions::TypeBinaryExpression::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::TypeBinaryExpression*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::TypeBinaryExpression::Accept
// Il2CppName: Accept
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::TypeBinaryExpression::*)(::System::Linq::Expressions::ExpressionVisitor*)>(&System::Linq::Expressions::TypeBinaryExpression::Accept)> {
  static const MethodInfo* get() {
    static auto* visitor = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ExpressionVisitor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::TypeBinaryExpression*), "Accept", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{visitor});
  }
};
