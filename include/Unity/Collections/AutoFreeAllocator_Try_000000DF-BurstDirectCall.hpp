// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Collections.AutoFreeAllocator
#include "Unity/Collections/AutoFreeAllocator.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Unity.Collections.AllocatorManager
#include "Unity/Collections/AllocatorManager.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Collections::AutoFreeAllocator::Try_000000DF$BurstDirectCall);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AutoFreeAllocator::Try_000000DF$BurstDirectCall*, "Unity.Collections", "AutoFreeAllocator/Try_000000DF$BurstDirectCall");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Collections.AutoFreeAllocator/Unity.Collections.Try_000000DF$BurstDirectCall
  // [TokenAttribute] Offset: FFFFFFFF
  class AutoFreeAllocator::Try_000000DF$BurstDirectCall : public ::Il2CppObject {
    public:
    // Get static field: static private System.IntPtr Pointer
    static ::System::IntPtr _get_Pointer();
    // Set static field: static private System.IntPtr Pointer
    static void _set_Pointer(::System::IntPtr value);
    // Get static field: static private System.IntPtr DeferredCompilation
    static ::System::IntPtr _get_DeferredCompilation();
    // Set static field: static private System.IntPtr DeferredCompilation
    static void _set_DeferredCompilation(::System::IntPtr value);
    // static private System.Void GetFunctionPointerDiscard(ref System.IntPtr )
    // Offset: 0x5087A00
    static void GetFunctionPointerDiscard(ByRef<::System::IntPtr> param_0);
    // static private System.IntPtr GetFunctionPointer()
    // Offset: 0x5087B1C
    static ::System::IntPtr GetFunctionPointer();
    // static public System.Void Constructor()
    // Offset: 0x5087B78
    static void Constructor();
    // static public System.Void Initialize()
    // Offset: 0x5087C20
    static void Initialize();
    // static private System.Void .cctor()
    // Offset: 0x5087C24
    static void _cctor();
    // static public System.Int32 Invoke(System.IntPtr state, ref Unity.Collections.AllocatorManager/Block block)
    // Offset: 0x5087868
    static int Invoke(::System::IntPtr state, ByRef<::Unity::Collections::AllocatorManager::Block> block);
  }; // Unity.Collections.AutoFreeAllocator/Unity.Collections.Try_000000DF$BurstDirectCall
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Collections::AutoFreeAllocator::Try_000000DF$BurstDirectCall::GetFunctionPointerDiscard
// Il2CppName: GetFunctionPointerDiscard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::System::IntPtr>)>(&Unity::Collections::AutoFreeAllocator::Try_000000DF$BurstDirectCall::GetFunctionPointerDiscard)> {
  static const MethodInfo* get() {
    static auto* param_0 = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::AutoFreeAllocator::Try_000000DF$BurstDirectCall*), "GetFunctionPointerDiscard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{param_0});
  }
};
// Writing MetadataGetter for method: Unity::Collections::AutoFreeAllocator::Try_000000DF$BurstDirectCall::GetFunctionPointer
// Il2CppName: GetFunctionPointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&Unity::Collections::AutoFreeAllocator::Try_000000DF$BurstDirectCall::GetFunctionPointer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::AutoFreeAllocator::Try_000000DF$BurstDirectCall*), "GetFunctionPointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Collections::AutoFreeAllocator::Try_000000DF$BurstDirectCall::Constructor
// Il2CppName: Constructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::Collections::AutoFreeAllocator::Try_000000DF$BurstDirectCall::Constructor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::AutoFreeAllocator::Try_000000DF$BurstDirectCall*), "Constructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Collections::AutoFreeAllocator::Try_000000DF$BurstDirectCall::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::Collections::AutoFreeAllocator::Try_000000DF$BurstDirectCall::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::AutoFreeAllocator::Try_000000DF$BurstDirectCall*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Collections::AutoFreeAllocator::Try_000000DF$BurstDirectCall::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::Collections::AutoFreeAllocator::Try_000000DF$BurstDirectCall::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::AutoFreeAllocator::Try_000000DF$BurstDirectCall*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Collections::AutoFreeAllocator::Try_000000DF$BurstDirectCall::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr, ByRef<::Unity::Collections::AllocatorManager::Block>)>(&Unity::Collections::AutoFreeAllocator::Try_000000DF$BurstDirectCall::Invoke)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* block = &::il2cpp_utils::GetClassFromName("Unity.Collections", "AllocatorManager/Block")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::AutoFreeAllocator::Try_000000DF$BurstDirectCall*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, block});
  }
};