// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Jobs.IJob
#include "Unity/Jobs/IJob.hpp"
// Including type: Unity.Collections.NativeHashMapDispose
#include "Unity/Collections/NativeHashMapDispose.hpp"
// Completed includes
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Forward declaring type: NativeHashMapDisposeJob
  struct NativeHashMapDisposeJob;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeHashMapDisposeJob, "Unity.Collections", "NativeHashMapDisposeJob");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Collections.NativeHashMapDisposeJob
  // [TokenAttribute] Offset: FFFFFFFF
  // [BurstCompileAttribute] Offset: FFFFFFFF
  struct NativeHashMapDisposeJob/*, public ::System::ValueType, public ::Unity::Jobs::IJob*/ {
    public:
    public:
    // Unity.Collections.NativeHashMapDispose Data
    // Size: 0xC
    // Offset: 0x0
    ::Unity::Collections::NativeHashMapDispose Data;
    // Field size check
    static_assert(sizeof(::Unity::Collections::NativeHashMapDispose) == 0xC);
    public:
    // Creating value type constructor for type: NativeHashMapDisposeJob
    constexpr NativeHashMapDisposeJob(::Unity::Collections::NativeHashMapDispose Data_ = {}) noexcept : Data{Data_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Unity::Jobs::IJob
    operator ::Unity::Jobs::IJob() noexcept {
      return *reinterpret_cast<::Unity::Jobs::IJob*>(this);
    }
    // Creating conversion operator: operator ::Unity::Collections::NativeHashMapDispose
    constexpr operator ::Unity::Collections::NativeHashMapDispose() const noexcept {
      return Data;
    }
    // Get instance field reference: Unity.Collections.NativeHashMapDispose Data
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeHashMapDispose& dyn_Data();
    // public System.Void Execute()
    // Offset: 0x5087F9C
    void Execute();
  }; // Unity.Collections.NativeHashMapDisposeJob
  #pragma pack(pop)
  static check_size<sizeof(NativeHashMapDisposeJob), 0 + sizeof(::Unity::Collections::NativeHashMapDispose)> __Unity_Collections_NativeHashMapDisposeJobSizeCheck;
  static_assert(sizeof(NativeHashMapDisposeJob) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Collections::NativeHashMapDisposeJob::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Collections::NativeHashMapDisposeJob::*)()>(&Unity::Collections::NativeHashMapDisposeJob::Execute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::NativeHashMapDisposeJob), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
