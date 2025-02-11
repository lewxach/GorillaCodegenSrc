// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.IndexedBranchInstruction
#include "System/Linq/Expressions/Interpreter/IndexedBranchInstruction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: InterpretedFrame
  class InterpretedFrame;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: EnterFinallyInstruction
  class EnterFinallyInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::EnterFinallyInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*, "System.Linq.Expressions.Interpreter", "EnterFinallyInstruction");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.EnterFinallyInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class EnterFinallyInstruction : public ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction {
    public:
    // Get static field: static private readonly System.Linq.Expressions.Interpreter.EnterFinallyInstruction[] s_cache
    static ::ArrayW<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*> _get_s_cache();
    // Set static field: static private readonly System.Linq.Expressions.Interpreter.EnterFinallyInstruction[] s_cache
    static void _set_s_cache(::ArrayW<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction*> value);
    // static System.Linq.Expressions.Interpreter.EnterFinallyInstruction Create(System.Int32 labelIndex)
    // Offset: 0x4BA91C8
    static ::System::Linq::Expressions::Interpreter::EnterFinallyInstruction* Create(int labelIndex);
    // static private System.Void .cctor()
    // Offset: 0x4BA9330
    static void _cctor();
    // private System.Void .ctor(System.Int32 labelIndex)
    // Offset: 0x4BA9150
    // Implemented from: System.Linq.Expressions.Interpreter.IndexedBranchInstruction
    // Base method: System.Void IndexedBranchInstruction::.ctor(System.Int32 labelIndex)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnterFinallyInstruction* New_ctor(int labelIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::EnterFinallyInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnterFinallyInstruction*, creationType>(labelIndex)));
    }
    // public override System.String get_InstructionName()
    // Offset: 0x4BA9178
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::get_InstructionName()
    ::StringW get_InstructionName();
    // public override System.Int32 get_ProducedStack()
    // Offset: 0x4BA91B8
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ProducedStack()
    int get_ProducedStack();
    // public override System.Int32 get_ConsumedContinuations()
    // Offset: 0x4BA91C0
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ConsumedContinuations()
    int get_ConsumedContinuations();
    // public override System.Int32 Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    // Offset: 0x4BA92C4
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    int Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);
  }; // System.Linq.Expressions.Interpreter.EnterFinallyInstruction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::EnterFinallyInstruction::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::EnterFinallyInstruction* (*)(int)>(&System::Linq::Expressions::Interpreter::EnterFinallyInstruction::Create)> {
  static const MethodInfo* get() {
    static auto* labelIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::EnterFinallyInstruction*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{labelIndex});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::EnterFinallyInstruction::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Linq::Expressions::Interpreter::EnterFinallyInstruction::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::EnterFinallyInstruction*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::EnterFinallyInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::EnterFinallyInstruction::get_InstructionName
// Il2CppName: get_InstructionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::EnterFinallyInstruction::*)()>(&System::Linq::Expressions::Interpreter::EnterFinallyInstruction::get_InstructionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::EnterFinallyInstruction*), "get_InstructionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::EnterFinallyInstruction::get_ProducedStack
// Il2CppName: get_ProducedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::EnterFinallyInstruction::*)()>(&System::Linq::Expressions::Interpreter::EnterFinallyInstruction::get_ProducedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::EnterFinallyInstruction*), "get_ProducedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::EnterFinallyInstruction::get_ConsumedContinuations
// Il2CppName: get_ConsumedContinuations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::EnterFinallyInstruction::*)()>(&System::Linq::Expressions::Interpreter::EnterFinallyInstruction::get_ConsumedContinuations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::EnterFinallyInstruction*), "get_ConsumedContinuations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::EnterFinallyInstruction::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::EnterFinallyInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&System::Linq::Expressions::Interpreter::EnterFinallyInstruction::Run)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::EnterFinallyInstruction*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
