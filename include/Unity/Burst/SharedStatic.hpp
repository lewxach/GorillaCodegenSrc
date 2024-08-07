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
}
// Completed forward declares
// Type namespace: Unity.Burst
namespace Unity::Burst {
  // Forward declaring type: SharedStatic
  class SharedStatic;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Burst::SharedStatic);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::SharedStatic*, "Unity.Burst", "SharedStatic");
// Type namespace: Unity.Burst
namespace Unity::Burst {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Burst.SharedStatic
  // [TokenAttribute] Offset: FFFFFFFF
  class SharedStatic : public ::Il2CppObject {
    public:
    // Nested type: ::Unity::Burst::SharedStatic::PreserveAttribute
    class PreserveAttribute;
    // static public System.Void* GetOrCreateSharedStaticInternal(System.Int64 getHashCode64, System.Int64 getSubHashCode64, System.UInt32 sizeOf, System.UInt32 alignment)
    // Offset: 0x5085678
    static void* GetOrCreateSharedStaticInternal(int64_t getHashCode64, int64_t getSubHashCode64, uint sizeOf, uint alignment);
  }; // Unity.Burst.SharedStatic
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Burst::SharedStatic::GetOrCreateSharedStaticInternal
// Il2CppName: GetOrCreateSharedStaticInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(int64_t, int64_t, uint, uint)>(&Unity::Burst::SharedStatic::GetOrCreateSharedStaticInternal)> {
  static const MethodInfo* get() {
    static auto* getHashCode64 = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* getSubHashCode64 = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* sizeOf = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* alignment = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Burst::SharedStatic*), "GetOrCreateSharedStaticInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{getHashCode64, getSubHashCode64, sizeOf, alignment});
  }
};
