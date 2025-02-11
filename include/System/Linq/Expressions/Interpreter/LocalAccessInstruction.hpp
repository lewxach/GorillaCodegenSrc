// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.Instruction
#include "System/Linq/Expressions/Interpreter/Instruction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: LocalAccessInstruction
  class LocalAccessInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LocalAccessInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LocalAccessInstruction*, "System.Linq.Expressions.Interpreter", "LocalAccessInstruction");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.LocalAccessInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalAccessInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
    public:
    public:
    // readonly System.Int32 _index
    // Size: 0x4
    // Offset: 0x10
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return index;
    }
    // Get instance field reference: readonly System.Int32 _index
    [[deprecated("Use field access instead!")]] int& dyn__index();
    // protected System.Void .ctor(System.Int32 index)
    // Offset: 0x4BCE42C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalAccessInstruction* New_ctor(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::LocalAccessInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalAccessInstruction*, creationType>(index)));
    }
    // public override System.String ToDebugString(System.Int32 instructionIndex, System.Object cookie, System.Func`2<System.Int32,System.Int32> labelIndexer, System.Collections.Generic.IReadOnlyList`1<System.Object> objects)
    // Offset: 0x4BCE454
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::ToDebugString(System.Int32 instructionIndex, System.Object cookie, System.Func`2<System.Int32,System.Int32> labelIndexer, System.Collections.Generic.IReadOnlyList`1<System.Object> objects)
    ::StringW ToDebugString(int instructionIndex, ::Il2CppObject* cookie, ::System::Func_2<int, int>* labelIndexer, ::System::Collections::Generic::IReadOnlyList_1<::Il2CppObject*>* objects);
  }; // System.Linq.Expressions.Interpreter.LocalAccessInstruction
  #pragma pack(pop)
  static check_size<sizeof(LocalAccessInstruction), 16 + sizeof(int)> __System_Linq_Expressions_Interpreter_LocalAccessInstructionSizeCheck;
  static_assert(sizeof(LocalAccessInstruction) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LocalAccessInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LocalAccessInstruction::ToDebugString
// Il2CppName: ToDebugString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::LocalAccessInstruction::*)(int, ::Il2CppObject*, ::System::Func_2<int, int>*, ::System::Collections::Generic::IReadOnlyList_1<::Il2CppObject*>*)>(&System::Linq::Expressions::Interpreter::LocalAccessInstruction::ToDebugString)> {
  static const MethodInfo* get() {
    static auto* instructionIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cookie = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* labelIndexer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* objects = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LocalAccessInstruction*), "ToDebugString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instructionIndex, cookie, labelIndexer, objects});
  }
};
