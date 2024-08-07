// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.LocalVariables
#include "System/Linq/Expressions/Interpreter/LocalVariables.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: LocalVariable
  class LocalVariable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LocalVariables::VariableScope);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LocalVariables::VariableScope*, "System.Linq.Expressions.Interpreter", "LocalVariables/VariableScope");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.LocalVariables/VariableScope
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalVariables::VariableScope : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Int32 Start
    // Size: 0x4
    // Offset: 0x10
    int Start;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Stop
    // Size: 0x4
    // Offset: 0x14
    int Stop;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Linq.Expressions.Interpreter.LocalVariable Variable
    // Size: 0x8
    // Offset: 0x18
    ::System::Linq::Expressions::Interpreter::LocalVariable* Variable;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Interpreter::LocalVariable*) == 0x8);
    // public readonly System.Linq.Expressions.Interpreter.LocalVariables/VariableScope Parent
    // Size: 0x8
    // Offset: 0x20
    ::System::Linq::Expressions::Interpreter::LocalVariables::VariableScope* Parent;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Interpreter::LocalVariables::VariableScope*) == 0x8);
    // public System.Collections.Generic.List`1<System.Linq.Expressions.Interpreter.LocalVariables/VariableScope> ChildScopes
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LocalVariables::VariableScope*>* ChildScopes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LocalVariables::VariableScope*>*) == 0x8);
    public:
    // Get instance field reference: public readonly System.Int32 Start
    [[deprecated("Use field access instead!")]] int& dyn_Start();
    // Get instance field reference: public System.Int32 Stop
    [[deprecated("Use field access instead!")]] int& dyn_Stop();
    // Get instance field reference: public readonly System.Linq.Expressions.Interpreter.LocalVariable Variable
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Interpreter::LocalVariable*& dyn_Variable();
    // Get instance field reference: public readonly System.Linq.Expressions.Interpreter.LocalVariables/VariableScope Parent
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Interpreter::LocalVariables::VariableScope*& dyn_Parent();
    // Get instance field reference: public System.Collections.Generic.List`1<System.Linq.Expressions.Interpreter.LocalVariables/VariableScope> ChildScopes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LocalVariables::VariableScope*>*& dyn_ChildScopes();
    // public System.Void .ctor(System.Linq.Expressions.Interpreter.LocalVariable variable, System.Int32 start, System.Linq.Expressions.Interpreter.LocalVariables/VariableScope parent)
    // Offset: 0x4BD0738
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalVariables::VariableScope* New_ctor(::System::Linq::Expressions::Interpreter::LocalVariable* variable, int start, ::System::Linq::Expressions::Interpreter::LocalVariables::VariableScope* parent) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::LocalVariables::VariableScope::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalVariables::VariableScope*, creationType>(variable, start, parent)));
    }
  }; // System.Linq.Expressions.Interpreter.LocalVariables/VariableScope
  #pragma pack(pop)
  static check_size<sizeof(LocalVariables::VariableScope), 40 + sizeof(::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::LocalVariables::VariableScope*>*)> __System_Linq_Expressions_Interpreter_LocalVariables_VariableScopeSizeCheck;
  static_assert(sizeof(LocalVariables::VariableScope) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LocalVariables::VariableScope::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
