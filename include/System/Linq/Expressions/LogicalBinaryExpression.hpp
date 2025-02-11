// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.BinaryExpression
#include "System/Linq/Expressions/BinaryExpression.hpp"
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
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: LogicalBinaryExpression
  class LogicalBinaryExpression;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::LogicalBinaryExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::LogicalBinaryExpression*, "System.Linq.Expressions", "LogicalBinaryExpression");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.LogicalBinaryExpression
  // [TokenAttribute] Offset: FFFFFFFF
  class LogicalBinaryExpression : public ::System::Linq::Expressions::BinaryExpression {
    public:
    public:
    // private readonly System.Linq.Expressions.ExpressionType <NodeType>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    ::System::Linq::Expressions::ExpressionType NodeType;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::ExpressionType) == 0x4);
    public:
    // Creating conversion operator: operator ::System::Linq::Expressions::ExpressionType
    constexpr operator ::System::Linq::Expressions::ExpressionType() const noexcept {
      return NodeType;
    }
    // Get instance field reference: private readonly System.Linq.Expressions.ExpressionType <NodeType>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::ExpressionType& dyn_$NodeType$k__BackingField();
    // System.Void .ctor(System.Linq.Expressions.ExpressionType nodeType, System.Linq.Expressions.Expression left, System.Linq.Expressions.Expression right)
    // Offset: 0x4B7A2C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LogicalBinaryExpression* New_ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::LogicalBinaryExpression::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LogicalBinaryExpression*, creationType>(nodeType, left, right)));
    }
    // public override System.Type get_Type()
    // Offset: 0x4B7A2F0
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Type Expression::get_Type()
    ::System::Type* get_Type();
    // public override System.Linq.Expressions.ExpressionType get_NodeType()
    // Offset: 0x4B7A35C
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Linq.Expressions.ExpressionType Expression::get_NodeType()
    ::System::Linq::Expressions::ExpressionType get_NodeType();
  }; // System.Linq.Expressions.LogicalBinaryExpression
  #pragma pack(pop)
  static check_size<sizeof(LogicalBinaryExpression), 32 + sizeof(::System::Linq::Expressions::ExpressionType)> __System_Linq_Expressions_LogicalBinaryExpressionSizeCheck;
  static_assert(sizeof(LogicalBinaryExpression) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::LogicalBinaryExpression::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::LogicalBinaryExpression::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Linq::Expressions::LogicalBinaryExpression::*)()>(&System::Linq::Expressions::LogicalBinaryExpression::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::LogicalBinaryExpression*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::LogicalBinaryExpression::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::ExpressionType (System::Linq::Expressions::LogicalBinaryExpression::*)()>(&System::Linq::Expressions::LogicalBinaryExpression::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::LogicalBinaryExpression*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
