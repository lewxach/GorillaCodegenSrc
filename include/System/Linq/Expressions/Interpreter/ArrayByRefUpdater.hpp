// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.ByRefUpdater
#include "System/Linq/Expressions/Interpreter/ByRefUpdater.hpp"
// Including type: System.Linq.Expressions.Interpreter.LocalDefinition
#include "System/Linq/Expressions/Interpreter/LocalDefinition.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: InterpretedFrame
  class InterpretedFrame;
  // Forward declaring type: InstructionList
  class InstructionList;
  // Forward declaring type: LocalVariables
  class LocalVariables;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: ArrayByRefUpdater
  class ArrayByRefUpdater;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::ArrayByRefUpdater);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::ArrayByRefUpdater*, "System.Linq.Expressions.Interpreter", "ArrayByRefUpdater");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.ArrayByRefUpdater
  // [TokenAttribute] Offset: FFFFFFFF
  class ArrayByRefUpdater : public ::System::Linq::Expressions::Interpreter::ByRefUpdater {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    public:
    // private readonly System.Linq.Expressions.Interpreter.LocalDefinition _array
    // Size: 0x10
    // Offset: 0x18
    ::System::Linq::Expressions::Interpreter::LocalDefinition array;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Interpreter::LocalDefinition) == 0x10);
    // private readonly System.Linq.Expressions.Interpreter.LocalDefinition _index
    // Size: 0x10
    // Offset: 0x28
    ::System::Linq::Expressions::Interpreter::LocalDefinition index;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Interpreter::LocalDefinition) == 0x10);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: private readonly System.Linq.Expressions.Interpreter.LocalDefinition _array
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Interpreter::LocalDefinition& dyn__array();
    // Get instance field reference: private readonly System.Linq.Expressions.Interpreter.LocalDefinition _index
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Interpreter::LocalDefinition& dyn__index();
    // public System.Void .ctor(System.Linq.Expressions.Interpreter.LocalDefinition array, System.Linq.Expressions.Interpreter.LocalDefinition index, System.Int32 argumentIndex)
    // Offset: 0x4BCAC98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayByRefUpdater* New_ctor(::System::Linq::Expressions::Interpreter::LocalDefinition array, ::System::Linq::Expressions::Interpreter::LocalDefinition index, int argumentIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::ArrayByRefUpdater::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayByRefUpdater*, creationType>(array, index, argumentIndex)));
    }
    // public override System.Void Update(System.Linq.Expressions.Interpreter.InterpretedFrame frame, System.Object value)
    // Offset: 0x4BCAD04
    // Implemented from: System.Linq.Expressions.Interpreter.ByRefUpdater
    // Base method: System.Void ByRefUpdater::Update(System.Linq.Expressions.Interpreter.InterpretedFrame frame, System.Object value)
    void Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::Il2CppObject* value);
    // public override System.Void UndefineTemps(System.Linq.Expressions.Interpreter.InstructionList instructions, System.Linq.Expressions.Interpreter.LocalVariables locals)
    // Offset: 0x4BCAE10
    // Implemented from: System.Linq.Expressions.Interpreter.ByRefUpdater
    // Base method: System.Void ByRefUpdater::UndefineTemps(System.Linq.Expressions.Interpreter.InstructionList instructions, System.Linq.Expressions.Interpreter.LocalVariables locals)
    void UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* instructions, ::System::Linq::Expressions::Interpreter::LocalVariables* locals);
  }; // System.Linq.Expressions.Interpreter.ArrayByRefUpdater
  #pragma pack(pop)
  static check_size<sizeof(ArrayByRefUpdater), 40 + sizeof(::System::Linq::Expressions::Interpreter::LocalDefinition)> __System_Linq_Expressions_Interpreter_ArrayByRefUpdaterSizeCheck;
  static_assert(sizeof(ArrayByRefUpdater) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ArrayByRefUpdater::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ArrayByRefUpdater::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::Interpreter::ArrayByRefUpdater::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::Il2CppObject*)>(&System::Linq::Expressions::Interpreter::ArrayByRefUpdater::Update)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::ArrayByRefUpdater*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame, value});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ArrayByRefUpdater::UndefineTemps
// Il2CppName: UndefineTemps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::Interpreter::ArrayByRefUpdater::*)(::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Linq::Expressions::Interpreter::LocalVariables*)>(&System::Linq::Expressions::Interpreter::ArrayByRefUpdater::UndefineTemps)> {
  static const MethodInfo* get() {
    static auto* instructions = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InstructionList")->byval_arg;
    static auto* locals = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "LocalVariables")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::ArrayByRefUpdater*), "UndefineTemps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instructions, locals});
  }
};
