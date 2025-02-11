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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: LightLambda
  class LightLambda;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: CallInstruction
  class CallInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::CallInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::CallInstruction*, "System.Linq.Expressions.Interpreter", "CallInstruction");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.CallInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class CallInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
    public:
    // public System.Int32 get_ArgumentCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_ArgumentCount();
    // static public System.Linq.Expressions.Interpreter.CallInstruction Create(System.Reflection.MethodInfo info)
    // Offset: 0x4BA64B4
    static ::System::Linq::Expressions::Interpreter::CallInstruction* Create(::System::Reflection::MethodInfo* info);
    // static public System.Linq.Expressions.Interpreter.CallInstruction Create(System.Reflection.MethodInfo info, System.Reflection.ParameterInfo[] parameters)
    // Offset: 0x4BA6518
    static ::System::Linq::Expressions::Interpreter::CallInstruction* Create(::System::Reflection::MethodInfo* info, ::ArrayW<::System::Reflection::ParameterInfo*> parameters);
    // static private System.Linq.Expressions.Interpreter.CallInstruction GetArrayAccessor(System.Reflection.MethodInfo info, System.Int32 argumentCount)
    // Offset: 0x4BA66A8
    static ::System::Linq::Expressions::Interpreter::CallInstruction* GetArrayAccessor(::System::Reflection::MethodInfo* info, int argumentCount);
    // static public System.Void ArrayItemSetter1(System.Array array, System.Int32 index0, System.Object value)
    // Offset: 0x4BA6BB0
    static void ArrayItemSetter1(::System::Array* array, int index0, ::Il2CppObject* value);
    // static public System.Void ArrayItemSetter2(System.Array array, System.Int32 index0, System.Int32 index1, System.Object value)
    // Offset: 0x4BA6BD0
    static void ArrayItemSetter2(::System::Array* array, int index0, int index1, ::Il2CppObject* value);
    // static public System.Void ArrayItemSetter3(System.Array array, System.Int32 index0, System.Int32 index1, System.Int32 index2, System.Object value)
    // Offset: 0x4BA6BF4
    static void ArrayItemSetter3(::System::Array* array, int index0, int index1, int index2, ::Il2CppObject* value);
    // static protected System.Boolean TryGetLightLambdaTarget(System.Object instance, out System.Linq.Expressions.Interpreter.LightLambda lightLambda)
    // Offset: 0x4BA6C28
    static bool TryGetLightLambdaTarget(::Il2CppObject* instance, ByRef<::System::Linq::Expressions::Interpreter::LightLambda*> lightLambda);
    // protected System.Object InterpretLambdaInvoke(System.Linq.Expressions.Interpreter.LightLambda targetLambda, System.Object[] args)
    // Offset: 0x4BA6D80
    ::Il2CppObject* InterpretLambdaInvoke(::System::Linq::Expressions::Interpreter::LightLambda* targetLambda, ::ArrayW<::Il2CppObject*> args);
    // public override System.String get_InstructionName()
    // Offset: 0x4BA6474
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::get_InstructionName()
    ::StringW get_InstructionName();
    // public override System.Int32 get_ConsumedStack()
    // Offset: 0x4BA6C1C
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ConsumedStack()
    int get_ConsumedStack();
    // protected System.Void .ctor()
    // Offset: 0x4BA6DE0
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Void Instruction::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CallInstruction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::CallInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CallInstruction*, creationType>()));
    }
  }; // System.Linq.Expressions.Interpreter.CallInstruction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::CallInstruction::get_ArgumentCount
// Il2CppName: get_ArgumentCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::CallInstruction::*)()>(&System::Linq::Expressions::Interpreter::CallInstruction::get_ArgumentCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::CallInstruction*), "get_ArgumentCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::CallInstruction::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::CallInstruction* (*)(::System::Reflection::MethodInfo*)>(&System::Linq::Expressions::Interpreter::CallInstruction::Create)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::CallInstruction*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::CallInstruction::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::CallInstruction* (*)(::System::Reflection::MethodInfo*, ::ArrayW<::System::Reflection::ParameterInfo*>)>(&System::Linq::Expressions::Interpreter::CallInstruction::Create)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterInfo"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::CallInstruction*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, parameters});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::CallInstruction::GetArrayAccessor
// Il2CppName: GetArrayAccessor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::CallInstruction* (*)(::System::Reflection::MethodInfo*, int)>(&System::Linq::Expressions::Interpreter::CallInstruction::GetArrayAccessor)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* argumentCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::CallInstruction*), "GetArrayAccessor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, argumentCount});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::CallInstruction::ArrayItemSetter1
// Il2CppName: ArrayItemSetter1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Array*, int, ::Il2CppObject*)>(&System::Linq::Expressions::Interpreter::CallInstruction::ArrayItemSetter1)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index0 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::CallInstruction*), "ArrayItemSetter1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index0, value});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::CallInstruction::ArrayItemSetter2
// Il2CppName: ArrayItemSetter2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Array*, int, int, ::Il2CppObject*)>(&System::Linq::Expressions::Interpreter::CallInstruction::ArrayItemSetter2)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index0 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* index1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::CallInstruction*), "ArrayItemSetter2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index0, index1, value});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::CallInstruction::ArrayItemSetter3
// Il2CppName: ArrayItemSetter3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Array*, int, int, int, ::Il2CppObject*)>(&System::Linq::Expressions::Interpreter::CallInstruction::ArrayItemSetter3)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index0 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* index1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* index2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::CallInstruction*), "ArrayItemSetter3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index0, index1, index2, value});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::CallInstruction::TryGetLightLambdaTarget
// Il2CppName: TryGetLightLambdaTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*, ByRef<::System::Linq::Expressions::Interpreter::LightLambda*>)>(&System::Linq::Expressions::Interpreter::CallInstruction::TryGetLightLambdaTarget)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* lightLambda = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "LightLambda")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::CallInstruction*), "TryGetLightLambdaTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance, lightLambda});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::CallInstruction::InterpretLambdaInvoke
// Il2CppName: InterpretLambdaInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Linq::Expressions::Interpreter::CallInstruction::*)(::System::Linq::Expressions::Interpreter::LightLambda*, ::ArrayW<::Il2CppObject*>)>(&System::Linq::Expressions::Interpreter::CallInstruction::InterpretLambdaInvoke)> {
  static const MethodInfo* get() {
    static auto* targetLambda = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "LightLambda")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::CallInstruction*), "InterpretLambdaInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetLambda, args});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::CallInstruction::get_InstructionName
// Il2CppName: get_InstructionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::CallInstruction::*)()>(&System::Linq::Expressions::Interpreter::CallInstruction::get_InstructionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::CallInstruction*), "get_InstructionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::CallInstruction::get_ConsumedStack
// Il2CppName: get_ConsumedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::CallInstruction::*)()>(&System::Linq::Expressions::Interpreter::CallInstruction::get_ConsumedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::CallInstruction*), "get_ConsumedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::CallInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
