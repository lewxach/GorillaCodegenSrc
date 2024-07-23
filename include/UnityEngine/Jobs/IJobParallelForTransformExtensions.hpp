// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Unity.Jobs.JobHandle
#include "Unity/Jobs/JobHandle.hpp"
// Including type: UnityEngine.Jobs.TransformAccessArray
#include "UnityEngine/Jobs/TransformAccessArray.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Jobs
namespace UnityEngine::Jobs {
  // Forward declaring type: IJobParallelForTransform
  class IJobParallelForTransform;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Jobs
namespace UnityEngine::Jobs {
  // Forward declaring type: IJobParallelForTransformExtensions
  class IJobParallelForTransformExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Jobs::IJobParallelForTransformExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Jobs::IJobParallelForTransformExtensions*, "UnityEngine.Jobs", "IJobParallelForTransformExtensions");
// Type namespace: UnityEngine.Jobs
namespace UnityEngine::Jobs {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Jobs.IJobParallelForTransformExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class IJobParallelForTransformExtensions : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Jobs::IJobParallelForTransformExtensions::TransformParallelForLoopStruct_1<T>
    template<typename T>
    struct TransformParallelForLoopStruct_1;
    // static public System.Void EarlyJobInit()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void EarlyJobInit() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::UnityEngine::Jobs::IJobParallelForTransform> && std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Jobs::IJobParallelForTransformExtensions::EarlyJobInit");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.Jobs", "IJobParallelForTransformExtensions", "EarlyJobInit", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static private System.IntPtr GetReflectionData()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::IntPtr GetReflectionData() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::UnityEngine::Jobs::IJobParallelForTransform> && std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Jobs::IJobParallelForTransformExtensions::GetReflectionData");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.Jobs", "IJobParallelForTransformExtensions", "GetReflectionData", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::IntPtr, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static public Unity.Jobs.JobHandle Schedule(T jobData, UnityEngine.Jobs.TransformAccessArray transforms, Unity.Jobs.JobHandle dependsOn)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::Unity::Jobs::JobHandle Schedule(T jobData, ::UnityEngine::Jobs::TransformAccessArray transforms, ::Unity::Jobs::JobHandle dependsOn) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::UnityEngine::Jobs::IJobParallelForTransform> && std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Jobs::IJobParallelForTransformExtensions::Schedule");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.Jobs", "IJobParallelForTransformExtensions", "Schedule", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(jobData), ::il2cpp_utils::ExtractType(transforms), ::il2cpp_utils::ExtractType(dependsOn)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, jobData, transforms, dependsOn);
    }
  }; // UnityEngine.Jobs.IJobParallelForTransformExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Jobs::IJobParallelForTransformExtensions::EarlyJobInit
// Il2CppName: EarlyJobInit
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Jobs::IJobParallelForTransformExtensions::GetReflectionData
// Il2CppName: GetReflectionData
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Jobs::IJobParallelForTransformExtensions::Schedule
// Il2CppName: Schedule
// Cannot write MetadataGetter for generic methods!