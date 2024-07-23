// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Collections.Memory
#include "Unity/Collections/Memory.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Collections.AllocatorManager
#include "Unity/Collections/AllocatorManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::Memory::Unmanaged, "Unity.Collections", "Memory/Unmanaged");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Collections.Memory/Unmanaged
  // [TokenAttribute] Offset: FFFFFFFF
  // [GenerateTestsForBurstCompatibilityAttribute] Offset: FFFFFFFF
  struct Memory::Unmanaged/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::Unity::Collections::Memory::Unmanaged::Array
    struct Array;
    // Creating value type constructor for type: Unmanaged
    constexpr Unmanaged() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // static System.Void* Allocate(System.Int64 size, System.Int32 align, Unity.Collections.AllocatorManager/AllocatorHandle allocator)
    // Offset: 0x5086308
    static void* Allocate(int64_t size, int align, ::Unity::Collections::AllocatorManager::AllocatorHandle allocator);
    // static System.Void Free(System.Void* pointer, Unity.Collections.AllocatorManager/AllocatorHandle allocator)
    // Offset: 0x5086324
    static void Free(void* pointer, ::Unity::Collections::AllocatorManager::AllocatorHandle allocator);
    // static System.Void Free(T* pointer, Unity.Collections.AllocatorManager/AllocatorHandle allocator)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void Free(T* pointer, ::Unity::Collections::AllocatorManager::AllocatorHandle allocator) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::Memory::Unmanaged::Free");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Collections", "Memory/Unmanaged", "Free", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(pointer), ::il2cpp_utils::ExtractType(allocator)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, pointer, allocator);
    }
  }; // Unity.Collections.Memory/Unmanaged
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Collections::Memory::Unmanaged::Allocate
// Il2CppName: Allocate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(int64_t, int, ::Unity::Collections::AllocatorManager::AllocatorHandle)>(&Unity::Collections::Memory::Unmanaged::Allocate)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* align = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* allocator = &::il2cpp_utils::GetClassFromName("Unity.Collections", "AllocatorManager/AllocatorHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::Memory::Unmanaged), "Allocate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size, align, allocator});
  }
};
// Writing MetadataGetter for method: Unity::Collections::Memory::Unmanaged::Free
// Il2CppName: Free
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, ::Unity::Collections::AllocatorManager::AllocatorHandle)>(&Unity::Collections::Memory::Unmanaged::Free)> {
  static const MethodInfo* get() {
    static auto* pointer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* allocator = &::il2cpp_utils::GetClassFromName("Unity.Collections", "AllocatorManager/AllocatorHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::Memory::Unmanaged), "Free", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointer, allocator});
  }
};
// Writing MetadataGetter for method: Unity::Collections::Memory::Unmanaged::Free
// Il2CppName: Free
// Cannot write MetadataGetter for generic methods!