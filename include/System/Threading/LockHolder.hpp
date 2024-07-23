// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Lock
  class Lock;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: LockHolder
  struct LockHolder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::LockHolder, "System.Threading", "LockHolder");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Threading.LockHolder
  // [TokenAttribute] Offset: FFFFFFFF
  // [ReflectionBlockedAttribute] Offset: FFFFFFFF
  struct LockHolder/*, public ::System::ValueType, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Threading.Lock _lock
    // Size: 0x8
    // Offset: 0x0
    ::System::Threading::Lock* lock;
    // Field size check
    static_assert(sizeof(::System::Threading::Lock*) == 0x8);
    public:
    // Creating value type constructor for type: LockHolder
    constexpr LockHolder(::System::Threading::Lock* lock_ = {}) noexcept : lock{lock_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating conversion operator: operator ::System::Threading::Lock*
    constexpr operator ::System::Threading::Lock*() const noexcept {
      return lock;
    }
    // Get instance field reference: private System.Threading.Lock _lock
    [[deprecated("Use field access instead!")]] ::System::Threading::Lock*& dyn__lock();
    // static public System.Threading.LockHolder Hold(System.Threading.Lock l)
    // Offset: 0x46C4624
    static ::System::Threading::LockHolder Hold(::System::Threading::Lock* l);
    // public System.Void Dispose()
    // Offset: 0x46C4668
    void Dispose();
  }; // System.Threading.LockHolder
  #pragma pack(pop)
  static check_size<sizeof(LockHolder), 0 + sizeof(::System::Threading::Lock*)> __System_Threading_LockHolderSizeCheck;
  static_assert(sizeof(LockHolder) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::LockHolder::Hold
// Il2CppName: Hold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::LockHolder (*)(::System::Threading::Lock*)>(&System::Threading::LockHolder::Hold)> {
  static const MethodInfo* get() {
    static auto* l = &::il2cpp_utils::GetClassFromName("System.Threading", "Lock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::LockHolder), "Hold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l});
  }
};
// Writing MetadataGetter for method: System::Threading::LockHolder::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::LockHolder::*)()>(&System::Threading::LockHolder::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::LockHolder), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};