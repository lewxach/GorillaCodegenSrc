// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Expression
#include "System/Linq/Expressions/Expression.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: SwitchCase
  class SwitchCase;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: SwitchExpression
  class SwitchExpression;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::SwitchExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::SwitchExpression*, "System.Linq.Expressions", "SwitchExpression");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.SwitchExpression
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: FFFFFFFF
  class SwitchExpression : public ::System::Linq::Expressions::Expression {
    public:
    public:
    // private readonly System.Linq.Expressions.Expression <SwitchValue>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Linq::Expressions::Expression* SwitchValue;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    // private readonly System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.SwitchCase> <Cases>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>* Cases;
    // Field size check
    static_assert(sizeof(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>*) == 0x8);
    // private readonly System.Linq.Expressions.Expression <DefaultBody>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::System::Linq::Expressions::Expression* DefaultBody;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    // private readonly System.Reflection.MethodInfo <Comparison>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::System::Reflection::MethodInfo* Comparison;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Linq.Expressions.Expression <SwitchValue>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Expression*& dyn_$SwitchValue$k__BackingField();
    // Get instance field reference: private readonly System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.SwitchCase> <Cases>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>*& dyn_$Cases$k__BackingField();
    // Get instance field reference: private readonly System.Linq.Expressions.Expression <DefaultBody>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Expression*& dyn_$DefaultBody$k__BackingField();
    // Get instance field reference: private readonly System.Reflection.MethodInfo <Comparison>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_$Comparison$k__BackingField();
    // public System.Linq.Expressions.Expression get_SwitchValue()
    // Offset: 0x4BA0B9C
    ::System::Linq::Expressions::Expression* get_SwitchValue();
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.SwitchCase> get_Cases()
    // Offset: 0x4BA0BA4
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>* get_Cases();
    // public System.Linq.Expressions.Expression get_DefaultBody()
    // Offset: 0x4BA0BAC
    ::System::Linq::Expressions::Expression* get_DefaultBody();
    // public System.Reflection.MethodInfo get_Comparison()
    // Offset: 0x4BA0BB4
    ::System::Reflection::MethodInfo* get_Comparison();
  }; // System.Linq.Expressions.SwitchExpression
  #pragma pack(pop)
  static check_size<sizeof(SwitchExpression), 40 + sizeof(::System::Reflection::MethodInfo*)> __System_Linq_Expressions_SwitchExpressionSizeCheck;
  static_assert(sizeof(SwitchExpression) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::SwitchExpression::get_SwitchValue
// Il2CppName: get_SwitchValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::SwitchExpression::*)()>(&System::Linq::Expressions::SwitchExpression::get_SwitchValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::SwitchExpression*), "get_SwitchValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::SwitchExpression::get_Cases
// Il2CppName: get_Cases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::SwitchCase*>* (System::Linq::Expressions::SwitchExpression::*)()>(&System::Linq::Expressions::SwitchExpression::get_Cases)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::SwitchExpression*), "get_Cases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::SwitchExpression::get_DefaultBody
// Il2CppName: get_DefaultBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::SwitchExpression::*)()>(&System::Linq::Expressions::SwitchExpression::get_DefaultBody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::SwitchExpression*), "get_DefaultBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::SwitchExpression::get_Comparison
// Il2CppName: get_Comparison
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Linq::Expressions::SwitchExpression::*)()>(&System::Linq::Expressions::SwitchExpression::get_Comparison)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::SwitchExpression*), "get_Comparison", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
