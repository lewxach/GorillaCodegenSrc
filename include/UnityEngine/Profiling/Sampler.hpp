// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Profiling
namespace UnityEngine::Profiling {
  // Forward declaring type: Recorder
  class Recorder;
}
// Completed forward declares
// Type namespace: UnityEngine.Profiling
namespace UnityEngine::Profiling {
  // Forward declaring type: Sampler
  class Sampler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Profiling::Sampler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::Sampler*, "UnityEngine.Profiling", "Sampler");
// Type namespace: UnityEngine.Profiling
namespace UnityEngine::Profiling {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Profiling.Sampler
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class Sampler : public ::Il2CppObject {
    public:
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get static field: static UnityEngine.Profiling.Sampler s_InvalidSampler
    static ::UnityEngine::Profiling::Sampler* _get_s_InvalidSampler();
    // Set static field: static UnityEngine.Profiling.Sampler s_InvalidSampler
    static void _set_s_InvalidSampler(::UnityEngine::Profiling::Sampler* value);
    // Get instance field reference: System.IntPtr m_Ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Ptr();
    // System.Void .ctor()
    // Offset: 0x54D7900
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sampler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Profiling::Sampler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sampler*, creationType>()));
    }
    // public UnityEngine.Profiling.Recorder GetRecorder()
    // Offset: 0x54D7908
    ::UnityEngine::Profiling::Recorder* GetRecorder();
    // static private System.Void .cctor()
    // Offset: 0x54D798C
    static void _cctor();
  }; // UnityEngine.Profiling.Sampler
  #pragma pack(pop)
  static check_size<sizeof(Sampler), 16 + sizeof(::System::IntPtr)> __UnityEngine_Profiling_SamplerSizeCheck;
  static_assert(sizeof(Sampler) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Profiling::Sampler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Profiling::Sampler::GetRecorder
// Il2CppName: GetRecorder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Profiling::Recorder* (UnityEngine::Profiling::Sampler::*)()>(&UnityEngine::Profiling::Sampler::GetRecorder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Profiling::Sampler*), "GetRecorder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Profiling::Sampler::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Profiling::Sampler::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Profiling::Sampler*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};