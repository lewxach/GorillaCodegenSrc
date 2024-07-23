// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Collections.AllocatorManager
#include "Unity/Collections/AllocatorManager.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Collections::AllocatorManager::TryFunction);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AllocatorManager::TryFunction*, "Unity.Collections", "AllocatorManager/TryFunction");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Collections.AllocatorManager/TryFunction
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: FFFFFFFF
  class AllocatorManager::TryFunction : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x50864E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AllocatorManager::TryFunction* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::AllocatorManager::TryFunction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AllocatorManager::TryFunction*, creationType>(object, method)));
    }
    // public System.Int32 Invoke(System.IntPtr allocatorState, ref Unity.Collections.AllocatorManager/Block block)
    // Offset: 0x5086580
    int Invoke(::System::IntPtr allocatorState, ByRef<::Unity::Collections::AllocatorManager::Block> block);
  }; // Unity.Collections.AllocatorManager/TryFunction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Collections::AllocatorManager::TryFunction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::Collections::AllocatorManager::TryFunction::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Unity::Collections::AllocatorManager::TryFunction::*)(::System::IntPtr, ByRef<::Unity::Collections::AllocatorManager::Block>)>(&Unity::Collections::AllocatorManager::TryFunction::Invoke)> {
  static const MethodInfo* get() {
    static auto* allocatorState = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* block = &::il2cpp_utils::GetClassFromName("Unity.Collections", "AllocatorManager/Block")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::AllocatorManager::TryFunction*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{allocatorState, block});
  }
};