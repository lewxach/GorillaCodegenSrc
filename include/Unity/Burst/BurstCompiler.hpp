// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Burst
namespace Unity::Burst {
  // Forward declaring type: BurstCompilerOptions
  class BurstCompilerOptions;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: RuntimeMethodHandle
  struct RuntimeMethodHandle;
  // Forward declaring type: RuntimeTypeHandle
  struct RuntimeTypeHandle;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: Unity.Burst
namespace Unity::Burst {
  // Forward declaring type: BurstCompiler
  class BurstCompiler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Burst::BurstCompiler);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstCompiler*, "Unity.Burst", "BurstCompiler");
// Type namespace: Unity.Burst
namespace Unity::Burst {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Burst.BurstCompiler
  // [TokenAttribute] Offset: FFFFFFFF
  class BurstCompiler : public ::Il2CppObject {
    public:
    // Nested type: ::Unity::Burst::BurstCompiler::StaticTypeReinitAttribute
    class StaticTypeReinitAttribute;
    // Nested type: ::Unity::Burst::BurstCompiler::BurstCompilerHelper
    class BurstCompilerHelper;
    // Nested type: ::Unity::Burst::BurstCompiler::FakeDelegate
    class FakeDelegate;
    // Nested type: ::Unity::Burst::BurstCompiler::$$c
    class $$c;
    // Get static field: static System.Boolean _IsEnabled
    static bool _get__IsEnabled();
    // Set static field: static System.Boolean _IsEnabled
    static void _set__IsEnabled(bool value);
    // Get static field: static public readonly Unity.Burst.BurstCompilerOptions Options
    static ::Unity::Burst::BurstCompilerOptions* _get_Options();
    // Set static field: static public readonly Unity.Burst.BurstCompilerOptions Options
    static void _set_Options(::Unity::Burst::BurstCompilerOptions* value);
    // Get static field: static System.Action OnCompileILPPMethod2
    static ::System::Action* _get_OnCompileILPPMethod2();
    // Set static field: static System.Action OnCompileILPPMethod2
    static void _set_OnCompileILPPMethod2(::System::Action* value);
    // Get static field: static private readonly System.Reflection.MethodInfo DummyMethodInfo
    static ::System::Reflection::MethodInfo* _get_DummyMethodInfo();
    // Set static field: static private readonly System.Reflection.MethodInfo DummyMethodInfo
    static void _set_DummyMethodInfo(::System::Reflection::MethodInfo* value);
    // static public System.Boolean get_IsEnabled()
    // Offset: 0x5080674
    static bool get_IsEnabled();
    // static public System.IntPtr CompileILPPMethod2(System.RuntimeMethodHandle burstMethodHandle)
    // Offset: 0x5080710
    static ::System::IntPtr CompileILPPMethod2(::System::RuntimeMethodHandle burstMethodHandle);
    // static public System.Void* GetILPPMethodFunctionPointer2(System.IntPtr ilppMethod, System.RuntimeMethodHandle managedMethodHandle, System.RuntimeTypeHandle delegateTypeHandle)
    // Offset: 0x5080D10
    static void* GetILPPMethodFunctionPointer2(::System::IntPtr ilppMethod, ::System::RuntimeMethodHandle managedMethodHandle, ::System::RuntimeTypeHandle delegateTypeHandle);
    // static private System.Void* Compile(System.Object delegateObj, System.Reflection.MethodInfo methodInfo, System.Boolean isFunctionPointer, System.Boolean isILPostProcessing)
    // Offset: 0x50808C8
    static void* Compile(::Il2CppObject* delegateObj, ::System::Reflection::MethodInfo* methodInfo, bool isFunctionPointer, bool isILPostProcessing);
    // static private System.Void DummyMethod()
    // Offset: 0x5080EB4
    static void DummyMethod();
    // static private System.Void .cctor()
    // Offset: 0x5080EB8
    static void _cctor();
  }; // Unity.Burst.BurstCompiler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Burst::BurstCompiler::get_IsEnabled
// Il2CppName: get_IsEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::Burst::BurstCompiler::get_IsEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Burst::BurstCompiler*), "get_IsEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Burst::BurstCompiler::CompileILPPMethod2
// Il2CppName: CompileILPPMethod2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::RuntimeMethodHandle)>(&Unity::Burst::BurstCompiler::CompileILPPMethod2)> {
  static const MethodInfo* get() {
    static auto* burstMethodHandle = &::il2cpp_utils::GetClassFromName("System", "RuntimeMethodHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Burst::BurstCompiler*), "CompileILPPMethod2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{burstMethodHandle});
  }
};
// Writing MetadataGetter for method: Unity::Burst::BurstCompiler::GetILPPMethodFunctionPointer2
// Il2CppName: GetILPPMethodFunctionPointer2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::System::IntPtr, ::System::RuntimeMethodHandle, ::System::RuntimeTypeHandle)>(&Unity::Burst::BurstCompiler::GetILPPMethodFunctionPointer2)> {
  static const MethodInfo* get() {
    static auto* ilppMethod = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* managedMethodHandle = &::il2cpp_utils::GetClassFromName("System", "RuntimeMethodHandle")->byval_arg;
    static auto* delegateTypeHandle = &::il2cpp_utils::GetClassFromName("System", "RuntimeTypeHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Burst::BurstCompiler*), "GetILPPMethodFunctionPointer2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ilppMethod, managedMethodHandle, delegateTypeHandle});
  }
};
// Writing MetadataGetter for method: Unity::Burst::BurstCompiler::Compile
// Il2CppName: Compile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::Il2CppObject*, ::System::Reflection::MethodInfo*, bool, bool)>(&Unity::Burst::BurstCompiler::Compile)> {
  static const MethodInfo* get() {
    static auto* delegateObj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* methodInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* isFunctionPointer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isILPostProcessing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Burst::BurstCompiler*), "Compile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delegateObj, methodInfo, isFunctionPointer, isILPostProcessing});
  }
};
// Writing MetadataGetter for method: Unity::Burst::BurstCompiler::DummyMethod
// Il2CppName: DummyMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::Burst::BurstCompiler::DummyMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Burst::BurstCompiler*), "DummyMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Burst::BurstCompiler::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::Burst::BurstCompiler::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Burst::BurstCompiler*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};