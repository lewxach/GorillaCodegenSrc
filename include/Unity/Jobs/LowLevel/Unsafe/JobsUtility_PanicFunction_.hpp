// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Jobs.LowLevel.Unsafe.JobsUtility
#include "Unity/Jobs/LowLevel/Unsafe/JobsUtility.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Jobs::LowLevel::Unsafe::JobsUtility::PanicFunction_);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::LowLevel::Unsafe::JobsUtility::PanicFunction_*, "Unity.Jobs.LowLevel.Unsafe", "JobsUtility/PanicFunction_");
// Type namespace: Unity.Jobs.LowLevel.Unsafe
namespace Unity::Jobs::LowLevel::Unsafe {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Jobs.LowLevel.Unsafe.JobsUtility/PanicFunction_
  // [TokenAttribute] Offset: FFFFFFFF
  class JobsUtility::PanicFunction_ : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x5477F2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JobsUtility::PanicFunction_* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Jobs::LowLevel::Unsafe::JobsUtility::PanicFunction_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JobsUtility::PanicFunction_*, creationType>(object, method)));
    }
    // public System.Void Invoke()
    // Offset: 0x5477FC8
    void Invoke();
  }; // Unity.Jobs.LowLevel.Unsafe.JobsUtility/PanicFunction_
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Jobs::LowLevel::Unsafe::JobsUtility::PanicFunction_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::Jobs::LowLevel::Unsafe::JobsUtility::PanicFunction_::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Jobs::LowLevel::Unsafe::JobsUtility::PanicFunction_::*)()>(&Unity::Jobs::LowLevel::Unsafe::JobsUtility::PanicFunction_::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Jobs::LowLevel::Unsafe::JobsUtility::PanicFunction_*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
